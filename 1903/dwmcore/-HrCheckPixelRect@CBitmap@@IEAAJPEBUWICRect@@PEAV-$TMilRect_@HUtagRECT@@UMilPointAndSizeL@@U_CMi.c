/*
 * XREFs of ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18004438C
 * Callers:
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180043F20 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800A3DC0 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180044490 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800444E8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180079B34 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CBitmap::HrCheckPixelRect(__int64 a1, int *a2, _OWORD *a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  signed int v6; // ecx
  int v7; // r8d
  unsigned int v8; // r8d
  int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  unsigned int v16; // [rsp+20h] [rbp-30h]
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF

  DWORD2(v17) = *(_DWORD *)(a1 + 168);
  v4 = 0;
  HIDWORD(v17) = *(_DWORD *)(a1 + 172);
  *(_QWORD *)&v17 = 0LL;
  *a3 = v17;
  if ( !a2 )
    return v4;
  v5 = *a2;
  v6 = a2[1];
  *(_QWORD *)&v17 = __PAIR64__(v6, v5);
  if ( v5 < 0 )
  {
    v16 = 628;
LABEL_22:
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, v16, 0LL);
    return v4;
  }
  v7 = a2[2];
  if ( v7 < 0 )
  {
    v16 = 629;
    goto LABEL_22;
  }
  v8 = v5 + v7;
  if ( v8 < v5 )
  {
    v16 = 630;
    goto LABEL_22;
  }
  if ( v8 > 0x7FFFFFFF )
  {
    v16 = 631;
    goto LABEL_22;
  }
  DWORD2(v17) = v8;
  if ( v6 < 0 )
  {
    v16 = 633;
    goto LABEL_22;
  }
  v9 = a2[3];
  if ( v9 < 0 )
  {
    v16 = 634;
    goto LABEL_22;
  }
  v10 = v6 + v9;
  if ( v10 < v6 )
  {
    v16 = 635;
    goto LABEL_22;
  }
  if ( v10 > 0x7FFFFFFF )
  {
    v16 = 636;
    goto LABEL_22;
  }
  HIDWORD(v17) = v10;
  TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a3, &v17);
  if ( !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v17, v11, v12, v13)
    && (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEquivalentTo(&v17, v14) )
  {
    return v4;
  }
  return 2147942487LL;
}
