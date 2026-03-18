/*
 * XREFs of ?GetDesc@CHolographicComposition@@UEAAJPEAUHOLOGRAPHIC_COMPOSITION_DESC@@@Z @ 0x1800DB4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicComposition::GetDesc(
        CHolographicComposition *this,
        struct HOLOGRAPHIC_COMPOSITION_DESC *a2)
{
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 24);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 10);
  return 0LL;
}
