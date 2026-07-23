/*
 * XREFs of CmEtwRunDown @ 0x1407EC8A0
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140727414 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     EtwTraceSiloDcEvent @ 0x140310770 (EtwTraceSiloDcEvent.c)
 *     CmpGetNextActiveHive @ 0x1405B2474 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpLogHiveRundownEvent @ 0x1407ECEC4 (CmpLogHiveRundownEvent.c)
 */

__int64 __fastcall CmEtwRunDown(__int64 a1, unsigned int a2, char a3, char a4, char a5)
{
  char v6; // di
  char v7; // si
  struct _EX_RUNDOWN_REF *v9; // rcx
  unsigned int v10; // eax
  __int64 *v11; // rsi
  __int64 v12; // r12
  __int64 i; // rdi
  void *v14; // r13
  __int64 *v15; // rbx
  NTSTATUS v16; // ebx
  __int16 v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 *v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *NextActiveHive; // [rsp+48h] [rbp-B8h]
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING ValueName; // [rsp+70h] [rbp-90h] BYREF
  PVOID v28[2]; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v30[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+E0h] [rbp-20h] BYREF
  int v32; // [rsp+ECh] [rbp-14h]
  _BYTE v33[48]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v34; // [rsp+120h] [rbp+20h] BYREF
  __int64 v35; // [rsp+128h] [rbp+28h]
  __int64 v36; // [rsp+130h] [rbp+30h]
  int v37; // [rsp+138h] [rbp+38h]
  int v38; // [rsp+13Ch] [rbp+3Ch]
  __int16 *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]

  v20 = 0;
  v6 = a4;
  v7 = a3;
  CmpInitializeThreadInfo(v28);
  if ( !a5 )
  {
    CmpAttachToRegistryProcess((__int64)v33);
    v30[1] = 0LL;
    v34 = v30;
    v9 = 0LL;
    v30[0] = 0LL;
    v39 = &v20;
    v35 = 24LL;
    v40 = 2LL;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v9);
      v15 = NextActiveHive;
      if ( !NextActiveHive )
        break;
      CmpLockRegistryExclusive();
      if ( v6 )
        CmpLogHiveRundownEvent(v15, a1, a2);
      if ( v7 )
      {
        v10 = *((_DWORD *)v15 + 412);
        if ( v10 )
        {
          v11 = (__int64 *)(v15[205] + 16);
          v12 = v10;
          do
          {
            for ( i = *v11; i; i = *(_QWORD *)(i + 8) )
            {
              v22 = 0LL;
              CmpConstructNameWithStatus(i - 8, &v22);
              v14 = v22;
              if ( v22 )
              {
                v36 = *((_QWORD *)v22 + 1);
                v37 = *v22;
                v30[2] = i - 8;
                v38 = 0;
                EtwTraceSiloDcEvent((__int64)&v34, 3u, a1, a2, 0x919u, 0x401802u);
                CmpFreeTransientPoolWithTag(v14, 0x624E4D43u);
              }
            }
            v11 += 3;
            --v12;
          }
          while ( v12 );
          v15 = NextActiveHive;
          v6 = a4;
        }
        v7 = a3;
      }
      CmpUnlockRegistry();
      v9 = (struct _EX_RUNDOWN_REF *)v15;
    }
    KiUnstackDetachProcess((__int64)v33, 0LL);
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Select");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"Current");
      v16 = ZwQueryValueKey(
              KeyHandle,
              &ValueName,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x10u,
              &ResultLength);
      ZwClose(KeyHandle);
      if ( v16 >= 0 )
      {
        v21 = v32;
        v34 = (__int64 *)&v21;
        v35 = 4LL;
        EtwTraceSiloDcEvent((__int64)&v34, 1u, a1, a2, 0x923u, 0x401802u);
      }
    }
  }
  v34 = &CmPerfCounters;
  v35 = 88LL;
  EtwTraceSiloDcEvent((__int64)&v34, 1u, a1, a2, 0x922u, 0x401802u);
  CmCleanupThreadInfo(v28);
  return 0LL;
}
