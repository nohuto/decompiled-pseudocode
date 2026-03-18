/*
 * XREFs of ?Initialize@CCaptureRenderTarget@@MEAAJXZ @ 0x18024DD20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x180028368 (-AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCaptureRenderTarget::Initialize(CCaptureRenderTarget *this)
{
  signed int v1; // eax
  __int64 v2; // rcx
  unsigned int v3; // ebx

  *((_BYTE *)this + 266) = 1;
  v1 = CComposition::AddRenderTarget(*((CRenderTargetManager ***)this + 2), this);
  v3 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v1, 0xD6u, 0LL);
  return v3;
}
