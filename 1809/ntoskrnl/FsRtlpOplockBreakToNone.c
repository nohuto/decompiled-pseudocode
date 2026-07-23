/*
 * XREFs of FsRtlpOplockBreakToNone @ 0x14013AC0C
 * Callers:
 *     FsRtlCheckOplockEx @ 0x1400B7BC0 (FsRtlCheckOplockEx.c)
 *     FsRtlOplockBreakToNoneEx @ 0x14026F9E0 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlCheckUpperOplock @ 0x1405864A0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpOplockKeysEqual @ 0x1400199A0 (FsRtlpOplockKeysEqual.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     FsRtlpModifyThreadPriorities @ 0x140107E20 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpClearOwner @ 0x14012180C (FsRtlpClearOwner.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x140134DD0 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1402701BC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402702C0 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x140270360 (FsRtlpWaitOnIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakToNone(
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
  unsigned int v13; // ebx
  int v14; // ecx
  __int64 v15; // r14
  __int64 v16; // rax
  void *v17; // rcx
  unsigned int v18; // ecx
  _QWORD *i; // rsi
  int v20; // ecx
  int v21; // ecx
  _BYTE v23[32]; // [rsp+40h] [rbp-38h] BYREF

  v13 = 0;
  if ( !a1 )
    return v13;
  v14 = *(_DWORD *)(a1 + 144);
  if ( v14 == 1 || (v14 & 0x6000) != 0 )
    return v13;
  if ( (v14 & 0x1F00F90) == 0 )
  {
    v15 = *(_QWORD *)a1;
    if ( (v14 & 0x1000) != 0 )
      return v13;
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    *(_BYTE *)(v15 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v15 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v15 + 69));
    if ( *(_BYTE *)(v15 + 68) )
    {
      *(_QWORD *)(v15 + 56) = 8LL;
      FsRtlpModifyThreadPriorities(a1, 0LL, 0);
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
      v16 = *(_QWORD *)a1;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
      {
        *(_QWORD *)(v16 + 56) = 0LL;
        v16 = *(_QWORD *)a1;
      }
      *(_DWORD *)(v16 + 48) = -1073741536;
      IofCompleteRequest(*(PIRP *)a1, 1);
      *(_QWORD *)a1 = 0LL;
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
      while ( 1 )
      {
        v17 = *(void **)(a1 + 88);
        if ( v17 == (void *)(a1 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v17);
      }
      return v13;
    }
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 8LL;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 144) |= 0x200u;
    goto LABEL_14;
  }
  if ( (((v14 & 0x1F0FFDF) - 16) & 0xFFFFEFFF) != 0 )
  {
    if ( (v14 & 0x100) != 0 )
    {
      if ( (a4 & 0x10010000) != 0 )
        return (unsigned int)-1073739511;
      v18 = v14 & 0xFFFFFEFF;
      *(_DWORD *)(a1 + 144) = v18;
      *(_DWORD *)(a1 + 144) = v18 | 0x400;
      goto LABEL_14;
    }
    if ( (v14 & 0x80u) == 0 )
    {
LABEL_14:
      if ( (a4 & 8) == 0 && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), 0) )
        return v13;
      if ( (a4 & 1) != 0 )
        return 264;
      if ( (a4 & 0x10010000) == 0 )
      {
        FsRtlpModifyThreadPriorities(a1, 0LL, 1);
        FsRtlpOplockSendModernAppTermination(a1, 0LL);
        *a8 = 0;
        return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _BYTE *, _BYTE, __int64))FsRtlpWaitOnIrp)(
                               a1,
                               a3,
                               a5,
                               a6,
                               a7,
                               v23,
                               0,
                               a9);
      }
      return (unsigned int)-1073739511;
    }
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    *(_DWORD *)(a1 + 144) = v14 & 0x20 | 1;
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( *(_QWORD *)(a1 + 24) )
    {
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
    }
  }
  else
  {
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    for ( i = *(_QWORD **)(a1 + 40); i != (_QWORD *)(a1 + 40); i = (_QWORD *)*i )
    {
      if ( *(_DWORD *)(i[2] + 24LL) != 590400 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteReadOnlyIrp(*i, 0LL, 0LL);
      }
    }
    v20 = *(_DWORD *)(a1 + 144) & 0x20;
    if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) == 0x1010 )
      v21 = v20 | 0x1000;
    else
      v21 = v20 | 1;
    *(_DWORD *)(a1 + 144) = v21;
  }
  return v13;
}
