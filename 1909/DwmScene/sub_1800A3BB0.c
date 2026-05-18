/*
 * XREFs of sub_1800A3BB0 @ 0x1800A3BB0
 * Callers:
 *     sub_180091AE8 @ 0x180091AE8 (sub_180091AE8.c)
 *     sub_180092F50 @ 0x180092F50 (sub_180092F50.c)
 *     sub_180093744 @ 0x180093744 (sub_180093744.c)
 *     sub_180093EB8 @ 0x180093EB8 (sub_180093EB8.c)
 *     sub_180093FEC @ 0x180093FEC (sub_180093FEC.c)
 *     sub_1800A59AC @ 0x1800A59AC (sub_1800A59AC.c)
 *     sub_1800A8CC8 @ 0x1800A8CC8 (sub_1800A8CC8.c)
 *     sub_1800EA350 @ 0x1800EA350 (sub_1800EA350.c)
 *     sub_1800EC240 @ 0x1800EC240 (sub_1800EC240.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 *     sub_1800F0450 @ 0x1800F0450 (sub_1800F0450.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_1800A2640 @ 0x1800A2640 (sub_1800A2640.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A3BB0(__int128 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  volatile signed __int32 *v6; // rbx
  _BYTE pExceptionObject[24]; // [rsp+28h] [rbp-40h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v10[2]; // [rsp+50h] [rbp-18h] BYREF

  v10[1] = HIDWORD(a2);
  v10[0] = a3;
  v9 = 0LL;
  v4 = *((_QWORD *)a1 + 1);
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
  v9 = *a1;
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_1800A2640(a2, (__int64)&v9, v10);
  v6 = (volatile signed __int32 *)*((_QWORD *)&v9 + 1);
  if ( *((_QWORD *)&v9 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a2;
}
