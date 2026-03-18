/*
 * XREFs of ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC624
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00ACB28 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C0022B50 (HmgShareLock.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0023460 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0023860 (--1HANDLELOCK@@QEAA@XZ.c)
 *     PushThreadGuardedObject @ 0x1C00243F0 (PushThreadGuardedObject.c)
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00ABCF8 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

void __fastcall vGarbageCollectObject<COLORSPACEGC>(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+30h] [rbp-40h] BYREF
  int v4; // [rsp+38h] [rbp-38h]
  _QWORD v5[4]; // [rsp+48h] [rbp-28h] BYREF
  struct HOBJ__ **v6; // [rsp+68h] [rbp-8h]

  memset(v5, 0, sizeof(v5));
  PushThreadGuardedObject(
    v5,
    (__int64)v5,
    (__int64)UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic);
  v6 = 0LL;
  v2 = HmgShareLock(a1, 9);
  v6 = (struct HOBJ__ **)v2;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
    {
      v3 = 0LL;
      v4 = 0;
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v3, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
      if ( v4 && (*(_DWORD *)(v3 + 8) & 0xFFFFFFFE) == 0x80000012 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
        if ( (unsigned int)bDeleteColorSpace(*v6, 3) )
        {
          v6 = 0LL;
          _InterlockedDecrement(&gGarbageCollectionPendingCount);
        }
      }
      else
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v3);
      v2 = (__int64)v6;
    }
    if ( v2 )
      DEC_SHARE_REF_CNT((struct OBJECT *)v2);
  }
  PopThreadGuardedObject(v5);
}
