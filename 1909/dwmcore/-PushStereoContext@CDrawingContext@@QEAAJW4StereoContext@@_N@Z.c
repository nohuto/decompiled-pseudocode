/*
 * XREFs of ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x18016F56C
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18005B6F4 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801996B0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A7AB0 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ??_ECStereoContextLayer@@UEAAPEAXI@Z @ 0x18016AC60 (--_ECStereoContextLayer@@UEAAPEAXI@Z.c)
 *     ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017B3D0 (-ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushStereoContext(__int64 a1, int a2, char a3)
{
  char v6; // r14
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  signed int v9; // edi
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // edx
  signed int v13; // eax
  signed int v14; // eax
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-28h]
  _DWORD *v18; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v8 = operator new(0x10uLL);
  if ( v8 )
  {
    v8[2] = a2;
    *(_QWORD *)v8 = &CStereoContextLayer::`vftable';
    *((_BYTE *)v8 + 12) = a3;
    *((_BYTE *)v8 + 13) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x13u, 0LL);
    v17 = 3796;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v17, 0LL);
    goto LABEL_18;
  }
  v18 = v8;
  v11 = *(_DWORD *)(a1 + 568);
  v12 = v11 + 1;
  if ( v11 + 1 >= v11 )
  {
    if ( v12 <= *(_DWORD *)(a1 + 564) )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 544) + 8LL * *(unsigned int *)(a1 + 568)) = v18;
      *(_DWORD *)(a1 + 568) = v12;
      goto LABEL_13;
    }
    v13 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 544, 8, 1, &v18);
    v9 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v13, 0xC3u, 0LL);
  }
  else
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  if ( v9 < 0 )
  {
    v17 = 3801;
    goto LABEL_17;
  }
LABEL_13:
  v6 = 1;
  v14 = CStereoContextLayer::ApplyState((CStereoContextLayer *)v8, (struct CDrawingContext *)a1);
  v9 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xEDCu, 0LL);
  else
    v8 = 0LL;
LABEL_18:
  if ( v9 < 0 && v6 )
    --*(_DWORD *)(a1 + 568);
  if ( v8 )
    CStereoContextLayer::`vector deleting destructor'((CStereoContextLayer *)v8, 1);
  return (unsigned int)v9;
}
