/*
 * XREFs of EtwpCovSampSafeForUserAddressCapture @ 0x140317688
 * Callers:
 *     EtwpCovSampCaptureApc @ 0x1403163A0 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureSample @ 0x1403170B4 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     MmCanThreadFault @ 0x1400CC2D4 (MmCanThreadFault.c)
 */

__int64 __fastcall EtwpCovSampSafeForUserAddressCapture(int a1, BOOL *a2)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v5; // eax

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  v5 = (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 || !CurrentThread->Teb;
  *a2 = v5;
  if ( CurrentIrql >= 2u
    || KeGetCurrentThread()->WaitBlock[3].SpareLong
    || !MmCanThreadFault()
    || BYTE6(CurrentThread[1].Queue) && !a1
    || KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    return 3221225659LL;
  }
  else
  {
    return 0LL;
  }
}
