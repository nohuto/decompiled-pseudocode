/*
 * XREFs of ?SetFloatProperty@CTranslateTransformMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00A8B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTranslateTransformMarshaler::SetFloatProperty(
        DirectComposition::CTranslateTransformMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
  {
    if ( *((float *)this + 14) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 14) = a3;
LABEL_9:
    *a4 = 1;
    return result;
  }
  if ( a2 != 1 )
    return 3221225485LL;
  if ( *((float *)this + 15) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *((float *)this + 15) = a3;
    goto LABEL_9;
  }
  return result;
}
