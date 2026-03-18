/*
 * XREFs of SetRedirectedWindow @ 0x1C002BF18
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x1C002BD00 (_SetLayeredWindowAttributes.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxPrintWindow @ 0x1C01E996C (xxxPrintWindow.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C0022D88 (IsToplevelWindowDesktopComposed.c)
 *     RedirectDCEs @ 0x1C00246A0 (RedirectDCEs.c)
 *     HintSpriteShape @ 0x1C0029310 (HintSpriteShape.c)
 *     UpdateWindowSpriteDPI @ 0x1C00295F8 (UpdateWindowSpriteDPI.c)
 *     GetRedirectionBitmap @ 0x1C002B520 (GetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C002C250 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C002C3F4 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00446B4 (DeleteOrSetRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     FillRect @ 0x1C008DA04 (FillRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0091FF0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C00BE728 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00BEA88 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0106C8C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     IncrementCompositedCount @ 0x1C01E9580 (IncrementCompositedCount.c)
 */

__int64 __fastcall SetRedirectedWindow(struct tagWND *a1, int a2)
{
  int v4; // r12d
  int v5; // r13d
  unsigned int v6; // r14d
  __int64 v7; // rsi
  BOOL v8; // esi
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  HBRUSH v16; // rsi
  __int64 SolidBrush; // rax
  __m128i v18; // xmm0
  HBRUSH v19; // r8
  HBITMAP RedirectionBitmap; // rax
  __int64 Prop; // rax
  _BYTE v23[8]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v24[2]; // [rsp+28h] [rbp-28h] BYREF
  RECT v25; // [rsp+38h] [rbp-18h] BYREF
  HBITMAP v26; // [rsp+A0h] [rbp+50h] BYREF
  HBRUSH v27; // [rsp+A8h] [rbp+58h]

  v26 = 0LL;
  SmartObjStackRefBase<tagCLS>::Init(v24, 0LL);
  v4 = a2 & 0x10;
  v5 = 0;
  v6 = a2 & 0xFFFFFFEF;
  if ( GetRedirectionBitmap((__int64)a1) )
  {
    if ( v6 == 1 )
    {
      RedirectionBitmap = (HBITMAP)GetRedirectionBitmap((__int64)a1);
      HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1, RedirectionBitmap, 0);
    }
    goto LABEL_39;
  }
  v7 = *((_QWORD *)a1 + 17);
  if ( v7 != *(_QWORD *)v24[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v24);
    if ( v7 )
    {
      v24[0] = *(_QWORD *)(v7 + 128);
      ++*(_DWORD *)(v24[0] + 8LL);
    }
    else
    {
      v24[0] = gSmartObjNullRef;
    }
  }
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 8LL) < 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 8LL) & 0x40) != 0 )
  {
    v8 = 0;
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      v8 = v6 == 1;
    if ( !(unsigned int)IsTopLevelWindow(a1)
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 8LL) & 0x40) == 0
      && v6 == 1 )
    {
      v8 = 1;
    }
    if ( !v8 )
    {
      v9 = -2143420411;
      goto LABEL_42;
    }
  }
  v9 = CreateOrGetRedirectionBitmap(a1, 0LL, 0LL, &v26);
  if ( v9 >= 0 )
  {
    if ( (unsigned int)SetRedirectionBitmap(a1, v26, 0) )
    {
      SetOrClrWF(1LL, a1, 2848LL, 1LL);
      v10 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      UpdateWindowSpriteDPI(a1, v10);
    }
    else
    {
      DeleteOrSetRedirectionBitmap(a1, v26, 0LL);
      v9 = -1073741801;
    }
    if ( v9 >= 0 )
    {
      if ( v6 == 2 )
        IncrementCompositedCount(a1);
      if ( v6 == 1 )
      {
        v14 = *((_QWORD *)a1 + 5);
        if ( (*(_QWORD *)(v14 + 88) != *(_QWORD *)(v14 + 104)
           || *(_QWORD *)(v14 + 96) != *(_QWORD *)(v14 + 112)
           || *(_QWORD *)(v14 + 168))
          && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v14 + 88)) )
        {
          v16 = 0LL;
          v27 = (HBRUSH)ghbrWhite;
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 1084LL) )
          {
            SolidBrush = GreCreateSolidBrush();
            v15 = *((_QWORD *)a1 + 5);
            v16 = (HBRUSH)SolidBrush;
          }
          v18 = *(__m128i *)(v15 + 88);
          v25.bottom = v18.m128i_i32[3] - v18.m128i_i32[1];
          v25.top = 0;
          v25.right = v18.m128i_i32[2] - _mm_cvtsi128_si32(v18);
          v25.left = 0;
          GreSelectBitmap(ghdcMem);
          v19 = v16;
          if ( !v16 )
            v19 = v27;
          FillRect(ghdcMem, &v25, v19);
          if ( v16 )
            GreDeleteObject(v16);
          GreSelectBitmap(ghdcMem);
          v5 = 1;
        }
        HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1, v26, v5);
      }
      RedirectDCEs(a1, v11, v12, v13);
LABEL_39:
      if ( !v4 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v23);
        xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v23);
      }
      Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
      *(_DWORD *)(Prop + 32) |= v6;
      v9 = 0;
    }
  }
LABEL_42:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v24);
  return (unsigned int)v9;
}
