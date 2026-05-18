/*
 * XREFs of sub_180095FEC @ 0x180095FEC
 * Callers:
 *     sub_180095E9C @ 0x180095E9C (sub_180095E9C.c)
 * Callees:
 *     sub_18009648C @ 0x18009648C (sub_18009648C.c)
 *     sub_1800964BC @ 0x1800964BC (sub_1800964BC.c)
 *     sub_1800964EC @ 0x1800964EC (sub_1800964EC.c)
 *     sub_18009651C @ 0x18009651C (sub_18009651C.c)
 *     sub_180116CF8 @ 0x180116CF8 (sub_180116CF8.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180095FEC(_DWORD *a1, __int64 a2, char a3)
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
  int v18; // edi
  int v19; // ebx
  int v20; // eax
  volatile signed __int32 *v21; // rbx
  char v22; // [rsp+60h] [rbp-A0h]
  char v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v25; // [rsp+70h] [rbp-90h]
  __int128 v26; // [rsp+80h] [rbp-80h]
  char v27; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v28; // [rsp+98h] [rbp-68h]
  __int128 v29; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-40h]
  _QWORD *v32; // [rsp+C8h] [rbp-38h]
  __int128 *v33; // [rsp+D0h] [rbp-30h]
  _BYTE *v34; // [rsp+D8h] [rbp-28h]
  _BYTE *v35; // [rsp+E0h] [rbp-20h]
  _BYTE v36[8]; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v37; // [rsp+F0h] [rbp-10h]
  _BYTE v38[8]; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v39; // [rsp+100h] [rbp+0h]
  _BYTE v40[16]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v41[16]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v42[16]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v43[8]; // [rsp+138h] [rbp+38h] BYREF

  v31 = -2LL;
  result = (unsigned int)a1[75];
  v6 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v7 = result == 3;
    v8 = a1[72];
    v9 = v8 == 1;
    v26 = 0uLL;
    if ( v8 == 1 )
    {
      v10 = (__int64 *)sub_18009648C(a1, v38, 0LL);
      v11 = *v10;
      v24 = *v10;
      v25 = (volatile signed __int32 *)v10[1];
      *v10 = 0LL;
      v10[1] = 0LL;
      v12 = &v24;
    }
    else
    {
      v13 = (__int64 *)sub_18009648C(a1, v36, 0LL);
      v11 = *v13;
      v28 = (volatile signed __int32 *)v13[1];
      *v13 = 0LL;
      v13[1] = 0LL;
      v12 = (__int64 *)&v27;
      v6 = 12;
    }
    *(_QWORD *)&v26 = v11;
    *((_QWORD *)&v26 + 1) = v12[1];
    *v12 = 0LL;
    v12[1] = 0LL;
    if ( (v6 & 8) != 0 )
    {
      v6 &= ~8u;
      v22 = v6;
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          v14 = v28;
          (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        }
        v6 = v22;
      }
    }
    if ( (v6 & 4) != 0 )
    {
      v6 &= ~4u;
      v15 = v37;
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
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
      v23 = v6;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          v16 = v25;
          (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        }
        v6 = v23;
      }
    }
    if ( (v6 & 1) != 0 )
    {
      v17 = v39;
      if ( v39 )
      {
        if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        }
      }
    }
    v30 = 0LL;
    v32 = v43;
    v33 = &v29;
    v34 = v40;
    v35 = v41;
    v43[0] = &std::_Func_impl_no_alloc<_lambda_9efa4a2c9340d13d03e370e96d27cb0f_,void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,void *>::`vftable';
    v43[1] = a1;
    v43[7] = v43;
    v29 = v26;
    v26 = 0LL;
    v18 = sub_1800964BC(a1, v40, 0LL);
    v19 = sub_18009651C(a1, v41, 0LL);
    v20 = sub_1800964EC(a1, v42, 0LL);
    result = sub_180116CF8(v20, v19, v18, a1[30], (__int64)&v29, a1[28], v9, v7, a3, (__int64)v43, 0LL, (__int64)&v30);
    v21 = (volatile signed __int32 *)*((_QWORD *)&v30 + 1);
    if ( *((_QWORD *)&v30 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
        result = (unsigned int)_InterlockedDecrement(v21 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      }
    }
  }
  return result;
}
