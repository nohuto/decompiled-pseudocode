/*
 * XREFs of sub_180133BAE @ 0x180133BAE
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1801273F8 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_180133BAE(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rbx

  sub_18011D988(&qword_18025DE00, 3, "ComputeNormals threw unexpected exception");
  *(_OWORD *)(a2 + 128) = 0LL;
  *(_QWORD *)(a2 + 184) = *(_QWORD *)(a2 + 200);
  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 56LL);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 16LL))(v3, a2 + 128, a2 + 184);
  v4 = *(volatile signed __int32 **)(a2 + 136);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return &loc_180116A9F;
}
