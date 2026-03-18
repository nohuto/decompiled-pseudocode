/*
 * XREFs of _anonymous_namespace_::UpdateKeyStateFlag @ 0x1C010B140
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

void *anonymous_namespace_::UpdateKeyStateFlag()
{
  void *result; // rax
  _QWORD *i; // rbx
  __int64 v2; // rcx

  result = (void *)gptiCurrent;
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput )
  {
    for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
    {
      v2 = *(i - 39);
      *(_DWORD *)(v2 + 388) |= 1u;
      result = memset((void *)(v2 + 196), 255, 0x20uLL);
    }
  }
  return result;
}
