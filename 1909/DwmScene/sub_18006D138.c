/*
 * XREFs of sub_18006D138 @ 0x18006D138
 * Callers:
 *     sub_180108D30 @ 0x180108D30 (sub_180108D30.c)
 *     sub_180108F60 @ 0x180108F60 (sub_180108F60.c)
 *     sub_180109510 @ 0x180109510 (sub_180109510.c)
 *     sub_1801096F0 @ 0x1801096F0 (sub_1801096F0.c)
 *     sub_18010A154 @ 0x18010A154 (sub_18010A154.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_1800E0DFC @ 0x1800E0DFC (sub_1800E0DFC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006D138(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  signed __int32 v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int128 v10; // [rsp+38h] [rbp-28h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+48h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
  {
LABEL_13:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( !v5 )
      goto LABEL_13;
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) );
  v6 = *(_QWORD *)(a1 + 16);
  v7 = v6;
  v9 = *(_QWORD *)(a1 + 16);
  v10 = 0LL;
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v7 = v9;
  }
  *(_QWORD *)&v10 = a1 + 4096;
  *((_QWORD *)&v10 + 1) = v7;
  sub_1800E0DFC(a2, &v10);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(__int64))v9)(v9);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return a2;
}
