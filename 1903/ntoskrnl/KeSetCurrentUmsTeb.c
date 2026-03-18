/*
 * XREFs of KeSetCurrentUmsTeb @ 0x1402B6E44
 * Callers:
 *     KeUnInitializeUmsThread @ 0x140880B20 (KeUnInitializeUmsThread.c)
 *     KiSwapToUmsThread @ 0x140880D60 (KiSwapToUmsThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1408CD184 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KeSetCurrentUmsTeb(struct _KTHREAD *CurrentThread, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
  {
    result = a2;
    __writemsr(0xC0000102, a2);
  }
  return result;
}
