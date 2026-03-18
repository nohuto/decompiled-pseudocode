/*
 * XREFs of ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C0023400
 * Callers:
 *     INC_SHARE_REF_CNT @ 0x1C00215E0 (INC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C0022B50 (HmgShareLock.c)
 * Callees:
 *     <none>
 */

void __fastcall GdiHandleEntryTable::ReleaseEntryLock(GdiHandleEntryTable *this, unsigned int a2)
{
  *(_DWORD *)(*(_QWORD *)this + 24LL * a2 + 8) &= ~1u;
  ExReleasePushLockExclusiveEx(
    *(_QWORD *)(**((_QWORD **)this + 3) + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2,
    0LL);
  KeLeaveCriticalRegion();
}
