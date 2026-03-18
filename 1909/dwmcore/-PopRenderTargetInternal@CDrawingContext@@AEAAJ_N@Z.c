/*
 * XREFs of ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18002AC80
 * Callers:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18003FBF0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18005B800 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017B510 (-RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x18002AD78 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002ADC8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180059AF4 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopRenderTargetInternal(CDrawingContext *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // edi
  _QWORD *v7; // rsi
  __int64 *v8; // rcx
  int updated; // eax
  unsigned int v10; // ecx
  int v11; // esi
  __int64 result; // rax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**((_QWORD **)this + 48) + 32LL))(
         *((_QWORD *)this + 48),
         (char *)this + 8,
         &v13);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x21D6u, 0LL);
  v7 = (_QWORD *)((char *)this + 352);
  if ( g_LockAndReadD2DTarget )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v7 + 216LL))(*v7, 0LL, 0LL);
  v8 = (__int64 *)((char *)this + 352);
  if ( a2 )
  {
    ReleaseInterface<IBitmapLock>(v8);
    ReleaseInterface<ID2D1Geometry>((char *)this + 368);
  }
  else
  {
    ReplaceInterface<IDXGIResource,IDXGIResource>(v8, v13);
    ReleaseInterface<ID2D1Geometry>((char *)this + 368);
    (**(void (__fastcall ***)(_QWORD, GUID *, char *))*v7)(
      *v7,
      &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
      (char *)this + 368);
    updated = CDrawingContext::UpdateRenderTargetState(this);
    v11 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, updated, 0x21EAu, 0LL);
    if ( !v6 || v6 >= 0 && v11 < 0 )
      v6 = v11;
    --*((_DWORD *)this + 258);
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  result = (unsigned int)v6;
  *((_BYTE *)this + 6345) = 1;
  return result;
}
