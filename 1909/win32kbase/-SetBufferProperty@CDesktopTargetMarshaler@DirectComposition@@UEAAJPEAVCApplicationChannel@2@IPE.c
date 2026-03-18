/*
 * XREFs of ?SetBufferProperty@CDesktopTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01A83F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDesktopTargetMarshaler::SetBufferProperty(
        DirectComposition::CDesktopTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  result = 0LL;
  *a6 = 0;
  if ( a3 != 7 || a5 != 16 )
    return 3221225485LL;
  *((_OWORD *)this + 5) = *a4;
  *((_DWORD *)this + 4) |= 0x800u;
  *a6 = 1;
  return result;
}
