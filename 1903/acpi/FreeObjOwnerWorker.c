/*
 * XREFs of FreeObjOwnerWorker @ 0x1C0064E50
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x1C00631C0 (AMLIRestartContext.c)
 *     FreeObjOwner @ 0x1C0064CAC (FreeObjOwner.c)
 */

void __fastcall FreeObjOwnerWorker(struct _EX_RUNDOWN_REF *StartContext)
{
  __int64 Count; // rbx

  Count = StartContext[7].Count;
  FreeObjOwner(0LL, StartContext);
  AMLIRestartContext(Count);
}
