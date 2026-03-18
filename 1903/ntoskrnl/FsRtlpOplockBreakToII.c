/*
 * XREFs of FsRtlpOplockBreakToII @ 0x14013019C
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140046520 (FsRtlCheckOplockEx.c)
 *     FsRtlCheckUpperOplock @ 0x1406EFFF0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockKeysEqual @ 0x1400B6A10 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwner @ 0x1400B73BC (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400B7540 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400B774C (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140283DBC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x140283E5C (FsRtlpWaitOnIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakToII(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _BYTE *a8,
        __int64 a9)
{
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // r15
  PIRP v17; // rax
  void *v18; // rcx
  int v19; // eax
  int v20; // eax
  _BYTE v22[32]; // [rsp+40h] [rbp-38h] BYREF

  memset(v22, 0, 24);
  v12 = *(_DWORD *)(a1 + 144);
  if ( (v12 & 0x40) == 0 || (v12 & 0x7000) != 0 )
    return 0;
  if ( (a4 & 8) != 0 )
  {
    v13 = 0;
  }
  else
  {
    v13 = 0;
    if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), 0) )
      return v13;
  }
  if ( (a4 & 0x10010000) != 0 )
    return (unsigned int)-1073739511;
  v14 = *(_DWORD *)(a1 + 144);
  if ( (v14 & 0x1F00F80) != 0 )
  {
    if ( (v14 & 0x80u) != 0 )
    {
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
      *(_QWORD *)(a1 + 8) = 0LL;
      return v13;
    }
    goto LABEL_20;
  }
  v15 = *(_QWORD *)a1;
  v16 = 7LL;
  *(_BYTE *)(v15 + 69) = KeAcquireQueuedSpinLock(7uLL);
  _InterlockedExchange64((volatile __int64 *)(v15 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v15 + 69));
  if ( !*(_BYTE *)(v15 + 68) )
  {
    v19 = *(_DWORD *)(a1 + 144);
    if ( (v19 & 6) != 0 )
    {
      v20 = v19 | 0x100;
    }
    else
    {
      v20 = v19 | 0x200;
      v16 = 8LL;
    }
    *(_DWORD *)(a1 + 144) = v20;
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = v16;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
LABEL_20:
    if ( (a4 & 1) != 0 )
    {
      return 264;
    }
    else
    {
      FsRtlpModifyThreadPriorities(a1, 0LL, 1);
      FsRtlpOplockSendModernAppTermination(a1, 0LL);
      *a8 = 0;
      return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a5, a6, a7, v22, 0, a9);
    }
  }
  *(_QWORD *)(v15 + 56) = 8LL;
  FsRtlpModifyThreadPriorities(a1, 0LL, 0);
  FsRtlpClearOwner(a1, 0LL);
  *(_BYTE *)(a1 + 32) = 0;
  v17 = *(PIRP *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
  {
    v17->IoStatus.Information = 0LL;
    v17 = *(PIRP *)a1;
  }
  v17->IoStatus.Status = -1073741536;
  IofCompleteRequest(*(PIRP *)a1, 1);
  *(_QWORD *)a1 = 0LL;
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
  while ( 1 )
  {
    v18 = *(void **)(a1 + 88);
    if ( v18 == (void *)(a1 + 88) )
      break;
    FsRtlpRemoveAndCompleteWaitingIrp(v18);
  }
  return v13;
}
