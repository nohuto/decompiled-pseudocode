/*
 * XREFs of LdrEnumResources @ 0x1800DFDA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019B64 @ 0x180019B64 (sub_180019B64.c)
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 */

__int64 __fastcall LdrEnumResources(
        unsigned __int64 a1,
        const wchar_t **a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5)
{
  unsigned int v5; // r13d
  unsigned int v7; // esi
  const wchar_t **v8; // r15
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rbx
  int v13; // ecx
  unsigned int *v14; // r14
  int v15; // eax
  unsigned int v16; // ebp
  bool v17; // zf
  unsigned int v18; // ecx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  unsigned int *v23; // rbp
  int v24; // edx
  int v25; // eax
  unsigned int v26; // edx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rsi
  unsigned int *v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r9
  unsigned int v37; // [rsp+30h] [rbp-68h]
  unsigned int v38; // [rsp+34h] [rbp-64h]
  unsigned int v39; // [rsp+38h] [rbp-60h]
  unsigned int v40; // [rsp+3Ch] [rbp-5Ch]
  int v41; // [rsp+40h] [rbp-58h]
  int v42; // [rsp+44h] [rbp-54h]
  __int64 v43[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v47; // [rsp+B8h] [rbp+20h] BYREF

  v5 = 0;
  v7 = a3;
  v8 = a2;
  v9 = 0;
  v38 = 0;
  if ( a5 )
    v39 = *a4;
  else
    v39 = 0;
  *a4 = 0;
  v10 = sub_18001C4DC(a1, 1, 2u, &v47, v43);
  v11 = v43[0];
  if ( v10 < 0 )
    v11 = 0LL;
  if ( !v11 )
    return 3221225609LL;
  v13 = *(unsigned __int16 *)(v11 + 14);
  v14 = (unsigned int *)(v11 + 16);
  v15 = *(unsigned __int16 *)(v11 + 12);
  v16 = 0;
  v17 = v15 + v13 == 0;
  v18 = v15 + v13;
  v42 = 0;
  v37 = v18;
  v41 = 0;
  if ( v17 )
  {
LABEL_39:
    *a4 = v9;
    return v16;
  }
  while ( v7 )
  {
    v19 = sub_180019B64(*v8, v11, v14);
    v18 = v37;
    if ( !v19 )
      break;
LABEL_37:
    v14 += 2;
    if ( ++v41 >= v18 )
    {
      v9 = v38;
      v16 = v42;
      goto LABEL_39;
    }
  }
  v20 = v14[1];
  if ( (int)v20 < 0 )
  {
    v21 = *v14;
    if ( (int)v21 >= 0 )
    {
      v22 = *(unsigned __int16 *)v14;
    }
    else
    {
      LODWORD(v21) = v21 & 0x7FFFFFFF;
      v22 = v11 + v21;
    }
    LODWORD(v20) = v20 & 0x7FFFFFFF;
    v40 = 0;
    v23 = (unsigned int *)(v20 + v11 + 16);
    v24 = *(unsigned __int16 *)(v20 + v11 + 14);
    v25 = *(unsigned __int16 *)(v20 + v11 + 12);
    v17 = v25 + v24 == 0;
    v26 = v25 + v24;
    v47 = v26;
    if ( !v17 )
    {
      do
      {
        if ( v7 <= 1 || (v27 = sub_180019B64(v8[1], v11, v23), v26 = v47, !v27) )
        {
          v28 = v23[1];
          if ( (int)v28 >= 0 )
            return 3221225595LL;
          v29 = *v23;
          if ( (int)v29 >= 0 )
          {
            v30 = *(unsigned __int16 *)v23;
          }
          else
          {
            LODWORD(v29) = v29 & 0x7FFFFFFF;
            v30 = v11 + v29;
          }
          LODWORD(v28) = v28 & 0x7FFFFFFF;
          v31 = (unsigned int *)(v28 + v11 + 16);
          LODWORD(v43[0]) = *(unsigned __int16 *)(v28 + v11 + 12) + *(unsigned __int16 *)(v28 + v11 + 14);
          if ( LODWORD(v43[0]) )
          {
            do
            {
              if ( a3 <= 2 || !(unsigned int)sub_180019B64(a2[2], v11, v31) )
              {
                if ( (v31[1] & 0x80000000) != 0 )
                  return 3221225595LL;
                v32 = *v31;
                if ( (int)v32 >= 0 )
                {
                  v33 = *(unsigned __int16 *)v31;
                }
                else
                {
                  LODWORD(v32) = v32 & 0x7FFFFFFF;
                  v33 = v11 + v32;
                }
                v34 = v31[1];
                v35 = 5LL * v38++;
                if ( v38 > v39 )
                {
                  v42 = -1073741820;
                }
                else
                {
                  v36 = a5;
                  *(_QWORD *)(a5 + 8 * v35) = v22;
                  *(_QWORD *)(v36 + 8 * v35 + 8) = v30;
                  *(_QWORD *)(v36 + 8 * v35 + 16) = v33;
                  *(_QWORD *)(v36 + 8 * v35 + 24) = a1 + *(unsigned int *)(v34 + v11);
                  *(_QWORD *)(v36 + 8 * v35 + 32) = *(unsigned int *)(v34 + v11 + 4);
                }
              }
              ++v5;
              v31 += 2;
            }
            while ( v5 < LODWORD(v43[0]) );
            v26 = v47;
          }
          v8 = a2;
          v5 = 0;
          v7 = a3;
        }
        v23 += 2;
        ++v40;
      }
      while ( v40 < v26 );
      v18 = v37;
    }
    goto LABEL_37;
  }
  return 3221225595LL;
}
