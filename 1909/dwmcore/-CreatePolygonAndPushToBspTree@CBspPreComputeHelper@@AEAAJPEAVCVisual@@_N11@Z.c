/*
 * XREFs of ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18025307C
 * Callers:
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180252F64 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007DB04 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x18007E400 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x1800D41F0 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x18019CF8C (--2CBspNode@@SAPEAX_K@Z.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1801C1B44 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 *     ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z @ 0x1802532C0 (-Pop@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18025359C (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180259F28 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
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
  signed int PolygonNoRef; // eax
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
                   (__int64)v30,
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
    v28 = 443;
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
      v28 = 456;
      goto LABEL_15;
    }
LABEL_12:
    PolygonNoRef = CBspNode::PushPolygon(v24, v32, a3);
    v22 = PolygonNoRef;
    if ( PolygonNoRef >= 0 )
      goto LABEL_16;
    v28 = 459;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, PolygonNoRef, v28, 0LL);
    goto LABEL_16;
  }
  v22 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, 0x8007000E, 0x1C6u, 0LL);
LABEL_16:
  ReleaseInterface<CD3DSurface>((__int64 *)&v32);
  return v22;
}
