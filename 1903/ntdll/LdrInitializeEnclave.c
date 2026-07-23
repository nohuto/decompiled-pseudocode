/*
 * XREFs of LdrInitializeEnclave @ 0x1800CD500
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B2F8 @ 0x18001B2F8 (sub_18001B2F8.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     ZwInitializeEnclave @ 0x18009E5F0 (ZwInitializeEnclave.c)
 *     ZwTerminateEnclave @ 0x18009FDD0 (ZwTerminateEnclave.c)
 *     sub_1800A05D0 @ 0x1800A05D0 (sub_1800A05D0.c)
 *     sub_1800CDB44 @ 0x1800CDB44 (sub_1800CDB44.c)
 *     sub_1800D070C @ 0x1800D070C (sub_1800D070C.c)
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
  v10 = sub_18001B2F8((unsigned __int64)BaseAddress, 1);
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
    v9 = sub_1800A05D0((LPVOID (__cdecl *)(LPVOID))v11[9], 0LL, 0, &v14);
    if ( v9 < 0 )
      ZwTerminateEnclave((PVOID)v11[9], 0);
    else
      *((_DWORD *)v11 + 16) = 2;
  }
LABEL_12:
  if ( v11 )
  {
    if ( *((_DWORD *)v11 + 14) == 16 )
      sub_1800D070C((unsigned int)v9);
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v11 + 2));
    sub_1800CDB44(v11);
  }
  return v9;
}
