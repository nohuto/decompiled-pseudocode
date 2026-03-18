/*
 * XREFs of HmgFree @ 0x1C00715F0
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C002A644 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C003E880 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C002AE8C (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002B0E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002BEC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 *     FreeObject @ 0x1C00449C0 (FreeObject.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C0075FCC (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall HmgFree(unsigned int a1, int a2, int a3)
{
  __int64 v4; // rdi
  unsigned __int8 v5; // si
  _DWORD *v6; // rbx
  struct OBJECT *EntryObject; // rax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r8d
  _DWORD *v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  v11 = 0LL;
  v12 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v11, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v12 )
  {
    v6 = v11;
    EntryObject = GdiHandleManager::GetEntryObject((GdiHandleEntryDirectory **)gpHandleManager, *v11 & 0xFFFFFF);
    v5 = *((_BYTE *)v6 + 14);
    v4 = (__int64)EntryObject;
    HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v11);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v11);
  GreReleaseHmgrSemaphore(v9, v8, v10);
  if ( v4 )
  {
    if ( v5 == 8 )
    {
      v13 = v4;
      XEPALOBJ::FreePaletteMemory((XEPALOBJ *)&v13);
    }
    else
    {
      FreeObject(v4, v5);
    }
  }
}
