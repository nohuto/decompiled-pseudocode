/*
 * XREFs of ?PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ @ 0x1800DDCA0
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18005C990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z @ 0x1800A4950 (--$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushWindowMetaDataToRenderTarget(CDrawingContext *this)
{
  signed int v2; // eax
  __int64 v3; // rcx
  int v4; // ebx
  int v5; // ecx
  __int64 i; // rsi
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64 *, _OWORD *); // rax
  signed int v16; // eax
  __int64 v17; // rcx
  int v18; // r14d
  __int128 v19; // [rsp+38h] [rbp-39h]
  __int128 v20; // [rsp+48h] [rbp-29h]
  __int128 v21; // [rsp+58h] [rbp-19h]
  _OWORD v22[6]; // [rsp+68h] [rbp-9h] BYREF
  __int64 *v23; // [rsp+E0h] [rbp+6Fh] BYREF
  CGdiSpriteBitmap *v24; // [rsp+E8h] [rbp+77h] BYREF

  v23 = 0LL;
  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))this + 44))(
         *((_QWORD *)this + 44),
         &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
         &v23);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x1BE4u, 0LL);
  }
  else
  {
    v5 = *((_DWORD *)this + 1542) - 1;
    for ( i = v5; i >= 0; *(_QWORD *)(*((_QWORD *)this + 768) + 8 * i--) = 0LL )
    {
      LODWORD(v19) = 1;
      v24 = *(CGdiSpriteBitmap **)(*((_QWORD *)this + 768) + 8 * i);
      *((_QWORD *)&v21 + 1) = *((_QWORD *)v24 + 6);
      *((_QWORD *)&v19 + 1) = *((_QWORD *)v24 + 7);
      v8 = *((float *)v24 + 6) + 6291456.25;
      LODWORD(v21) = (int)(LODWORD(v8) << 10) >> 11;
      v9 = *((float *)v24 + 7) + 6291456.25;
      DWORD1(v21) = (int)(LODWORD(v9) << 10) >> 11;
      v10 = *((float *)v24 + 8) + 6291456.25;
      LODWORD(v20) = (int)(LODWORD(v10) << 10) >> 11;
      v11 = *((float *)v24 + 9) + 6291456.25;
      DWORD1(v20) = (int)(LODWORD(v11) << 10) >> 11;
      v12 = *((float *)v24 + 10) + 6291456.25;
      DWORD2(v20) = (int)(LODWORD(v12) << 10) >> 11;
      v13 = *((float *)v24 + 11) + 6291456.25;
      HIDWORD(v20) = (int)(LODWORD(v13) << 10) >> 11;
      v14 = *v23;
      v22[0] = v19;
      v15 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v14 + 272);
      v22[1] = v20;
      v22[2] = v21;
      v16 = v15(v23, v22);
      v18 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1BFAu, 0LL);
      if ( !v4 || v4 >= 0 && v18 < 0 )
        v4 = v18;
      ReleaseInterface<MoveOptimizationInfo>(&v24);
    }
  }
  *((_DWORD *)this + 1542) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 6144, 8u);
  *((_DWORD *)this + 1556) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 6200, 8u);
  if ( v23 )
    (*(void (__fastcall **)(__int64 *))(*v23 + 16))(v23);
  return (unsigned int)v4;
}
