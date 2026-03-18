/*
 * XREFs of PiSwDeviceInterfaceSetState @ 0x14077A73C
 * Callers:
 *     PiSwIrpInterfaceSetState @ 0x14077A2D0 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x14077A424 (PiSwIrpInterfaceRegister.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x1405BCB54 (PnpAllocatePWSTR.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x140627C78 (_CmSetDeviceInterfacePathFormat.c)
 *     IoSetDeviceInterfaceState @ 0x140733C90 (IoSetDeviceInterfaceState.c)
 */

__int64 __fastcall PiSwDeviceInterfaceSetState(__int64 a1, __int64 a2, BOOLEAN a3)
{
  WCHAR *v3; // rbx
  NTSTATUS v4; // edi
  __int64 v6; // rax
  __int64 v8; // rax
  int PWSTR; // eax
  __int64 v10; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PCWSTR SourceString; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v4 = 0;
  DestinationString.Buffer = 0LL;
  v6 = *(_QWORD *)(a1 + 120);
  SourceString = 0LL;
  if ( !v6
    || (v8 = *(_QWORD *)(v6 + 64)) == 0
    || (*(_DWORD *)(v8 + 8) & 1) == 0
    || *(_BYTE *)(a2 + 36) == a3
    || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16), 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)&SourceString),
        v3 = (WCHAR *)SourceString,
        v4 = PWSTR,
        PWSTR >= 0)
    && (v4 = CmSetDeviceInterfacePathFormat(v10, SourceString, 1), v4 >= 0)
    && (RtlInitUnicodeString(&DestinationString, v3), v4 = IoSetDeviceInterfaceState(&DestinationString, a3), v4 >= 0) )
  {
    *(_BYTE *)(a2 + 36) = a3;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x57706E50u);
  return (unsigned int)v4;
}
