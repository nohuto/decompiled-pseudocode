/*
 * XREFs of MiManageSubsectionView @ 0x1400ADBC0
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiRemoveFromSystemSpace @ 0x140026F90 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MmUnmapViewInSystemCache @ 0x140078700 (MmUnmapViewInSystemCache.c)
 *     MmMapViewInSystemCache @ 0x1400AD870 (MmMapViewInSystemCache.c)
 *     MiSessionInsertImage @ 0x14017612C (MiSessionInsertImage.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140683630 (MiConstructLoaderEntry.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiManageSubsectionView(__int64 *a1, _QWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rsi
  ULONG_PTR v8; // rbp
  int v9; // edi
  int v10; // edi
  int v11; // edi
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  struct _KTHREAD *v16; // r14
  struct _KTHREAD *v17; // rdi
  unsigned int SessionId; // r8d
  unsigned __int8 v19; // r15
  __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  _KLOCK_ENTRY *v25; // rbx
  __int64 v26; // rdx
  _QWORD *result; // rax
  __int64 v28; // rcx
  int v29; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = *a1;
  --CurrentThread->SpecialApcDisable;
  v8 = v5 + 104;
  ExAcquirePushLockExclusiveEx(v5 + 104, 0LL);
  v9 = a3 - 1;
  if ( !v9 )
  {
    v14 = a1[10];
    v15 = a1 + 10;
    if ( *(__int64 **)(v14 + 8) != a1 + 10 )
      goto LABEL_17;
    goto LABEL_11;
  }
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_6;
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( (*(_DWORD *)(v5 + 56) & 0x400) != 0 )
      goto LABEL_12;
    v14 = *(_QWORD *)(v5 + 8);
    v15 = (_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(v14 + 8) != v5 + 8 )
LABEL_17:
      __fastfail(3u);
LABEL_11:
    *a2 = v14;
    a2[1] = v15;
    *(_QWORD *)(v14 + 8) = a2;
    *v15 = a2;
    goto LABEL_12;
  }
  if ( v11 != 1 || (*(_DWORD *)(v5 + 56) & 0x400) != 0 )
    goto LABEL_12;
LABEL_6:
  v12 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 )
    goto LABEL_17;
  v13 = (_QWORD *)a2[1];
  if ( (_QWORD *)*v13 != a2 )
    goto LABEL_17;
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
LABEL_12:
  v16 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 104));
  v29 = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v5 + 104) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v17->ApcState.Process);
  else
    SessionId = -1;
  --v17->SpecialApcDisable;
  v19 = ++v17->AbAllocationRegionCount;
  LODWORD(v20) = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  v21 = !_BitScanReverse((unsigned int *)&v22, v20);
  if ( v21 )
    goto LABEL_26;
  while ( 1 )
  {
    v23 = 1 << v22;
    v24 = v22;
    v25 = &v17->LockEntries[v24];
    v20 = ~v23 & (unsigned int)v20;
    if ( (v25->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v25->LockState.0 & 1) == 0
      && (*(_QWORD *)&v25->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
      && v25->LockState.SessionId == SessionId )
    {
      v25->AcquiredByte &= ~1u;
      if ( v25->LockState.0 )
        break;
    }
    v21 = !_BitScanReverse((unsigned int *)&v22, v20);
    if ( v21 )
      goto LABEL_26;
  }
  if ( !v25 )
  {
LABEL_26:
    if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v17, v8, SessionId, 0LL);
  }
  else
  {
    v25->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v25->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v17->LockEntries[v24].TreeNode, v20);
    v29 = 0;
    v29 = v25->BoostBitmap.AllFields & 0x1FFFF;
    v25->BoostBitmap.AllFields &= 0xFFFE0000;
    v25->ThreadLocalFlags &= ~1u;
    v25->LockState.0 = 0LL;
    v26 = ((char *)v25 - (char *)v17 - 800) / 96;
    if ( v19 == 1 )
      v17->AbEntrySummary |= 1 << v26;
    else
      _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v26);
  }
  --v17->AbAllocationRegionCount;
  result = (_QWORD *)KiAbThreadRemoveBoosts((ULONG_PTR)v17, v8, (__int64)&v29);
  v21 = v17->SpecialApcDisable++ == -1;
  if ( v21 )
  {
    result = &v17->152;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)KiCheckForKernelApcDelivery(v28);
  }
  v21 = v16->SpecialApcDisable++ == -1;
  if ( v21 )
  {
    result = &v16->152;
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v28);
  }
  return result;
}
