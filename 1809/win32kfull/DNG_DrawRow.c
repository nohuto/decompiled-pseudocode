/*
 * XREFs of DNG_DrawRow @ 0x1C00E1EB0
 * Callers:
 *     DNG_StretchCol @ 0x1C00E0718 (DNG_StretchCol.c)
 *     RenderNineGridInternal @ 0x1C00E1130 (RenderNineGridInternal.c)
 * Callees:
 *     DNG_StretchRow @ 0x1C00E2324 (DNG_StretchRow.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

unsigned __int64 __fastcall DNG_DrawRow(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // ecx
  char *v7; // rdx
  char *v8; // r9
  size_t v9; // r8
  char *v10; // r10
  char *v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r11
  __int64 v14; // rcx
  unsigned __int64 result; // rax
  int v16; // edx
  _DWORD *v17; // r15
  __int64 v18; // r14
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdi
  int v22; // esi
  unsigned int v23; // r10d
  _DWORD *v24; // r9
  _DWORD *v25; // rax
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // rbx
  bool v28; // cf
  __int64 v29; // rcx
  _DWORD *v30; // r8
  int v31; // ecx
  int v32; // ecx
  char *v33; // rdx
  char *v34; // r9
  size_t v35; // r8
  char *v36; // rcx
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // r11
  int v39; // esi
  _DWORD *v40; // r11
  int v41; // r10d
  __int64 v42; // rdx
  unsigned int v43; // edi
  _DWORD *v44; // rcx
  _DWORD *v45; // rbx
  _DWORD *v46; // rax
  _DWORD *v47; // rax

  v1 = *(_DWORD *)(a1 + 168);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 56) = 0;
  if ( *(_DWORD *)a1 < v1 )
  {
    if ( *(_DWORD *)(a1 + 60) == v1 )
    {
      v5 = *(int *)(a1 + 64);
      v6 = 4 * (*(_DWORD *)(a1 + 68) - v5);
      v7 = (char *)(v4 + 4 * v5);
      v8 = (char *)(v3 + 4 * v5);
      if ( v6 > 0 )
      {
        v9 = v6;
        v10 = &v8[v6];
        if ( v10 > v8 )
        {
          v11 = &v7[v6];
          if ( &v7[v9] > v7 )
          {
            v12 = *(_QWORD *)(a1 + 216);
            if ( v12 <= (unsigned __int64)v8 )
            {
              v13 = *(_QWORD *)(a1 + 224);
              if ( (unsigned __int64)v10 <= v13
                && (v12 <= (unsigned __int64)v7 && (unsigned __int64)v11 <= v13
                 || *(_QWORD *)(a1 + 232) <= (unsigned __int64)v7 && (unsigned __int64)v11 <= *(_QWORD *)(a1 + 240)) )
              {
                memmove(v8, v7, v9);
              }
            }
          }
        }
      }
    }
    else
    {
      DNG_StretchRow(a1, v3, v4, a1 + 104);
    }
  }
  v14 = *(int *)(a1 + 60);
  result = *(int *)(a1 + 168);
  v16 = v14 + *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = v16;
  v17 = (_DWORD *)(v4 + 4 * v14);
  v18 = v3 + 4 * result;
  if ( v16 >= (int)v14 )
  {
    if ( *(_DWORD *)(a1 + 100) )
    {
      v19 = *(_DWORD *)(a1 + 92);
      v20 = *(_DWORD *)(a1 + 96);
      if ( v19 < v20 )
      {
        if ( *(_DWORD *)(a1 + 176) )
        {
          v39 = *(_DWORD *)(a1 + 84);
          v40 = (_DWORD *)(v18 + 4LL * (v19 - (int)v14));
          v41 = v39 - (v19 - (int)v14) % v39;
          LODWORD(v42) = v20 - v19;
          v43 = v20 - v19;
          v44 = &v17[(v19 - (int)v14) % v39];
          v45 = v44;
          if ( v20 - v19 > v41 )
            v43 = *(_DWORD *)(a1 + 84);
          if ( (int)v42 > v41 )
            v45 = v17;
          if ( (int)v42 > 0 && (unsigned int)v42 < 0x3FFFFFFF && v43 < 0x3FFFFFFF )
          {
            v46 = &v40[(int)v42];
            if ( v40 < v46
              && *(_QWORD *)(a1 + 216) <= (unsigned __int64)v40
              && (unsigned __int64)v46 <= *(_QWORD *)(a1 + 224) )
            {
              v47 = &v45[v43];
              if ( v45 < v47
                && *(_QWORD *)(a1 + 232) <= (unsigned __int64)v45
                && (unsigned __int64)v47 <= *(_QWORD *)(a1 + 240)
                && v39 >= 0
                && v19 < v20 )
              {
                v42 = (int)v42;
                do
                {
                  *v40 = *v44;
                  if ( !--v41 )
                  {
                    v41 = *(_DWORD *)(a1 + 84);
                    v44 -= v41;
                  }
                  ++v40;
                  ++v44;
                  --v42;
                }
                while ( v42 );
              }
            }
          }
        }
        else
        {
          v21 = *(unsigned int *)(a1 + 192);
          v22 = *(_DWORD *)(a1 + 188);
          v23 = *(_DWORD *)(a1 + 184);
          v24 = (_DWORD *)(v18 + 4LL * *(int *)(a1 + 204));
          v25 = &v17[*(unsigned int *)(a1 + 180)];
          v26 = (unsigned __int64)&v17[*(_DWORD *)(a1 + 52) - v16];
          if ( *(_QWORD *)(a1 + 216) <= (unsigned __int64)v24 )
          {
            v27 = v18 + 4LL * *(int *)(a1 + 208);
            if ( v27 <= *(_QWORD *)(a1 + 224)
              && *(_QWORD *)(a1 + 232) <= (unsigned __int64)v25
              && v26 <= *(_QWORD *)(a1 + 240)
              && (unsigned __int64)v24 < v27 )
            {
              do
              {
                if ( (unsigned __int64)v25 >= v26 )
                  break;
                v28 = v23 + v22 < v23;
                *v24 = *v25;
                v23 += v22;
                ++v24;
                v25 += v28 + v21;
              }
              while ( (unsigned __int64)v24 < v27 );
            }
          }
        }
      }
      v16 = *(_DWORD *)(a1 + 56);
      v18 += 4LL * *(int *)(a1 + 88);
    }
    v29 = *(int *)(a1 + 84);
    result = (unsigned int)(v29 + v16);
    *(_DWORD *)(a1 + 56) = result;
    v30 = &v17[v29];
    if ( (int)result >= (int)v29 )
    {
      v31 = *(_DWORD *)(a1 + 172);
      result = (unsigned int)(*(_DWORD *)(a1 + 20) - v31);
      if ( *(_DWORD *)(a1 + 4) > (int)result )
      {
        if ( *(_DWORD *)(a1 + 72) == v31 )
        {
          result = *(int *)(a1 + 76);
          v32 = 4 * (*(_DWORD *)(a1 + 80) - result);
          v33 = (char *)&v30[result];
          v34 = (char *)(v18 + 4 * result);
          if ( v32 > 0 )
          {
            v35 = v32;
            v36 = &v34[v32];
            if ( v36 > v34 )
            {
              result = (unsigned __int64)&v33[v35];
              if ( &v33[v35] > v33 )
              {
                v37 = *(_QWORD *)(a1 + 216);
                if ( v37 <= (unsigned __int64)v34 )
                {
                  v38 = *(_QWORD *)(a1 + 224);
                  if ( (unsigned __int64)v36 <= v38
                    && (v37 <= (unsigned __int64)v33 && result <= v38
                     || *(_QWORD *)(a1 + 232) <= (unsigned __int64)v33 && result <= *(_QWORD *)(a1 + 240)) )
                  {
                    return (unsigned __int64)memmove(v34, v33, v35);
                  }
                }
              }
            }
          }
        }
        else
        {
          return DNG_StretchRow(a1, v18, v30, a1 + 136);
        }
      }
    }
  }
  return result;
}
