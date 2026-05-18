/*
 * XREFs of sub_1800C1DD4 @ 0x1800C1DD4
 * Callers:
 *     sub_1800C78DC @ 0x1800C78DC (sub_1800C78DC.c)
 *     sub_1800C7C20 @ 0x1800C7C20 (sub_1800C7C20.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_1800835E8 @ 0x1800835E8 (sub_1800835E8.c)
 *     sub_18008AD88 @ 0x18008AD88 (sub_18008AD88.c)
 *     sub_18008B420 @ 0x18008B420 (sub_18008B420.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800C1DD4(__int64 a1, _QWORD *a2, __int64 *a3)
{
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // rdi
  volatile signed __int32 *v7; // rdi
  volatile signed __int32 *v8; // rdi
  __int64 v10[5]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v11; // [rsp+48h] [rbp-38h] BYREF
  __int64 v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h] BYREF
  volatile signed __int32 *v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h] BYREF
  volatile signed __int32 *v16; // [rsp+70h] [rbp-10h]

  v10[4] = -2LL;
  v11 = a2;
  if ( !*a3 )
  {
LABEL_20:
    *a2 = 0LL;
    a2[1] = 0LL;
    return a2;
  }
  v15 = 0LL;
  v16 = 0LL;
  v10[2] = 0LL;
  v10[3] = 0LL;
  sub_18001110C(v10, (__int64)&unk_18026A090);
  sub_18008AD88(*a3, &v15, v10);
  if ( !v15 )
  {
LABEL_16:
    v8 = v16;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    goto LABEL_20;
  }
  v13 = 0LL;
  v14 = 0LL;
  sub_18008B420(v15, &v13);
  if ( !v13 )
  {
    v7 = v14;
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    goto LABEL_16;
  }
  v11 = 0LL;
  v12 = 0LL;
  sub_1800835E8(v13, &v11);
  *a2 = v11;
  a2[1] = v12;
  v11 = 0LL;
  v12 = 0LL;
  v5 = v14;
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = v16;
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a2;
}
