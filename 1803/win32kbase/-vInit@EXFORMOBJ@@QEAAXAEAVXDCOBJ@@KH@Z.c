/*
 * XREFs of ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C001A750
 * Callers:
 *     GreGetClipBox @ 0x1C00197D0 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C0019B10 (GreIntersectClipRect.c)
 *     GreDCSelectPen @ 0x1C0059C10 (GreDCSelectPen.c)
 * Callees:
 *     ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C0019E30 (-bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0024E8C (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0024F00 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C00276C4 (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C00BFB9C (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C00C0610 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C00C08D0 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 */

void __fastcall EXFORMOBJ::vInit(EXFORMOBJ *this, DC **a2, int a3, int a4)
{
  int v8; // eax
  DC *v9; // rcx
  __int64 v10; // rdx
  int v11; // esi
  int v12; // esi
  __int64 v13; // rax
  DC *v14; // r8
  DC *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  DC *v19; // rcx
  DC *v20; // r8
  DC *v21; // r8
  char *v22; // [rsp+20h] [rbp-18h] BYREF
  int v23; // [rsp+2Ch] [rbp-Ch]

  if ( a4 )
  {
    v8 = *((_DWORD *)*a2 + 132);
    if ( (v8 & 1) != 0 && (v8 & 2) == 0 )
    {
      v19 = *a2;
      *((_DWORD *)*a2 + 132) = v8 | 2;
      DC::vMarkTransformDirty(v19);
      DC::vUpdateCachedDPIScaleValue(v20);
    }
  }
  v9 = *a2;
  v10 = *((_QWORD *)*a2 + 10);
  if ( (*(_DWORD *)(v10 + 352) & 0x1E000) != 0 )
  {
    if ( (*(_DWORD *)(v10 + 8) & 0x100) != 0 )
    {
      v23 = 0;
      v22 = (char *)v9 + 364;
      if ( v9 != (DC *)-364LL )
      {
        EXFORMOBJ::bXform((EXFORMOBJ *)&v22, (struct _POINTFIX *)(v10 + 84), (struct _POINTL *)(v10 + 76), 1uLL);
        v9 = *a2;
      }
      *(_DWORD *)(*((_QWORD *)v9 + 10) + 8LL) &= ~0x100u;
      v9 = *a2;
    }
    DC::vUpdateWtoDXform(v9);
    *(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) |= 0x200u;
    v15 = *a2;
    if ( (*(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) & 0x80u) != 0 )
    {
      v23 = 0;
      v22 = (char *)v15 + 328;
      if ( v15 != (DC *)-328LL )
      {
        DC::vRealizeLineAttrs(v15, (struct EXFORMOBJ *)&v22);
        v15 = *a2;
      }
      *((_DWORD *)v15 + 65) |= 1u;
      *(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) &= ~0x80u;
      v15 = *a2;
    }
    *(_DWORD *)(*((_QWORD *)v15 + 10) + 352LL) |= 0x10u;
  }
  v11 = a3 - 515;
  if ( !v11 )
  {
    v13 = (__int64)*a2 + 400;
    goto LABEL_7;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v13 = (__int64)*a2 + 328;
LABEL_7:
    *(_QWORD *)this = v13;
    goto LABEL_8;
  }
  if ( v12 != 510 )
    goto LABEL_23;
  *(_QWORD *)this = (char *)*a2 + 364;
  if ( (*(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) & 0x10) == 0 )
    goto LABEL_8;
  if ( (unsigned int)EXFORMOBJ::bInverse(this, (DC *)((char *)*a2 + 328)) )
  {
    *(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) &= ~0x10u;
    if ( !(unsigned int)DC::bDpiScaleTransform(*a2) )
    {
      v17 = *(_QWORD *)this;
      v18 = *(_QWORD *)(v16 + 80);
      *(_OWORD *)(v18 + 220) = *(_OWORD *)*(_QWORD *)this;
      *(_OWORD *)(v18 + 236) = *(_OWORD *)(v17 + 16);
      *(_DWORD *)(v18 + 252) = *(_DWORD *)(v17 + 32);
    }
  }
  else
  {
LABEL_23:
    *(_QWORD *)this = 0LL;
  }
LABEL_8:
  if ( a4 )
  {
    v14 = *a2;
    if ( (*((_BYTE *)*a2 + 528) & 3) == 3 )
    {
      *((_DWORD *)v14 + 132) = *((_DWORD *)*a2 + 132) & 0xFFFFFFFD;
      DC::vMarkTransformDirty(v14);
      DC::vUpdateCachedDPIScaleValue(v21);
    }
  }
}
