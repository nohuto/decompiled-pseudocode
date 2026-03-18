/*
 * XREFs of ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC938
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00ACB28 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     HmgShareLock @ 0x1C0022B50 (HmgShareLock.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0023460 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0023860 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029BC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1C00AA2D4 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00AA328 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C00F84C0 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall vGarbageCollectObject<XEPALOBJ2>(unsigned int a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // [rsp+30h] [rbp-40h] BYREF
  int v5; // [rsp+38h] [rbp-38h]
  struct OBJECT *v6[5]; // [rsp+48h] [rbp-28h] BYREF
  HSEMAPHORE v7; // [rsp+88h] [rbp+18h] BYREF

  XEPALOBJ2::XEPALOBJ2((XEPALOBJ2 *)v6);
  v2 = HmgShareLock(a1, 8);
  v6[0] = (struct OBJECT *)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
  {
    v4 = 0LL;
    v5 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v4, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v5 && (*(_DWORD *)(v4 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
      v7 = ghsemPalette;
      EngAcquireSemaphore(ghsemPalette);
      v3 = XEPALOBJ::bDeletePalette(v6, 1LL, 3LL);
      SEMOBJ::vUnlock((PERESOURCE *)&v7);
      if ( v3 )
        _InterlockedDecrement(&gGarbageCollectionPendingCount);
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
  }
  XEPALOBJ2::~XEPALOBJ2(v6);
}
