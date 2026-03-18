/*
 * XREFs of ?FreeType@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0077A50
 * Callers:
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00BABE0 (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

PSLIST_ENTRY __fastcall NSInstrumentation::CLookAsideTypeIsolation<36864,144>::FreeType(
        __int64 a1,
        struct _SLIST_ENTRY *a2)
{
  __int64 v4; // rbx

  memset(a2, 0, 0x90uLL);
  ++*(_DWORD *)(a1 + 76);
  v4 = a1 + 48;
  if ( ExQueryDepthSList((PSLIST_HEADER)v4) < *(_WORD *)(v4 + 16) )
    return ExpInterlockedPushEntrySList((PSLIST_HEADER)v4, a2);
  ++*(_DWORD *)(v4 + 32);
  return (PSLIST_ENTRY)(*(__int64 (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v4 + 56))(a2, v4);
}
