/*
 * XREFs of sub_18008C220 @ 0x18008C220
 * Callers:
 *     sub_1800AF450 @ 0x1800AF450 (sub_1800AF450.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180063430 @ 0x180063430 (sub_180063430.c)
 *     sub_1800851D4 @ 0x1800851D4 (sub_1800851D4.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     sub_18008AD88 @ 0x18008AD88 (sub_18008AD88.c)
 *     sub_18008B420 @ 0x18008B420 (sub_18008B420.c)
 *     sub_1800AE970 @ 0x1800AE970 (sub_1800AE970.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18008C220(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, _QWORD *a5, __int64 a6)
{
  __int64 *v7; // r15
  volatile signed __int32 *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r12
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rsi
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rcx
  __int64 *v19; // r12
  __int64 *v20; // rsi
  __int64 v21; // r15
  __int64 v22; // rbx
  unsigned __int64 v23; // rdx
  __int64 *v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v28; // [rsp+30h] [rbp-99h] BYREF
  __int64 v29; // [rsp+38h] [rbp-91h]
  volatile signed __int32 *v30; // [rsp+40h] [rbp-89h]
  _QWORD *v31; // [rsp+48h] [rbp-81h]
  __int64 v32; // [rsp+50h] [rbp-79h]
  __int64 *v33; // [rsp+58h] [rbp-71h]
  __int64 v34[5]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v35; // [rsp+88h] [rbp-41h] BYREF
  volatile signed __int32 *v36; // [rsp+90h] [rbp-39h]
  __int64 v37; // [rsp+98h] [rbp-31h] BYREF
  volatile signed __int32 *v38; // [rsp+A0h] [rbp-29h]
  __int64 *v39; // [rsp+A8h] [rbp-21h]
  __int128 v40; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-9h]

  v34[4] = -2LL;
  v32 = a3;
  v7 = a2;
  v33 = a2;
  v39 = a2;
  v31 = a5;
  sub_180063430(a1 + 16);
  v28 = 0LL;
  v29 = 0LL;
  v34[2] = 0LL;
  v34[3] = 0LL;
  sub_18001110C(v34, (__int64)v7);
  sub_18008AD88(a1, &v28, v34);
  v9 = (volatile signed __int32 *)(v28 + 76);
  v30 = (volatile signed __int32 *)(v28 + 76);
  while ( _interlockedbittestandset(v9, 0) )
    v9 = v30;
  v10 = v28;
  if ( !*(_BYTE *)(v28 + 80) )
  {
    *v30 = 0;
    v11 = v29;
    if ( !v29 )
      return unknown_libname_116(v7);
    goto LABEL_29;
  }
  v12 = *(_QWORD *)(v28 + 96);
  v13 = a6 | v12 | sub_1800AE970(*a4);
  v14 = *sub_18008B420(v10, &v35);
  v15 = v36;
  if ( v36 )
  {
    if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
    v10 = v28;
  }
  if ( v14 )
  {
    v16 = *sub_18008B420(v10, &v37);
    v17 = v38;
    if ( v38 )
    {
      if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
    v40 = 0uLL;
    v41 = 0LL;
    (**(void (__fastcall ***)(_QWORD, __int128 *, __int64, _QWORD))*v31)(*v31, &v40, v16, *a4);
    v19 = (__int64 *)*((_QWORD *)&v40 + 1);
    v20 = (__int64 *)v40;
    if ( (_QWORD)v40 != *((_QWORD *)&v40 + 1) )
    {
      v21 = v32;
      do
      {
        v22 = *v20;
        sub_180087340(*v20);
        v18 = *a4;
        if ( (*(_QWORD *)(v22 + 448) & *(_QWORD *)(*a4 + 512LL)) == *(_QWORD *)(*a4 + 504LL) )
          sub_1800851D4(*v20, v13, v21, (__int64)a4);
        ++v20;
      }
      while ( v20 != v19 );
      v20 = (__int64 *)v40;
      v7 = v33;
    }
    if ( v20 )
    {
      v23 = (v41 - (_QWORD)v20) & 0xFFFFFFFFFFFFFFF8uLL;
      v24 = v20;
      if ( v23 >= 0x1000 )
      {
        v25 = v23 + 39;
        v20 = (__int64 *)*(v20 - 1);
        if ( (unsigned __int64)((char *)v24 - (char *)v20 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v18, v25);
          __debugbreak();
        }
      }
      j_j__o_free(v20);
      v40 = 0LL;
      v41 = 0LL;
    }
  }
  *v30 = 0;
  v11 = v29;
  if ( v29 )
  {
LABEL_29:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
    {
      v26 = v29;
      (**(void (__fastcall ***)(__int64))v29)(v29);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
    }
  }
  return unknown_libname_116(v7);
}
