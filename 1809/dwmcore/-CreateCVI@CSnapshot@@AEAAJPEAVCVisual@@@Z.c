/*
 * XREFs of ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1801B2828
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x1801B2A50 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??2CCachedVisualImage@@KAPEAX_K@Z @ 0x180079E1C (--2CCachedVisualImage@@KAPEAX_K@Z.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x18009E250 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x18014BCF4 (-RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z @ 0x18018D620 (-SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z.c)
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
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
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
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x34u);
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
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x38u);
    }
    CGdiSpriteBitmap::Release((CCachedVisualImage *)((char *)v8 + 16));
    return v9;
  }
  v9 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x2Du);
  return v9;
}
