/*
 * XREFs of KiIpiSendRequestEx @ 0x1400B8BE8
 * Callers:
 *     KxFlushSingleTb @ 0x14009F8A0 (KxFlushSingleTb.c)
 *     KeInvalidateAllCaches @ 0x1400B7B70 (KeInvalidateAllCaches.c)
 *     KeFlushTb @ 0x1400B9940 (KeFlushTb.c)
 *     KxFlushNonGlobalTb @ 0x1400B9C50 (KxFlushNonGlobalTb.c)
 *     KxFlushEntireTb @ 0x140187E68 (KxFlushEntireTb.c)
 *     KeInvalidateRangeAllCaches @ 0x1402ABD00 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1400B9DD0 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1401251F8 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiIpiSendRequestEx(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        void (__fastcall *a6)(__int64),
        __int64 a7)
{
  int v8; // ebx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 result; // rax

  v8 = a3;
  if ( a2 )
  {
    if ( (unsigned int)KeNumberProcessors_0 > 1 )
    {
LABEL_3:
      KiIpiSendRequest(a1, a2, v8, a4, a5);
      if ( a6 )
        a6(a7);
      v12 = 0;
      while ( 1 )
      {
        result = *(unsigned int *)(a1 + 11648);
        if ( !(_DWORD)result )
          break;
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      return result;
    }
  }
  else if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(a1, a3) )
  {
    goto LABEL_3;
  }
  result = (__int64)a6;
  if ( a6 )
    return ((__int64 (__fastcall *)(__int64))a6)(a7);
  return result;
}
