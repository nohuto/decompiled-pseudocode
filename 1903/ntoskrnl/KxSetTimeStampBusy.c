/*
 * XREFs of KxSetTimeStampBusy @ 0x1400FF2B0
 * Callers:
 *     KeInvalidateAllCaches @ 0x1400B7B70 (KeInvalidateAllCaches.c)
 *     KeFlushTb @ 0x1400B9940 (KeFlushTb.c)
 *     KxFlushNonGlobalTb @ 0x1400B9C50 (KxFlushNonGlobalTb.c)
 *     KxFlushEntireTb @ 0x140187E68 (KxFlushEntireTb.c)
 *     KiFlushAddressSpaceTb @ 0x1402AA6DC (KiFlushAddressSpaceTb.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
