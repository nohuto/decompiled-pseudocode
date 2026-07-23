/*
 * XREFs of ResourceEntryBinarySearch @ 0x18003DE8C
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18003D2E8 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrpCompareResourceNamesWithValidation @ 0x18009EF8C (LdrpCompareResourceNamesWithValidation.c)
 */

char __fastcall ResourceEntryBinarySearch(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int16 v11; // di
  __int64 v13; // rbp
  unsigned __int64 v14; // r8
  unsigned __int16 v15; // r12
  char v16; // di
  unsigned __int64 v17; // r13
  int v18; // eax
  bool v19; // zf
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  bool v23; // cc
  int v24; // eax
  __int64 v25; // [rsp+78h] [rbp+10h]
  char v26; // [rsp+80h] [rbp+18h] BYREF

  v25 = a2;
  v8 = 0LL;
  v9 = a5;
  v11 = a3;
  v13 = 0LL;
  *a7 = 0LL;
  v14 = v9 - 8 + 8LL * a3;
  a5 = v14;
  *a8 = 0LL;
  while ( 1 )
  {
    if ( v9 > v14 )
      goto LABEL_14;
    v15 = v11 >> 1;
    if ( !(v11 >> 1) )
      break;
    v16 = v11 & 1;
    v17 = v9 + 8LL * v15;
    if ( !v16 )
      v17 -= 8LL;
    v18 = LdrpCompareResourceNamesWithValidation(a1, a2, a6, a4, v17, &v26);
    if ( !v26 )
      return 0;
    if ( !v18 )
    {
      v21 = *(unsigned int *)(v17 + 4);
      v22 = (a1 & 0xFFFFFFFFFFFFFFFCuLL) + v25;
      if ( (int)v21 >= 0 )
      {
        v13 = v21 + a4;
        v23 = v21 + a4 <= v22;
        goto LABEL_22;
      }
LABEL_21:
      LODWORD(v21) = v21 & 0x7FFFFFFF;
      v8 = v21 + a4;
      v23 = v21 + a4 <= v22;
LABEL_22:
      if ( v23 )
        goto LABEL_14;
      return 0;
    }
    if ( v18 >= 0 )
    {
      v14 = a5;
      v9 = v17 + 8;
      v11 = v15;
    }
    else
    {
      v14 = v17 - 8;
      v19 = v16 == 0;
      a5 = v17 - 8;
      v11 = v15;
      if ( v19 )
        v11 = v15 - 1;
    }
    a2 = v25;
  }
  if ( !v11 )
    goto LABEL_14;
  v24 = LdrpCompareResourceNamesWithValidation(a1, a2, a6, a4, v9, &v26);
  if ( v26 )
  {
    if ( v24 )
      goto LABEL_14;
    v21 = *(unsigned int *)(v9 + 4);
    v22 = (a1 & 0xFFFFFFFFFFFFFFFCuLL) + v25;
    if ( (int)v21 < 0 )
      goto LABEL_21;
    v13 = v21 + a4;
    if ( v21 + a4 <= v22 )
    {
LABEL_14:
      *a7 = v8;
      *a8 = v13;
      return 1;
    }
  }
  return 0;
}
