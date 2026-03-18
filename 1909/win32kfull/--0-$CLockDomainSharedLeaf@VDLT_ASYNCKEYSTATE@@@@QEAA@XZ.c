/*
 * XREFs of ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C0138A70
 * Callers:
 *     PostUpdateKeyStateEvent @ 0x1C01388DC (PostUpdateKeyStateEvent.c)
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
