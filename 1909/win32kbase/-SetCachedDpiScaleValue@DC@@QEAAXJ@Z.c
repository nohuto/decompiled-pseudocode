/*
 * XREFs of ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x1C0120B00
 * Callers:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0120CB4 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001F210 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
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
      ExAcquirePushLockSharedEx(&gDCOwnershipChangeLock, 0LL);
      if ( ((*((_DWORD *)EntryFromObject + 2) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
      {
        v6 = *((_QWORD *)EntryFromObject + 2);
        if ( v6 )
          *(_DWORD *)(v6 + 136) = a2;
      }
      ExReleasePushLockSharedEx(&gDCOwnershipChangeLock, 0LL);
      KeLeaveCriticalRegion();
      v4 = *((_QWORD *)this + 122);
    }
    *(_DWORD *)(v4 + 136) = a2;
  }
}
