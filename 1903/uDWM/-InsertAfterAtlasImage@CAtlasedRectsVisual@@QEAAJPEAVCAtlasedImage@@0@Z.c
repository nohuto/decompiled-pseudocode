/*
 * XREFs of ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z @ 0x180001A00
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180001724 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?InsertAt@?$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z @ 0x1800160DC (-InsertAt@-$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::InsertAfterAtlasImage(
        CAtlasedRectsVisual *this,
        struct CAtlasedImage *a2,
        struct CAtlasedImage *a3)
{
  __int64 v5; // r8
  unsigned int v6; // r9d
  unsigned int v7; // eax
  struct CAtlasedImage **i; // rcx
  int v9; // eax
  int v10; // ebx
  void *v12; // [rsp+28h] [rbp-10h]
  struct CAtlasedImage *v13; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( a3 )
  {
    v6 = *((_DWORD *)this + 66);
    v7 = 0;
    for ( i = (struct CAtlasedImage **)*((_QWORD *)this + 30); v7 < v6; ++i )
    {
      if ( a3 == *i )
        break;
      ++v7;
    }
    if ( v7 == v6 )
    {
      v10 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x39u, v12);
      return (unsigned int)v10;
    }
    v5 = v7 + 1;
  }
  v13 = a2;
  v9 = DynArray<CAtlasedImage *,0>::InsertAt((char *)this + 240, &v13, v5);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x4Du, v12);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
    *((_QWORD *)v13 + 10) = this;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
  }
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x40u, v12);
  return (unsigned int)v10;
}
