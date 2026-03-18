/*
 * XREFs of ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180216A58
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z @ 0x180216CB0 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x1800AD264 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??2CCachedVisualImage@@KAPEAX_K@Z @ 0x1800D7F50 (--2CCachedVisualImage@@KAPEAX_K@Z.c)
 *     ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x180176338 (-RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z @ 0x1801C7EE8 (-SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z.c)
 */

__int64 __fastcall CSnapshot::CreateCVI(CSnapshot *this, struct CVisual *a2)
{
  CCachedVisualImage *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  CCachedVisualImage *v8; // rdi
  unsigned int v9; // ebx
  int v10; // r8d
  int v11; // r9d
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx

  v4 = (CCachedVisualImage *)CCachedVisualImage::operator new();
  if ( v4 )
    v8 = CCachedVisualImage::CCachedVisualImage(v4, *((struct CComposition **)this + 2), v6, v7);
  else
    v8 = 0LL;
  if ( v8 )
  {
    CMILCOMBase::InternalAddRef((CCachedVisualImage *)((char *)v8 + 16));
    v10 = *((_DWORD *)this + 14);
    if ( v10
      && (v11 = *((_DWORD *)this + 15)) != 0
      && (v12 = CCachedVisualImage::SetForDCompSnapshot(v8, a2, v10, v11, *((_BYTE *)this + 64)), v9 = v12, v12 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x33u, 0LL);
    }
    else
    {
      v14 = CComposition::RegisterSnapshotToPerform(*((CComposition **)this + 2), v8);
      v9 = v14;
      if ( v14 >= 0 )
      {
        *((_QWORD *)this + 9) = v8;
        return v9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x37u, 0LL);
    }
    CGdiSpriteBitmap::Release((CCachedVisualImage *)((char *)v8 + 16));
    return v9;
  }
  v9 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x8007000E, 0x2Cu, 0LL);
  return v9;
}
