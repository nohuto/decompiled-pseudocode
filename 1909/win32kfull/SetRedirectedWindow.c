/*
 * XREFs of SetRedirectedWindow @ 0x1C0032388
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x1C0032170 (_SetLayeredWindowAttributes.c)
 *     xxxSetWindowStyle @ 0x1C003C020 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxPrintWindow @ 0x1C01E97EC (xxxPrintWindow.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00291F8 (IsToplevelWindowDesktopComposed.c)
 *     RedirectDCEs @ 0x1C002AB10 (RedirectDCEs.c)
 *     HintSpriteShape @ 0x1C002F780 (HintSpriteShape.c)
 *     UpdateWindowSpriteDPI @ 0x1C002FA68 (UpdateWindowSpriteDPI.c)
 *     GetRedirectionBitmap @ 0x1C0031990 (GetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00326C0 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0032864 (CreateOrGetRedirectionBitmap.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C005FE08 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C0060168 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C0065240 (xxxInternalInvalidate.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C0089084 (DeleteOrSetRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00E108C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     FillRect @ 0x1C012BF54 (FillRect.c)
 *     IncrementCompositedCount @ 0x1C01E9400 (IncrementCompositedCount.c)
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
  __int64 v12; // rdx
  HBRUSH v13; // rsi
  __int64 SolidBrush; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  HBRUSH v17; // r8
  __int64 v18; // r13
  HBITMAP RedirectionBitmap; // rax
  __int64 Prop; // rax
  _BYTE v22[8]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v23[2]; // [rsp+28h] [rbp-28h] BYREF
  RECT v24; // [rsp+38h] [rbp-18h] BYREF
  HBITMAP v25; // [rsp+A0h] [rbp+50h] BYREF
  HBRUSH v26; // [rsp+A8h] [rbp+58h]

  v25 = 0LL;
  SmartObjStackRefBase<tagCLS>::Init(v23, 0LL);
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
  if ( v7 != *(_QWORD *)v23[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v23);
    if ( v7 )
    {
      v23[0] = *(_QWORD *)(v7 + 128);
      ++*(_DWORD *)(v23[0] + 8LL);
    }
    else
    {
      v23[0] = gSmartObjNullRef;
    }
  }
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)v23[0] + 8LL) + 8LL) < 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v23[0] + 8LL) + 8LL) & 0x40) != 0 )
  {
    v8 = 0;
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      v8 = v6 == 1;
    if ( !(unsigned int)IsTopLevelWindow(a1)
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v23[0] + 8LL) + 8LL) & 0x40) == 0
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
  v9 = CreateOrGetRedirectionBitmap(a1, 0LL, 0LL, &v25);
  if ( v9 >= 0 )
  {
    if ( (unsigned int)SetRedirectionBitmap(a1, v25, 0) )
    {
      SetOrClrWF(1LL, a1, 2848LL, 1LL);
      v10 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      UpdateWindowSpriteDPI(a1, v10);
    }
    else
    {
      DeleteOrSetRedirectionBitmap(a1, v25, 0LL);
      v9 = -1073741801;
    }
    if ( v9 >= 0 )
    {
      if ( v6 == 2 )
        IncrementCompositedCount(a1);
      if ( v6 == 1 )
      {
        v11 = *((_QWORD *)a1 + 5);
        if ( (*(_QWORD *)(v11 + 88) != *(_QWORD *)(v11 + 104)
           || *(_QWORD *)(v11 + 96) != *(_QWORD *)(v11 + 112)
           || *(_QWORD *)(v11 + 168))
          && !IsRectEmptyInl((const struct tagRECT *)(v11 + 88)) )
        {
          v13 = 0LL;
          v26 = (HBRUSH)ghbrWhite;
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 1084LL) )
          {
            SolidBrush = GreCreateSolidBrush();
            v12 = *((_QWORD *)a1 + 5);
            v13 = (HBRUSH)SolidBrush;
          }
          v15 = *(__m128i *)(v12 + 88);
          v24.bottom = v15.m128i_i32[3] - v15.m128i_i32[1];
          v24.top = 0;
          v24.right = v15.m128i_i32[2] - _mm_cvtsi128_si32(v15);
          v24.left = 0;
          v16 = GreSelectBitmap(ghdcMem, v25);
          v17 = v13;
          v18 = v16;
          if ( !v13 )
            v17 = v26;
          FillRect(ghdcMem, &v24, v17);
          if ( v13 )
            GreDeleteObject(v13);
          GreSelectBitmap(ghdcMem, v18);
          v5 = 1;
        }
        HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1, v25, v5);
      }
      RedirectDCEs(a1);
LABEL_39:
      if ( !v4 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v22);
        xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v22);
      }
      Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
      *(_DWORD *)(Prop + 32) |= v6;
      v9 = 0;
    }
  }
LABEL_42:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v23);
  return (unsigned int)v9;
}
