/*
 * XREFs of HmgSetOwner @ 0x1C002A580
 * Callers:
 *     GreSetBitmapOwner @ 0x1C0016160 (GreSetBitmapOwner.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0027080 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetRegionOwner @ 0x1C002A520 (GreSetRegionOwner.c)
 *     CreateEmptyRgnPublic @ 0x1C002CD20 (CreateEmptyRgnPublic.c)
 *     GreSetBitmapOwnerEx @ 0x1C002CE88 (GreSetBitmapOwnerEx.c)
 *     GreCreateBitmap @ 0x1C002CF20 (GreCreateBitmap.c)
 *     GreMakeBitmapNonStock @ 0x1C00833B0 (GreMakeBitmapNonStock.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C00836BC (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreSetPaletteOwner @ 0x1C009DE70 (GreSetPaletteOwner.c)
 *     CleanupGDI @ 0x1C00B6D00 (CleanupGDI.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0125FCC (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     bInitBMOBJ @ 0x1C0268670 (bInitBMOBJ.c)
 *     bInitICM @ 0x1C0268710 (bInitICM.c)
 *     bInitPALOBJ @ 0x1C0268990 (bInitPALOBJ.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001EBB0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C001ED54 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0021DF8 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0021FCC (HmgDecProcessHandleCount.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00BE1A0 (HmgIncProcessHandleCountEx.c)
 */

__int64 __fastcall HmgSetOwner(unsigned int a1, int a2, char a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // r14d
  int v7; // esi
  struct OBJECT *EntryObject; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebp
  __int16 v12; // ax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+38h] [rbp-30h]

  v4 = a2;
  v6 = 0;
  v7 = 0;
  if ( a2 == -2147483646 )
    v4 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  v17 = 0LL;
  v18 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v17, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v18 )
  {
    if ( *(_BYTE *)(v17 + 14) == a3 && *(_WORD *)(v17 + 12) == HIWORD(a1) )
    {
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v17 & 0xFFFFFF);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v10 = *(_QWORD *)(ThreadWin32Thread + 72);
      else
        v10 = 0LL;
      if ( v10 && v4 )
        v7 = 1;
      if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() || v7 )
      {
        v6 = 1;
        v11 = *(_DWORD *)(v17 + 8) & 0xFFFFFFFE;
        if ( v7 )
          v4 = *(_DWORD *)(v10 + 8);
        if ( v11 != v4 )
        {
          v6 = HmgIncProcessHandleCountEx(v4, 1LL, 0LL);
          if ( v6 )
          {
            HmgDecProcessHandleCount(v11);
            HANDLELOCK::Pid((HANDLELOCK *)&v17, v4);
            if ( v4 )
            {
              if ( v4 != -2147483630 && (*((_WORD *)EntryObject + 6) || *((_DWORD *)EntryObject + 2)) )
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
    HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v17);
  GreReleaseHmgrSemaphore(v14, v13, v15);
  return v6;
}
