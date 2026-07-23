/*
 * XREFs of LdrInitializeEnclave @ 0x1800CD5C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x18001B2F8 (LdrpObtainLockedEnclave.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     ZwInitializeEnclave @ 0x18009EDA0 (ZwInitializeEnclave.c)
 *     NtTerminateEnclave @ 0x1800A0580 (NtTerminateEnclave.c)
 *     RtlCallEnclave @ 0x1800A0D80 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800CDC04 (LdrpDereferenceEnclave.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D07CC (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 */

NTSTATUS __cdecl LdrInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  int v9; // edi
  __int64 *v10; // rax
  __int64 *v11; // rbx
  bool v12; // zf
  PVOID v14; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  v10 = LdrpObtainLockedEnclave((unsigned __int64)BaseAddress, 1);
  v11 = v10;
  if ( v10 && *((_DWORD *)v10 + 14) == 16 && *((_DWORD *)v10 + 16) )
  {
    if ( *((_DWORD *)v10 + 16) != 1 )
    {
      v9 = -1073741502;
      goto LABEL_12;
    }
  }
  else
  {
    v9 = ZwInitializeEnclave(ProcessHandle, BaseAddress, EnclaveInformation, EnclaveInformationLength, EnclaveError);
    if ( v9 < 0 )
      goto LABEL_12;
  }
  if ( !v11 )
    return v9;
  v12 = *((_DWORD *)v11 + 14) == 16;
  *((_DWORD *)v11 + 16) = 1;
  if ( v12 )
  {
    v14 = 0LL;
    v9 = RtlCallEnclave((LPVOID (__cdecl *)(LPVOID))v11[9], 0LL, 0, &v14);
    if ( v9 < 0 )
      NtTerminateEnclave((PVOID)v11[9], 0);
    else
      *((_DWORD *)v11 + 16) = 2;
  }
LABEL_12:
  if ( v11 )
  {
    if ( *((_DWORD *)v11 + 14) == 16 )
      LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry((unsigned int)v9);
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v11 + 2));
    LdrpDereferenceEnclave(v11);
  }
  return v9;
}
