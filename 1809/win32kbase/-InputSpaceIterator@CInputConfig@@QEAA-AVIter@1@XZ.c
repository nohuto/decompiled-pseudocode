/*
 * XREFs of ?InputSpaceIterator@CInputConfig@@QEAA?AVIter@1@XZ @ 0x1C00AD83C
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C003DCF0 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ??0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD190 (--0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z.c)
 */

CEResourceLockShared *__fastcall CInputConfig::InputSpaceIterator(_QWORD **a1, CEResourceLockShared *a2)
{
  CEResourceLockShared *result; // rax

  CEResourceLockShared::CEResourceLockShared(a2, a2);
  *((_QWORD *)a2 + 1) = a1;
  *((_QWORD *)a2 + 2) = *a1;
  result = a2;
  *((_QWORD *)a2 + 3) = **a1;
  return result;
}
