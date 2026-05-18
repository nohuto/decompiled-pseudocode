/*
 * XREFs of sub_18006CA18 @ 0x18006CA18
 * Callers:
 *     sub_18006D5C0 @ 0x18006D5C0 (sub_18006D5C0.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_180064684 @ 0x180064684 (sub_180064684.c)
 *     sub_18006B158 @ 0x18006B158 (sub_18006B158.c)
 *     sub_18009EA68 @ 0x18009EA68 (sub_18009EA68.c)
 *     sub_1800E2478 @ 0x1800E2478 (sub_1800E2478.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006CA18(_QWORD *a1)
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
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801E0C90);
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
    sub_18006B158(v2, v14, &v10);
    sub_180064684(*(__int64 *)v14, 2, 0);
    sub_18009EA68(v14[0]);
    v11 = 0LL;
    if ( *(_QWORD *)&v14[2] )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)&v14[2] + 8LL));
      v5 = *((_QWORD *)&v9 + 1);
    }
    v11 = *(_OWORD *)v14;
    sub_1800E2478(a1 + 76, &v11, p_si128->m128i_u32[0]);
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
