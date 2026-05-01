/*
 * XREFs of ?CalculatePointFromRect@JointResize@@AEAA?AUtagPOINT@@UtagRECT@@@Z @ 0x1803EED38
 * Callers:
 *     _lambda_2c3efae7d26e0e657137d3ad3e752f20_::operator() @ 0x1803EEAB4 (_lambda_2c3efae7d26e0e657137d3ad3e752f20_--operator().c)
 *     ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x1803EFF40 (-OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagPOINT __fastcall JointResize::CalculatePointFromRect(JointResize *this, struct tagRECT *a2, LONG *a3)
{
  LONG v3; // eax

  if ( *((_DWORD *)this + 72) == 10 )
    v3 = *a3;
  else
    v3 = a3[2];
  a2->left = v3;
  a2->top = a3[1];
  return (struct tagPOINT)a2;
}
