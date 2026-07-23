/*
 * XREFs of ExpCovIsLoadedModulePresent @ 0x1408D887C
 * Callers:
 *     ExpCovQueryInfoCallBack @ 0x1408D8B80 (ExpCovQueryInfoCallBack.c)
 *     ExpCovResetInfoCallBack @ 0x1408D9460 (ExpCovResetInfoCallBack.c)
 * Callees:
 *     ExpCovIsModulePresent @ 0x1408D88B4 (ExpCovIsModulePresent.c)
 */

char __fastcall ExpCovIsLoadedModulePresent(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx

  v5 = *(_QWORD *)(a1 + 128);
  if ( v5 )
    return ExpCovIsModulePresent(a1 + 88, v5, a2, a3, a4);
  else
    return 0;
}
