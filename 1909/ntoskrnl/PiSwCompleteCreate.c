/*
 * XREFs of PiSwCompleteCreate @ 0x1407222B8
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x140721150 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140001BA8 (RtlStringCbLengthW.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     RtlStringCbCopyW @ 0x1400EDC5C (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x1405BB33C (PnpFreeDevPropertyArray.c)
 *     PnpAllocatePWSTR @ 0x1405BCB54 (PnpAllocatePWSTR.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140629894 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1406F7F50 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiSwUnlock @ 0x1407214E4 (PiSwUnlock.c)
 *     PiSwLock @ 0x140721510 (PiSwLock.c)
 *     PnpCopyDevPropertyArray @ 0x140721540 (PnpCopyDevPropertyArray.c)
 *     PiSwFreeInterfaceList @ 0x140722538 (PiSwFreeInterfaceList.c)
 *     IoRegisterDeviceInterface @ 0x1407373D0 (IoRegisterDeviceInterface.c)
 *     PiSwPropertySet @ 0x14074421C (PiSwPropertySet.c)
 *     PiSwInterfaceCreate @ 0x14077A810 (PiSwInterfaceCreate.c)
 */

void __fastcall PiSwCompleteCreate(struct _DEVICE_OBJECT *Object)
{
  size_t v1; // rbx
  __int64 v3; // r15
  char *v4; // r14
  struct _DEVICE_OBJECT *v5; // r12
  _DWORD *DeviceExtension; // rax
  __int64 v7; // rsi
  void *v8; // rcx
  NTSTRSAFE_PCWSTR *v9; // rdi
  int PWSTR; // edi
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 *v14; // r14
  __int64 *i; // rsi
  __int64 v16; // rcx
  __int64 **j; // rsi
  __int64 **v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rcx
  int DeviceInterfaceReferenceString; // eax
  char v22; // di
  __int64 v23; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v24; // [rsp+40h] [rbp-C8h] BYREF
  __int64 **v25; // [rsp+48h] [rbp-C0h]
  char *v26; // [rsp+50h] [rbp-B8h] BYREF
  NTSTRSAFE_PCWSTR *v27; // [rsp+58h] [rbp-B0h]
  size_t pcbLength; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-A0h] BYREF
  PCWSTR SourceString; // [rsp+70h] [rbp-98h] BYREF
  __int64 ***v31; // [rsp+78h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-78h] BYREF
  GUID InterfaceClassGuid; // [rsp+A0h] [rbp-68h] BYREF
  WCHAR v35[264]; // [rsp+B8h] [rbp-50h] BYREF

  v1 = 0LL;
  *(_QWORD *)&InterfaceClassGuid.Data1 = 0LL;
  *(_QWORD *)InterfaceClassGuid.Data4 = 0LL;
  v3 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v4 = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v25 = &v24;
  v24 = (__int64 *)&v24;
  v27 = 0LL;
  v26 = 0LL;
  LODWORD(v23) = 0;
  pcbLength = 0LL;
  PiSwLock();
  DeviceExtension = Object->DeviceExtension;
  v7 = *(_QWORD *)DeviceExtension;
  if ( *(_QWORD *)DeviceExtension )
  {
    DeviceExtension[2] &= 0xFFFFFFF9;
    v8 = *(void **)(v7 + 80);
    v9 = (NTSTRSAFE_PCWSTR *)((char *)Object->DeviceObjectExtension->DeviceNode + 40);
    v27 = v9;
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0x57706E50u);
      *(_QWORD *)(v7 + 72) = 0LL;
      *(_QWORD *)(v7 + 80) = 0LL;
    }
    PWSTR = PnpAllocatePWSTR(
              v9[1],
              ((unsigned __int64)*(unsigned __int16 *)v9 >> 1) + 1,
              0x57706E50u,
              (PVOID *)&SourceString);
    if ( PWSTR >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v7 + 72), SourceString);
      *(_DWORD *)(v7 + 4) |= 4u;
      if ( !*(_QWORD *)(v7 + 88) )
      {
        v12 = *(_QWORD *)(v7 + 144);
        if ( !v12
          || !_InterlockedExchange64((volatile __int64 *)(v12 + 104), 0LL)
          || (v3 = *(_QWORD *)(v7 + 144), *(_QWORD *)(v7 + 144) = 0LL, !v3)
          || (v13 = *(_QWORD *)(v3 + 184),
              PWSTR = RtlStringCbCopyW(
                        *(NTSTRSAFE_PWSTR *)(v3 + 24),
                        *(unsigned int *)(v13 + 8),
                        *(NTSTRSAFE_PCWSTR *)(v7 + 80)),
              PWSTR >= 0)
          && (PWSTR = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(v3 + 24), *(unsigned int *)(v13 + 8), &pcbLength),
              PWSTR >= 0) )
        {
          PWSTR = PnpCopyDevPropertyArray(*(_DWORD *)(v7 + 176), *(_QWORD *)(v7 + 168), v11, &v23, (void **)&v26);
          if ( PWSTR >= 0 )
          {
            v14 = (__int64 *)(v7 + 184);
            for ( i = *(__int64 **)(v7 + 184); i != v14; i = (__int64 *)*i )
            {
              PWSTR = PiSwInterfaceCreate((NTSTRSAFE_PCWSTR)i[2]);
              if ( PWSTR < 0 )
                goto LABEL_15;
              v18 = v25;
              if ( *v25 != (__int64 *)&v24 )
                __fastfail(3u);
              v19 = (__int64 **)v31;
              *v31 = &v24;
              v19[1] = (__int64 *)v18;
              *v18 = (__int64 *)v19;
              v25 = v19;
            }
            v5 = Object;
            ObfReferenceObject(Object);
          }
        }
LABEL_15:
        v4 = v26;
      }
    }
  }
  else
  {
    PWSTR = -1073741811;
  }
  PiSwUnlock();
  if ( PWSTR >= 0 )
  {
    if ( v4 )
      PWSTR = PiSwPropertySet(v27[1], 1LL, v4, (unsigned int)v23);
    for ( j = (__int64 **)v24; j != &v24; j = (__int64 **)*j )
    {
      PWSTR = CmGetDeviceInterfaceClassGuid(v16, (__int64)j[2], &InterfaceClassGuid);
      if ( PWSTR < 0 )
        break;
      DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(v20, (__int64)j[2], v35, 0x104u, &v29);
      PWSTR = DeviceInterfaceReferenceString;
      if ( DeviceInterfaceReferenceString == -1073741772 )
      {
        v22 = 0;
      }
      else
      {
        if ( DeviceInterfaceReferenceString < 0 )
          break;
        v22 = 1;
        RtlInitUnicodeString(&DestinationString, v35);
      }
      PWSTR = IoRegisterDeviceInterface(
                v5,
                &InterfaceClassGuid,
                (PUNICODE_STRING)((unsigned __int64)&DestinationString & -(__int64)(v22 != 0)),
                &UnicodeString);
      if ( PWSTR < 0 )
        break;
      PWSTR = PiSwPropertySet(j[2], 3LL, j[3], *((unsigned int *)j + 8));
      if ( PWSTR < 0 )
        break;
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v4 )
    PnpFreeDevPropertyArray(v23, v4, 0x57706E50u);
  PiSwFreeInterfaceList(&v24);
  RtlFreeAnsiString(&UnicodeString);
  if ( v3 )
  {
    if ( PWSTR >= 0 )
      v1 = pcbLength + 2;
    *(_QWORD *)(v3 + 56) = v1;
    *(_DWORD *)(v3 + 48) = PWSTR;
    IofCompleteRequest((PIRP)v3, 0);
  }
}
