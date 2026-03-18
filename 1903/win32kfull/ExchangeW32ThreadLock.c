/*
 * XREFs of ExchangeW32ThreadLock @ 0x1C0087100
 * Callers:
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C00839E4 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSendMessageBSM @ 0x1C0086FB0 (xxxSendMessageBSM.c)
 *     xxxDoPaint @ 0x1C009A840 (xxxDoPaint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
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
