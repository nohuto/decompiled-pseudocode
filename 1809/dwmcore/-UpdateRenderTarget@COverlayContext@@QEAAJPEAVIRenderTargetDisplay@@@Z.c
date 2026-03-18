/*
 * XREFs of ?UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1800D86DC
 * Callers:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800D8614 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x1800A1028 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800D7DB8 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x1800D89C4 (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::UpdateRenderTarget(COverlayContext *this, struct IRenderTargetDisplay *a2)
{
  unsigned int v2; // ebx
  __int64 *v3; // rsi
  int updated; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rcx
  _BYTE v13[4]; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+34h] [rbp-34h]
  int v15; // [rsp+38h] [rbp-30h]

  v2 = 0;
  v3 = (__int64 *)((char *)this + 16);
  if ( *((struct IRenderTargetDisplay **)this + 2) != a2 )
  {
    if ( *v3 )
      COverlayContext::Reset(this);
    ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>(v3, (__int64)a2);
    if ( *v3 )
    {
      updated = COverlayContext::UpdateMPOCaps(this, 1, 0LL);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, updated, 0x90u);
      }
      else
      {
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)*v3 + 320LL))(*v3, (char *)this + 40);
        v9 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)*v3 + 120LL))(*v3, (char *)this + 80, 0LL);
        v2 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x96u);
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v3 + 432LL))(*v3);
          v12 = *v3;
          *((_BYTE *)this + 13413) = v11;
          (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 24LL))(v12, v13);
          *((_DWORD *)this + 25) = v15;
          *((_DWORD *)this + 26) = v14;
        }
      }
    }
  }
  return v2;
}
