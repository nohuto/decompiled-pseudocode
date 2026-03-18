/*
 * XREFs of ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00235A0
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C00207E0 (NtGdiDeleteObjectApp.c)
 *     ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C0020DB4 (-ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C00210C0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0022880 (HmgDecrementShareReferenceCountEx.c)
 *     HmgLockEx @ 0x1C0023060 (HmgLockEx.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0023460 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 * Callees:
 *     ?AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00235F0 (-AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0023780 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 */

struct _ENTRY *__fastcall GdiHandleEntryDirectory::AcquireEntryLock(
        GdiHandleEntryDirectory *this,
        unsigned int a2,
        bool a3)
{
  struct GdiHandleEntryTable *v5; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(this, a2, &v5, &v6) )
    return GdiHandleEntryTable::AcquireEntryLock(v5, v6, a3);
  else
    return 0LL;
}
