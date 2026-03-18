/*
 * XREFs of PsQuerySystemDllInfo @ 0x1405C992C
 * Callers:
 *     PspWow64PickBestNtdll @ 0x1401395AC (PspWow64PickBestNtdll.c)
 *     ExpSystemErrorHandler2 @ 0x1405AE830 (ExpSystemErrorHandler2.c)
 *     PsWow64IsMachineSupported @ 0x1405C98E0 (PsWow64IsMachineSupported.c)
 *     DbgkCreateThread @ 0x1405E6E8C (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x140847CE4 (DbgkSendSystemDllMessages.c)
 *     MmInitSystemDll @ 0x1409FCCC8 (MmInitSystemDll.c)
 *     PspInitializeSystemDlls @ 0x1409FE778 (PspInitializeSystemDlls.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQuerySystemDllInfo(int a1)
{
  __int64 v1; // rax

  v1 = (__int64)*(&PspSystemDlls + a1);
  if ( v1 && *(_QWORD *)(v1 + 40) )
    return v1 + 16;
  else
    return 0LL;
}
