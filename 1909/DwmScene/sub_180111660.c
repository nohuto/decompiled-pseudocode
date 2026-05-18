/*
 * XREFs of sub_180111660 @ 0x180111660
 * Callers:
 *     <none>
 * Callees:
 *     sub_180083754 @ 0x180083754 (sub_180083754.c)
 *     sub_18008468C @ 0x18008468C (sub_18008468C.c)
 *     sub_180096550 @ 0x180096550 (sub_180096550.c)
 *     sub_18009655C @ 0x18009655C (sub_18009655C.c)
 *     sub_180096568 @ 0x180096568 (sub_180096568.c)
 *     sub_180099B50 @ 0x180099B50 (sub_180099B50.c)
 *     sub_180099B7C @ 0x180099B7C (sub_180099B7C.c)
 *     sub_1800B18A0 @ 0x1800B18A0 (sub_1800B18A0.c)
 *     sub_1800F5DAC @ 0x1800F5DAC (sub_1800F5DAC.c)
 *     sub_1800F5E1C @ 0x1800F5E1C (sub_1800F5E1C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180111660(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdx
  signed __int32 v9; // eax
  __int64 v10; // r8
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rdx
  signed __int32 v13; // eax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int32 *v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v19; // [rsp+60h] [rbp-A0h]
  int v20; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+74h] [rbp-8Ch]
  __int64 v22; // [rsp+7Ch] [rbp-84h]
  int v23; // [rsp+84h] [rbp-7Ch]
  __int64 v24; // [rsp+88h] [rbp-78h]
  __int64 v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+98h] [rbp-68h]
  __int64 v27; // [rsp+9Ch] [rbp-64h]
  __int64 v28; // [rsp+A4h] [rbp-5Ch]
  int v29; // [rsp+ACh] [rbp-54h]
  __m128 v30[4]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v31[4]; // [rsp+F0h] [rbp-10h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  sub_180099B50(a2, &v18);
  sub_180096550(v18);
  sub_18009655C(v18);
  sub_180096568(v18);
  v16 = 0LL;
  v17 = 0LL;
  result = (__int64)sub_180099B7C(a2, &v16, a3, 0);
  if ( v16 )
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
    sub_180083754(v6, (__int64)v30);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    v10 = 0LL;
    v11 = 0LL;
    v12 = *(_QWORD *)(a2 + 64);
    if ( v12 )
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)(v12 + 8);
        if ( !v13 )
          break;
        if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13) )
        {
          v10 = *(_QWORD *)(a2 + 56);
          v11 = *(volatile signed __int32 **)(a2 + 64);
          break;
        }
      }
    }
    sub_18008468C(v10, (__int64)v31);
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    v20 = 1065353216;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 1065353216;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 1065353216;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 1065353216;
    sub_1800B18A0(v30, &v20);
    sub_1800F5DAC(v16, &qword_18025C838, &v20);
    sub_1800F5DAC(v16, &qword_18025C858, v31);
    sub_1800F5E1C(v16, &qword_18025C878);
    sub_1800F5E1C(v16, &qword_18025C898);
    result = sub_1800F5E1C(v16, &qword_18025C8B8);
  }
  v14 = v17;
  if ( v17 )
  {
    result = (unsigned int)_InterlockedDecrement(v17 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = (unsigned int)_InterlockedDecrement(v14 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  v15 = v19;
  if ( v19 )
  {
    result = (unsigned int)_InterlockedDecrement(v19 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      result = (unsigned int)_InterlockedDecrement(v15 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return result;
}
