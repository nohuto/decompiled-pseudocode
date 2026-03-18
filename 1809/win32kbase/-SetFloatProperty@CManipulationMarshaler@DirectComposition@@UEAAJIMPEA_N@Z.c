/*
 * XREFs of ?SetFloatProperty@CManipulationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C016B450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetFloatProperty(
        DirectComposition::CManipulationMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  int v4; // edx
  float v5; // xmm0_4
  float v6; // xmm0_4

  v4 = a2 - 10;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v5 = *((float *)this + 68);
      if ( v5 != a3 )
      {
        *a4 = 1;
        v5 = a3;
        *((_DWORD *)this + 4) |= 0x100u;
      }
      *((float *)this + 68) = v5;
    }
  }
  else
  {
    v6 = *((float *)this + 67);
    if ( v6 != a3 )
    {
      *a4 = 1;
      v6 = a3;
      *((_DWORD *)this + 4) |= 0x100u;
    }
    *((float *)this + 67) = v6;
  }
  return 0LL;
}
