/*
 * XREFs of sub_18008B02C @ 0x18008B02C
 * Callers:
 *     sub_180089934 @ 0x180089934 (sub_180089934.c)
 *     sub_18008B2B0 @ 0x18008B2B0 (sub_18008B2B0.c)
 *     sub_18008B808 @ 0x18008B808 (sub_18008B808.c)
 *     sub_18008C058 @ 0x18008C058 (sub_18008C058.c)
 * Callees:
 *     sub_180063540 @ 0x180063540 (sub_180063540.c)
 *     sub_180083BA4 @ 0x180083BA4 (sub_180083BA4.c)
 *     sub_18008B530 @ 0x18008B530 (sub_18008B530.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008B02C(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  bool v9; // bp
  volatile signed __int32 *v10; // r14
  __int64 **v11; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v17; // rax
  volatile signed __int32 *v18; // rbx
  __int64 *v19; // [rsp+20h] [rbp-68h] BYREF
  volatile signed __int32 *v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h] BYREF
  volatile signed __int32 *v23; // [rsp+40h] [rbp-48h]

  v21 = -2LL;
  v19 = a3;
  sub_180063540(a1 + 16);
  v22 = 0LL;
  v23 = 0LL;
  sub_180083BA4(*a3, &v22);
  v6 = *(_QWORD **)(a1 + 88);
  v7 = (_QWORD *)*v6;
  while ( v7 != v6 )
  {
    v8 = (_QWORD *)sub_18008B530(v7[8], &v19);
    v9 = *v8 == v22;
    v10 = v20;
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    if ( v9 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      v17 = v7[9];
      if ( v17 )
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
      *a2 = v7[8];
      a2[1] = v7[9];
      v18 = v23;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        }
      }
      v15 = (volatile signed __int32 *)a3[1];
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            goto LABEL_23;
        }
      }
      return a2;
    }
    v11 = (__int64 **)v7[2];
    if ( *((_BYTE *)v11 + 25) )
    {
      for ( i = v7[1]; !*(_BYTE *)(i + 25) && v7 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v7 = (_QWORD *)i;
      v7 = (_QWORD *)i;
    }
    else
    {
      v7 = (_QWORD *)v7[2];
      for ( j = *v11; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v7 = j;
    }
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v14 = v23;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  v15 = (volatile signed __int32 *)a3[1];
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
LABEL_23:
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return a2;
}
