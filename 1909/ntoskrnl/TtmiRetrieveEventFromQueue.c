/*
 * XREFs of TtmiRetrieveEventFromQueue @ 0x1408BFAA4
 * Callers:
 *     TtmpDispatchGetTerminalEvent @ 0x1408BF464 (TtmpDispatchGetTerminalEvent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 *     TtmiLogQueueDequeueEvent @ 0x1408C1E58 (TtmiLogQueueDequeueEvent.c)
 */

__int64 __fastcall TtmiRetrieveEventFromQueue(__int64 a1, _OWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // esi
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _OWORD *v9; // rbx
  __int64 v10; // rax
  __int128 v11; // xmm1

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  v5 = 0;
  if ( !*(_BYTE *)(a1 + 168) )
  {
    v5 = -1073740032;
LABEL_3:
    TtmiLogError("TtmiRetrieveEventFromQueue");
    goto LABEL_13;
  }
  v6 = (_QWORD *)(a1 + 152);
  v7 = *(_QWORD **)(a1 + 152);
  if ( v7 == (_QWORD *)(a1 + 152) )
  {
    v5 = -2147483622;
    goto LABEL_3;
  }
  if ( (_QWORD *)v7[1] != v6 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
    __fastfail(3u);
  *v6 = v8;
  *(_QWORD *)(v8 + 8) = v6;
  if ( (_QWORD *)*v6 == v6 )
    KeResetEvent((PRKEVENT)(a1 + 128));
  v9 = v7 + 2;
  TtmiLogQueueDequeueEvent(a1, v7 + 2);
  v10 = 4LL;
  do
  {
    *a2 = *v9;
    a2[1] = v9[1];
    a2[2] = v9[2];
    a2[3] = v9[3];
    a2[4] = v9[4];
    a2[5] = v9[5];
    a2[6] = v9[6];
    a2 += 8;
    v11 = v9[7];
    v9 += 8;
    *(a2 - 1) = v11;
    --v10;
  }
  while ( v10 );
  *a2 = *v9;
  a2[1] = v9[1];
  ExFreePoolWithTag(v7, 0x716D7454u);
LABEL_13:
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
