/*
 * XREFs of ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C0082C70
 * Callers:
 *     PostUpdateKeyStateEvent @ 0x1C0082ADC (PostUpdateKeyStateEvent.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(_QWORD *a1)
{
  unsigned int DLT; // eax

  DLT = DLT_ASYNCKEYSTATE::getDLT();
  *a1 = GetDomainLockRef(DLT);
  return a1;
}
