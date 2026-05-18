/*
 * XREFs of sub_1800F7424 @ 0x1800F7424
 * Callers:
 *     sub_18008FF18 @ 0x18008FF18 (sub_18008FF18.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18006AB88 @ 0x18006AB88 (sub_18006AB88.c)
 *     sub_18006AC34 @ 0x18006AC34 (sub_18006AC34.c)
 *     sub_18006AD60 @ 0x18006AD60 (sub_18006AD60.c)
 *     sub_1800A813C @ 0x1800A813C (sub_1800A813C.c)
 *     sub_1800F75B8 @ 0x1800F75B8 (sub_1800F75B8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F7424(__int128 *a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // r10
  __int64 v8; // r9
  signed __int32 v9; // eax
  __int64 v10; // rdx
  signed __int32 v11; // eax
  __int64 result; // rax
  volatile signed __int32 *v13; // rbx
  signed __int32 v14; // eax
  bool v15; // zf
  __int128 v16; // [rsp+28h] [rbp-38h] BYREF
  __int128 v17; // [rsp+38h] [rbp-28h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+48h] [rbp-18h] BYREF

  v7 = *a2;
  v16 = 0LL;
  v8 = *(_QWORD *)(v7 + 80);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v8 + 8);
      if ( !v9 )
        break;
      if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
      {
        v16 = *(_OWORD *)(v7 + 72);
        break;
      }
    }
  }
  sub_1800F75B8(a1, &v16);
  sub_1800A813C(*((_QWORD *)a1 + 2), (__int64)a2, a4);
  sub_18006AB88(*a2);
  sub_18006AD60(*a2, (_QWORD *)a1 + 22);
  v17 = 0LL;
  v10 = *((_QWORD *)a1 + 1);
  if ( !v10 )
  {
LABEL_17:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v11 = *(_DWORD *)(v10 + 8);
    if ( !v11 )
      goto LABEL_17;
  }
  while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) );
  v17 = *a1;
  result = (__int64)sub_18006AC34(*a2, &v17);
  v13 = (volatile signed __int32 *)*((_QWORD *)&v17 + 1);
  if ( *((_QWORD *)&v17 + 1) )
  {
    v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF);
    v15 = v14 == 1;
    result = (unsigned int)(v14 - 1);
    if ( v15 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return result;
}
