/*
 * XREFs of ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC84C
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00ACB28 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     HmgShareLock @ 0x1C0022B50 (HmgShareLock.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0023460 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0023860 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C48 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00A9FA8 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFREFGC@@QEAA@XZ @ 0x1C00ACA58 (--1SURFREFGC@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00FEFEC (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<SURFREFGC>(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+30h] [rbp-40h] BYREF
  int v4; // [rsp+38h] [rbp-38h]
  _BYTE v5[32]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v6; // [rsp+68h] [rbp-8h]
  char vars0; // [rsp+70h] [rbp+0h] BYREF

  SURFREF::SURFREF((SURFREF *)v5);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&vars0);
  v2 = HmgShareLock(a1, 5);
  v6 = v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
  {
    v3 = 0LL;
    v4 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v3, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v4 && (*(_DWORD *)(v3 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
      if ( (unsigned int)SURFREF::bDeleteSurface((__int64)v5, 3) )
        _InterlockedDecrement(&gGarbageCollectionPendingCount);
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v3);
  }
  SURFREFGC::~SURFREFGC((SURFREFGC *)v5);
}
