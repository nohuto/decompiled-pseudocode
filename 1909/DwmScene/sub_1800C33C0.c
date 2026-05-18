/*
 * XREFs of sub_1800C33C0 @ 0x1800C33C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FC30 @ 0x18000FC30 (sub_18000FC30.c)
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     sub_1800739B4 @ 0x1800739B4 (sub_1800739B4.c)
 *     sub_180078228 @ 0x180078228 (sub_180078228.c)
 *     sub_1800813F0 @ 0x1800813F0 (sub_1800813F0.c)
 *     sub_1800A5238 @ 0x1800A5238 (sub_1800A5238.c)
 *     sub_1800A527C @ 0x1800A527C (sub_1800A527C.c)
 *     sub_1800BB128 @ 0x1800BB128 (sub_1800BB128.c)
 *     sub_1800BB1FC @ 0x1800BB1FC (sub_1800BB1FC.c)
 *     sub_1800BC6B0 @ 0x1800BC6B0 (sub_1800BC6B0.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800C33C0(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int128 v17; // [rsp+38h] [rbp-89h] BYREF
  __int128 v18; // [rsp+48h] [rbp-79h] BYREF
  __int64 v19; // [rsp+58h] [rbp-69h]
  __int128 v20; // [rsp+60h] [rbp-61h] BYREF
  __int64 v21; // [rsp+70h] [rbp-51h]
  __int64 *v22; // [rsp+78h] [rbp-49h] BYREF
  __int64 *v23; // [rsp+80h] [rbp-41h]
  __int64 v24; // [rsp+88h] [rbp-39h]
  __int128 v25; // [rsp+90h] [rbp-31h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-21h]
  __int64 *v27; // [rsp+A8h] [rbp-19h] BYREF
  __int64 *v28; // [rsp+B0h] [rbp-11h]
  __int64 v29; // [rsp+B8h] [rbp-9h]

  v19 = -2LL;
  result = a3[1];
  if ( *a3 != result )
  {
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    sub_1800739B4(&v27, a3);
    sub_1800813F0(v27, v28, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1800BF850);
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    sub_1800BB128(*a2, (__int64 *)&v22);
    sub_1800813F0(v22, v23, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1800BF850);
    v20 = 0LL;
    v21 = 0LL;
    v10 = v22;
    v11 = v23;
    if ( v22 != v23 )
    {
      v9 = *((_QWORD *)&v20 + 1);
      do
      {
        if ( (*(_DWORD *)(*v10 + 440) & 0x200) != 0 )
        {
          if ( v21 == v9 )
          {
            sub_18000FC30((char **)&v20, (char *)v9, v10);
            v9 = *((_QWORD *)&v20 + 1);
          }
          else
          {
            *(_QWORD *)v9 = 0LL;
            *(_QWORD *)(v9 + 8) = 0LL;
            v12 = v10[1];
            if ( v12 )
              _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
            *(_QWORD *)v9 = *v10;
            *(_QWORD *)(v9 + 8) = v10[1];
            v9 = *((_QWORD *)&v20 + 1) + 16LL;
            *((_QWORD *)&v20 + 1) += 16LL;
          }
        }
        v10 += 2;
      }
      while ( v10 != v11 );
    }
    v13 = sub_1800BB1FC(*a2, v9);
    v25 = 0LL;
    v26 = 0LL;
    sub_1800BC6B0(&v25, (char *)(v13 + 136), (char *)(v13 + 184));
    v14 = sub_180078228(a1);
    v17 = 0LL;
    sub_1800A5238(v14, (__int64)&qword_18025D178, &v17);
    v15 = (volatile signed __int32 *)*((_QWORD *)&v17 + 1);
    if ( *((_QWORD *)&v17 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    v18 = 0LL;
    sub_1800A527C(v14, (__int64)&qword_18025D178, &v18);
    v16 = (volatile signed __int32 *)*((_QWORD *)&v18 + 1);
    if ( *((_QWORD *)&v18 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, a2, a4, a5);
    (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, &v25, a4, a5);
    (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, &v20, a4, a5);
    (*(void (__fastcall **)(__int64, __int64 **, __int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, &v27, a4, a5);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, a2, a4, a5);
    sub_1800113D8((__int64 *)&v25);
    sub_1800113D8((__int64 *)&v20);
    sub_1800113D8((__int64 *)&v22);
    return sub_1800113D8((__int64 *)&v27);
  }
  return result;
}
