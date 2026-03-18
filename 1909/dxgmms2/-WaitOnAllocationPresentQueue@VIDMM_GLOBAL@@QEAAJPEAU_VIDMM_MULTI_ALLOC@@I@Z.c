/*
 * XREFs of ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C0085C54
 * Callers:
 *     VidMmWaitOnAllocationPresentQueue @ 0x1C0024E30 (VidMmWaitOnAllocationPresentQueue.c)
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C0080C40 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000E9D0 (VidSchiInterlockedRemoveEntryList.c)
 *     ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C00146C8 (-HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     VidSchRegisterCompletionEvent @ 0x1C007C4EC (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C007C5B4 (VidSchWaitForCompletionEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::WaitOnAllocationPresentQueue(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2)
{
  _VIDMM_GLOBAL_ALLOC_NONPAGED *v2; // rbp
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  _QWORD v13[20]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = (_VIDMM_GLOBAL_ALLOC_NONPAGED *)*((_QWORD *)a2 + 12);
  v4 = 0;
  v5 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL);
  v6 = *(_QWORD *)(v5 + 32);
  if ( *(_BYTE *)(v5 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0) )
  {
    v12 = WdLogNewEntry5_WdWarning(this, a2);
    *(_QWORD *)(v12 + 24) = v5;
    v11 = -1071775232;
    *(_QWORD *)(v12 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v12);
  }
  else
  {
    if ( *((int *)a2 + 26) <= 0 && !_VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(v2) )
      return 0LL;
    memset(v13, 0, sizeof(v13));
    LODWORD(v13[2]) = 5;
    LOBYTE(v13[19]) = 1;
    VidSchRegisterCompletionEvent(v6, (__int64)v13);
    while ( (*((int *)a2 + 26) > 0 || _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(v2)) && v4 >= 0 )
      v4 = VidSchWaitForCompletionEvent(v6, (__int64)v13, (const GUID *)2);
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v6 + 1664), v13, 0LL);
    if ( v4 < 0 || *((int *)a2 + 26) <= 0 && !_VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(v2) )
      return 0LL;
    v10 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v10 + 24) = v5;
    v11 = -1073741811;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdAssertion(v10);
  }
  return v11;
}
