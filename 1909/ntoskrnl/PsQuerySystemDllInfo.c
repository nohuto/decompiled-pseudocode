/*
 * XREFs of PsQuerySystemDllInfo @ 0x1405C9E2C
 * Callers:
 *     PspWow64PickBestNtdll @ 0x140139C4C (PspWow64PickBestNtdll.c)
 *     ExpSystemErrorHandler2 @ 0x1405AE810 (ExpSystemErrorHandler2.c)
 *     PsWow64IsMachineSupported @ 0x1405C9DE0 (PsWow64IsMachineSupported.c)
 *     DbgkCreateThread @ 0x1405E765C (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x1408473EC (DbgkSendSystemDllMessages.c)
 *     MmInitSystemDll @ 0x1409FD1E4 (MmInitSystemDll.c)
 *     PspInitializeSystemDlls @ 0x1409FEC94 (PspInitializeSystemDlls.c)
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
