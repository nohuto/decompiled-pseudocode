/*
 * XREFs of ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x1800192C4
 * Callers:
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180082278 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x1800C0850 (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800C08C4 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Repeat(KeyframeSequence *this, int a2)
{
  KeyframeSequence *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  KeyframeSequence::ConfigureTimer(this);
  KeyframeSequence::Play(v4);
  *((_DWORD *)this + 23) += a2;
  v5 = 0LL;
  v6 = *((unsigned int *)this + 28);
  if ( (_DWORD)v6 )
  {
    do
    {
      v7 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24 * v5 + 8) + 20LL);
      if ( v7 != 1 && (unsigned int)(v7 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr, v6);
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < (unsigned int)v6 );
  }
}
