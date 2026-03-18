/*
 * XREFs of ?SetFloatProperty@CTextBrushMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01B8260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTextBrushMarshaler::SetFloatProperty(
        DirectComposition::CTextBrushMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  if ( a2 == 2 )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    result = 0LL;
    *((float *)this + 22) = a3;
    *a4 = 1;
  }
  else
  {
    *a4 = 0;
    return 3221225485LL;
  }
  return result;
}
