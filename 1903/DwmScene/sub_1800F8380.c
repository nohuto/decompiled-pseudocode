/*
 * XREFs of sub_1800F8380 @ 0x1800F8380
 * Callers:
 *     sub_18008FE08 @ 0x18008FE08 (sub_18008FE08.c)
 *     sub_1800F74A8 @ 0x1800F74A8 (sub_1800F74A8.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_1800A44F8 @ 0x1800A44F8 (sub_1800A44F8.c)
 *     sub_1800A9304 @ 0x1800A9304 (sub_1800A9304.c)
 *     sub_1800F8A48 @ 0x1800F8A48 (sub_1800F8A48.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800F8380(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 *v8; // rax
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int128 v14; // [rsp+38h] [rbp-39h] BYREF
  __int64 v15[5]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v16; // [rsp+70h] [rbp-1h] BYREF
  volatile signed __int32 *v17; // [rsp+78h] [rbp+7h]
  __int128 v18; // [rsp+88h] [rbp+17h] BYREF

  v15[4] = -2LL;
  v6 = (_QWORD *)(a1 + 16 * ((int)a3 + 24LL));
  if ( *v6 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    v12 = v6[1];
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    *a2 = *v6;
    v11 = v6[1];
    goto LABEL_19;
  }
  v7 = a1 + 32 * ((int)a3 + 6LL);
  if ( !*(_QWORD *)(v7 + 16) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    return a2;
  }
  v18 = 0uLL;
  v15[2] = 0LL;
  v15[3] = 0LL;
  sub_18000F3F4(v15, v7);
  v8 = sub_1800A9304(*(_QWORD *)(a1 + 16), &v16);
  sub_1800A44F8(*v8, &v18, v15);
  v9 = v17;
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  if ( (_QWORD)v18 )
  {
    if ( *((_QWORD *)&v18 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL));
    v14 = v18;
    sub_1800F8A48(a1, a3, &v14);
    *a2 = v18;
    v11 = *((_QWORD *)&v18 + 1);
LABEL_19:
    a2[1] = v11;
    return a2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v10 = (volatile signed __int32 *)*((_QWORD *)&v18 + 1);
  if ( *((_QWORD *)&v18 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return a2;
}
