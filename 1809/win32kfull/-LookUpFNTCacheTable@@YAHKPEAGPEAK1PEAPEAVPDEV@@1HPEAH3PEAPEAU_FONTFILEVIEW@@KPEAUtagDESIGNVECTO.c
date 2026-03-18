/*
 * XREFs of ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1HPEAH3PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1C009172C
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C0091154 (UmfdLoadFontFileView.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0x1C00918C8 (SearchFNTCacheHlink.c)
 *     ReadFileInfo @ 0x1C0091AA8 (ReadFileInfo.c)
 */

__int64 __fastcall LookUpFNTCacheTable(
        unsigned int a1,
        unsigned __int16 *a2,
        unsigned int *a3,
        unsigned int *a4,
        struct PDEV **a5,
        unsigned int *a6,
        int a7,
        int *a8,
        int *a9,
        struct _FONTFILEVIEW **a10,
        unsigned int a11,
        struct tagDESIGNVECTOR *a12,
        unsigned int a13)
{
  struct PDEV **v13; // r13
  unsigned int v14; // ebx
  int *v15; // rsi
  int *v17; // r14
  __int64 *v19; // r11
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  struct tagDESIGNVECTOR *v24; // rdx
  bool v25; // zf
  __int64 v26; // r8
  struct PDEV **v27; // rdi
  struct _FONTFILEVIEW **v28; // r14
  unsigned int v29; // edx
  _QWORD *v30; // rcx
  unsigned int v31; // ecx
  __int64 v33; // rax
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // r9
  struct _FONTFILEVIEW **v36; // rdx
  _QWORD *v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rcx
  __int64 v40; // rax

  v13 = a5;
  v14 = 0;
  v15 = a9;
  v17 = a8;
  v19 = (__int64 *)qword_1C0317308;
  *a3 = 0;
  *v13 = 0LL;
  *v15 = 0;
  *v17 = 0;
  *a4 = 0;
  if ( v19 )
  {
    if ( !a1 )
      return v14;
    v21 = 0LL;
    if ( a1 )
    {
      v22 = a1;
      do
      {
        v23 = *a2++;
        v21 = (unsigned int)(v23 + 257 * v21);
        --v22;
      }
      while ( v22 );
    }
    v24 = a12;
    if ( a12 && a13 )
    {
      v34 = 0LL;
      v35 = (unsigned __int64)a13 >> 2;
      if ( a12 > (struct tagDESIGNVECTOR *)((char *)a12 + 4 * v35) )
        v35 = 0LL;
      if ( v35 )
      {
        do
        {
          ++v34;
          v21 = (unsigned int)(*(_DWORD *)v24 + 257 * v21);
          v24 = (struct tagDESIGNVECTOR *)((char *)v24 + 4);
        }
        while ( v34 < v35 );
      }
    }
    v25 = (dword_1C0317300 & 1) == 0;
    *a3 = v21;
    if ( v25 )
    {
      if ( (unsigned int)ReadFileInfo(a10, a11) )
        return v14;
    }
    else
    {
      v26 = *v19;
      a5 = 0LL;
      SearchFNTCacheHlink(v21, &a5, v26);
      v27 = a5;
      if ( a5 )
      {
        if ( ((_DWORD)a5[3] & 1) == 0 )
        {
          if ( !a7 && (dword_1C0317300 & 4) != 0 )
          {
            *v17 = 1;
            if ( a11 )
            {
              v36 = a10;
              v37 = v27 + 5;
              v38 = a11;
              do
              {
                *((_DWORD *)*v36 + 6) = *((_DWORD *)v37 - 2);
                v39 = *v36++;
                v40 = *v37;
                v37 += 2;
                *v39 = v40;
                --v38;
              }
              while ( v38 );
            }
          }
          else
          {
            v28 = a10;
            if ( (unsigned int)ReadFileInfo(a10, a11) )
            {
              v29 = 0;
              if ( a11 )
              {
                v30 = v27 + 5;
                while ( *((_DWORD *)*v28 + 6) == *((_DWORD *)v30 - 2) && *(_QWORD *)*v28 == *v30 )
                {
                  ++v29;
                  ++v28;
                  v30 += 2;
                  if ( v29 >= a11 )
                    goto LABEL_18;
                }
                v33 = qword_1C0317308;
                *a3 = 0;
                *(_DWORD *)(v33 + 16) |= 2u;
                return 0LL;
              }
            }
            else
            {
              *v15 = 1;
            }
          }
LABEL_18:
          *a4 = *((_DWORD *)v27 + 1);
          v14 = 1;
          v31 = *((unsigned __int16 *)v27 + 7);
          *v13 = (struct PDEV *)gaFntPDev[*((unsigned __int16 *)v27 + 6)];
          *a6 = v31;
        }
        return v14;
      }
      if ( (dword_1C0317300 & 4) == 0 )
        return v14;
    }
    *v15 = 1;
    return v14;
  }
  return 0LL;
}
