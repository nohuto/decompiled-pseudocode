/*
 * XREFs of sub_18002A408 @ 0x18002A408
 * Callers:
 *     sub_180029EA0 @ 0x180029EA0 (sub_180029EA0.c)
 * Callees:
 *     sub_180020AB0 @ 0x180020AB0 (sub_180020AB0.c)
 *     sub_180027520 @ 0x180027520 (sub_180027520.c)
 *     sub_1800275C4 @ 0x1800275C4 (sub_1800275C4.c)
 *     sub_180029C3C @ 0x180029C3C (sub_180029C3C.c)
 *     sub_18002BB04 @ 0x18002BB04 (sub_18002BB04.c)
 *     sub_18002BC94 @ 0x18002BC94 (sub_18002BC94.c)
 *     sub_18002BDB0 @ 0x18002BDB0 (sub_18002BDB0.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

void __fastcall sub_18002A408(__int64 a1)
{
  int v2; // ecx
  signed int v3; // esi
  __int64 **v4; // r15
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 **v14; // rax
  unsigned __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // r9
  __int64 *v18; // rax
  __int64 **v19; // rcx
  __int64 *i; // rcx
  unsigned __int64 v21; // rcx
  __int64 **v22; // rax
  unsigned __int64 v23; // rdx
  __int64 *v24; // r8
  __int64 *v25; // r9
  __int64 *v26; // rax
  __int64 **v27; // rcx
  __int64 *j; // rcx
  unsigned __int64 v29; // rdx
  __int64 **v30; // rax
  __int64 *v31; // r8
  __int64 *v32; // r9
  unsigned __int64 v33; // rdx
  __int64 *v34; // rax
  __int64 **v35; // rcx
  __int64 *k; // rcx
  __int64 v37; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v38; // [rsp+28h] [rbp-58h] BYREF
  __int64 v39; // [rsp+30h] [rbp-50h] BYREF
  __int64 v40; // [rsp+38h] [rbp-48h] BYREF
  __int64 v41; // [rsp+40h] [rbp-40h] BYREF
  __int64 v42; // [rsp+50h] [rbp-30h] BYREF
  __int64 v43; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v44; // [rsp+70h] [rbp-10h] BYREF

  v2 = *(_DWORD *)(a1 + 1640);
  if ( !v2 )
    return;
  v3 = (*(_DWORD *)(a1 + 1644) - v2 + 21) % 0x14u;
  v4 = (__int64 **)(a1 + 1648);
  do
  {
    v5 = *(_DWORD *)(56LL * v3 + a1 + 536);
    v44 = v5;
    if ( sub_18002BB04(a1 + 1648, &v44) )
    {
      sub_1800275C4((__int64 **)(a1 + 1648), (__int64)&v41, &v44);
      sub_180029C3C(a1, &v39, *(_DWORD *)(v41 + 44));
      v6 = v39;
      if ( v39 <= 0 )
        break;
      sub_180027520((__int64 **)(a1 + 1680), (__int64)&v42, &v44);
      v7 = v42;
      goto LABEL_21;
    }
    v8 = *v4;
    v9 = *v4;
    v10 = (*v4)[1];
    while ( !*(_BYTE *)(v10 + 25) )
    {
      if ( *(_DWORD *)(v10 + 32) >= v5 )
      {
        v8 = (__int64 *)v10;
        v10 = *(_QWORD *)v10;
      }
      else
      {
        v10 = *(_QWORD *)(v10 + 16);
      }
    }
    v38 = v8;
    if ( v8 == (__int64 *)*v9 )
      break;
    sub_180020AB0(&v38);
    v11 = v9[1];
    if ( *(_BYTE *)(v11 + 25) )
      break;
    do
    {
      if ( v5 >= *(_DWORD *)(v11 + 32) )
      {
        v11 = *(_QWORD *)(v11 + 16);
      }
      else
      {
        v9 = (__int64 *)v11;
        v11 = *(_QWORD *)v11;
      }
    }
    while ( !*(_BYTE *)(v11 + 25) );
    if ( v9 == *(__int64 **)(a1 + 1648) )
      break;
    v12 = v38;
    sub_180029C3C(a1, &v40, *((_DWORD *)v38 + 11));
    sub_180029C3C(a1, &v37, *((_DWORD *)v9 + 11));
    if ( v40 <= 0 || v37 <= 0 )
      break;
    v6 = v40
       + (int)(v44 - *((_DWORD *)v12 + 8)) * ((v37 - v40) / (unsigned int)(*((_DWORD *)v9 + 8) - *((_DWORD *)v12 + 8)));
    sub_180027520((__int64 **)(a1 + 1680), (__int64)&v43, &v44);
    v7 = v43;
LABEL_21:
    *(_QWORD *)(v7 + 40) = v6;
    --*(_DWORD *)(a1 + 1640);
    v3 = (v3 + 1) % 0x14u;
  }
  while ( *(_DWORD *)(a1 + 1640) );
  v13 = *(_QWORD *)(a1 + 1656);
  if ( v13 > 0x14 )
  {
    v14 = *(__int64 ***)(a1 + 1648);
    v15 = v13 - 20;
    v16 = *v14;
    v17 = *v14;
    v18 = *v14;
    do
    {
      v19 = (__int64 **)v17[2];
      if ( *((_BYTE *)v19 + 25) )
      {
        while ( 1 )
        {
          v17 = (__int64 *)v17[1];
          if ( *((_BYTE *)v17 + 25) || v18 != (__int64 *)v17[2] )
            break;
          v18 = v17;
        }
      }
      else
      {
        v17 = (__int64 *)v17[2];
        for ( i = *v19; !*((_BYTE *)i + 25); i = (__int64 *)*i )
          v17 = i;
      }
      v18 = v17;
      --v15;
    }
    while ( v15 );
    sub_18002BDB0(a1 + 1648, &v37, v16);
  }
  v21 = *(_QWORD *)(a1 + 1672);
  if ( v21 > 0x14 )
  {
    v22 = *(__int64 ***)(a1 + 1664);
    v23 = v21 - 20;
    v24 = *v22;
    v25 = *v22;
    v26 = *v22;
    do
    {
      v27 = (__int64 **)v25[2];
      if ( *((_BYTE *)v27 + 25) )
      {
        while ( 1 )
        {
          v25 = (__int64 *)v25[1];
          if ( *((_BYTE *)v25 + 25) || v26 != (__int64 *)v25[2] )
            break;
          v26 = v25;
        }
      }
      else
      {
        v25 = (__int64 *)v25[2];
        for ( j = *v27; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v25 = j;
      }
      v26 = v25;
      --v23;
    }
    while ( v23 );
    sub_18002BC94(a1 + 1664, &v37, v24);
  }
  v29 = *(_QWORD *)(a1 + 1688);
  if ( v29 > 0x14 )
  {
    v30 = *(__int64 ***)(a1 + 1680);
    v31 = *v30;
    v32 = *v30;
    v33 = v29 - 20;
    if ( v33 )
    {
      v34 = *v30;
      do
      {
        v35 = (__int64 **)v32[2];
        if ( *((_BYTE *)v35 + 25) )
        {
          while ( 1 )
          {
            v32 = (__int64 *)v32[1];
            if ( *((_BYTE *)v32 + 25) || v34 != (__int64 *)v32[2] )
              break;
            v34 = v32;
          }
        }
        else
        {
          v32 = (__int64 *)v32[2];
          for ( k = *v35; !*((_BYTE *)k + 25); k = (__int64 *)*k )
            v32 = k;
        }
        v34 = v32;
        --v33;
      }
      while ( v33 );
    }
    sub_18002BC94(a1 + 1680, &v37, v31);
  }
}
