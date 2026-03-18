/*
 * XREFs of ?SetBufferProperty@COverlayRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01BDE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::COverlayRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::COverlayRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  result = 0LL;
  *a6 = 0;
  if ( a3 != 3 || a5 != 8 )
    return 3221225485LL;
  *((_QWORD *)this + 6) = *a4;
  *((_DWORD *)this + 4) |= 0x20u;
  *a6 = 1;
  return result;
}
