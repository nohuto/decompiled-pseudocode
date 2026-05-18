/*
 * XREFs of sub_1800390B0 @ 0x1800390B0
 * Callers:
 *     sub_18003A940 @ 0x18003A940 (sub_18003A940.c)
 *     sub_18004046C @ 0x18004046C (sub_18004046C.c)
 *     sub_1800D0190 @ 0x1800D0190 (sub_1800D0190.c)
 *     sub_1800D0348 @ 0x1800D0348 (sub_1800D0348.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E724 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_1800391B0 @ 0x1800391B0 (sub_1800391B0.c)
 *     sub_1800643EC @ 0x1800643EC (sub_1800643EC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800390B0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  volatile signed __int32 *v6; // rbx
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  _BYTE pExceptionObject[40]; // [rsp+40h] [rbp-28h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  sub_1800391B0(a1 + 496);
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
  sub_1800643EC(*a2, &v8);
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
