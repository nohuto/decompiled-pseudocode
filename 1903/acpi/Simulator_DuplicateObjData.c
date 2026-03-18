/*
 * XREFs of Simulator_DuplicateObjData @ 0x1C00635F4
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0063450 (Simulator_CallbackWorker.c)
 * Callees:
 *     FreeObjData @ 0x1C0013EB0 (FreeObjData.c)
 *     DupObjData @ 0x1C001B9B0 (DupObjData.c)
 */

__int64 __fastcall Simulator_DuplicateObjData(__int64 a1)
{
  __int64 v2; // rdi

  if ( !a1 )
    return 3221225485LL;
  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return 3221225485LL;
  FreeObjData(*(_QWORD *)(a1 + 16));
  return DupObjData(gpheapGlobal, v2, *(_QWORD *)(a1 + 24));
}
