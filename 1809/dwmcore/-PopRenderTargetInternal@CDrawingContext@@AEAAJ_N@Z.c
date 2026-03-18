/*
 * XREFs of ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180064198
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18008E470 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017B0C0 (-RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x1800474D4 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x180064294 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopRenderTargetInternal(CDrawingContext *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // edi
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  __int64 *v9; // rcx
  int updated; // eax
  unsigned int v11; // ecx
  int v12; // esi
  __int64 result; // rax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**((_QWORD **)this + 48) + 32LL))(
         *((_QWORD *)this + 48),
         (char *)this + 8,
         &v14);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x23BBu);
  v7 = (_QWORD *)((char *)this + 352);
  if ( g_LockAndReadD2DTarget )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v7 + 216LL))(*v7, 0LL, 0LL);
  v8 = (_QWORD *)((char *)this + 368);
  v9 = (__int64 *)((char *)this + 352);
  if ( a2 )
  {
    ReleaseInterface<IBitmapLock>(v9);
    ReleaseInterface<IBitmapLock>((__int64 *)this + 46);
  }
  else
  {
    ReplaceInterface<IDXGIResource,IDXGIResource>(v9, v14);
    if ( *v8 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 16LL))(*v8);
      *v8 = 0LL;
    }
    (**(void (__fastcall ***)(_QWORD, GUID *, char *))*v7)(
      *v7,
      &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
      (char *)this + 368);
    updated = CDrawingContext::UpdateRenderTargetState(this);
    v12 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, 0x23CFu);
    if ( !v6 || v6 >= 0 && v12 < 0 )
      v6 = v12;
    --*((_DWORD *)this + 258);
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  result = (unsigned int)v6;
  *((_BYTE *)this + 6345) = 1;
  return result;
}
