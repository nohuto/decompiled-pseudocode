/*
 * XREFs of ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x1800127E8
 * Callers:
 *     ?Initialize@CButton@@MEAAJXZ @ 0x180011CC0 (-Initialize@CButton@@MEAAJXZ.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180021ACC (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z @ 0x180093E10 (-Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z.c)
 * Callees:
 *     ?InsertAt@?$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z @ 0x1800160DC (-InsertAt@-$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::InsertAtlasImageAtIndex(
        CAtlasedRectsVisual *this,
        struct CAtlasedImage *a2,
        __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  void *v7; // [rsp+28h] [rbp-10h]
  struct CAtlasedImage *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v4 = DynArray<CAtlasedImage *,0>::InsertAt((char *)this + 240, &v8, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x4Du, v7);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
    *((_QWORD *)v8 + 10) = this;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
  }
  return v5;
}
