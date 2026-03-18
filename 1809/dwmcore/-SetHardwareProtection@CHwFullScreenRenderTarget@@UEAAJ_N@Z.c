/*
 * XREFs of ?SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x180208670
 * Callers:
 *     ?SetHardwareProtection@CHwFullScreenRenderTarget@@WNA@EAAJ_N@Z @ 0x1800F1250 (-SetHardwareProtection@CHwFullScreenRenderTarget@@WNA@EAAJ_N@Z.c)
 *     ?SetHardwareProtection@CHDRConversionRenderTarget@@UEAAJ_N@Z @ 0x180209FC0 (-SetHardwareProtection@CHDRConversionRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x18022C250 (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetHardwareProtection(CHwFullScreenRenderTarget *this, char a2)
{
  __int64 v4; // rdx
  CComputeScribbleRenderer *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx

  if ( (*(unsigned __int8 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
  {
    if ( a2 )
    {
      v5 = (CComputeScribbleRenderer *)*((_QWORD *)this + 69);
      *((_QWORD *)this + 69) = 0LL;
      if ( v5 )
      {
        CComputeScribbleRenderer::~CComputeScribbleRenderer(v5);
        operator delete(v5);
      }
    }
    LOBYTE(v4) = a2;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 240LL))(*((_QWORD *)this + 30), v4);
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x360u);
  }
  else
  {
    return (unsigned int)-2003292404;
  }
  return v8;
}
