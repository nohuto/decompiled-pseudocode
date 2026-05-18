/*
 * XREFs of sub_180015A44 @ 0x180015A44
 * Callers:
 *     sub_1800187A0 @ 0x1800187A0 (sub_1800187A0.c)
 *     sub_18002C2E0 @ 0x18002C2E0 (sub_18002C2E0.c)
 *     sub_18002D0C8 @ 0x18002D0C8 (sub_18002D0C8.c)
 *     sub_180039D40 @ 0x180039D40 (sub_180039D40.c)
 *     sub_18003AF44 @ 0x18003AF44 (sub_18003AF44.c)
 *     sub_18009E8BC @ 0x18009E8BC (sub_18009E8BC.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_180015B44 @ 0x180015B44 (sub_180015B44.c)
 *     sub_1800644FC @ 0x1800644FC (sub_1800644FC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180015A44(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  volatile signed __int32 *v6; // rbx
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  _BYTE pExceptionObject[40]; // [rsp+40h] [rbp-28h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  sub_180015B44(a1 + 496);
  v8 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
  {
LABEL_11:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( !v5 )
      goto LABEL_11;
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) );
  v8 = *(_OWORD *)(a1 + 8);
  sub_1800644FC(*a2, &v8);
  v6 = (volatile signed __int32 *)*((_QWORD *)&v8 + 1);
  if ( *((_QWORD *)&v8 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a2;
}
