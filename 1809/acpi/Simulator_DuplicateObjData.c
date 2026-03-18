/*
 * XREFs of Simulator_DuplicateObjData @ 0x1C0061674
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C00614D0 (Simulator_CallbackWorker.c)
 * Callees:
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 */

__int64 __fastcall Simulator_DuplicateObjData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // r9

  if ( !a1 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 16);
  if ( !v5 )
    return 3221225485LL;
  FreeObjData(*(_QWORD *)(a1 + 16), a2, a3, a4);
  return DupObjData((struct _SLIST_ENTRY *)gpheapGlobal, v5, *(_QWORD *)(a1 + 24), v6);
}
