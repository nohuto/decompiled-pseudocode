/*
 * XREFs of ?Play@KeyframeSequence@@QEAAXXZ @ 0x1800A7974
 * Callers:
 *     ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x180017B94 (-Repeat@KeyframeSequence@@QEAAXH@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A78CC (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800A79E8 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?SortKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800A7A54 (-SortKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Play(KeyframeSequence *this)
{
  char v1; // al
  __int64 v3; // r8
  __int64 i; // r10
  int v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_BYTE *)this + 140);
  if ( (v1 & 1) != 0 )
  {
    *((_BYTE *)this + 140) = v1 | 2;
  }
  else
  {
    KeyframeSequence::SortKeyFrames(this);
    KeyframeSequence::ConfigureTimer(this);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
    {
      v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24 * i + 8) + 20LL);
      if ( v5 != 1 && (unsigned int)(v5 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr, v3);
    }
    *((_BYTE *)this + 140) |= 3u;
  }
}
