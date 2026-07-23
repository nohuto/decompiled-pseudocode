/*
 * XREFs of PiSwDeviceInterfacesUpdateState @ 0x1406D9BE0
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1406D95D0 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessRemove @ 0x1406D9DEC (PiSwProcessRemove.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x14059B42C (PnpAllocatePWSTR.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x14059FAFC (_CmSetDeviceInterfacePathFormat.c)
 *     IoSetDeviceInterfaceState @ 0x140710B20 (IoSetDeviceInterfaceState.c)
 */

__int64 __fastcall PiSwDeviceInterfacesUpdateState(__int64 a1, BOOLEAN a2)
{
  __int64 *v2; // r14
  WCHAR *v3; // rbx
  __int64 *v4; // rdi
  int v5; // esi
  int PWSTR; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+50h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 184);
  v3 = 0LL;
  v4 = *(__int64 **)(a1 + 184);
  v5 = 0;
  SourceString = 0LL;
  if ( v4 == (__int64 *)(a1 + 184) )
    return (unsigned int)v5;
  while ( !*((_BYTE *)v4 + 36) )
  {
LABEL_8:
    v4 = (__int64 *)*v4;
    if ( v4 == v2 )
      goto LABEL_9;
  }
  PWSTR = PnpAllocatePWSTR((NTSTRSAFE_PCWSTR)v4[2], 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)&SourceString);
  v3 = (WCHAR *)SourceString;
  v5 = PWSTR;
  if ( PWSTR >= 0 )
  {
    LOBYTE(v10) = 1;
    v5 = CmSetDeviceInterfacePathFormat(v9, SourceString, v10);
    if ( v5 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, v3);
      v5 = IoSetDeviceInterfaceState(&DestinationString, a2);
      if ( v5 >= 0 )
      {
        ExFreePoolWithTag(v3, 0x57706E50u);
        v3 = 0LL;
        SourceString = 0LL;
        goto LABEL_8;
      }
    }
  }
LABEL_9:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x57706E50u);
  return (unsigned int)v5;
}
