/*
 * XREFs of ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180059680
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18003FA3C (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x180059100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18005B800 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017B3D0 (-ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x18002AD78 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002ADC8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A930 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180059AF4 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C8F70 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushRenderTarget(CDrawingContext *this, struct IRenderTarget *a2)
{
  __int64 *v2; // r15
  __int64 v3; // rbx
  char v6; // r13
  int v7; // esi
  unsigned int v8; // ebp
  unsigned int v9; // r12d
  void *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // edx
  _OWORD *v13; // rcx
  __int64 *v14; // r14
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  int updated; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // r12d
  unsigned int v26; // r12d
  unsigned int v27; // ecx
  int v28; // eax
  __int64 v29; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v30[80]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v31[16]; // [rsp+90h] [rbp-58h] BYREF

  v2 = (__int64 *)((char *)this + 352);
  v3 = *((_QWORD *)this + 44);
  v29 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v6 = 0;
  *((_BYTE *)this + 6345) = 1;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( *((_DWORD *)this + 158) )
  {
    while ( 1 )
    {
      v23 = CD2DLayer::ApplyState(*(CD2DLayer **)(*((_QWORD *)this + 76) + 8LL * v9), this);
      v7 = v23;
      if ( v23 < 0 )
        break;
      ++v8;
      if ( ++v9 >= *((_DWORD *)this + 158) )
        goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x1664u, 0LL);
  }
  else
  {
LABEL_4:
    v10 = (void *)*((_QWORD *)this + 76);
    *((_DWORD *)this + 158) = 0;
    if ( v10 != *((void **)this + 77) )
    {
      operator delete(v10);
      *((_QWORD *)this + 76) = *((_QWORD *)this + 77);
      *((_DWORD *)this + 157) = *((_DWORD *)this + 156);
    }
  }
  if ( v8 < *((_DWORD *)this + 158) && v8 )
  {
    v25 = *((_DWORD *)this + 158);
    if ( v8 > v25 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v10, 0LL, 0, -2147024809, 0x240u, 0LL);
    }
    else
    {
      v26 = v25 - v8;
      if ( v26 )
        memmove_0(*((void **)this + 76), (const void *)(*((_QWORD *)this + 76) + 8LL * v8), 8LL * v26);
      *((_DWORD *)this + 158) = v26;
    }
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v10, 0LL, 0, v7, 0x1646u, 0LL);
  }
  else if ( *((_BYTE *)this + 6346) )
  {
    *(_WORD *)((char *)this + 6345) = 1;
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v10, 0LL, 0, v7, 0x108Bu, 0LL);
    goto LABEL_16;
  }
  *(_DWORD *)&v30[72] = 0;
  v11 = *((unsigned int *)this + 258);
  v30[76] = 0;
  *(_QWORD *)v30 = 0LL;
  if ( (_DWORD)v11 )
  {
    CScopedClipStack::GetClipBoundsWorld((__int64)this + 1008, (__int64)v31);
    v11 = *((unsigned int *)this + 258);
  }
  v12 = v11 + 1;
  *(_WORD *)&v30[72] = 32085;
  *(_OWORD *)&v30[8] = _xmm;
  *(_OWORD *)&v30[24] = _xmm;
  *(_OWORD *)&v30[40] = _xmm;
  *(_OWORD *)&v30[56] = _xmm;
  if ( (int)v11 + 1 < (unsigned int)v11 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v10, 0LL, 0, -2147024362, 0xB8u, 0LL);
  }
  else
  {
    if ( v12 <= *((_DWORD *)this + 257) )
    {
      v13 = (_OWORD *)(*((_QWORD *)this + 126) + 80 * v11);
      *v13 = *(_OWORD *)v30;
      v13[1] = *(_OWORD *)&v30[16];
      v13[2] = *(_OWORD *)&v30[32];
      v13[3] = *(_OWORD *)&v30[48];
      v13[4] = *(_OWORD *)&v30[64];
      *((_DWORD *)this + 258) = v12;
      v7 = 0;
      goto LABEL_16;
    }
    v28 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 1008, 80LL, 1LL, v30);
    v7 = v28;
    if ( v28 >= 0 )
      goto LABEL_48;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, 0LL, 0, v28, 0xC3u, 0LL);
  }
  MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v7, 0x4Bu, 0LL);
LABEL_48:
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, 0LL, 0, v7, 0x1094u, 0LL);
LABEL_16:
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, 0LL, 0, v7, 0x218Cu, 0LL);
    v14 = (__int64 *)((char *)this + 368);
  }
  else
  {
    v6 = 1;
    if ( *v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 16LL))(*v2);
    *v2 = (__int64)a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a2 + 8LL))(a2);
    v14 = (__int64 *)((char *)this + 368);
    v15 = *((_QWORD *)this + 46);
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      *v14 = 0LL;
    }
    (**(void (__fastcall ***)(__int64, GUID *, char *))*v2)(
      *v2,
      &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
      (char *)this + 368);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 40LL))(*v2, &v29);
    v7 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x219Du, 0LL);
    }
    else
    {
      if ( !*((_QWORD *)this + 48) )
      {
        *((_QWORD *)this + 48) = v29;
        v29 = 0LL;
      }
      updated = CDrawingContext::UpdateRenderTargetState(this);
      v7 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, updated, 0x21AEu, 0LL);
      }
      else
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)this + 48) + 24LL))(
                *((_QWORD *)this + 48),
                (char *)this + 8,
                *v2);
        v7 = v20;
        if ( v20 >= 0 )
          goto LABEL_28;
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x21B4u, 0LL);
      }
    }
  }
  ReplaceInterface<IDXGIResource,IDXGIResource>(v2, v3);
  ReleaseInterface<ID2D1Geometry>(v14);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 48);
  if ( *v2 )
  {
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))*v2)(*v2, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, v14);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)*v2 + 40LL))(*v2, (char *)this + 384);
    CDrawingContext::UpdateRenderTargetState(this);
  }
  if ( v6 )
    --*((_DWORD *)this + 258);
LABEL_28:
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v7;
}
