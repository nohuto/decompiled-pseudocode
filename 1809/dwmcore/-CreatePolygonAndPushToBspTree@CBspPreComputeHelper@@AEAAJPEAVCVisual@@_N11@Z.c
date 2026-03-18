/*
 * XREFs of ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18022464C
 * Callers:
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180224538 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x18002CA44 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x180076330 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x180173B08 (--2CBspNode@@SAPEAX_K@Z.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1801B6B48 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 *     ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z @ 0x180224874 (-Pop@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x180224B88 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180231094 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::CreatePolygonAndPushToBspTree(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        bool a3,
        char a4,
        char a5)
{
  const struct CMILMatrix *TopByReference; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // eax
  int *v14; // rbx
  float *v15; // rax
  int *v16; // r9
  char *v17; // r8
  int *v18; // r11
  int *v19; // r10
  int PolygonNoRef; // eax
  __int64 v21; // rcx
  unsigned int v22; // esi
  __int64 v23; // rcx
  CBspNode *v24; // rbx
  volatile signed __int32 *v25; // rax
  __int64 v26; // rcx
  unsigned int v28; // [rsp+28h] [rbp-61h]
  CBspNode *v29; // [rsp+68h] [rbp-21h] BYREF
  _OWORD v30[4]; // [rsp+78h] [rbp-11h] BYREF
  int v31; // [rsp+B8h] [rbp+2Fh]
  struct CPolygon *v32; // [rsp+E8h] [rbp+5Fh] BYREF

  TopByReference = CMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 96));
  v32 = 0LL;
  v10 = *((_OWORD *)TopByReference + 1);
  v30[0] = *(_OWORD *)TopByReference;
  v11 = *((_OWORD *)TopByReference + 2);
  v30[1] = v10;
  v12 = *((_OWORD *)TopByReference + 3);
  v31 = *((_DWORD *)TopByReference + 16);
  v30[2] = v11;
  v30[3] = v12;
  v13 = *((_DWORD *)this + 40);
  v14 = 0LL;
  if ( v13 )
    v14 = (int *)(*((_QWORD *)this + 22) + 4LL * (unsigned int)(v13 - 1));
  v15 = (float *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 256);
  PolygonNoRef = CVisual::GetPolygonNoRef(
                   (__int64)a2,
                   (int)v30,
                   *v15,
                   *v16,
                   *v19,
                   *v18,
                   *v14,
                   a4,
                   *v17,
                   a5,
                   (__int64 *)&v32);
  v22 = PolygonNoRef;
  if ( PolygonNoRef < 0 )
  {
    v28 = 445;
    goto LABEL_15;
  }
  v24 = *(CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((__int64)this);
  v29 = v24;
  if ( v24 )
    goto LABEL_12;
  CWatermarkStack<CBspNode *,64,2,10>::Pop(v23, 0LL);
  v25 = (volatile signed __int32 *)CBspNode::operator new();
  v24 = (CBspNode *)v25;
  if ( v25 )
  {
    *((_DWORD *)v25 + 2) = 0;
    *(_QWORD *)v25 = &CBspNode::`vftable';
    *((_QWORD *)v25 + 4) = 0LL;
    *((_QWORD *)v25 + 5) = 0LL;
    *((_QWORD *)v25 + 6) = 0LL;
    *((_BYTE *)v25 + 56) = a3;
    _InterlockedIncrement(v25 + 2);
  }
  else
  {
    v24 = 0LL;
  }
  v29 = v24;
  if ( v24 )
  {
    PolygonNoRef = CWatermarkStack<CBspNode *,64,2,10>::Push(this, &v29);
    v22 = PolygonNoRef;
    if ( PolygonNoRef < 0 )
    {
      v28 = 458;
      goto LABEL_15;
    }
LABEL_12:
    PolygonNoRef = CBspNode::PushPolygon(v24, v32, a3);
    v22 = PolygonNoRef;
    if ( PolygonNoRef >= 0 )
      goto LABEL_16;
    v28 = 461;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, PolygonNoRef, v28);
    goto LABEL_16;
  }
  v22 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024882, 0x1C8u);
LABEL_16:
  ReleaseInterface<CD3DSurface>((__int64 *)&v32);
  return v22;
}
