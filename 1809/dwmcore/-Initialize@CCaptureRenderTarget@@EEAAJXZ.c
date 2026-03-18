/*
 * XREFs of ?Initialize@CCaptureRenderTarget@@EEAAJXZ @ 0x180158530
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x18007E858 (-AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCaptureRenderTarget::Initialize(CCaptureRenderTarget *this)
{
  int v1; // eax
  __int64 v2; // rcx
  unsigned int v3; // ebx

  *((_BYTE *)this + 266) = 1;
  v1 = CComposition::AddRenderTarget(*((CRenderTargetManager ***)this + 2), this);
  v3 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v1, 0xE3u);
  return v3;
}
