/*
 * XREFs of sub_18006C908 @ 0x18006C908
 * Callers:
 *     sub_18006D4B0 @ 0x18006D4B0 (sub_18006D4B0.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E724 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_180064574 @ 0x180064574 (sub_180064574.c)
 *     sub_18006B048 @ 0x18006B048 (sub_18006B048.c)
 *     sub_18009E958 @ 0x18009E958 (sub_18009E958.c)
 *     sub_1800E2368 @ 0x1800E2368 (sub_1800E2368.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006C908(_QWORD *a1)
{
  _QWORD *v2; // r12
  __int64 v3; // rdx
  signed __int32 v4; // eax
  __int64 v5; // rbx
  __m128i *p_si128; // r14
  volatile signed __int32 *v7; // rdi
  __int64 result; // rax
  __int128 v9; // [rsp+28h] [rbp-59h]
  __int128 v10; // [rsp+48h] [rbp-39h] BYREF
  __int128 v11; // [rsp+58h] [rbp-29h] BYREF
  __int64 v12; // [rsp+68h] [rbp-19h]
  _BYTE pExceptionObject[24]; // [rsp+70h] [rbp-11h] BYREF
  int v14[4]; // [rsp+88h] [rbp+7h] BYREF
  __m128i si128; // [rsp+98h] [rbp+17h] BYREF
  int v16; // [rsp+A8h] [rbp+27h]
  int v17; // [rsp+ACh] [rbp+2Bh]
  __int64 v18; // [rsp+B0h] [rbp+2Fh] BYREF

  v12 = -2LL;
  v2 = (_QWORD *)a1[498];
  v3 = a1[2];
  if ( !v3 )
  {
LABEL_22:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v4 = *(_DWORD *)(v3 + 8);
    if ( !v4 )
      goto LABEL_22;
  }
  while ( v4 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4) );
  *(_QWORD *)&v9 = a1[1];
  v5 = a1[2];
  *((_QWORD *)&v9 + 1) = v5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801DFC90);
  v16 = 4;
  v17 = 5;
  p_si128 = &si128;
  do
  {
    memset(v14, 0, sizeof(v14));
    v10 = 0LL;
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = *((_QWORD *)&v9 + 1);
    }
    v10 = v9;
    sub_18006B048(v2, v14, &v10);
    sub_180064574(*(__int64 *)v14, 2, 0);
    sub_18009E958(v14[0]);
    v11 = 0LL;
    if ( *(_QWORD *)&v14[2] )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)&v14[2] + 8LL));
      v5 = *((_QWORD *)&v9 + 1);
    }
    v11 = *(_OWORD *)v14;
    sub_1800E2368(a1 + 76, &v11, p_si128->m128i_u32[0]);
    v7 = *(volatile signed __int32 **)&v14[2];
    if ( *(_QWORD *)&v14[2] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)&v14[2] + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
      v5 = *((_QWORD *)&v9 + 1);
    }
    p_si128 = (__m128i *)((char *)p_si128 + 4);
    result = (__int64)&v18;
  }
  while ( p_si128 != (__m128i *)&v18 );
  if ( v5 )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 8));
    if ( !(_DWORD)result )
    {
      (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 12LL));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
    }
  }
  return result;
}
