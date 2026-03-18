/*
 * XREFs of ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0033270
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 *     DestroyProcessInfo @ 0x1C0032CF4 (DestroyProcessInfo.c)
 *     GreSfmGetNotificationTokens @ 0x1C00343D0 (GreSfmGetNotificationTokens.c)
 *     ?AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C00833A0 (-AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0083B10 (-RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     EngAllocUserMemEx @ 0x1C008DD74 (EngAllocUserMemEx.c)
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 *     EngFreeUserMem @ 0x1C009D8E0 (EngFreeUserMem.c)
 * Callees:
 *     <none>
 */

PUSHLOCKEX *__fastcall PUSHLOCKEX::PUSHLOCKEX(PUSHLOCKEX *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  }
  return this;
}
