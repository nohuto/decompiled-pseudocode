/*
 * XREFs of KxSetTimeStampBusy @ 0x140101CB0
 * Callers:
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
 *     KxFlushNonGlobalTb @ 0x140099AC0 (KxFlushNonGlobalTb.c)
 *     KeInvalidateAllCaches @ 0x14013B4F0 (KeInvalidateAllCaches.c)
 *     KxFlushEntireTb @ 0x140188418 (KxFlushEntireTb.c)
 *     KiFlushAddressSpaceTb @ 0x1402AA43C (KiFlushAddressSpaceTb.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140284ED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AEF40 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall KxSetTimeStampBusy(int *a1)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v4; // edi
  int v5; // eax

  v2 = 0;
  _m_prefetchw(a1);
  v3 = *a1;
  v4 = *a1;
  while ( (v3 & 1) != 0 || _interlockedbittestandset(a1, 0) )
  {
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
    {
      HvlNotifyLongSpinWait(v2);
    }
    else
    {
      _mm_pause();
    }
    v3 = *a1;
    v5 = *a1 - v4;
    if ( v5 >= 3 || v5 >= 2 && (v4 & 1) == 0 )
      return 0;
  }
  return 1;
}
