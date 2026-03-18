/*
 * XREFs of ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180218148
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z @ 0x1802183A0 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x18002B5E4 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??2CCachedVisualImage@@KAPEAX_K@Z @ 0x1800D79E0 (--2CCachedVisualImage@@KAPEAX_K@Z.c)
 *     ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x180177AA8 (-RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z @ 0x1801C9688 (-SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z.c)
 */

__int64 __fastcall CSnapshot::CreateCVI(CSnapshot *this, struct CVisual *a2)
{
  CCachedVisualImage *v4; // rax
  __int64 v5; // rcx
  CCachedVisualImage *v6; // rdi
  unsigned int v7; // ebx
  int v8; // r8d
  int v9; // r9d
  signed int v10; // eax
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx

  v4 = (CCachedVisualImage *)CCachedVisualImage::operator new();
  if ( v4 )
    v6 = CCachedVisualImage::CCachedVisualImage(v4, *((struct CComposition **)this + 2));
  else
    v6 = 0LL;
  if ( v6 )
  {
    CMILCOMBase::InternalAddRef((CCachedVisualImage *)((char *)v6 + 16));
    v8 = *((_DWORD *)this + 14);
    if ( v8
      && (v9 = *((_DWORD *)this + 15)) != 0
      && (v10 = CCachedVisualImage::SetForDCompSnapshot(v6, a2, v8, v9, *((_BYTE *)this + 64)), v7 = v10, v10 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x33u, 0LL);
    }
    else
    {
      v12 = CComposition::RegisterSnapshotToPerform(*((CComposition **)this + 2), v6);
      v7 = v12;
      if ( v12 >= 0 )
      {
        *((_QWORD *)this + 9) = v6;
        return v7;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x37u, 0LL);
    }
    CGdiSpriteBitmap::Release((CCachedVisualImage *)((char *)v6 + 16));
    return v7;
  }
  v7 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x8007000E, 0x2Cu, 0LL);
  return v7;
}
