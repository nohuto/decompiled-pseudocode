/*
 * XREFs of ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18006BBE0
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z @ 0x18006B304 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BAC88 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeIntersect(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  _DWORD *v6; // r14
  unsigned int v7; // ebx
  int v8; // eax
  char *v9; // rbp
  char *v10; // rdx
  int v11; // eax
  _DWORD *v12; // r9
  char *v13; // r8
  int v14; // ecx
  int v15; // r10d
  int v16; // edi
  int v17; // r11d
  int v18; // esi
  _DWORD *v19; // r13
  _DWORD *v20; // r15
  bool v22; // zf

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = v3;
  v6 = &v3[2 * v2];
  v7 = 8 * (v4 + v2) + 12;
  v8 = *((_DWORD *)a2 + 3);
  v9 = (char *)a2 + 8 * v4 + 12;
  if ( *v3 >= v8 )
  {
    v10 = (char *)a2 + 20;
    if ( *v3 > v8 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)v10;
        if ( *v3 < *(_DWORD *)v10 )
          break;
        v10 += 8;
        if ( *v3 <= v11 )
        {
          v12 = v3 + 2;
          v22 = v10 == v9;
          goto LABEL_30;
        }
        if ( v10 == v9 )
          return v7;
      }
    }
    v12 = v3 + 2;
    goto LABEL_5;
  }
  v12 = v3 + 2;
  while ( *v12 < v8 )
  {
    v12 += 2;
    if ( v12 == v6 )
      return v7;
  }
  v10 = (char *)a2 + 20;
  v5 = v12;
  if ( *v12 > v8 )
  {
    v13 = v10 - 8;
    v14 = v12[1] - *((_DWORD *)v10 - 1) - *(v12 - 1) - ((_DWORD)v12 - 8);
LABEL_6:
    v15 = *((_DWORD *)v10 + 1);
    v16 = *(_DWORD *)v10;
    v17 = (int)v10;
    for ( v7 += (_DWORD)v12 + v15 + (_DWORD)v10 + v14 - (_DWORD)v13;
          ;
          v7 += v15 + v17 + v20[3] - *((_DWORD *)v13 + 1) - v20[1] - (_DWORD)v13 + 8 )
    {
      v18 = *v12;
      while ( 1 )
      {
        v19 = v12;
        v20 = v12;
        if ( v18 < v16 )
          break;
        v10 += 8;
        if ( v18 > v16 )
        {
          if ( v10 == v9 )
            return v7;
          v13 = v10 - 8;
          v15 = *((_DWORD *)v10 + 1);
          v7 += v15 + v12[1] - *((_DWORD *)v10 - 1) - *(v12 - 1) + 16;
        }
        else
        {
          v12 += 2;
          if ( v12 == v6 || v10 == v9 )
            return v7;
          v15 = *((_DWORD *)v10 + 1);
          v13 = v10 - 8;
          v18 = *v12;
          v7 += v15 + v19[3] - *((_DWORD *)v10 - 1) - v19[1] + 16;
        }
        v16 = *(_DWORD *)v10;
        v17 = (int)v10;
      }
      v12 += 2;
      if ( v12 == v6 )
        break;
    }
    return v7;
  }
  v12 += 2;
  v22 = v12 == v6;
LABEL_30:
  if ( !v22 )
  {
LABEL_5:
    v13 = v10 - 8;
    v14 = v12[1] - *((_DWORD *)v10 - 1) - v5[1] - (_DWORD)v5;
    goto LABEL_6;
  }
  return v7;
}
