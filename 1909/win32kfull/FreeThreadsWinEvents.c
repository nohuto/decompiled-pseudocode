/*
 * XREFs of FreeThreadsWinEvents @ 0x1C0056500
 * Callers:
 *     <none>
 * Callees:
 *     DestroyEventHook @ 0x1C0056410 (DestroyEventHook.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0056644 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 */

void __fastcall FreeThreadsWinEvents(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  tagDomLock *v4; // [rsp+38h] [rbp+10h] BYREF

  PsGetCurrentThreadId();
  CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v4);
  v2 = gpWinEventHooks;
  if ( gpWinEventHooks )
  {
    do
    {
      v3 = *(_QWORD *)(v2 + 24);
      if ( *(_QWORD *)(v2 + 16) == a1 )
        DestroyEventHook(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  tagDomLock::UnLockExclusive(v4);
}
