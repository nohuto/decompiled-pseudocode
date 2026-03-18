/*
 * XREFs of sfac_ReadOutlineData @ 0x1C02C0CEC
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02BD004 (fsg_ExecuteGlyph.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall sfac_ReadOutlineData(
        _BYTE *a1,
        _DWORD *a2,
        _DWORD *a3,
        __int64 a4,
        unsigned __int16 *a5,
        int a6,
        int a7,
        __int16 a8,
        _WORD *a9,
        char *a10,
        _WORD *a11,
        _QWORD *a12,
        unsigned int *a13,
        unsigned int *a14)
{
  __int16 v14; // si
  char *v16; // r15
  _WORD *v17; // rdi
  __int16 v19; // r8
  unsigned int v20; // r10d
  unsigned __int16 v21; // ax
  char *v22; // rcx
  __int16 v23; // ax
  _WORD *v24; // rcx
  unsigned __int16 v25; // ax
  int v26; // r14d
  int v27; // r8d
  signed __int64 v28; // rdx
  _WORD *v29; // rcx
  signed __int64 v30; // r15
  unsigned __int16 v31; // ax
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // eax
  _BYTE *v35; // r15
  unsigned __int16 v36; // bp
  int v37; // r12d
  char v38; // al
  __int16 v39; // cx
  char *v40; // r8
  int i; // r9d
  char v42; // dl
  __int16 v43; // ax
  char *v44; // r10
  int v45; // edx
  char v46; // cl
  __int16 v47; // ax
  _DWORD *v49; // [rsp+68h] [rbp+10h]
  _DWORD *v50; // [rsp+70h] [rbp+18h]

  v50 = a3;
  v49 = a2;
  v14 = 0;
  v16 = 0LL;
  v17 = 0LL;
  *a9 = 0;
  *(_WORD *)a10 = 0;
  *a1 = 1;
  *a3 = 0;
  *a2 = 0;
  *a12 = 0LL;
  *a11 = 0;
  if ( !a6 && !a7 )
    return 0LL;
  if ( a8 > 0 )
  {
    v19 = a5[4];
    if ( a8 <= v19 )
    {
      v20 = *a14 + a8;
      if ( v20 >= *a14 )
      {
        v21 = a5[6];
        *a14 = v20;
        if ( (unsigned __int16)v19 > v21 )
          v21 = v19;
        if ( v20 <= v21 )
        {
          if ( a6 )
          {
            v16 = *(char **)(a4 + 8);
            v22 = &v16[2 * a8];
            if ( (unsigned __int64)v22 > *(_QWORD *)(a4 + 16) - 2LL )
              return 5133LL;
            v23 = *(_WORD *)v22;
            v24 = v22 + 2;
            *a11 = __ROR2__(v23, 8);
            *a12 = v24;
            v17 = (_WORD *)((char *)v24 + (unsigned __int16)*a11);
            if ( v17 < v24 )
              return 5133LL;
            *a9 = 0;
            v25 = __ROR2__(*(_WORD *)v16, 8);
            if ( v25 > 0x7FFFu )
            {
              *(_WORD *)a10 = -1;
              return 5121LL;
            }
            *(_WORD *)a10 = v25;
          }
          v26 = *(__int16 *)a10 + 1;
          v27 = 1;
          if ( a8 > 1 )
          {
            v28 = a10 - (char *)a9;
            v29 = a9 + 1;
            v30 = v16 - (char *)a9;
            while ( 1 )
            {
              *v29 = *(_WORD *)((char *)v29 + v28 - 2) + 1;
              v31 = __ROR2__(*(_WORD *)((char *)v29 + v30), 8);
              if ( v31 > 0x7FFFu )
                break;
              *(_WORD *)((char *)v29 + v28) = v31;
              if ( v26 > (__int16)v31 || v26 > a5[3] || v26 <= 0 )
                return 5121LL;
              ++v27;
              v26 = (__int16)v31 + 1;
              ++v29;
              if ( v27 >= a8 )
                goto LABEL_27;
            }
            *(_WORD *)((char *)v29 + v28) = -1;
            return 5121LL;
          }
LABEL_27:
          if ( v26 > 0 )
          {
            v32 = a5[3];
            if ( v26 <= (int)v32 )
            {
              v33 = *a13 + v26;
              if ( v33 >= *a13 )
              {
                v34 = a5[5];
                *a13 = v33;
                if ( (unsigned __int16)v32 <= (unsigned __int16)v34 )
                  v32 = v34;
                if ( v33 <= v32 )
                {
                  if ( !a6 )
                    return 0LL;
                  v35 = a1;
                  v36 = 0;
                  v37 = v26;
                  do
                  {
                    if ( v36 )
                    {
                      v37 -= v36;
                      if ( v37 < 0 )
                        return 5133LL;
                      LOBYTE(v33) = *(v35 - 1);
                      memset(v35, v33, v36);
                      v35 += v36;
                      do
                        --v36;
                      while ( v36 );
                    }
                    else
                    {
                      if ( (unsigned __int64)v17 > *(_QWORD *)(a4 + 16) - 1LL )
                        return 5133LL;
                      v38 = *(_BYTE *)v17;
                      *v35 = *(_BYTE *)v17;
                      if ( (v38 & 8) != 0 )
                      {
                        v17 = (_WORD *)((char *)v17 + 1);
                        if ( (unsigned __int64)v17 > *(_QWORD *)(a4 + 16) - 1LL )
                          return 5133LL;
                        v36 = *(unsigned __int8 *)v17;
                      }
                      v17 = (_WORD *)((char *)v17 + 1);
                      ++v35;
                      --v37;
                    }
                  }
                  while ( v37 > 0 );
                  if ( !v36 )
                  {
                    v39 = 0;
                    v40 = a1;
                    for ( i = 0; i < v26; ++i )
                    {
                      v42 = *v40;
                      if ( (*v40 & 2) != 0 )
                      {
                        if ( (unsigned __int64)v17 > *(_QWORD *)(a4 + 16) - 1LL )
                          return 5133LL;
                        v43 = *(unsigned __int8 *)v17;
                        if ( (v42 & 0x10) != 0 )
                          v39 += v43;
                        else
                          v39 -= v43;
                        v17 = (_WORD *)((char *)v17 + 1);
                      }
                      else if ( (v42 & 0x10) == 0 )
                      {
                        if ( (unsigned __int64)v17 > *(_QWORD *)(a4 + 16) - 2LL )
                          return 5133LL;
                        v39 += __ROR2__(*v17++, 8);
                      }
                      ++v40;
                      *v50++ = v39;
                    }
                    v44 = a1;
                    v45 = 0;
                    do
                    {
                      v46 = *v44;
                      if ( (*v44 & 4) != 0 )
                      {
                        if ( (unsigned __int64)v17 > *(_QWORD *)(a4 + 16) - 1LL )
                          return 5133LL;
                        v47 = *(unsigned __int8 *)v17;
                        if ( (v46 & 0x20) != 0 )
                          v14 += v47;
                        else
                          v14 -= v47;
                        v17 = (_WORD *)((char *)v17 + 1);
                      }
                      else if ( (v46 & 0x20) == 0 )
                      {
                        if ( (unsigned __int64)v17 > *(_QWORD *)(a4 + 16) - 2LL )
                          return 5133LL;
                        v14 += __ROR2__(*v17++, 8);
                      }
                      ++v45;
                      *v49 = v14;
                      *v44++ &= 1u;
                      ++v49;
                    }
                    while ( v45 < v26 );
                    if ( (unsigned __int64)v17 <= *(_QWORD *)(a4 + 16) )
                    {
                      *(_QWORD *)(a4 + 8) = v17;
                      return 0LL;
                    }
                    return 5133LL;
                  }
                }
              }
            }
          }
          return 5121LL;
        }
      }
    }
  }
  return 5123LL;
}
