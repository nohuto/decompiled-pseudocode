/*
 * XREFs of FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140283CBC
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140010090 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400B5CA0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1400B6F60 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakToNone @ 0x14013D200 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140174194 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140283850 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlCheckUpperOplock @ 0x1406EFFF0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall FsRtlpRemoveAndCompleteReadOnlyIrp(_QWORD *a1, int a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax

  v3 = a1[2];
  ObfDereferenceObjectWithTag(*(PVOID *)(v3 + 48), 0x746C6644u);
  *((_BYTE *)a1 - 99) = KeAcquireQueuedSpinLock(7uLL);
  _InterlockedExchange64(a1 - 8, 0LL);
  KeReleaseQueuedSpinLock(7uLL, *((_BYTE *)a1 - 99));
  v7 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v8 = (_QWORD *)a1[1], (_QWORD *)*v8 != a1) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( *(_DWORD *)(v3 + 24) == 590400 )
  {
    if ( *((_BYTE *)a1 - 100) )
    {
      v10 = 0LL;
    }
    else
    {
      v9 = *(a1 - 18);
      v10 = 24LL;
      *(_QWORD *)(v9 + 12) = 0LL;
      *(_DWORD *)(v9 + 20) = 0;
      *(_DWORD *)v9 = 1572865;
      *(_DWORD *)(v9 + 8) = (a3 >> 12) & 7;
      *(_DWORD *)(v9 + 4) = 1;
    }
  }
  else
  {
    v10 = 8LL;
  }
  *(a1 - 14) = v10;
  v11 = -1073741536;
  if ( !*((_BYTE *)a1 - 100) )
    v11 = a2;
  *((_DWORD *)a1 - 30) = v11;
  IofCompleteRequest((PIRP)(a1 - 21), 1);
}
