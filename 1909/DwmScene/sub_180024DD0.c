/*
 * XREFs of sub_180024DD0 @ 0x180024DD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000D790 (_guard_check_icall_nop.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_180065720 @ 0x180065720 (sub_180065720.c)
 *     sub_18006CF04 @ 0x18006CF04 (sub_18006CF04.c)
 *     sub_18006CF84 @ 0x18006CF84 (sub_18006CF84.c)
 *     sub_18009EC2C @ 0x18009EC2C (sub_18009EC2C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180024DD0(__int64 a1, int a2)
{
  int v3; // r14d
  __int64 result; // rax
  unsigned int i; // r12d
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rsi
  __int64 v8; // rax
  volatile signed __int32 *v9; // rcx
  __int64 *v10; // r15
  volatile signed __int32 *v11; // rax
  __int64 v12; // r15
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // rbx
  volatile signed __int32 *v19; // rbx
  unsigned int v20; // [rsp+38h] [rbp-99h]
  volatile signed __int32 *v21; // [rsp+48h] [rbp-89h]
  __int64 v22; // [rsp+50h] [rbp-81h]
  _DWORD v23[2]; // [rsp+58h] [rbp-79h] BYREF
  __int64 v24; // [rsp+60h] [rbp-71h] BYREF
  volatile signed __int32 *v25; // [rsp+68h] [rbp-69h]
  __int128 v26; // [rsp+70h] [rbp-61h] BYREF
  __int64 v27; // [rsp+80h] [rbp-51h]
  volatile signed __int32 *v28; // [rsp+88h] [rbp-49h]
  __int64 v29; // [rsp+90h] [rbp-41h]
  _BYTE v30[8]; // [rsp+98h] [rbp-39h] BYREF
  __int64 *v31; // [rsp+A0h] [rbp-31h] BYREF
  volatile signed __int32 *v32; // [rsp+A8h] [rbp-29h]
  __int64 v33; // [rsp+B0h] [rbp-21h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-19h]

  v29 = -2LL;
  v3 = 0;
  *(_DWORD *)(a1 + 416) = a2;
  result = sub_18006CF84(a1);
  v20 = result;
  for ( i = 0; i < v20; ++i )
  {
    v31 = 0LL;
    v32 = 0LL;
    sub_18006CF04(a1, &v31, i);
    v33 = 0LL;
    v34 = 0LL;
    sub_1800632D0(v31 + 1, &v33);
    (*(void (__fastcall **)(__int64 *))(*v31 + 112))(v31);
    (*(void (__fastcall **)(__int64 *))(*v31 + 120))(v31);
    v27 = 0LL;
    v28 = 0LL;
    v6 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*v31 + 152))(v31);
    v7 = (volatile signed __int32 *)v6[1];
    if ( v7 )
    {
      _InterlockedIncrement(v7 + 2);
      v7 = (volatile signed __int32 *)v6[1];
    }
    v8 = *v6;
    v27 = v8;
    v28 = v7;
    if ( v8 )
    {
      v9 = *(volatile signed __int32 **)(v8 + 464);
      if ( v9 )
      {
        _InterlockedIncrement(v9 + 2);
        v9 = *(volatile signed __int32 **)(v8 + 464);
      }
      v24 = *(_QWORD *)(v8 + 456);
      v25 = v9;
      v10 = &v24;
      v3 |= 1u;
    }
    else
    {
      v26 = 0LL;
      v10 = (__int64 *)&v26;
      v3 |= 2u;
    }
    v11 = (volatile signed __int32 *)v10[1];
    if ( v11 )
      _InterlockedIncrement(v11 + 2);
    v12 = *v10;
    v21 = v11;
    if ( (v3 & 2) != 0 )
    {
      v3 &= ~2u;
      if ( *((_QWORD *)&v26 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v26 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v13 = *((_QWORD *)&v26 + 1);
          (***((void (__fastcall ****)(_QWORD))&v26 + 1))(*((_QWORD *)&v26 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v26 + 1) + 8LL))(*((_QWORD *)&v26 + 1));
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v3 &= ~1u;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          v14 = v25;
          (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        }
      }
    }
    v22 = 0LL;
    if ( v12 )
    {
      v15 = *(_QWORD *)(v12 + 136);
      if ( v15 )
      {
        v16 = (__int64 *)sub_18009EC2C(v15, v30);
      }
      else
      {
        v23[0] = 0;
        v23[1] = 0;
        v16 = (__int64 *)v23;
      }
      v22 = *v16;
    }
    v17 = v31;
    v18 = *v31;
    (*(void (__fastcall **)(__int64 *))(*v31 + 104))(v31);
    (*(void (__fastcall **)(__int64 *))(*v17 + 96))(v17);
    result = (*(__int64 (__fastcall **)(__int64 *))(v18 + 56))(v17);
    if ( v12 )
      result = sub_180065720(v12, v22);
    if ( v21 )
    {
      result = (unsigned int)_InterlockedDecrement(v21 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
        result = (unsigned int)_InterlockedDecrement(v21 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      }
    }
    if ( v7 )
    {
      result = (unsigned int)_InterlockedDecrement(v7 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        result = (unsigned int)_InterlockedDecrement(v7 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    if ( (_BYTE)v34 )
      result = sub_180063778(v33);
    v19 = v32;
    if ( v32 )
    {
      result = (unsigned int)_InterlockedDecrement(v32 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        result = (unsigned int)_InterlockedDecrement(v19 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
  }
  return result;
}
