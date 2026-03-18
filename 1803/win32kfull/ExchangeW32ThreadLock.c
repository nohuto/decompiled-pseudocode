/*
 * XREFs of ExchangeW32ThreadLock @ 0x1C0061508
 * Callers:
 *     xxxSendMessageBSM @ 0x1C0061390 (xxxSendMessageBSM.c)
 *     LockExchangeW32Thread @ 0x1C00614C8 (LockExchangeW32Thread.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C006357C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxDoPaint @ 0x1C00649C0 (xxxDoPaint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExchangeW32ThreadLock(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(a2 + 16))(v2);
  return result;
}
