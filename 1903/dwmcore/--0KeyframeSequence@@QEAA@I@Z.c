/*
 * XREFs of ??0KeyframeSequence@@QEAA@I@Z @ 0x180044D94
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180080E18 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

KeyframeSequence *__fastcall KeyframeSequence::KeyframeSequence(KeyframeSequence *this, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // r8
  _QWORD *v5; // rdi
  __int64 v6; // rax
  bool v7; // cf
  SIZE_T v8; // rax
  unsigned __int64 *v9; // rax
  KeyframeSequence *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  memset_0(this, 0, 0x40uLL);
  v5 = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 18;
  *((_BYTE *)this + 76) = 0;
  *((_BYTE *)this + 140) &= ~0x10u;
  *((_DWORD *)this + 28) = v2;
  *((_DWORD *)this + 34) = 1065353216;
  if ( (unsigned int)v2 < 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr, v4);
  v6 = 24 * v2;
  if ( !is_mul_ok(v2, 0x18uLL) )
    v6 = -1LL;
  v7 = __CFADD__(v6, 8LL);
  v8 = v6 + 8;
  if ( v7 )
    v8 = -1LL;
  v9 = (unsigned __int64 *)operator new(v8);
  if ( v9 )
  {
    v5 = v9 + 1;
    *v9 = v2;
    `vector constructor iterator'(
      v9 + 1,
      0x18uLL,
      (unsigned int)v2,
      (void *(*)(void *))KeyframeSequence::Keyframe::Keyframe);
  }
  result = this;
  *((_QWORD *)this + 13) = v5;
  return result;
}
