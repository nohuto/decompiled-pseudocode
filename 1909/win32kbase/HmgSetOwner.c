/*
 * XREFs of HmgSetOwner @ 0x1C0016200
 * Callers:
 *     GreSetBitmapOwnerEx @ 0x1C0015FC0 (GreSetBitmapOwnerEx.c)
 *     CreateEmptyRgnPublic @ 0x1C0016040 (CreateEmptyRgnPublic.c)
 *     GreSetBitmapOwner @ 0x1C00160B0 (GreSetBitmapOwner.c)
 *     GreSetRegionOwner @ 0x1C00161A0 (GreSetRegionOwner.c)
 *     GreCreateBitmap @ 0x1C0016C90 (GreCreateBitmap.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C00275A0 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreMakeBitmapNonStock @ 0x1C00501C0 (GreMakeBitmapNonStock.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C0050514 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreSetPaletteOwner @ 0x1C009D5B0 (GreSetPaletteOwner.c)
 *     CleanupGDI @ 0x1C00B4220 (CleanupGDI.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C012375C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     bInitBMOBJ @ 0x1C0265474 (bInitBMOBJ.c)
 *     bInitICM @ 0x1C02654C8 (bInitICM.c)
 *     bInitPALOBJ @ 0x1C02657B0 (bInitPALOBJ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001F6D0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001FEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00200A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0021E60 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0022034 (HmgDecProcessHandleCount.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00BB194 (HmgIncProcessHandleCountEx.c)
 */

__int64 __fastcall HmgSetOwner(unsigned int a1, int a2, char a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v6; // r14d
  int v7; // esi
  struct OBJECT *EntryObject; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebp
  __int16 v12; // ax
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+38h] [rbp-30h]

  LODWORD(v4) = a2;
  v6 = 0;
  v7 = 0;
  if ( a2 == -2147483646 )
    v4 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  GreAcquireHmgrSemaphore();
  v14 = 0LL;
  v15 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v14, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v15 )
  {
    if ( *(_BYTE *)(v14 + 14) == a3 && *(_WORD *)(v14 + 12) == HIWORD(a1) )
    {
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v14 & 0xFFFFFF);
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v10 = *(_QWORD *)(ThreadWin32Thread + 72);
      else
        v10 = 0LL;
      if ( v10 && (_DWORD)v4 )
        v7 = 1;
      if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() || v7 )
      {
        v6 = 1;
        v11 = *(_DWORD *)(v14 + 8) & 0xFFFFFFFE;
        if ( v7 )
          LODWORD(v4) = *(_DWORD *)(v10 + 8);
        if ( v11 != (_DWORD)v4 )
        {
          v6 = HmgIncProcessHandleCountEx((unsigned int)v4, 1LL, 0LL);
          if ( v6 )
          {
            HmgDecProcessHandleCount(v11);
            HANDLELOCK::Pid((HANDLELOCK *)&v14, v4);
            if ( (_DWORD)v4 )
            {
              if ( (_DWORD)v4 != -2147483630 && (*((_WORD *)EntryObject + 6) || *((_DWORD *)EntryObject + 2)) )
              {
                v12 = *((_WORD *)EntryObject + 7);
                if ( (v12 & 0x4000) == 0 )
                  *((_WORD *)EntryObject + 7) = v12 | 0x4000;
              }
            }
          }
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v14);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v14);
  GreReleaseHmgrSemaphore();
  return v6;
}
