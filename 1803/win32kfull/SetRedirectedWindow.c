/*
 * XREFs of SetRedirectedWindow @ 0x1C0075334
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 *     _SetLayeredWindowAttributes @ 0x1C007B700 (_SetLayeredWindowAttributes.c)
 *     xxxPrintWindow @ 0x1C01B1C10 (xxxPrintWindow.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0030C48 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0074C84 (CreateOrGetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0074FB8 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     RedirectDCEs @ 0x1C00764B0 (RedirectDCEs.c)
 *     HintSpriteShape @ 0x1C0077790 (HintSpriteShape.c)
 *     UpdateWindowSpriteDPI @ 0x1C0077A60 (UpdateWindowSpriteDPI.c)
 *     GetRedirectionBitmap @ 0x1C007BA20 (GetRedirectionBitmap.c)
 *     FillRect @ 0x1C009F914 (FillRect.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C4EA8 (DeleteOrSetRedirectionBitmap.c)
 *     IncrementCompositedCount @ 0x1C01B17B0 (IncrementCompositedCount.c)
 */

__int64 __fastcall SetRedirectedWindow(struct tagWND *a1, int a2)
{
  int v4; // r13d
  unsigned int v5; // edi
  unsigned int v6; // r15d
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 Prop; // rax
  __m128i *v15; // r8
  __m128i v16; // xmm0
  int v17; // eax
  __int64 v18; // rbx
  BOOL v19; // ebx
  __int64 RedirectionBitmap; // rax
  _QWORD v21[2]; // [rsp+20h] [rbp-20h] BYREF
  RECT v22; // [rsp+30h] [rbp-10h] BYREF
  HBITMAP v23; // [rsp+80h] [rbp+40h] BYREF
  char v24; // [rsp+88h] [rbp+48h] BYREF

  v23 = 0LL;
  SmartObjStackRefBase<tagCLS>::Init(v21, 0LL);
  v4 = a2 & 0x10;
  v5 = 0;
  v6 = a2 & 0xFFFFFFEF;
  if ( GetRedirectionBitmap(a1) )
  {
    if ( v6 == 1 )
    {
      RedirectionBitmap = GetRedirectionBitmap(a1);
      HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, RedirectionBitmap, 0LL);
    }
    goto LABEL_21;
  }
  v7 = *((_QWORD *)a1 + 14);
  if ( v7 != *(_QWORD *)v21[0] )
  {
    if ( v21[0] != gSmartObjNullRef && !--*(_DWORD *)(v21[0] + 8LL) )
    {
      if ( *(_BYTE *)(v21[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v21[0]);
    }
    if ( v7 )
    {
      v21[0] = *(_QWORD *)(v7 + 128);
      ++*(_DWORD *)(v21[0] + 8LL);
    }
    else
    {
      v21[0] = gSmartObjNullRef;
    }
  }
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)v21[0] + 8LL) + 8LL) < 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v21[0] + 8LL) + 8LL) & 0x40) != 0 )
  {
    v19 = 0;
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      v19 = v6 == 1;
    if ( !(unsigned int)IsTopLevelWindow((__int64)a1)
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v21[0] + 8LL) + 8LL) & 0x40) == 0
      && v6 == 1 )
    {
      v19 = 1;
    }
    if ( !v19 )
    {
      v9 = -2143420411;
      goto LABEL_24;
    }
  }
  v9 = CreateOrGetRedirectionBitmap((__int64)a1, 0, 0, (HSURF *)&v23);
  if ( v9 >= 0 )
  {
    if ( (unsigned int)SetRedirectionBitmap(a1, v23, 0) )
    {
      SetOrClrWF(1LL, a1, 2848LL, 1LL);
      v10 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      UpdateWindowSpriteDPI(a1, v10);
    }
    else
    {
      DeleteOrSetRedirectionBitmap(a1, v23, 0LL);
      v9 = -1073741801;
    }
    if ( v9 >= 0 )
    {
      if ( v6 == 2 )
        IncrementCompositedCount(a1);
      if ( v6 == 1 )
      {
        v11 = *((_QWORD *)a1 + 5);
        v12 = *(_QWORD *)(v11 + 88) - *(_QWORD *)(v11 + 104);
        if ( !v12 )
          v12 = *(_QWORD *)(v11 + 96) - *(_QWORD *)(v11 + 112);
        if ( (v12 || *(_QWORD *)(v11 + 168)) && !IsRectEmptyInl((const struct tagRECT *)(v11 + 88)) )
        {
          v16 = *v15;
          v17 = _mm_cvtsi128_si32(*v15);
          v22.bottom = v16.m128i_i32[3] - v16.m128i_i32[1];
          v22.top = 0;
          v22.right = v16.m128i_i32[2] - v17;
          v22.left = 0;
          v18 = GreSelectBitmap(ghdcMem, v23);
          FillRect(ghdcMem, &v22, ghbrWhite);
          v5 = 1;
          GreSelectBitmap(ghdcMem, v18);
        }
        HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, v23, v5);
      }
      RedirectDCEs(a1);
LABEL_21:
      if ( !v4 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v24);
        xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v24);
      }
      Prop = RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomLayer, 1LL);
      *(_DWORD *)(Prop + 32) |= v6;
      v9 = 0;
    }
  }
LABEL_24:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v21, v8);
  return (unsigned int)v9;
}
