/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00717D8
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00163D0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C0069F00 (bMigrateSurfaceForConversion.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C012375C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001F210 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     UserIsProcessImmersiveAppContainer @ 0x1C0071840 (UserIsProcessImmersiveAppContainer.c)
 */

void __fastcall SURFACE::vAppContainerOwner(SURFACE *this, struct _EPROCESS *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  struct _ENTRY *EntryFromObject; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v3 = (unsigned __int64)a2;
  if ( a2 )
  {
    a3 = -(__int64)((unsigned int)UserIsProcessImmersiveAppContainer(a2) != 0);
    v3 &= a3;
  }
  GreAcquireHmgrSemaphore((int)this, (int)a2, a3);
  EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, this);
  if ( v3 )
    *((_BYTE *)EntryFromObject + 15) |= 0x80u;
  else
    *((_BYTE *)EntryFromObject + 15) &= ~0x80u;
  *((_QWORD *)this + 80) = v3;
  GreReleaseHmgrSemaphore(v7, v6, v8);
}
