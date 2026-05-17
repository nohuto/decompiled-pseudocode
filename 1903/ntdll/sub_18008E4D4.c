/*
 * XREFs of sub_18008E4D4 @ 0x18008E4D4
 * Callers:
 *     _wcstoi64 @ 0x18008E470 (_wcstoi64.c)
 *     _wcstoui64 @ 0x18008E4A0 (_wcstoui64.c)
 * Callees:
 *     _errno @ 0x180084320 (_errno.c)
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_1800900E0 @ 0x1800900E0 (sub_1800900E0.c)
 *     sub_180094114 @ 0x180094114 (sub_180094114.c)
 */

unsigned __int64 __fastcall sub_18008E4D4(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 **a3,
        int a4,
        int a5,
        int *a6)
{
  int v6; // r14d
  unsigned __int16 v9; // bp
  unsigned __int16 *v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 i; // rcx
  int v13; // edi
  unsigned __int64 v14; // r13
  unsigned int v15; // ecx
  int v16; // ecx
  __int64 v17; // rdx
  unsigned __int16 *v18; // rbx
  int *v19; // rax
  unsigned __int64 result; // rax

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && (unsigned int)(a4 - 2) > 0x22 )
  {
    sub_18008C6D8();
    return 0LL;
  }
  v9 = *a2;
  v10 = a2 + 1;
  v11 = 0LL;
  for ( i = *a2; (unsigned int)sub_1800900E0(i, 8LL, 0LL); v9 = i )
  {
    do
      i = *v10++;
    while ( (_WORD)i == v9 );
  }
  v13 = a5;
  if ( v9 == 45 )
  {
    v13 = a5 | 2;
LABEL_13:
    v9 = *v10++;
    goto LABEL_14;
  }
  if ( v9 == 43 )
    goto LABEL_13;
LABEL_14:
  if ( v6 && (unsigned int)(v6 - 2) > 0x22 )
  {
    if ( a3 )
      *a3 = a2;
    return 0LL;
  }
  if ( v6 )
    goto LABEL_24;
  if ( !(unsigned int)sub_180094114(v9) )
  {
    if ( ((*v10 - 88) & 0xFFDF) != 0 )
    {
      v6 = 8;
      goto LABEL_28;
    }
    v6 = 16;
LABEL_24:
    if ( v6 == 16 && !(unsigned int)sub_180094114(v9) && ((*v10 - 88) & 0xFFDF) == 0 )
    {
      v9 = v10[1];
      v10 += 2;
    }
    goto LABEL_28;
  }
  v6 = 10;
LABEL_28:
  v14 = 0xFFFFFFFFFFFFFFFFuLL / v6;
  while ( 1 )
  {
    v15 = sub_180094114(v9);
    if ( v15 != -1 )
      goto LABEL_35;
    if ( (unsigned __int16)(v9 - 65) > 0x19u && (unsigned __int16)(v9 - 97) > 0x19u )
      break;
    v16 = v9 - 32;
    if ( (unsigned __int16)(v9 - 97) > 0x19u )
      v16 = v9;
    v15 = v16 - 55;
LABEL_35:
    if ( v15 >= v6 )
      break;
    v13 |= 8u;
    if ( v11 < v14 )
    {
      v17 = v15;
LABEL_45:
      v11 = v17 + v6 * v11;
      goto LABEL_46;
    }
    if ( v11 == v14 )
    {
      v17 = v15;
      if ( v15 <= 0xFFFFFFFFFFFFFFFFuLL % v6 )
        goto LABEL_45;
    }
    v13 |= 4u;
    if ( !a3 )
      break;
LABEL_46:
    v9 = *v10++;
  }
  v18 = v10 - 1;
  if ( (v13 & 8) != 0 )
  {
    if ( (v13 & 4) == 0 )
    {
      if ( (v13 & 1) != 0 )
        goto LABEL_58;
      if ( (v13 & 2) != 0 )
      {
        if ( v11 <= 0x8000000000000000uLL )
          goto LABEL_58;
      }
      else if ( v11 <= 0x7FFFFFFFFFFFFFFFLL )
      {
        goto LABEL_58;
      }
    }
    v19 = a6;
    if ( !a6 )
      v19 = errno();
    *v19 = 34;
    if ( (v13 & 1) != 0 )
      v11 = -1LL;
    else
      v11 = ((v13 & 2) != 0) + 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    if ( a3 )
      v18 = a2;
    v11 = 0LL;
  }
LABEL_58:
  if ( a3 )
    *a3 = v18;
  result = -(__int64)v11;
  if ( (v13 & 2) == 0 )
    return v11;
  return result;
}
