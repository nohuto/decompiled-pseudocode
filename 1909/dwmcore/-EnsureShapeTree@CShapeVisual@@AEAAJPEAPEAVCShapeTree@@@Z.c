/*
 * XREFs of ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801F8B14
 * Callers:
 *     ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x1801F8C18 (-ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PE.c)
 *     ?ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z @ 0x1801F8D10 (-ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18007B820 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CShapeVisual::EnsureShapeTree(CShapeVisual *this, struct CShapeTree **a2)
{
  struct CShapeTree *v2; // rax
  unsigned int v3; // edi
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  __int64 v8; // rax
  signed int v9; // eax
  __int64 v10; // rcx

  v2 = (struct CShapeTree *)*((_QWORD *)this + 32);
  v3 = 0;
  if ( !v2 )
  {
    v7 = DefaultHeap::AllocClear(0x70uLL);
    if ( v7 )
    {
      v8 = *((_QWORD *)this + 2);
      v7[2] = 0;
      *((_QWORD *)v7 + 2) = v8;
      *((_QWORD *)v7 + 3) = 0LL;
      *((_QWORD *)v7 + 5) = 0LL;
      v7[8] = 0;
      *((_BYTE *)v7 + 80) = 1;
      *((_QWORD *)v7 + 11) = 0LL;
      *((_QWORD *)v7 + 12) = 0LL;
      *((_QWORD *)v7 + 13) = 0LL;
      *(_QWORD *)v7 = &CShapeTree::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    if ( !v7 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x8007000E, 0x56u, 0LL);
      return v3;
    }
    CMILCOMBase::InternalAddRef((CMILCOMBase *)v7);
    v9 = CVisual::SetContent((struct CResource **)this, (struct CContent *)v7);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x58u, 0LL);
      CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)v7);
      return v3;
    }
    CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)v7);
    v2 = (struct CShapeTree *)*((_QWORD *)this + 32);
  }
  *a2 = v2;
  return v3;
}
