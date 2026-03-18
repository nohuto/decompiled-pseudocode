/*
 * XREFs of ??0Keyframe@KeyframeSequence@@QEAA@XZ @ 0x180071BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KeyframeSequence *__fastcall KeyframeSequence::Keyframe::Keyframe(KeyframeSequence::Keyframe *this)
{
  KeyframeSequence *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  result = this;
  *((_QWORD *)this + 2) = 0LL;
  return result;
}
