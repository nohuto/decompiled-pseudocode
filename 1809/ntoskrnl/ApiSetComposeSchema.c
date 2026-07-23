/*
 * XREFs of ApiSetComposeSchema @ 0x140322008
 * Callers:
 *     ApiSetpLoadSchemaExtension @ 0x1408DEAD8 (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x140173FB8 (ApiSetpSearchForApiSet.c)
 *     AsiAddDataToSchema @ 0x14032230C (AsiAddDataToSchema.c)
 *     AsiSortValueList @ 0x140322438 (AsiSortValueList.c)
 */

__int64 __fastcall ApiSetComposeSchema(char **a1, __int64 a2, _DWORD *a3, int a4)
{
  char *v4; // r9
  __int64 v7; // r15
  char *v8; // rcx
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // r8
  char *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  const WCHAR *v15; // rdx
  _WORD *v16; // rcx
  unsigned __int16 v17; // ax
  char *v18; // r12
  _DWORD *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r12
  __int64 result; // rax
  char *v23; // rcx
  char *v24; // r8
  int v25; // [rsp+30h] [rbp-40h] BYREF
  int v26; // [rsp+34h] [rbp-3Ch]
  int v27; // [rsp+38h] [rbp-38h]
  int v28; // [rsp+3Ch] [rbp-34h] BYREF
  char *v29; // [rsp+40h] [rbp-30h]
  char *v30; // [rsp+48h] [rbp-28h]
  __int64 v31; // [rsp+50h] [rbp-20h] BYREF
  __int64 v32; // [rsp+58h] [rbp-18h]
  unsigned int v33; // [rsp+60h] [rbp-10h]
  unsigned int v34; // [rsp+B0h] [rbp+40h]
  int v36; // [rsp+C8h] [rbp+58h] BYREF

  v36 = a4;
  v4 = *a1;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0;
  if ( *(_DWORD *)v4 < 5u || *a3 < 5u )
    return 3221225659LL;
  if ( (*((_DWORD *)v4 + 2) & 1) != 0 || !*((_DWORD *)v4 + 3) || !a3[3] )
    return 3221225485LL;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (char *)a3 + (unsigned int)a3[4];
    v9 = 0;
    v30 = v8;
    v25 = 0;
    v29 = (char *)a3 + *(unsigned int *)&v8[24 * v7 + 4];
    v34 = *(_DWORD *)&v8[24 * v7 + 8];
    v10 = 0LL;
    v26 = 0;
    if ( *(_DWORD *)&v8[24 * v7 + 20] )
      break;
LABEL_30:
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= a3[3] )
      return 0LL;
  }
  while ( 1 )
  {
    v11 = 5 * v10;
    v12 = (char *)a3 + *(unsigned int *)&v8[24 * v7 + 16];
    v13 = *(unsigned int *)&v12[20 * v10 + 12];
    v14 = *(unsigned int *)&v12[20 * v10 + 16];
    v15 = (const WCHAR *)((char *)a3 + v13);
    v16 = (_WORD *)((char *)v15 + v14);
    do
    {
      if ( (unsigned int)v14 <= 1 )
        break;
      LODWORD(v14) = v14 - 2;
      --v16;
    }
    while ( *v16 != 45 );
    v17 = (unsigned __int16)v14 >> 1;
    if ( !v17 )
      return 3221226626LL;
    v18 = *a1;
    v27 = *(_DWORD *)&v12[4 * v11 + 4];
    v19 = (_DWORD *)ApiSetpSearchForApiSet(v18, v15, v17);
    v20 = (__int64)v19;
    if ( !v19 )
      return 3221226626LL;
    v21 = ((char *)v19 - *((unsigned int *)v18 + 4) - v18) / 24;
    if ( (*v19 & 1) == 0 )
    {
      if ( !v9 )
      {
        result = AsiAddDataToSchema(a1, a2, v29, v34, &v25, &v36);
        if ( (int)result < 0 )
          return result;
        v9 = v25;
        if ( (_BYTE)v36 )
          v20 = (__int64)&(*a1)[24 * (unsigned int)v21 + *((unsigned int *)*a1 + 4)];
      }
      if ( !*(_DWORD *)(v20 + 20) )
        return 3221225485LL;
      v23 = &(*a1)[*(unsigned int *)(v20 + 16)];
      if ( *((_DWORD *)v23 + 4) && v27 )
      {
        v24 = &(*a1)[*(unsigned int *)(v20 + 16)];
        *((_DWORD *)v23 + 2) = v34;
        *((_DWORD *)v23 + 1) = v9;
        result = AsiAddDataToSchema(a1, a2, v24, (unsigned int)(20 * *(_DWORD *)(v20 + 20)), &v28, &v36);
        if ( (int)result < 0 )
          return result;
        if ( (_BYTE)v36 )
          v20 = (__int64)&(*a1)[24 * (unsigned int)v21 + *((unsigned int *)*a1 + 4)];
        *(_DWORD *)(v20 + 16) = v28;
        v33 = v34;
        HIDWORD(v32) = v9;
        result = AsiAddDataToSchema(a1, a2, &v31, 20LL, 0LL, &v36);
        if ( (int)result < 0 )
          return result;
        if ( (_BYTE)v36 )
          v20 = (__int64)&(*a1)[24 * (unsigned int)v21 + *((unsigned int *)*a1 + 4)];
        ++*(_DWORD *)(v20 + 20);
        AsiSortValueList(*a1, v20);
      }
      else
      {
        *((_DWORD *)v23 + 1) = 0;
        *((_DWORD *)v23 + 2) = 0;
        *((_DWORD *)v23 + 3) = v9;
        *((_DWORD *)v23 + 4) = v34;
        *(_DWORD *)(v20 + 20) = 1;
      }
    }
    v8 = v30;
    v10 = (unsigned int)(v26 + 1);
    v26 = v10;
    if ( (unsigned int)v10 >= *(_DWORD *)&v30[24 * v7 + 20] )
      goto LABEL_30;
  }
}
