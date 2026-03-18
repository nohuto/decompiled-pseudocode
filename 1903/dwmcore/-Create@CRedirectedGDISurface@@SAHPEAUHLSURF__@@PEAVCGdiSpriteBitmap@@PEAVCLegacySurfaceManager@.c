/*
 * XREFs of ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800CBE48
 * Callers:
 *     ?ProcessUpdate@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP@@@Z @ 0x1800D00AC (-ProcessUpdate@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP@@@Z.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x1800CBEE0 (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRedirectedGDISurface::Create(
        HLSURF a1,
        struct CGdiSpriteBitmap *a2,
        struct CLegacySurfaceManager *a3,
        struct CRedirectedGDISurface **a4)
{
  volatile signed __int32 *v8; // rax
  __int64 v9; // r8
  CDirtyRegion *v10; // rbx
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  v8 = (volatile signed __int32 *)DefaultHeap::AllocClear(0x30uLL);
  v10 = (CDirtyRegion *)v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v9);
  *((_DWORD *)v8 + 2) = 0;
  *(_QWORD *)v8 = &CRedirectedGDISurface::`vftable';
  *((_QWORD *)v8 + 2) = a3;
  _InterlockedIncrement(v8 + 2);
  v11 = CRedirectedGDISurface::Initialize((CRedirectedGDISurface *)v8, a1, a2);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1Bu, 0LL);
    CDirtyRegion::Release(v10);
  }
  else
  {
    *a4 = v10;
  }
  return v13;
}
