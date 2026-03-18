/*
 * XREFs of FreeThreadsWinEvents @ 0x1C00B4470
 * Callers:
 *     <none>
 * Callees:
 *     DestroyEventHook @ 0x1C00B4380 (DestroyEventHook.c)
 *     ??0?$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00B45A8 (--0-$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ.c)
 */

void __fastcall FreeThreadsWinEvents(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  tagObjLock *v4; // [rsp+38h] [rbp+10h] BYREF

  PsGetCurrentThreadId();
  CLockDomainExclusive<DLT_WINEVENT>::CLockDomainExclusive<DLT_WINEVENT>(&v4);
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
  tagObjLock::UnLock(v4);
}
