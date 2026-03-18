/*
 * XREFs of CmEtwRunDown @ 0x1408261C8
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140707BBC (EtwpKernelTraceRundown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x140092A90 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwTraceSiloDcEvent @ 0x14032E420 (EtwTraceSiloDcEvent.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpConstructNameWithStatus @ 0x140655750 (CmpConstructNameWithStatus.c)
 *     CmpGetNextActiveHive @ 0x140661E60 (CmpGetNextActiveHive.c)
 *     CmpLogHiveRundownEvent @ 0x14082683C (CmpLogHiveRundownEvent.c)
 */

__int64 __fastcall CmEtwRunDown(__int64 a1, unsigned int a2, char a3, char a4, char a5)
{
  char v5; // si
  char v8; // di
  struct _EX_RUNDOWN_REF *v9; // rcx
  unsigned int v10; // eax
  __int64 *v11; // rsi
  __int64 v12; // r15
  __int64 i; // rdi
  void *v14; // r14
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
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v29[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 KeyValueInformation; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v31; // [rsp+D8h] [rbp-28h]
  _BYTE v32[48]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v33; // [rsp+110h] [rbp+10h] BYREF
  __int64 v34; // [rsp+118h] [rbp+18h]
  __int64 v35; // [rsp+120h] [rbp+20h]
  int v36; // [rsp+128h] [rbp+28h]
  int v37; // [rsp+12Ch] [rbp+2Ch]
  __int16 *v38; // [rsp+130h] [rbp+30h]
  __int64 v39; // [rsp+138h] [rbp+38h]

  v5 = a3;
  v8 = a4;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  KeyValueInformation = 0LL;
  v31 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v29, 0, sizeof(v29));
  v20 = 0;
  memset(v32, 0, sizeof(v32));
  if ( !a5 )
  {
    CmpAttachToRegistryProcess((__int64)v32);
    v29[1] = 0LL;
    v33 = v29;
    v9 = 0LL;
    v29[0] = 0LL;
    v38 = &v20;
    v34 = 24LL;
    v39 = 2LL;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v9);
      v15 = NextActiveHive;
      if ( !NextActiveHive )
        break;
      CmpLockRegistryExclusive();
      if ( v8 )
        CmpLogHiveRundownEvent(v15, a1, a2);
      if ( v5 )
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
              CmpConstructNameWithStatus(i - 16, &v22);
              v14 = v22;
              if ( v22 )
              {
                v35 = *((_QWORD *)v22 + 1);
                v36 = *v22;
                v29[2] = i - 16;
                v37 = 0;
                EtwTraceSiloDcEvent((__int64)&v33, 3u, a1, a2, 0x919u, 0x401802u);
                CmpFreeTransientPoolWithTag(v14, 0x624E4D43u);
              }
            }
            v11 += 3;
            --v12;
          }
          while ( v12 );
          v15 = NextActiveHive;
          v8 = a4;
        }
        v5 = a3;
      }
      CmpUnlockRegistry();
      v9 = (struct _EX_RUNDOWN_REF *)v15;
    }
    KiUnstackDetachProcess((struct _KTHREAD *)v32, 0);
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
              &KeyValueInformation,
              0x10u,
              &ResultLength);
      ZwClose(KeyHandle);
      if ( v16 >= 0 )
      {
        v21 = HIDWORD(v31);
        v33 = (__int64 *)&v21;
        LODWORD(v34) = 4;
        EtwTraceSiloDcEvent((__int64)&v33, 1u, a1, a2, 0x923u, 0x401802u);
      }
    }
  }
  v33 = &CmPerfCounters;
  v34 = 88LL;
  EtwTraceSiloDcEvent((__int64)&v33, 1u, a1, a2, 0x922u, 0x401802u);
  return 0LL;
}
