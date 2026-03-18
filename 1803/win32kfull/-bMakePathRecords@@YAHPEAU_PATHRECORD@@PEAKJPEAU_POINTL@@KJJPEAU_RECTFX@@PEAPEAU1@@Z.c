/*
 * XREFs of ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C00E2FCC
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x1C00E27E0 (NtGdiFastPolyPolyline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMakePathRecords(
        struct _PATHRECORD *a1,
        unsigned int *a2,
        int a3,
        struct _POINTL *a4,
        unsigned int a5,
        int a6,
        int a7,
        struct _RECTFX *a8,
        struct _PATHRECORD **a9)
{
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // ebx
  struct _PATHRECORD *v12; // r10
  unsigned int *v13; // rdx
  __int64 v14; // rbp
  int v15; // r8d
  signed int v16; // r14d
  struct _POINTL *v17; // r11
  struct _PATHRECORD *v18; // r9
  int x; // ecx
  LONG v20; // eax
  LONG v21; // eax
  int y; // ecx
  int v23; // eax
  LONG v24; // eax
  bool v25; // zf
  unsigned int v26; // r11d

  LODWORD(v9) = 0x7FFFFFFF;
  *((_QWORD *)a1 + 1) = 0LL;
  LODWORD(v10) = 0x80000000;
  v11 = *a2;
  v12 = a1;
  v13 = a2 + 1;
  LODWORD(v14) = 0x7FFFFFFF;
  v15 = a3 - v11;
  v16 = 0x80000000;
  if ( v15 >= 0 )
  {
    while ( 1 )
    {
      if ( v11 < 2 )
        return 0;
      v17 = a4;
      v18 = v12;
      *((_DWORD *)v12 + 5) = v11;
      *((_DWORD *)v12 + 4) = 3;
      do
      {
        x = v17->x;
        v20 = v17->x;
        if ( v17->x >= (int)v9 )
          v20 = v9;
        v9 = v20;
        v21 = v17->x;
        if ( x <= (int)v10 )
          v21 = v10;
        v10 = v21;
        *((_DWORD *)v12 + 6) = x + a6;
        y = v17->y;
        v23 = y;
        if ( y >= (int)v14 )
          v23 = v14;
        v14 = v23;
        v24 = v17->y;
        if ( y <= v16 )
          v24 = v16;
        ++v17;
        v16 = v24;
        *((_DWORD *)v12 + 7) = y + a7;
        v12 = (struct _PATHRECORD *)((char *)v12 + 8);
        --v11;
      }
      while ( v11 );
      a4 = v17;
      v25 = a5-- == 1;
      v26 = 1;
      if ( v25 )
        break;
      v12 = (struct _PATHRECORD *)((char *)v12 + 24);
      *((_QWORD *)v12 + 1) = v18;
      *(_QWORD *)v18 = v12;
      v11 = *v13++;
      v15 -= v11;
      if ( v15 < 0 )
        return 0;
    }
    *(_QWORD *)v18 = 0LL;
    *a9 = v18;
    if ( (unsigned __int64)(a6 + v9 + 0x80000000LL) > 0xFFFFFFFF )
    {
      a8->xLeft = -1;
    }
    else
    {
      a8->xLeft = a6 + v9;
      if ( (unsigned __int64)(a6 + v10 + 0x80000000LL) > 0xFFFFFFFF )
      {
        a8->xRight = -1;
      }
      else
      {
        a8->xRight = a6 + v10;
        if ( (unsigned __int64)(a7 + v14 + 0x80000000LL) > 0xFFFFFFFF )
        {
          a8->yTop = -1;
        }
        else
        {
          a8->yTop = a7 + v14;
          if ( (unsigned __int64)(v24 + (__int64)a7 + 0x80000000LL) <= 0xFFFFFFFF )
          {
            a8->yBottom = v24 + a7;
            goto LABEL_19;
          }
          a8->yBottom = -1;
        }
      }
    }
    v26 = 0;
LABEL_19:
    if ( v15 )
      return 0;
    return v26;
  }
  return 0;
}
