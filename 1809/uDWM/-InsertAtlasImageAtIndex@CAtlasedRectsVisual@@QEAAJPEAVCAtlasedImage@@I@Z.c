/*
 * XREFs of ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180021D08
 * Callers:
 *     ?Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z @ 0x180023360 (-Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180024E10 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z @ 0x180072C34 (-InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18008F190 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001F390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::InsertAtlasImageAtIndex(
        CAtlasedRectsVisual *this,
        struct CAtlasedImage *a2,
        unsigned int a3)
{
  char **v3; // rdi
  __int64 v4; // rsi
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  char *v9; // r8
  struct CAtlasedImage **v10; // rdx
  struct CAtlasedImage **v11; // r9
  char *v13; // r9
  struct CAtlasedImage **v14; // [rsp+50h] [rbp+8h] BYREF
  struct CAtlasedImage *v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  v3 = (char **)((char *)this + 240);
  v4 = a3;
  if ( a3 > *((_DWORD *)this + 66) )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1C3u);
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x4Du);
    return (unsigned int)v7;
  }
  v14 = &v15;
  v6 = DynArrayImpl<0>::Grow(v3, 8u, 1, 0, (unsigned __int64 *)&v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1CDu);
  }
  else
  {
    v8 = *((unsigned int *)v3 + 6);
    v9 = *v3;
    *((_DWORD *)v3 + 6) = v8 + 1;
    if ( (unsigned int)v8 > (unsigned int)v4 )
    {
      v13 = &v9[8 * v8];
      do
      {
        v8 = (unsigned int)(v8 - 1);
        *(_QWORD *)v13 = *(_QWORD *)&v9[8 * v8];
        v13 -= 8;
      }
      while ( (unsigned int)v8 > (unsigned int)v4 );
    }
    v10 = v14;
    v11 = (struct CAtlasedImage **)&v9[8 * v4];
    if ( v14 >= v11 && v14 < (struct CAtlasedImage **)&v9[8 * *((unsigned int *)v3 + 6) - 8] )
      v10 = ++v14;
    *v11 = *v10;
  }
  if ( v7 < 0 )
    goto LABEL_11;
  _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
  *((_QWORD *)v15 + 10) = this;
  (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
  return (unsigned int)v7;
}
