/*
 * XREFs of ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@Z @ 0x18006A8D8
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800671F0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3FD0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Present@CHwCompSwapChainTarget@@UEAAJ_N@Z @ 0x18023EAE0 (-Present@CHwCompSwapChainTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18006CB50 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18006CD24 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BF920 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

__int64 __fastcall CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>>(
        FastRegion::Internal::CRgnData **a1,
        __int64 a2)
{
  FastRegion::Internal::CRgnData *v2; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned int v8; // ebp
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // edi
  __int64 v12; // rdx
  FastRegion::Internal::CRgnData *v13; // rcx
  __int128 v15; // [rsp+30h] [rbp-48h]
  _BYTE v16[8]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]
  _DWORD *v18; // [rsp+50h] [rbp-28h]
  __int64 v19; // [rsp+58h] [rbp-20h]
  int v20; // [rsp+60h] [rbp-18h]

  v2 = *a1;
  v5 = *(_DWORD *)*a1;
  if ( v5 )
  {
    v6 = (__int64)v2 + 8 * v5 + 4;
    v7 = (v6 + *(int *)(v6 + 4) - (__int64)*((int *)v2 + 4) - ((__int64)v2 + 12)) >> 3;
  }
  else
  {
    LODWORD(v7) = 0;
  }
  v8 = *(_DWORD *)(a2 + 24);
  v9 = DynArrayImpl<0>::Grow(a2, 16, v7, 0, 0LL);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x18Eu, 0LL);
  else
    *(_DWORD *)(a2 + 24) += v7;
  if ( v11 >= 0 )
  {
    FastRegion::Internal::CRgnData::BeginIterator(*a1, (struct FastRegion::CRegion::Iterator *)v16);
    while ( (unsigned __int64)v18 < v17 )
    {
      DWORD1(v15) = *v18;
      HIDWORD(v15) = v18[2];
      v12 = 2 * v20;
      LODWORD(v15) = *(_DWORD *)(v19 + 4 * v12);
      DWORD2(v15) = *(_DWORD *)(v19 + 4 * v12 + 4);
      v13 = (FastRegion::Internal::CRgnData *)(2LL * v8);
      *(_OWORD *)(*(_QWORD *)a2 + 8LL * (_QWORD)v13) = v15;
      FastRegion::Internal::CRgnData::StepIterator(v13, (struct FastRegion::CRegion::Iterator *)v16);
      ++v8;
    }
  }
  return (unsigned int)v11;
}
