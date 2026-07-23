/*
 * XREFs of PsQuerySystemDllInfo @ 0x14068327C
 * Callers:
 *     PspWow64PickBestNtdll @ 0x1400F53F4 (PspWow64PickBestNtdll.c)
 *     ExpSystemErrorHandler2 @ 0x14057F930 (ExpSystemErrorHandler2.c)
 *     DbgkCreateThread @ 0x1405F8028 (DbgkCreateThread.c)
 *     PsWow64IsMachineSupported @ 0x140683230 (PsWow64IsMachineSupported.c)
 *     DbgkSendSystemDllMessages @ 0x14080F68C (DbgkSendSystemDllMessages.c)
 *     MmInitSystemDll @ 0x1409C5738 (MmInitSystemDll.c)
 *     PspInitializeSystemDlls @ 0x1409D7048 (PspInitializeSystemDlls.c)
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
