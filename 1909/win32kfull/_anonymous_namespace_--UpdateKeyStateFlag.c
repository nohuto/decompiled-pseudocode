/*
 * XREFs of _anonymous_namespace_::UpdateKeyStateFlag @ 0x1C013779C
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 */

void *anonymous_namespace_::UpdateKeyStateFlag()
{
  void *result; // rax
  _QWORD *i; // rbx
  __int64 v2; // rcx

  result = (void *)gptiCurrent;
  if ( *(_QWORD *)(gptiCurrent + 448LL) == grpdeskRitInput )
  {
    for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
    {
      v2 = *(i - 39);
      *(_DWORD *)(v2 + 396) |= 1u;
      result = memset((void *)(v2 + 204), 255, 0x20uLL);
    }
  }
  return result;
}
