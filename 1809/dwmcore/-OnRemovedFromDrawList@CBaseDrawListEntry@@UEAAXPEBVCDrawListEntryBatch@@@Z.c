/*
 * XREFs of ?OnRemovedFromDrawList@CBaseDrawListEntry@@UEAAXPEBVCDrawListEntryBatch@@@Z @ 0x18005AB30
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBaseDrawListEntry::OnRemovedFromDrawList(
        CBaseDrawListEntry *this,
        const struct CDrawListEntryBatch *a2)
{
  int v2; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_DWORD *)this + 4);
  if ( !v2 )
    ModuleFailFastForHRESULT(2291662981LL, retaddr);
  *((_DWORD *)this + 4) = v2 - 1;
}
