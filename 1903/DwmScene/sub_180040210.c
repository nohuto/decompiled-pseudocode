/*
 * XREFs of sub_180040210 @ 0x180040210
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_1800264C4 @ 0x1800264C4 (sub_1800264C4.c)
 *     sub_18003FF34 @ 0x18003FF34 (sub_18003FF34.c)
 *     sub_18004046C @ 0x18004046C (sub_18004046C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180040210(__int64 a1)
{
  __int64 v2; // rcx
  __int64 **v3; // r14
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 **v6; // rcx
  __int64 i; // rcx
  __int64 *j; // r8
  _QWORD *v9; // rdi
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 *v12; // rax
  volatile signed __int32 *v13; // rcx
  volatile signed __int32 *v14; // rbx
  __int64 *v15; // rbx
  __int64 **v16; // rax
  __int64 *v17; // r8
  __int64 *n; // rax
  __int64 *ii; // rcx
  __int64 *k; // rax
  __int64 *m; // rdx
  _BYTE *v23; // [rsp+20h] [rbp-40h] BYREF
  volatile signed __int32 *v24; // [rsp+28h] [rbp-38h]
  __int64 v25; // [rsp+30h] [rbp-30h]
  __int64 v26; // [rsp+38h] [rbp-28h] BYREF
  __int64 v27[3]; // [rsp+40h] [rbp-20h] BYREF

  v25 = -2LL;
  v2 = *(_QWORD *)(a1 + 536);
  if ( !v2 )
    return 0;
  v3 = (__int64 **)(a1 + 552);
  v4 = *(_QWORD **)(a1 + 552);
  v5 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 != v4 )
  {
    do
    {
      *(_BYTE *)v5[5] = 0;
      v6 = (__int64 **)v5[2];
      if ( *((_BYTE *)v6 + 25) )
      {
        for ( i = v5[1]; !*(_BYTE *)(i + 25) && v5 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v5 = (_QWORD *)i;
        v5 = (_QWORD *)i;
      }
      else
      {
        v5 = (_QWORD *)v5[2];
        for ( j = *v6; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v5 = j;
      }
    }
    while ( v5 != v4 );
    v2 = *(_QWORD *)(a1 + 536);
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 16LL))(v2, v27);
  v9 = (_QWORD *)v27[0];
  v10 = v27[1];
  while ( v9 != (_QWORD *)v10 )
  {
    v23 = 0LL;
    v24 = 0LL;
    v11 = (**(__int64 (__fastcall ***)(_QWORD))*v9)(*v9);
    v12 = sub_18003FF34(a1, v11);
    v13 = (volatile signed __int32 *)v12[1];
    if ( v13 )
    {
      _InterlockedIncrement(v13 + 2);
      v13 = (volatile signed __int32 *)v12[1];
    }
    v23 = (_BYTE *)*v12;
    v24 = v13;
    *v23 = 1;
    sub_18004046C(a1, v9, &v23);
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
      {
        v14 = v24;
        (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
      }
    }
    v9 += 2;
  }
  sub_180011388(v27);
  v15 = (__int64 *)**v3;
  while ( v15 != *v3 )
  {
    v16 = (__int64 **)v15[2];
    if ( *(_BYTE *)v15[5] )
    {
      if ( *((_BYTE *)v16 + 25) )
      {
        for ( k = (__int64 *)v15[1]; !*((_BYTE *)k + 25) && v15 == (__int64 *)k[2]; k = (__int64 *)k[1] )
          v15 = k;
        v15 = k;
      }
      else
      {
        v15 = (__int64 *)v15[2];
        for ( m = *v16; !*((_BYTE *)m + 25); m = (__int64 *)*m )
          v15 = m;
      }
    }
    else
    {
      v17 = v15;
      if ( *((_BYTE *)v16 + 25) )
      {
        for ( n = (__int64 *)v15[1]; !*((_BYTE *)n + 25) && v15 == (__int64 *)n[2]; n = (__int64 *)n[1] )
          v15 = n;
        v15 = n;
      }
      else
      {
        v15 = (__int64 *)v15[2];
        for ( ii = *v16; !*((_BYTE *)ii + 25); ii = (__int64 *)*ii )
          v15 = ii;
      }
      sub_1800264C4((_QWORD *)(a1 + 552), &v26, v17);
    }
  }
  return 1;
}
