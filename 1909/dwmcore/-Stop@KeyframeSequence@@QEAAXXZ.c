/*
 * XREFs of ?Stop@KeyframeSequence@@QEAAXXZ @ 0x1800A7F8C
 * Callers:
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A7ED0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Stop(KeyframeSequence *this)
{
  __int64 i; // r8
  int v2; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
  {
    v2 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24 * i + 8) + 20LL);
    if ( v2 != 1 && (unsigned int)(v2 - 2) > 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr, i);
  }
  *((_BYTE *)this + 140) &= 0xFCu;
  *((_DWORD *)this + 23) = *((_DWORD *)this + 20);
}
