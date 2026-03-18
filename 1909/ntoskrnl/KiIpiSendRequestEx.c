/*
 * XREFs of KiIpiSendRequestEx @ 0x140098A58
 * Callers:
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
 *     KxFlushNonGlobalTb @ 0x140099AC0 (KxFlushNonGlobalTb.c)
 *     KxFlushSingleTb @ 0x1400C59E0 (KxFlushSingleTb.c)
 *     KeInvalidateAllCaches @ 0x14013B4F0 (KeInvalidateAllCaches.c)
 *     KxFlushEntireTb @ 0x140188418 (KxFlushEntireTb.c)
 *     KeInvalidateRangeAllCaches @ 0x1402ABA60 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     KiIpiSendRequest @ 0x140099C40 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140125868 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     HvlNotifyLongSpinWait @ 0x140284ED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AEF40 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
