/*
 * XREFs of ?SetBufferProperty@CRemotingRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01AA480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRemotingRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CRemotingRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  result = 0LL;
  *a6 = 0;
  if ( a3 != 1 || a5 != 16 )
    return 3221225485LL;
  *((_OWORD *)this + 4) = *a4;
  *((_DWORD *)this + 4) |= 0x80u;
  *a6 = 1;
  return result;
}
