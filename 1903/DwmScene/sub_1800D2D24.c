/*
 * XREFs of sub_1800D2D24 @ 0x1800D2D24
 * Callers:
 *     sub_1800D23C0 @ 0x1800D23C0 (sub_1800D23C0.c)
 *     sub_1800D2564 @ 0x1800D2564 (sub_1800D2564.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E724 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800643AC @ 0x1800643AC (sub_1800643AC.c)
 *     sub_18006ACC0 @ 0x18006ACC0 (sub_18006ACC0.c)
 *     sub_18006CCE8 @ 0x18006CCE8 (sub_18006CCE8.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D2D24(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD ***v5; // r10
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rax
  unsigned int v9; // r9d
  volatile signed __int32 *v10; // rbx
  unsigned int v11; // eax
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+30h] [rbp-40h]
  _BYTE pExceptionObject[24]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h]

  v14 = -2LL;
  v16 = 0LL;
  v17 = 0LL;
  sub_1800631C0(a2 + 24, &v16);
  v5 = (_QWORD ***)sub_18006CCE8(a2, v4);
  v13 = 0LL;
  v6 = *(_QWORD *)(a1 + 104);
  if ( !v6 )
  {
LABEL_16:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v7 = *(_DWORD *)(v6 + 8);
    if ( !v7 )
      goto LABEL_16;
  }
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) );
  v13 = *(_OWORD *)(a1 + 96);
  v8 = *(_QWORD *)(a1 + 112);
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 12);
  else
    v9 = 0;
  sub_18006ACC0(*v5, (__int64)&v13, *(_QWORD *)(a1 + 136), v9);
  v10 = (volatile signed __int32 *)*((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)&v13 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = sub_18006CDB8(a2);
  result = sub_1800643AC(a1, v11);
  if ( (_BYTE)v17 )
    return sub_180063668(v16);
  return result;
}
