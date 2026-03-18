/*
 * XREFs of ?SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x180167DC0
 * Callers:
 *     ?SetHardwareProtection@CHwFullScreenRenderTarget@@WJA@EAAJ_N@Z @ 0x1800ECA10 (-SetHardwareProtection@CHwFullScreenRenderTarget@@WJA@EAAJ_N@Z.c)
 *     ?SetHardwareProtection@CHDRConversionRenderTarget@@UEAAJ_N@Z @ 0x180169E20 (-SetHardwareProtection@CHDRConversionRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x1801AD490 (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetHardwareProtection(CHwFullScreenRenderTarget *this, char a2)
{
  __int64 v4; // rdx
  CComputeScribbleRenderer *v5; // rdi
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx

  if ( (*(unsigned __int8 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
  {
    if ( a2 )
    {
      v5 = (CComputeScribbleRenderer *)*((_QWORD *)this + 61);
      *((_QWORD *)this + 61) = 0LL;
      if ( v5 )
      {
        CComputeScribbleRenderer::~CComputeScribbleRenderer(v5);
        operator delete(v5);
      }
      *((_BYTE *)this + 502) = 0;
    }
    LOBYTE(v4) = a2;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 22) + 248LL))(*((_QWORD *)this + 22), v4);
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x39Eu, 0LL);
  }
  else
  {
    return (unsigned int)-2003292404;
  }
  return v8;
}
