/*
 * XREFs of ??0?$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z @ 0x18016294C
 * Callers:
 *     ??0KeepAliveTimer@ThreadpoolTimerHelpers@@QEAA@_KV?$function@$$A6AXXZ@std@@@Z @ 0x180162B24 (--0KeepAliveTimer@ThreadpoolTimerHelpers@@QEAA@_KV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@KKV?$function@$$A6AXXZ@std@@@Z @ 0x180162D7C (--0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@XPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@std@@IEAAX$$QEAV12@@Z @ 0x1800E6850 (-_Reset_move@-$_Func_class@XPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (void)>::function<void (void)>(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  std::_Func_class<void,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *>::_Reset_move(
    a1,
    a2);
  return a1;
}
