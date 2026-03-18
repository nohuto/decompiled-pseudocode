/*
 * XREFs of ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x1800C29D0
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800C27D0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowNode::ShouldHitTest(CWindowNode *this)
{
  bool result; // al

  result = 0;
  if ( !*((_BYTE *)this + 938) )
    return *((_QWORD *)this + 80) != 0LL;
  return result;
}
