/*
 * XREFs of HmgFree @ 0x1C001A3F0
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C001A294 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0069A58 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     FreeObject @ 0x1C001A1E0 (FreeObject.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001F6D0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001FEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00200A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0021CD0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00BABE0 (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall HmgFree(unsigned int a1)
{
  __int64 v2; // rdi
  unsigned __int8 v3; // si
  _DWORD *v4; // rbx
  struct OBJECT *EntryObject; // rax
  _DWORD *v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 0;
  GreAcquireHmgrSemaphore();
  v6 = 0LL;
  v7 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v6, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v7 )
  {
    v4 = v6;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *v6 & 0xFFFFFF);
    v3 = *((_BYTE *)v4 + 14);
    v2 = (__int64)EntryObject;
    HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v6);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v6);
  GreReleaseHmgrSemaphore();
  if ( v2 )
  {
    if ( v3 == 8 )
    {
      v8 = v2;
      XEPALOBJ::FreePaletteMemory((XEPALOBJ *)&v8);
    }
    else
    {
      FreeObject(v2, v3);
    }
  }
}
