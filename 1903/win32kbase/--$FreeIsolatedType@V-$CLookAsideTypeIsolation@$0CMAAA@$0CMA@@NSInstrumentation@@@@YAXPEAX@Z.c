/*
 * XREFs of ??$FreeIsolatedType@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0016A30
 * Callers:
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C00169E0 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C00539F8 (-Allocate@SURFACE@@SAPEAV1@_KG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

PSLIST_ENTRY __fastcall FreeIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<180224,704>>(
        PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax
  __int64 v3; // rbx
  __int64 v4; // rbx

  result = (PSLIST_ENTRY)gpTypeIsolation;
  v3 = (__int64)*gpTypeIsolation;
  if ( *gpTypeIsolation )
  {
    memset(ListEntry, 0, 0x2C0uLL);
    ++*(_DWORD *)(v3 + 76);
    v4 = v3 + 48;
    if ( ExQueryDepthSList((PSLIST_HEADER)v4) < *(_WORD *)(v4 + 16) )
    {
      return ExpInterlockedPushEntrySList((PSLIST_HEADER)v4, ListEntry);
    }
    else
    {
      ++*(_DWORD *)(v4 + 32);
      return (PSLIST_ENTRY)(*(__int64 (__fastcall **)(PSLIST_ENTRY, __int64))(v4 + 56))(ListEntry, v4);
    }
  }
  return result;
}
