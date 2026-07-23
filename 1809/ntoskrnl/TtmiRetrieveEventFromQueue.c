/*
 * XREFs of TtmiRetrieveEventFromQueue @ 0x140883684
 * Callers:
 *     TtmpDispatchGetTerminalEvent @ 0x14088308C (TtmpDispatchGetTerminalEvent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmiLogQueueDequeueEvent @ 0x1408858E4 (TtmiLogQueueDequeueEvent.c)
 */

__int64 __fastcall TtmiRetrieveEventFromQueue(__int64 a1, _OWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // esi
  int v6; // edx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  _OWORD *v10; // rbx
  __int64 v11; // rax
  __int128 v12; // xmm1

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  v5 = 0;
  if ( !*(_BYTE *)(a1 + 168) )
  {
    v5 = -1073740032;
    v6 = 477;
LABEL_3:
    TtmiLogError("TtmiRetrieveEventFromQueue", v6, -1, v5);
    goto LABEL_13;
  }
  v7 = (_QWORD *)(a1 + 152);
  v8 = *(_QWORD **)(a1 + 152);
  if ( v8 == (_QWORD *)(a1 + 152) )
  {
    v5 = -2147483622;
    v6 = 482;
    goto LABEL_3;
  }
  if ( (_QWORD *)v8[1] != v7 || (v9 = *v8, *(_QWORD **)(*v8 + 8LL) != v8) )
    __fastfail(3u);
  *v7 = v9;
  *(_QWORD *)(v9 + 8) = v7;
  if ( (_QWORD *)*v7 == v7 )
    KeResetEvent((PRKEVENT)(a1 + 128));
  v10 = v8 + 2;
  TtmiLogQueueDequeueEvent(a1, v8 + 2);
  v11 = 4LL;
  do
  {
    *a2 = *v10;
    a2[1] = v10[1];
    a2[2] = v10[2];
    a2[3] = v10[3];
    a2[4] = v10[4];
    a2[5] = v10[5];
    a2[6] = v10[6];
    a2 += 8;
    v12 = v10[7];
    v10 += 8;
    *(a2 - 1) = v12;
    --v11;
  }
  while ( v11 );
  *a2 = *v10;
  a2[1] = v10[1];
  ExFreePoolWithTag(v8, 0x716D7454u);
LABEL_13:
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}
