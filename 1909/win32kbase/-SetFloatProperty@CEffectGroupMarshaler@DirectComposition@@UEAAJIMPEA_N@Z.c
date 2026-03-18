/*
 * XREFs of ?SetFloatProperty@CEffectGroupMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00A1AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CEffectGroupMarshaler::SetFloatProperty(
        DirectComposition::CEffectGroupMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
    return 3221225485LL;
  if ( *((float *)this + 14) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 14) = a3;
    *a4 = 1;
  }
  return result;
}
