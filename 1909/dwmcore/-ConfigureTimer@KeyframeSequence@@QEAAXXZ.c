/*
 * XREFs of ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800A79E8
 * Callers:
 *     ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x180017B94 (-Repeat@KeyframeSequence@@QEAAXH@Z.c)
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x1800A7974 (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A7ED0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800A8994 (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1801E02C4 (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x1801E0558 (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyframeSequence::ConfigureTimer(KeyframeSequence *this)
{
  float v1; // xmm1_4
  int v2; // r9d
  int v3; // edx
  float v4; // xmm1_4
  int v5; // r8d
  bool v6; // al

  v1 = *((float *)this + 34);
  if ( v1 == 1.0 )
  {
    v2 = *((_DWORD *)this + 30);
    v3 = v2;
  }
  else
  {
    v3 = *((_DWORD *)this + 30);
    v2 = (int)(float)((float)v3 * v1);
  }
  v4 = *((float *)this + 33);
  if ( v4 == 0.0 )
    v5 = 0;
  else
    v5 = (int)(float)((float)v3 * v4);
  v6 = (*((_BYTE *)this + 140) & 0x10) != 0;
  *((_DWORD *)this + 20) = v5;
  *((_BYTE *)this + 96) = v6;
  *((_DWORD *)this + 21) = v2;
  *((_DWORD *)this + 22) = v3;
  *((_DWORD *)this + 23) = v5;
  *((_BYTE *)this + 140) |= 0x20u;
}
