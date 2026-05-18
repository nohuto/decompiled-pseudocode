/*
 * XREFs of sub_180133BF6 @ 0x180133BF6
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180127508 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_180133BF6(__int64 a1, __int64 a2)
{
  const char *v3; // r8
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx

  v3 = (const char *)(*(_QWORD *)(a2 + 152) + 24LL);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 152) + 48LL) >= 0x10uLL )
    v3 = *(const char **)v3;
  sub_18011DA98(&qword_18025EE00, 3, v3);
  *(_OWORD *)(a2 + 112) = 0LL;
  *(_QWORD *)(a2 + 192) = *(_QWORD *)(a2 + 200);
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 56LL);
  if ( !v4 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, a2 + 112, a2 + 192);
  v5 = *(volatile signed __int32 **)(a2 + 120);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return &loc_180116BAF;
}
