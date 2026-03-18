/*
 * XREFs of ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017FEF4
 * Callers:
 *     ?RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180180380 (-RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18007A960 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x180170DD4 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D11_VIEWPORT@@@Z @ 0x18017FD24 (-RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBU.c)
 *     ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D11_VIEWPORT@@@Z @ 0x1801800AC (-RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D1.c)
 */

__int64 __fastcall CResampleLayer::RenderLayer(CResampleLayer *this, struct CDrawingContext *a2)
{
  __int64 v4; // rcx
  struct CSurfaceShaderComposer *v5; // rbp
  __int64 v6; // rax
  unsigned int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx
  struct ID3D11RenderTargetView *v10; // r8
  unsigned int v12; // [rsp+20h] [rbp-48h]
  D3D11_VIEWPORT v13; // [rsp+30h] [rbp-38h] BYREF

  v5 = *(struct CSurfaceShaderComposer **)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 48) + 160LL))(*((_QWORD *)a2 + 48))
                                         + 1240);
  v6 = 0LL;
  memset(&v13, 0, sizeof(v13));
  if ( !v5 )
  {
    v7 = -2005270524;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x887A0004, 0xF0u, 0LL);
    return v7;
  }
  do
  {
    *(&v13.TopLeftX + v6) = (float)*((int *)this + v6 + 34);
    ++v6;
  }
  while ( v6 < 4 );
  LODWORD(v13.MaxDepth) = (_DWORD)FLOAT_1_0;
  v8 = CDrawingContext::FlushD2D(a2);
  v7 = v8;
  if ( v8 < 0 )
  {
    v12 = 251;
    goto LABEL_17;
  }
  if ( g_LockAndReadLayer )
  {
    CDrawingContext::ReadTexture(a2);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 216LL))(*((_QWORD *)this + 1), 0LL, 0LL);
  }
  v10 = *(struct ID3D11RenderTargetView **)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 44) + 104LL))(*((_QWORD *)a2 + 44))
                                          + 192);
  if ( *((_DWORD *)this + 28) == 1 )
  {
    v8 = CResampleLayer::RenderLanczos(this, v5, v10, &v13);
    v7 = v8;
    if ( v8 < 0 )
    {
      v12 = 264;
      goto LABEL_17;
    }
  }
  else
  {
    if ( *((_DWORD *)this + 28) != 2 )
    {
      v7 = -2005270524;
      MilInstrumentationCheckHR_MaybeFailFast(
        (unsigned int)(*((_DWORD *)this + 28) - 1),
        0LL,
        0,
        0x887A0004,
        0x110u,
        0LL);
      return v7;
    }
    v8 = CResampleLayer::RenderXBR(this, v5, v10, &v13);
    v7 = v8;
    if ( v8 < 0 )
    {
      v12 = 268;
LABEL_17:
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v12, 0LL);
      return v7;
    }
  }
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture(a2);
  return v7;
}
