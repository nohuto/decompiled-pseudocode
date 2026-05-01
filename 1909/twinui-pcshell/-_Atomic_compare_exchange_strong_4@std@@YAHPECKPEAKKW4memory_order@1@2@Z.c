/*
 * XREFs of ?_Atomic_compare_exchange_strong_4@std@@YAHPECKPEAKKW4memory_order@1@2@Z @ 0x1801EB75C
 * Callers:
 *     ?Resolve@?$weak_ref@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800C1ED0 (-Resolve@-$weak_ref@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z.c)
 *     ?_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z @ 0x1801EBEA4 (-_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenReg.c)
 *     ?_Invoke@_CancellationTokenRegistration@details@Concurrency@@AEAAXXZ @ 0x1801EC408 (-_Invoke@_CancellationTokenRegistration@details@Concurrency@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Atomic_compare_exchange_strong_4(
        volatile signed __int32 *a1,
        signed __int32 *a2,
        signed __int32 a3,
        int a4,
        int a5)
{
  int v6; // eax
  unsigned int v7; // ecx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  signed __int32 v11; // ett

  v6 = `std::_Memory_order_upper_bound'::`2'::_Upper[6 * a4 + a5];
  if ( !v6 )
    goto LABEL_9;
  if ( v6 <= 0 )
    return 0LL;
  if ( v6 < 4 )
  {
LABEL_9:
    v11 = *a2;
    v8 = _InterlockedCompareExchange(a1, a3, *a2);
    if ( v11 == v8 )
      return 1;
    goto LABEL_6;
  }
  v7 = 1;
  if ( (unsigned int)(v6 - 4) <= 1 )
  {
    v9 = *a2;
    v8 = _InterlockedCompareExchange(a1, a3, *a2);
    if ( v9 == v8 )
      return v7;
LABEL_6:
    *a2 = v8;
    return 0;
  }
  return 0LL;
}
