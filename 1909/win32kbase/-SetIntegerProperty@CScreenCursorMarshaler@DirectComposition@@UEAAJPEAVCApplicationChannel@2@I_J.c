/*
 * XREFs of ?SetIntegerProperty@CScreenCursorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00A8A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScreenCursorMarshaler::SetIntegerProperty(
        DirectComposition::CScreenCursorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 )
    return 3221225485LL;
  if ( a4 != *((_DWORD *)this + 10) )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_DWORD *)this + 10) = a4;
    *a5 = 1;
  }
  return result;
}
