/*
 * XREFs of PiSwDeviceInterfacesUpdateState @ 0x1407226DC
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x140721150 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessRemove @ 0x140782BA4 (PiSwProcessRemove.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x1405BCB54 (PnpAllocatePWSTR.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x140627C78 (_CmSetDeviceInterfacePathFormat.c)
 *     IoSetDeviceInterfaceState @ 0x140733C90 (IoSetDeviceInterfaceState.c)
 */

__int64 __fastcall PiSwDeviceInterfacesUpdateState(__int64 a1, BOOLEAN a2)
{
  __int64 *v2; // r14
  __int64 *v3; // rdi
  WCHAR *v4; // rbx
  NTSTATUS v5; // esi
  int PWSTR; // eax
  __int64 v9; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+50h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 184);
  v3 = *(__int64 **)(a1 + 184);
  v4 = 0LL;
  v5 = 0;
  SourceString = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( v3 == (__int64 *)(a1 + 184) )
    return (unsigned int)v5;
  while ( !*((_BYTE *)v3 + 36) )
  {
LABEL_4:
    v3 = (__int64 *)*v3;
    if ( v3 == v2 )
      goto LABEL_5;
  }
  PWSTR = PnpAllocatePWSTR((NTSTRSAFE_PCWSTR)v3[2], 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)&SourceString);
  v4 = (WCHAR *)SourceString;
  v5 = PWSTR;
  if ( PWSTR >= 0 )
  {
    v5 = CmSetDeviceInterfacePathFormat(v9, SourceString, 1);
    if ( v5 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, v4);
      v5 = IoSetDeviceInterfaceState(&DestinationString, a2);
      if ( v5 >= 0 )
      {
        ExFreePoolWithTag(v4, 0x57706E50u);
        v4 = 0LL;
        SourceString = 0LL;
        goto LABEL_4;
      }
    }
  }
LABEL_5:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x57706E50u);
  return (unsigned int)v5;
}
