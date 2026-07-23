/*
 * XREFs of KxSetTimeStampBusy @ 0x140117CC0
 * Callers:
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 *     KxFlushNonGlobalTb @ 0x1400ED2A0 (KxFlushNonGlobalTb.c)
 *     KeInvalidateAllCaches @ 0x140177150 (KeInvalidateAllCaches.c)
 *     KxFlushEntireTb @ 0x140187998 (KxFlushEntireTb.c)
 *     KiFlushAddressSpaceTb @ 0x140293EEC (KiFlushAddressSpaceTb.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall KxSetTimeStampBusy(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // rbx
  unsigned int v4; // edi
  volatile signed __int32 v5; // eax
  volatile signed __int32 v6; // esi

  v3 = a1;
  v4 = 0;
  _m_prefetchw((const void *)a1);
  v5 = *a1;
  v6 = *a1;
  while ( (v5 & 1) != 0 || _interlockedbittestandset(v3, 0) )
  {
    if ( (++v4 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
    {
      HvlNotifyLongSpinWait(v4);
    }
    else
    {
      _mm_pause();
    }
    v5 = *v3;
    a1 = (volatile signed __int32 *)(unsigned int)(*v3 - v6);
    if ( (int)a1 >= 3 || (int)a1 >= 2 && (v6 & 1) == 0 )
      return 0;
  }
  return 1;
}
