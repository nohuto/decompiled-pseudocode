/*
 * XREFs of FreeThreadsWinEvents @ 0x1C00D79C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00D7A80 (--0-$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     DestroyEventHook @ 0x1C00D8B90 (DestroyEventHook.c)
 *     DestroyNotify @ 0x1C00D8D68 (DestroyNotify.c)
 */

void __fastcall FreeThreadsWinEvents(struct tagNOTIFY *a1)
{
  unsigned int CurrentThreadId; // esi
  struct tagNOTIFY **v3; // rcx
  struct tagNOTIFY **v4; // rbx
  struct tagNOTIFY *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  tagObjLock *v8; // [rsp+38h] [rbp+10h] BYREF

  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  CLockDomainExclusive<DLT_WINEVENT>::CLockDomainExclusive<DLT_WINEVENT>(&v8);
  v3 = gpPendingNotifies;
  if ( gpPendingNotifies )
  {
    do
    {
      v4 = (struct tagNOTIFY **)*v3;
      if ( *((_DWORD *)v3 + 10) == CurrentThreadId && !v3[7]
        || (v5 = v3[7], v5 == a1)
        || (*((_DWORD *)v3 + 4) || *((struct tagNOTIFY **)v3[1] + 2) == a1) && !v5 )
      {
        if ( ((_DWORD)v3[6] & 4) == 0 )
          DestroyNotify(v3);
      }
      v3 = v4;
    }
    while ( v4 );
  }
  v6 = gpWinEventHooks;
  if ( gpWinEventHooks )
  {
    do
    {
      v7 = *(_QWORD *)(v6 + 24);
      if ( *(struct tagNOTIFY **)(v6 + 16) == a1 )
        DestroyEventHook();
      v6 = v7;
    }
    while ( v7 );
  }
  tagObjLock::UnLock(v8);
}
