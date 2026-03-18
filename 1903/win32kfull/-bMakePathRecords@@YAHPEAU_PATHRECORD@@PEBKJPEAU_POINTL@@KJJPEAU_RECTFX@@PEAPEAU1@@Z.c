/*
 * XREFs of ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C01528A8
 * Callers:
 *     ?NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z @ 0x1C0152110 (-NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMakePathRecords(
        struct _PATHRECORD *a1,
        const unsigned int *a2,
        int a3,
        struct _POINTL *a4,
        unsigned int a5,
        int a6,
        int a7,
        struct _RECTFX *a8,
        struct _PATHRECORD **a9)
{
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // rsi
  const unsigned int *v13; // rdx
  struct _PATHRECORD *v14; // r10
  int v15; // edi
  __int64 v16; // rbp
  __int64 v17; // r14
  struct _POINTL *v18; // r11
  struct _PATHRECORD *v19; // r9
  int x; // ecx
  LONG v21; // eax
  LONG v22; // eax
  int y; // ecx
  int v24; // eax
  LONG v25; // eax
  bool v26; // zf
  unsigned int v27; // r11d
  FIX v28; // ecx
  int v29; // edx
  int v30; // eax
  FIX v31; // ecx
  int v32; // eax
  FIX v33; // ecx
  int v34; // eax
  FIX v35; // ecx

  *((_QWORD *)a1 + 1) = 0LL;
  LODWORD(v10) = 0x7FFFFFFF;
  v11 = *a2;
  LODWORD(v12) = 0x80000000;
  v13 = a2 + 1;
  v14 = a1;
  v15 = a3 - v11;
  LODWORD(v16) = 0x7FFFFFFF;
  LODWORD(v17) = 0x80000000;
  if ( v15 >= 0 )
  {
    while ( v11 >= 2 )
    {
      v18 = a4;
      v19 = v14;
      *((_DWORD *)v14 + 5) = v11;
      *((_DWORD *)v14 + 4) = 3;
      do
      {
        x = v18->x;
        v21 = v18->x;
        if ( v18->x >= (int)v10 )
          v21 = v10;
        v10 = v21;
        v22 = v18->x;
        if ( x <= (int)v12 )
          v22 = v12;
        v12 = v22;
        *((_DWORD *)v14 + 6) = x + a6;
        y = v18->y;
        v24 = y;
        if ( y >= (int)v16 )
          v24 = v16;
        v16 = v24;
        v25 = v18->y;
        if ( y <= (int)v17 )
          v25 = v17;
        ++v18;
        v17 = v25;
        *((_DWORD *)v14 + 7) = y + a7;
        v14 = (struct _PATHRECORD *)((char *)v14 + 8);
        --v11;
      }
      while ( v11 );
      a4 = v18;
      v26 = a5-- == 1;
      v27 = 1;
      if ( v26 )
      {
        v28 = a6 + v10;
        *(_QWORD *)v19 = 0LL;
        v29 = -2147024362;
        *a9 = v19;
        if ( (unsigned __int64)(a6 + v10 + 0x80000000LL) > 0xFFFFFFFF )
        {
          v30 = -2147024362;
          v28 = -1;
        }
        else
        {
          v30 = 0;
        }
        a8->xLeft = v28;
        if ( v30 < 0 )
          goto LABEL_32;
        v31 = a6 + v12;
        if ( (unsigned __int64)(a6 + v12 + 0x80000000LL) > 0xFFFFFFFF )
        {
          v32 = -2147024362;
          v31 = -1;
        }
        else
        {
          v32 = 0;
        }
        a8->xRight = v31;
        if ( v32 < 0
          || ((v33 = a7 + v16, (unsigned __int64)(a7 + v16 + 0x80000000LL) > 0xFFFFFFFF)
            ? (v34 = -2147024362, v33 = -1)
            : (v34 = 0),
              (a8->yTop = v33, v34 < 0)
           || ((v35 = v17 + a7, (unsigned __int64)(v17 + a7 + 0x80000000LL) > 0xFFFFFFFF) ? (v35 = -1) : (v29 = 0),
               a8->yBottom = v35,
               v29 < 0)) )
        {
LABEL_32:
          v27 = 0;
        }
        if ( v15 )
          return 0;
        return v27;
      }
      v14 = (struct _PATHRECORD *)((char *)v14 + 24);
      *((_QWORD *)v14 + 1) = v19;
      *(_QWORD *)v19 = v14;
      v11 = *v13++;
      v15 -= v11;
      if ( v15 < 0 )
        return 0;
    }
  }
  return 0;
}
