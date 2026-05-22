/*
 * XREFs of ?_Reset_move@?$_Func_class@XPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@std@@IEAAX$$QEAV12@@Z @ 0x1800E6850
 * Callers:
 *     ?_Swap@?$_Func_class@XE@std@@IEAAXAEAV12@@Z @ 0x1800E68A8 (-_Swap@-$_Func_class@XE@std@@IEAAXAEAV12@@Z.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z @ 0x18016294C (--0-$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x1800285C4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<void,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *>::_Reset_move(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
