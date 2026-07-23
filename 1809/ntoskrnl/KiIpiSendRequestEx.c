/*
 * XREFs of KiIpiSendRequestEx @ 0x1400ED1E0
 * Callers:
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 *     KxFlushSingleTb @ 0x1400ECF40 (KxFlushSingleTb.c)
 *     KxFlushNonGlobalTb @ 0x1400ED2A0 (KxFlushNonGlobalTb.c)
 *     KeInvalidateAllCaches @ 0x140177150 (KeInvalidateAllCaches.c)
 *     KxFlushEntireTb @ 0x140187998 (KxFlushEntireTb.c)
 *     KeInvalidateRangeAllCaches @ 0x1402955C0 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1400ED3F0 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1400EDC44 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiIpiSendRequestEx(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        void (__fastcall *a7)(__int64),
        __int64 a8)
{
  int v9; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 result; // rax

  v9 = a3;
  if ( a2 )
  {
    if ( (unsigned int)KeNumberProcessors_0 > 1 )
    {
LABEL_3:
      KiIpiSendRequest(a1, a2, v9, a4, a5, a6);
      if ( a7 )
        a7(a8);
      v15 = 0;
      while ( 1 )
      {
        result = *(unsigned int *)(a1 + 11648);
        if ( !(_DWORD)result )
          break;
        if ( (++v15 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13, v12, v14) )
        {
          HvlNotifyLongSpinWait(v15);
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
  result = (__int64)a7;
  if ( a7 )
    return ((__int64 (__fastcall *)(__int64))a7)(a8);
  return result;
}
