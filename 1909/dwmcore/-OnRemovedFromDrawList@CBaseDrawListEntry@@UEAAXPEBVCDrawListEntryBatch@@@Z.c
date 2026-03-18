/*
 * XREFs of ?OnRemovedFromDrawList@CBaseDrawListEntry@@UEAAXPEBVCDrawListEntryBatch@@@Z @ 0x1800BF600
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBaseDrawListEntry::OnRemovedFromDrawList(
        CBaseDrawListEntry *this,
        const struct CDrawListEntryBatch *a2,
        __int64 a3)
{
  int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)this + 4);
  if ( !v3 )
    ModuleFailFastForHRESULT(2291662981LL, retaddr, a3);
  *((_DWORD *)this + 4) = v3 - 1;
}
