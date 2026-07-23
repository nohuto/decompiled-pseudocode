/*
 * XREFs of EtwpCompressPendingBuffers @ 0x140332D80
 * Callers:
 *     EtwpBufferingModeCompressionFlush @ 0x1403327E0 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1403330A0 (EtwpCompressionProc.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     EtwpCompressBuffer @ 0x140332A00 (EtwpCompressBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1403332FC (EtwpDequeueBufferPendingCompression.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x140333B2C (EtwpRotateCompressionTargetIfNeeded.c)
 *     EtwpCompleteBuffer @ 0x1406DBB80 (EtwpCompleteBuffer.c)
 */

_QWORD *__fastcall EtwpCompressPendingBuffers(__int64 a1)
{
  unsigned __int64 v1; // rbp
  LARGE_INTEGER PerformanceCounter; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // rsi
  LARGE_INTEGER v6; // rax
  __int64 v7; // rcx
  LONGLONG v8; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v11; // si
  unsigned int v12; // r8d
  int v13; // eax
  __int64 v14; // rcx
  _KLOCK_ENTRY *v15; // rdi
  bool v16; // zf
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rdx
  _QWORD *result; // rax
  __int64 v22; // rcx
  int v23; // [rsp+50h] [rbp+8h] BYREF
  int v24; // [rsp+58h] [rbp+10h]

  v1 = a1 + 1128;
  ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
  EtwpRotateCompressionTargetIfNeeded(a1);
  while ( 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v4 = (_DWORD *)EtwpDequeueBufferPendingCompression(a1);
    v5 = v4;
    if ( !v4 )
      break;
    if ( (int)v4[3] > 0 || v4[1] > 0x48u && v4[2] > 0x48u )
    {
      if ( (int)EtwpCompressBuffer(a1, (__int64)v4) < 0 )
        _InterlockedAdd((volatile signed __int32 *)(a1 + 268), 1u);
      EtwpCompleteBuffer(a1, v5, 0LL);
      v6 = KeQueryPerformanceCounter(0LL);
      v7 = *(_QWORD *)(a1 + 1256);
      v8 = v6.QuadPart - PerformanceCounter.QuadPart;
      if ( v7 )
        *(_QWORD *)(a1 + 1256) = (v8 + 4 * v7) / 5;
      else
        *(_QWORD *)(a1 + 1256) = v8;
    }
    else
    {
      EtwpCompleteBuffer(a1, v4, 0LL);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  v23 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v1) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v11 = ++CurrentThread->AbAllocationRegionCount;
  v12 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v16 = !_BitScanReverse((unsigned int *)&v17, v12);
    v24 = v17;
    if ( v16 )
      goto LABEL_24;
    v13 = 1 << v17;
    v14 = v17;
    v15 = &CurrentThread->LockEntries[v14];
    v12 &= ~v13;
    if ( (v15->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v15->LockState.0 & 1) == 0
      && (*(_QWORD *)&v15->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v1 & 0x7FFFFFFFFFFFFFFCLL)
      && v15->LockState.SessionId == SessionId )
    {
      v15->AcquiredByte &= ~1u;
      if ( v15->LockState.0 )
        break;
    }
  }
  if ( !v15 )
  {
LABEL_24:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, SessionId, 0LL);
    goto LABEL_31;
  }
  v15->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v15->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v14].TreeNode);
  v18 = v15->BoostBitmap.AllFields & 0x1FFFF;
  v19 = v15->BoostBitmap.AllFields & 0xFFFE0000;
  v15->ThreadLocalFlags &= ~1u;
  v23 = v18;
  v15->BoostBitmap.AllFields = v19;
  v15->LockState.0 = 0LL;
  v20 = ((char *)v15 - (char *)CurrentThread - 800) / 96;
  if ( v11 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v20;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v20);
LABEL_31:
  --CurrentThread->AbAllocationRegionCount;
  result = (_QWORD *)KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v1, &v23);
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v22);
  }
  return result;
}
