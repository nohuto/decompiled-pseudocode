/*
 * XREFs of PiSwDeviceInterfaceSetState @ 0x140755514
 * Callers:
 *     PiSwIrpInterfaceSetState @ 0x140755014 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x14075519C (PiSwIrpInterfaceRegister.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x14059B42C (PnpAllocatePWSTR.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x14059FAFC (_CmSetDeviceInterfacePathFormat.c)
 *     IoSetDeviceInterfaceState @ 0x140710B20 (IoSetDeviceInterfaceState.c)
 */

__int64 __fastcall PiSwDeviceInterfaceSetState(__int64 a1, __int64 a2, BOOLEAN a3)
{
  __int64 v3; // rax
  WCHAR *v4; // rbx
  int v5; // edi
  __int64 v8; // rax
  int PWSTR; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PCWSTR SourceString; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 120);
  v4 = 0LL;
  v5 = 0;
  SourceString = 0LL;
  if ( !v3 )
    goto LABEL_8;
  v8 = *(_QWORD *)(v3 + 64);
  if ( !v8
    || (*(_DWORD *)(v8 + 8) & 1) == 0
    || *(_BYTE *)(a2 + 36) == a3
    || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16), 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)&SourceString),
        v4 = (WCHAR *)SourceString,
        v5 = PWSTR,
        PWSTR >= 0)
    && (LOBYTE(v11) = 1, v5 = CmSetDeviceInterfacePathFormat(v10, SourceString, v11), v5 >= 0)
    && (RtlInitUnicodeString(&DestinationString, v4), v5 = IoSetDeviceInterfaceState(&DestinationString, a3), v5 >= 0) )
  {
LABEL_8:
    *(_BYTE *)(a2 + 36) = a3;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x57706E50u);
  return (unsigned int)v5;
}
