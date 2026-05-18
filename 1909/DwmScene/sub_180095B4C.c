/*
 * XREFs of sub_180095B4C @ 0x180095B4C
 * Callers:
 *     sub_180095E9C @ 0x180095E9C (sub_180095E9C.c)
 * Callees:
 *     sub_18009648C @ 0x18009648C (sub_18009648C.c)
 *     sub_1800964EC @ 0x1800964EC (sub_1800964EC.c)
 *     sub_18009651C @ 0x18009651C (sub_18009651C.c)
 *     sub_18011746C @ 0x18011746C (sub_18011746C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180095B4C(_DWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v6; // bl
  BOOL v7; // r14d
  int v8; // eax
  char v9; // r15
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rdi
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  int v18; // ebx
  int v19; // eax
  volatile signed __int32 *v20; // rbx
  char v21; // [rsp+60h] [rbp-A0h]
  char v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v24; // [rsp+70h] [rbp-90h]
  __int128 v25; // [rsp+80h] [rbp-80h]
  char v26; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v27; // [rsp+98h] [rbp-68h]
  __int128 v28; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v29; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-40h]
  _QWORD *v31; // [rsp+C8h] [rbp-38h]
  __int128 *v32; // [rsp+D0h] [rbp-30h]
  _BYTE *v33; // [rsp+D8h] [rbp-28h]
  _BYTE v34[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v35; // [rsp+E8h] [rbp-18h]
  _BYTE v36[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v37; // [rsp+F8h] [rbp-8h]
  _BYTE v38[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v39[16]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v40[8]; // [rsp+120h] [rbp+20h] BYREF

  v30 = -2LL;
  result = (unsigned int)a1[75];
  v6 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v7 = result == 3;
    v8 = a1[72];
    v9 = v8 == 1;
    v25 = 0uLL;
    if ( v8 == 1 )
    {
      v10 = (__int64 *)sub_18009648C(a1, v36, 0LL);
      v11 = *v10;
      v23 = *v10;
      v24 = (volatile signed __int32 *)v10[1];
      *v10 = 0LL;
      v10[1] = 0LL;
      v12 = &v23;
    }
    else
    {
      v13 = (__int64 *)sub_18009648C(a1, v34, 0LL);
      v11 = *v13;
      v27 = (volatile signed __int32 *)v13[1];
      *v13 = 0LL;
      v13[1] = 0LL;
      v12 = (__int64 *)&v26;
      v6 = 12;
    }
    *(_QWORD *)&v25 = v11;
    *((_QWORD *)&v25 + 1) = v12[1];
    *v12 = 0LL;
    v12[1] = 0LL;
    if ( (v6 & 8) != 0 )
    {
      v6 &= ~8u;
      v21 = v6;
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
        {
          v14 = v27;
          (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        }
        v6 = v21;
      }
    }
    if ( (v6 & 4) != 0 )
    {
      v6 &= ~4u;
      v15 = v35;
      if ( v35 )
      {
        if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        }
      }
    }
    if ( (v6 & 2) != 0 )
    {
      v6 &= ~2u;
      v22 = v6;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          v16 = v24;
          (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        }
        v6 = v22;
      }
    }
    if ( (v6 & 1) != 0 )
    {
      v17 = v37;
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        }
      }
    }
    v29 = 0LL;
    v31 = v40;
    v32 = &v28;
    v33 = v38;
    v40[0] = &std::_Func_impl_no_alloc<_lambda_103b285cfc42486861bff23c6b8dad0b_,void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::`vftable';
    v40[1] = a1;
    v40[7] = v40;
    v28 = v25;
    v25 = 0LL;
    v18 = sub_18009651C(a1, v38, 0LL);
    v19 = sub_1800964EC(a1, v39, 0LL);
    result = sub_18011746C(v19, v18, a1[30], (unsigned int)&v28, a1[28], v9, v7, a3, (__int64)v40, 0LL, (__int64)&v29);
    v20 = (volatile signed __int32 *)*((_QWORD *)&v29 + 1);
    if ( *((_QWORD *)&v29 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
        result = (unsigned int)_InterlockedDecrement(v20 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
  }
  return result;
}
