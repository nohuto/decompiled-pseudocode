/*
 * XREFs of ?NotifyRenderedRect@CHwCompSwapChainTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180200D50
 * Callers:
 *     ?NotifyRenderedRect@CHwCompSwapChainTarget@@WBBA@EAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800F0C80 (-NotifyRenderedRect@CHwCompSwapChainTarget@@WBBA@EAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSize.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180068F08 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009B314 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A0628 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::NotifyRenderedRect(__int64 a1, int *a2)
{
  LONG v2; // r10d
  LONG v3; // r9d
  unsigned int v6; // ebx
  LONG v7; // ecx
  LONG v8; // eax
  int v9; // edx
  LONG v10; // r11d
  bool v11; // zf
  bool v12; // sf
  LONG v13; // eax
  LONG v14; // r8d
  LONG v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  struct tagRECT v23; // [rsp+30h] [rbp-29h] BYREF
  void *v24[10]; // [rsp+40h] [rbp-19h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 12);
  *(_QWORD *)&v23.left = 0LL;
  v23.right = v2;
  v6 = 0;
  v23.bottom = v3;
  if ( a2 )
  {
    v7 = a2[2];
    v8 = 0;
    v9 = *a2;
    v10 = 0;
    if ( v9 <= 0 )
      v9 = 0;
    else
      v8 = v9;
    v11 = a2[1] == 0;
    v12 = a2[1] < 0;
    v23.left = v8;
    v13 = v2;
    if ( !v12 && !v11 )
      v10 = a2[1];
    v14 = a2[3];
    if ( v7 < v2 )
      v13 = v7;
    v23.top = v10;
    if ( v7 >= v2 )
      v7 = v2;
    v23.right = v13;
    v15 = v3;
    if ( v14 < v3 )
      v15 = v14;
    v23.bottom = v15;
    if ( v7 <= v9 )
      goto LABEL_17;
    if ( v14 >= v3 )
      v14 = v3;
    if ( v14 <= v10 )
    {
LABEL_17:
      *(_QWORD *)&v23.right = 0LL;
      *(_QWORD *)&v23.left = 0LL;
    }
  }
  if ( !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v23) )
  {
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v24, &v23);
    v16 = FastRegion::CRegion::Union(
            (const struct FastRegion::Internal::CRgnData **)(a1 + 304),
            (const struct FastRegion::Internal::CRgnData **)v24);
    v6 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xBFu);
    }
    else
    {
      v18 = FastRegion::CRegion::Subtract(
              (const struct FastRegion::Internal::CRgnData **)(a1 + 376),
              (const struct FastRegion::Internal::CRgnData **)v24);
      v6 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xC3u);
      }
      else
      {
        v20 = FastRegion::CRegion::Subtract(
                (const struct FastRegion::Internal::CRgnData **)(a1 + 448),
                (const struct FastRegion::Internal::CRgnData **)v24);
        v6 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xC4u);
      }
    }
    FastRegion::CRegion::FreeMemory(v24);
  }
  return v6;
}
