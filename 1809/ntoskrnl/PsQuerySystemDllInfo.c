/*
 * XREFs of PsQuerySystemDllInfo @ 0x1406820DC
 * Callers:
 *     PspWow64PickBestNtdll @ 0x1400F5354 (PspWow64PickBestNtdll.c)
 *     ExpSystemErrorHandler2 @ 0x14057E930 (ExpSystemErrorHandler2.c)
 *     DbgkCreateThread @ 0x1405F7028 (DbgkCreateThread.c)
 *     PsWow64IsMachineSupported @ 0x140682090 (PsWow64IsMachineSupported.c)
 *     DbgkSendSystemDllMessages @ 0x14080E4AC (DbgkSendSystemDllMessages.c)
 *     MmInitSystemDll @ 0x1409C4738 (MmInitSystemDll.c)
 *     PspInitializeSystemDlls @ 0x1409D6048 (PspInitializeSystemDlls.c)
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
