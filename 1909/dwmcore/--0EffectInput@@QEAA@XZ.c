/*
 * XREFs of ??0EffectInput@@QEAA@XZ @ 0x18003CE20
 * Callers:
 *     ??0EffectStage@@QEAA@XZ @ 0x18003D104 (--0EffectStage@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

EffectInput *__fastcall EffectInput::EffectInput(EffectInput *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 16) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
