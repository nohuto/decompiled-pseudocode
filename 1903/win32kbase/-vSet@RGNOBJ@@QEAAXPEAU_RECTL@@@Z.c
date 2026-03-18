/*
 * XREFs of ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0026DA0
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00143D8 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0015690 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00196B0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0019BF0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreCombineRgn @ 0x1C00242A0 (GreCombineRgn.c)
 *     SetRectRgnIndirect @ 0x1C0026AC0 (SetRectRgnIndirect.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0026F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C00276E0 (GreCreateRectRgnIndirect.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002A730 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C002CC7C (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C002EC40 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C00533D0 (NtGdiCreateRectRgn.c)
 *     GreSetRectRgn @ 0x1C0053B00 (GreSetRectRgn.c)
 *     GreCreateRectRgn @ 0x1C00AE1D0 (GreCreateRectRgn.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00B0C54 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0126D80 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C01284C0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C0131A60 (EngCreateClip.c)
 *     GreIntersectVisRect @ 0x1C0131B00 (GreIntersectVisRect.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vSet(RGNOBJ *this, struct _RECTL *a2)
{
  __int64 v2; // r8
  bool v3; // zf
  _DWORD *v4; // r9
  _DWORD *v5; // r9
  char *v6; // r9
  __int64 v7; // rcx
  _DWORD *v8; // r9
  _DWORD *v9; // r9
  __int64 v10; // rdx

  if ( a2->left == a2->right || a2->top == a2->bottom )
  {
    v2 = *(_QWORD *)this;
    v10 = *(_QWORD *)this + 104LL;
    *(_DWORD *)(v2 + 80) = 120;
    *(_QWORD *)(v2 + 84) = 1LL;
    *(_QWORD *)(v2 + 92) = 0LL;
    v7 = v10 + 16;
    *(_DWORD *)(v2 + 100) = 0;
    *(_DWORD *)v10 = 0;
    *(_DWORD *)(v10 + 4) = 0x80000000;
    *(_QWORD *)(v10 + 8) = 0x7FFFFFFFLL;
    goto LABEL_5;
  }
  v2 = *(_QWORD *)this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 80LL) == 160;
  v4 = (_DWORD *)(*(_QWORD *)this + 104LL);
  *(struct _RECTL *)(*(_QWORD *)this + 88LL) = *a2;
  if ( !v3 )
  {
    *(_DWORD *)(v2 + 80) = 160;
    *(_DWORD *)(v2 + 84) = 3;
    *v4 = 0;
    v4[1] = 0x80000000;
    v4[2] = a2->top;
    v4[3] = 0;
    v5 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
    *v5 = 2;
    v5[1] = a2->top;
    v5[2] = a2->bottom;
    v5[3] = a2->left;
    v5[4] = a2->right;
    v5[5] = 2;
    v6 = (char *)v5 + (unsigned int)(4 * *v5 + 16);
    v7 = (__int64)(v6 + 16);
    *(_DWORD *)v6 = 0;
    *((_DWORD *)v6 + 1) = a2->bottom;
    *((_QWORD *)v6 + 1) = 0x7FFFFFFFLL;
LABEL_5:
    *(_QWORD *)(v2 + 40) = v7;
    return;
  }
  v4[2] = a2->top;
  v8 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
  v8[1] = a2->top;
  v8[2] = a2->bottom;
  v8[3] = a2->left;
  v8[4] = a2->right;
  v9 = (_DWORD *)((char *)v8 + (unsigned int)(4 * *v8 + 16));
  v9[1] = a2->bottom;
  *(_QWORD *)(v2 + 40) = (char *)v9 + (unsigned int)(4 * *v9 + 16);
}
