/*
 * XREFs of ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180046F68
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCHwndRenderTarget@@@Z @ 0x18004AAAC (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005F950 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017AF90 (-ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x1800474D4 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x180064294 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18006AE30 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushRenderTarget(CDrawingContext *this, struct IRenderTarget *a2)
{
  struct IRenderTarget **v2; // r13
  __int64 v3; // rbx
  int v5; // edi
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  char *v8; // r15
  unsigned int v9; // ecx
  __int64 v10; // rax
  unsigned int v11; // edx
  _OWORD *v12; // rcx
  char v13; // r12
  struct IRenderTarget *v14; // rcx
  __int64 *v15; // r14
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  int updated; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // r12d
  unsigned int v27; // r12d
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  __int64 v31; // [rsp+38h] [rbp-61h] BYREF
  struct IRenderTarget *v32; // [rsp+40h] [rbp-59h]
  _BYTE v33[80]; // [rsp+50h] [rbp-49h] BYREF
  char v34[16]; // [rsp+A0h] [rbp+7h] BYREF

  v32 = a2;
  v2 = (struct IRenderTarget **)((char *)this + 352);
  v31 = 0LL;
  v3 = *((_QWORD *)this + 44);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 44));
  v5 = 0;
  *((_BYTE *)this + 6345) = 1;
  v6 = 0;
  v7 = 0;
  if ( *((_DWORD *)this + 158) )
  {
    v8 = (char *)this + 608;
    while ( 1 )
    {
      v24 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v8 + 8LL * v7), this);
      v5 = v24;
      if ( v24 < 0 )
        break;
      ++v6;
      if ( ++v7 >= *((_DWORD *)this + 158) )
        goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x1710u);
  }
  else
  {
LABEL_4:
    v8 = (char *)this + 608;
    *((_DWORD *)this + 158) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 608, 8LL);
  }
  if ( v6 < *((_DWORD *)this + 158) && v6 )
  {
    v26 = *((_DWORD *)v8 + 6);
    if ( v6 > v26 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0x23Du);
    }
    else
    {
      v27 = v26 - v6;
      if ( v27 )
        memmove_0(*(void **)v8, (const void *)(*(_QWORD *)v8 + 8LL * v6), 8LL * v27);
      *((_DWORD *)v8 + 6) = v27;
    }
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v5, 0x16F2u);
  }
  else if ( *((_BYTE *)this + 6346) )
  {
    *(_WORD *)((char *)this + 6345) = 1;
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v5, 0x1135u);
    goto LABEL_49;
  }
  *(_DWORD *)&v33[72] = 0;
  v10 = *((unsigned int *)this + 258);
  v33[76] = 0;
  *(_QWORD *)v33 = 0LL;
  if ( (_DWORD)v10 )
  {
    CScopedClipStack::GetClipBoundsWorld((CDrawingContext *)((char *)this + 1008), (__int64)v34);
    v10 = *((unsigned int *)this + 258);
  }
  v11 = v10 + 1;
  v5 = (int)v10 + 1 < (unsigned int)v10 ? 0x80070216 : 0;
  *(_WORD *)&v33[72] = 32085;
  *(_OWORD *)&v33[8] = _xmm;
  *(_OWORD *)&v33[24] = _xmm;
  *(_OWORD *)&v33[40] = _xmm;
  *(_OWORD *)&v33[56] = _xmm;
  if ( (int)v10 + 1 < (unsigned int)v10 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v5, 0xB5u);
  }
  else if ( v11 > *((_DWORD *)this + 257) )
  {
    v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1008, 80, 1, v33);
    v5 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, v28, 0xC0u);
  }
  else
  {
    v12 = (_OWORD *)(*((_QWORD *)this + 126) + 80 * v10);
    *v12 = *(_OWORD *)v33;
    v12[1] = *(_OWORD *)&v33[16];
    v12[2] = *(_OWORD *)&v33[32];
    v12[3] = *(_OWORD *)&v33[48];
    v12[4] = *(_OWORD *)&v33[64];
    *((_DWORD *)this + 258) = v11;
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, v5, 0x4Bu);
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v5, 0x113Eu);
LABEL_49:
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v5, 0x2371u);
    v15 = (__int64 *)((char *)this + 368);
    v13 = 0;
    goto LABEL_53;
  }
  v13 = 1;
  if ( *v2 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)*v2 + 16LL))(*v2);
  v14 = v32;
  *v2 = v32;
  if ( v14 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = (__int64 *)((char *)this + 368);
  v16 = *((_QWORD *)this + 46);
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    *v15 = 0LL;
  }
  (**(void (__fastcall ***)(struct IRenderTarget *, GUID *, char *))*v2)(
    *v2,
    &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
    (char *)this + 368);
  v17 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)*v2 + 40LL))(*v2, &v31);
  v5 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x2382u);
  }
  else
  {
    if ( !*((_QWORD *)this + 48) )
    {
      *((_QWORD *)this + 48) = v31;
      v31 = 0LL;
    }
    updated = CDrawingContext::UpdateRenderTargetState(this);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, updated, 0x2393u);
    }
    else
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, struct IRenderTarget *))(**((_QWORD **)this + 48) + 24LL))(
              *((_QWORD *)this + 48),
              -(__int64)(this != 0LL) & ((unsigned __int64)this + 8),
              *v2);
      v5 = v21;
      if ( v21 >= 0 )
        goto LABEL_27;
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x2399u);
    }
  }
LABEL_53:
  ReplaceInterface<IDXGIResource,IDXGIResource>(v2, v3);
  ReleaseInterface<IBitmapLock>(v15);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 48);
  if ( *v2 )
  {
    (**(void (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))*v2)(
      *v2,
      &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
      v15);
    (*(void (__fastcall **)(struct IRenderTarget *, char *))(*(_QWORD *)*v2 + 40LL))(*v2, (char *)this + 384);
    CDrawingContext::UpdateRenderTargetState(this);
  }
  if ( v13 )
    --*((_DWORD *)this + 258);
LABEL_27:
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v5;
}
