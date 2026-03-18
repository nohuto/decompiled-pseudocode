/*
 * XREFs of ?IsComplete@KeyframeSequence@@QEBA_NXZ @ 0x1800EF828
 * Callers:
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800E6E2C (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?GetIsComplete@Timer@@QEBA_NXZ @ 0x180054480 (-GetIsComplete@Timer@@QEBA_NXZ.c)
 */

bool __fastcall KeyframeSequence::IsComplete(KeyframeSequence *this)
{
  char v1; // r8

  if ( (*((_BYTE *)this + 140) & 3) != 1 || !Timer::GetIsComplete((KeyframeSequence *)((char *)this + 80)) )
    return 0;
  return v1;
}
