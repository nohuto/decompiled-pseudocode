/*
 * XREFs of ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x1C00F6810
 * Callers:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C00F6BDC (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0022D80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     GreAcquirePushLockShared @ 0x1C0069590 (GreAcquirePushLockShared.c)
 *     GreReleasePushLockShared @ 0x1C00695B0 (GreReleasePushLockShared.c)
 */

void __fastcall DC::SetCachedDpiScaleValue(DC *this, int a2)
{
  __int64 v4; // rsi
  struct _ENTRY *EntryFromObject; // r14
  __int64 v6; // rax

  v4 = *((_QWORD *)this + 122);
  if ( *(_DWORD *)(v4 + 136) != a2 )
  {
    EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, this);
    if ( EntryFromObject )
    {
      KeEnterCriticalRegion();
      GreAcquirePushLockShared((__int64)&gDCOwnershipChangeLock);
      if ( ((*((_DWORD *)EntryFromObject + 2) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
      {
        v6 = *((_QWORD *)EntryFromObject + 2);
        if ( v6 )
          *(_DWORD *)(v6 + 136) = a2;
      }
      GreReleasePushLockShared((__int64)&gDCOwnershipChangeLock);
      KeLeaveCriticalRegion();
      v4 = *((_QWORD *)this + 122);
    }
    *(_DWORD *)(v4 + 136) = a2;
  }
}
