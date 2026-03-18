/*
 * XREFs of HmgSetOwner @ 0x1C001E630
 * Callers:
 *     CreateEmptyRgnPublic @ 0x1C001CD20 (CreateEmptyRgnPublic.c)
 *     GreSetBitmapOwner @ 0x1C001DC00 (GreSetBitmapOwner.c)
 *     GreSetRegionOwner @ 0x1C001E5F0 (GreSetRegionOwner.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C001F180 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCreateBitmap @ 0x1C003D960 (GreCreateBitmap.c)
 *     GreSetBitmapOwnerEx @ 0x1C003DB54 (GreSetBitmapOwnerEx.c)
 *     GreSetPaletteOwner @ 0x1C006C230 (GreSetPaletteOwner.c)
 *     CleanupGDI @ 0x1C00A9D70 (CleanupGDI.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C00BFB60 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00C3F64 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     GreMakeBitmapNonStock @ 0x1C00CB510 (GreMakeBitmapNonStock.c)
 *     bInitPALOBJ @ 0x1C01F3AA0 (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1C01F3D5C (bInitBMOBJ.c)
 *     bInitICM @ 0x1C01F3DF8 (bInitICM.c)
 * Callees:
 *     HmgIncProcessHandleCount @ 0x1C001ED30 (HmgIncProcessHandleCount.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002B0E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C002B2E0 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002BEC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C002E1C4 (HmgDecProcessHandleCount.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
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
          v6 = HmgIncProcessHandleCount((unsigned int)v4, 1LL);
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
