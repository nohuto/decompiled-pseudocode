/*
 * XREFs of HmgSetOwner @ 0x1C001E160
 * Callers:
 *     CreateEmptyRgnPublic @ 0x1C0019D40 (CreateEmptyRgnPublic.c)
 *     GreSetBitmapOwner @ 0x1C001CA70 (GreSetBitmapOwner.c)
 *     GreSetRegionOwner @ 0x1C001E100 (GreSetRegionOwner.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C001F480 (SetOrCreateRectRgnIndirectPublic.c)
 *     CleanupGDI @ 0x1C00423AC (CleanupGDI.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C0042908 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreMakeBitmapNonStock @ 0x1C0043BC0 (GreMakeBitmapNonStock.c)
 *     GreCreateBitmap @ 0x1C0043DF0 (GreCreateBitmap.c)
 *     GreSetBitmapOwnerEx @ 0x1C0043FFC (GreSetBitmapOwnerEx.c)
 *     GreSetPaletteOwner @ 0x1C008B2F0 (GreSetPaletteOwner.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00F9BAC (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     bInitICM @ 0x1C021A500 (bInitICM.c)
 *     bInitBMOBJ @ 0x1C021A780 (bInitBMOBJ.c)
 *     bInitPALOBJ @ 0x1C021A8AC (bInitPALOBJ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0023460 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0023670 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0023860 (--1HANDLELOCK@@QEAA@XZ.c)
 *     HmgDecProcessHandleCount @ 0x1C0023B18 (HmgDecProcessHandleCount.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C00433E0 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgIncProcessHandleCount @ 0x1C009CC04 (HmgIncProcessHandleCount.c)
 *     HmgIsGarbageCollectibleType @ 0x1C00AABEC (HmgIsGarbageCollectibleType.c)
 */

__int64 __fastcall HmgSetOwner(__int64 a1, int a2, char a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // r14d
  int v7; // esi
  struct OBJECT *EntryObject; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebp
  __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+38h] [rbp-30h]

  LODWORD(v4) = a2;
  v5 = a1;
  v6 = 0;
  v7 = 0;
  if ( a2 == -2147483646 )
    v4 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  GreAcquireHmgrSemaphore(a1);
  v16 = 0LL;
  v17 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v16, (unsigned __int16)v5 | (v5 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v17 )
  {
    if ( *(_BYTE *)(v16 + 14) == a3 && *(_WORD *)(v16 + 12) == HIWORD(v5) )
    {
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v16 & 0xFFFFFF);
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
        v11 = *(_DWORD *)(v16 + 8) & 0xFFFFFFFE;
        if ( v7 )
          LODWORD(v4) = *(_DWORD *)(v10 + 8);
        if ( v11 != (_DWORD)v4 )
        {
          v6 = HmgIncProcessHandleCount((unsigned int)v4);
          if ( v6 )
          {
            HmgDecProcessHandleCount(v11);
            HANDLELOCK::Pid((HANDLELOCK *)&v16, v4);
            if ( (_DWORD)v4 )
            {
              if ( (_DWORD)v4 != -2147483630 )
              {
                LOBYTE(v12) = a3;
                if ( (unsigned int)HmgIsGarbageCollectibleType(v12) )
                {
                  if ( *((_WORD *)EntryObject + 6) || *((_DWORD *)EntryObject + 2) )
                  {
                    v13 = *((_WORD *)EntryObject + 7);
                    if ( (v13 & 0x4000) == 0 )
                      *((_WORD *)EntryObject + 7) = v13 | 0x4000;
                  }
                }
              }
            }
          }
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v16);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v16);
  GreReleaseHmgrSemaphore(v14);
  return v6;
}
