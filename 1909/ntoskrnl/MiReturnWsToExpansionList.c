/*
 * XREFs of MiReturnWsToExpansionList @ 0x14004ADB0
 * Callers:
 *     MiProcessWorkingSets @ 0x140047C50 (MiProcessWorkingSets.c)
 *     KiInSwapProcesses @ 0x140074BE8 (KiInSwapProcesses.c)
 *     MiAllowWorkingSetExpansion @ 0x1400EA6C4 (MiAllowWorkingSetExpansion.c)
 *     MiEmptyTargetedWorkingSet @ 0x1402C8188 (MiEmptyTargetedWorkingSet.c)
 * Callees:
 *     KeSignalGate @ 0x140131560 (KeSignalGate.c)
 */

_QWORD *__fastcall MiReturnWsToExpansionList(__int64 a1, int a2)
{
  _QWORD *result; // rax
  _QWORD *v4; // r9
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  result = (_QWORD *)(a1 + 24);
  v4 = (_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 7808LL);
  if ( !a2 )
  {
    v5 = *(_QWORD **)(*(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 7816LL);
    if ( (_QWORD *)*v5 == v4 )
    {
      *result = v4;
      result[1] = v5;
      *v5 = result;
      v4[1] = result;
      goto LABEL_4;
    }
LABEL_9:
    __fastfail(3u);
  }
  v7 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 )
    goto LABEL_9;
  *result = v7;
  result[1] = v4;
  *(_QWORD *)(v7 + 8) = result;
  *v4 = result;
LABEL_4:
  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 )
    return (_QWORD *)KeSignalGate(v6, 1LL);
  return result;
}
