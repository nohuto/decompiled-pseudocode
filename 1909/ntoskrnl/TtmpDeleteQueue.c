/*
 * XREFs of TtmpDeleteQueue @ 0x1408BFDE0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExDeleteResourceLite @ 0x1400797C0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1408BDFC4 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogQueueDestroyed @ 0x1408C1F1C (TtmiLogQueueDestroyed.c)
 */

__int64 __fastcall TtmpDeleteQueue(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rdx
  volatile signed __int32 *v4; // rdi
  __int64 **v5; // rax
  _QWORD **v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  v3 = (__int64 *)*a1;
  v4 = (volatile signed __int32 *)a1[2];
  if ( *(__int64 **)(*a1 + 8) != a1 || (v5 = (__int64 **)a1[1], *v5 != a1) )
LABEL_9:
    __fastfail(3u);
  *v5 = v3;
  v3[1] = (__int64)v5;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  TtmpDereferenceSessionMaybeLast(v4);
  ExDeleteResourceLite((PERESOURCE)(a1 + 3));
  v6 = (_QWORD **)(a1 + 19);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      return TtmiLogQueueDestroyed(a1);
    if ( (_QWORD **)v7[1] != v6 )
      goto LABEL_9;
    v8 = (_QWORD *)*v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_9;
    *v6 = v8;
    v8[1] = v6;
    ExFreePoolWithTag(v7, 0x716D7454u);
  }
}
