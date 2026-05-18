/*
 * XREFs of sub_1800EBDF0 @ 0x1800EBDF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180083754 @ 0x180083754 (sub_180083754.c)
 *     sub_180099B50 @ 0x180099B50 (sub_180099B50.c)
 *     sub_180099B7C @ 0x180099B7C (sub_180099B7C.c)
 *     sub_1800B18A0 @ 0x1800B18A0 (sub_1800B18A0.c)
 *     sub_1800F5DAC @ 0x1800F5DAC (sub_1800F5DAC.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800EBDF0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdx
  signed __int32 v9; // eax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // [rsp+40h] [rbp-71h] BYREF
  volatile signed __int32 *v13; // [rsp+48h] [rbp-69h]
  __int64 v14; // [rsp+50h] [rbp-61h] BYREF
  volatile signed __int32 *v15; // [rsp+58h] [rbp-59h]
  int v16; // [rsp+68h] [rbp-49h] BYREF
  __int64 v17; // [rsp+6Ch] [rbp-45h]
  __int64 v18; // [rsp+74h] [rbp-3Dh]
  int v19; // [rsp+7Ch] [rbp-35h]
  __int64 v20; // [rsp+80h] [rbp-31h]
  __int64 v21; // [rsp+88h] [rbp-29h]
  int v22; // [rsp+90h] [rbp-21h]
  __int64 v23; // [rsp+94h] [rbp-1Dh]
  __int64 v24; // [rsp+9Ch] [rbp-15h]
  int v25; // [rsp+A4h] [rbp-Dh]
  __m128 v26[4]; // [rsp+A8h] [rbp-9h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  sub_180099B50(a2, &v14);
  v12 = 0LL;
  v13 = 0LL;
  result = (__int64)sub_180099B7C(a2, &v12, a3, 0);
  if ( v12 )
  {
    v6 = 0LL;
    v7 = 0LL;
    v8 = *(_QWORD *)(a2 + 64);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(v8 + 8);
        if ( !v9 )
          break;
        if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
        {
          v6 = *(_QWORD *)(a2 + 56);
          v7 = *(volatile signed __int32 **)(a2 + 64);
          break;
        }
      }
    }
    sub_180083754(v6, (__int64)v26);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    v16 = 1065353216;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 1065353216;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 1065353216;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 1065353216;
    sub_1800B18A0(v26, &v16);
    result = sub_1800F5DAC(v12);
  }
  v10 = v13;
  if ( v13 )
  {
    result = (unsigned int)_InterlockedDecrement(v13 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = v15;
  if ( v15 )
  {
    result = (unsigned int)_InterlockedDecrement(v15 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return result;
}
