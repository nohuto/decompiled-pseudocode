/*
 * XREFs of ??1?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@XZ @ 0x18007C024
 * Callers:
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$0 @ 0x18007C31E (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$1 @ 0x18007C32A (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ @ 0x180028AE4 (-_Tidy@-$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ.c)
 */

void __fastcall std::vector<std::function<void (bool)>>::~vector<std::function<void (bool)>>(char **a1, __int64 a2)
{
  char *v2; // rbx
  char *v4; // rsi

  v2 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    if ( v2 != v4 )
    {
      do
      {
        std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy((__int64)v2, a2);
        v2 += 64;
      }
      while ( v2 != v4 );
      v2 = *a1;
    }
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)((a1[2] - v2) & 0xFFFFFFFFFFFFFFC0uLL));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
