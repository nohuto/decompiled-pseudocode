/*
 * XREFs of sub_18009581C @ 0x18009581C
 * Callers:
 *     sub_180095E9C @ 0x180095E9C (sub_180095E9C.c)
 * Callees:
 *     sub_18009648C @ 0x18009648C (sub_18009648C.c)
 *     sub_1800964EC @ 0x1800964EC (sub_1800964EC.c)
 *     sub_1801167D4 @ 0x1801167D4 (sub_1801167D4.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18009581C(_DWORD *a1)
{
  __int64 result; // rax
  char v3; // bl
  BOOL v4; // r14d
  int v5; // eax
  char v6; // r15
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 *v10; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rdi
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  int v15; // eax
  volatile signed __int32 *v16; // rbx
  char v17; // [rsp+58h] [rbp-B0h]
  char v18; // [rsp+58h] [rbp-B0h]
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  volatile signed __int32 *v20; // [rsp+68h] [rbp-A0h]
  __int128 v21; // [rsp+78h] [rbp-90h]
  char v22; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v23; // [rsp+90h] [rbp-78h]
  __int128 v24; // [rsp+98h] [rbp-70h] BYREF
  __int128 v25; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-50h]
  _QWORD *v27; // [rsp+C0h] [rbp-48h]
  __int128 *v28; // [rsp+C8h] [rbp-40h]
  _BYTE v29[8]; // [rsp+D0h] [rbp-38h] BYREF
  volatile signed __int32 *v30; // [rsp+D8h] [rbp-30h]
  _BYTE v31[8]; // [rsp+E0h] [rbp-28h] BYREF
  volatile signed __int32 *v32; // [rsp+E8h] [rbp-20h]
  _BYTE v33[16]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v34[8]; // [rsp+100h] [rbp-8h] BYREF

  v26 = -2LL;
  result = (unsigned int)a1[75];
  v3 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v4 = result == 3;
    v5 = a1[72];
    v6 = v5 == 1;
    v21 = 0uLL;
    if ( v5 == 1 )
    {
      v7 = (__int64 *)sub_18009648C(a1, v31, 0LL);
      v8 = *v7;
      v19 = *v7;
      v20 = (volatile signed __int32 *)v7[1];
      *v7 = 0LL;
      v7[1] = 0LL;
      v9 = &v19;
    }
    else
    {
      v10 = (__int64 *)sub_18009648C(a1, v29, 0LL);
      v8 = *v10;
      v23 = (volatile signed __int32 *)v10[1];
      *v10 = 0LL;
      v10[1] = 0LL;
      v9 = (__int64 *)&v22;
      v3 = 12;
    }
    *(_QWORD *)&v21 = v8;
    *((_QWORD *)&v21 + 1) = v9[1];
    *v9 = 0LL;
    v9[1] = 0LL;
    if ( (v3 & 8) != 0 )
    {
      v3 &= ~8u;
      v17 = v3;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          v11 = v23;
          (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        }
        v3 = v17;
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v3 &= ~4u;
      v12 = v30;
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        }
      }
    }
    if ( (v3 & 2) != 0 )
    {
      v3 &= ~2u;
      v18 = v3;
      if ( v20 )
      {
        if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
        {
          v13 = v20;
          (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        }
        v3 = v18;
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v14 = v32;
      if ( v32 )
      {
        if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        }
      }
    }
    v25 = 0LL;
    v27 = v34;
    v28 = &v24;
    v34[0] = &std::_Func_impl_no_alloc<_lambda_40b1dd479d31786ade467a7674a1a787_,void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::`vftable';
    v34[1] = a1;
    v34[7] = v34;
    v24 = v21;
    v21 = 0LL;
    v15 = sub_1800964EC(a1, v33, 0LL);
    result = sub_1801167D4(v15, a1[30], (unsigned int)&v24, a1[28], v6, v4, (__int64)v34, 0LL, (__int64)&v25);
    v16 = (volatile signed __int32 *)*((_QWORD *)&v25 + 1);
    if ( *((_QWORD *)&v25 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        result = (unsigned int)_InterlockedDecrement(v16 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
  }
  return result;
}
