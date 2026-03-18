/*
 * XREFs of ?EnsureContent@CGlyphRunVisual@@AEAAJPEAPEAVCGlyphRunContent@@@Z @ 0x1801D6604
 * Callers:
 *     ?ProcessSetGlyphRuns@CGlyphRunVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GLYPHRUNVISUAL_SETGLYPHRUNS@@PEBXI@Z @ 0x1801D6738 (-ProcessSetGlyphRuns@CGlyphRunVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GLYPHRUNVISUAL_SETG.c)
 * Callees:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18007FFE0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlyphRunVisual::EnsureContent(CGlyphRunVisual *this, struct CGlyphRunContent **a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  _DWORD *v6; // rbx
  __int64 v7; // rax
  signed int v8; // eax
  __int64 v9; // rcx

  v4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(CGlyphRunVisual *))(*(_QWORD *)this + 256LL))(this) )
  {
    v6 = DefaultHeap::AllocClear(0x50uLL);
    if ( v6 )
    {
      v7 = *((_QWORD *)this + 2);
      v6[2] = 0;
      *((_QWORD *)v6 + 2) = v7;
      *((_QWORD *)v6 + 3) = 0LL;
      *((_QWORD *)v6 + 5) = 0LL;
      v6[8] = 0;
      *(_QWORD *)v6 = &CGlyphRunContent::`vftable';
      *((_QWORD *)v6 + 7) = 0LL;
      *((_QWORD *)v6 + 8) = 0LL;
      *((_QWORD *)v6 + 9) = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    if ( !v6 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x8007000E, 0x34u, 0LL);
      return v4;
    }
    CMILCOMBase::InternalAddRef((CMILCOMBase *)v6);
    v8 = CVisual::SetContent((struct CResource **)this, (struct CContent *)v6);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x36u, 0LL);
      CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)v6);
      return v4;
    }
    CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)v6);
  }
  *a2 = (struct CGlyphRunContent *)*((_QWORD *)this + 32);
  return v4;
}
