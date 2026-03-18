/*
 * XREFs of ?InitialValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z @ 0x1C01AEB30
 * Callers:
 *     ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01AEB90 (-SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CNaturalAnimationMarshaler::InitialValueSetOrChanged(
        DirectComposition::CNaturalAnimationMarshaler *this,
        bool *a2)
{
  int v2; // eax

  *a2 = 0;
  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x400) == 0 )
  {
    *((_DWORD *)this + 4) = v2 | 0x400;
    *a2 = 1;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x800) == 0 )
  {
    *((_DWORD *)this + 4) = v2 | 0x800;
    *a2 = 1;
  }
}
