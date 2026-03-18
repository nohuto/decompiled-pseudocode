/*
 * XREFs of ?SetFloatProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C017A480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CMatrixTransform3DMarshaler::SetFloatProperty(
        DirectComposition::CMatrixTransform3DMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  bool v4; // al

  if ( a2 < 0x10 )
  {
    if ( *((float *)this + a2 + 10) == a3 )
    {
      v4 = 0;
    }
    else
    {
      *((float *)this + a2 + 10) = a3;
      v4 = 1;
    }
    *a4 = v4;
  }
  return a2 >= 0x10 ? 0xC000000D : 0;
}
