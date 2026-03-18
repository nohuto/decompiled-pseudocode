/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00784B8
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C002D110 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C0058D60 (bMigrateSurfaceForConversion.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0125FCC (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001CE80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     UserIsProcessImmersiveAppContainer @ 0x1C0078520 (UserIsProcessImmersiveAppContainer.c)
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
