/*
 * XREFs of ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001F810
 * Callers:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0018750 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C001BC60 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     _GetDCEx @ 0x1C001BDF0 (_GetDCEx.c)
 *     GreGetBounds @ 0x1C001D5B0 (GreGetBounds.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001F6D0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgLockEx @ 0x1C001FCA0 (HmgLockEx.c)
 *     ReleaseCacheDC @ 0x1C00200C0 (ReleaseCacheDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0020A50 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0021470 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C0021BE8 (-ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C00225E0 (NtGdiDeleteObjectApp.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00258B0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001F860 (-AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C001FFB0 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 */

struct _ENTRY *__fastcall GdiHandleEntryDirectory::AcquireEntryLock(
        GdiHandleEntryDirectory *this,
        unsigned int a2,
        bool a3)
{
  GdiHandleEntryTable *v5; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(this, a2, &v5, &v6) )
    return GdiHandleEntryTable::AcquireEntryLock(v5, v6, a3);
  else
    return 0LL;
}
