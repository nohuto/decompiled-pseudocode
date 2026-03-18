/*
 * XREFs of MmFlushSection @ 0x140077E98
 * Callers:
 *     CcFlushCachePriv @ 0x1400773D0 (CcFlushCachePriv.c)
 *     CcSetFileSizesEx @ 0x14007D570 (CcSetFileSizesEx.c)
 *     MiFlushDataSection @ 0x140090130 (MiFlushDataSection.c)
 *     CcMdlWriteComplete2 @ 0x1400FE680 (CcMdlWriteComplete2.c)
 *     CcPurgeAndClearCacheSection @ 0x1401263F4 (CcPurgeAndClearCacheSection.c)
 *     CcUnpinRepinnedBcb @ 0x14027D570 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009CFC (MiDereferenceControlAreaFile.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MiFlushRelease @ 0x1400717B4 (MiFlushRelease.c)
 *     MiComputeFlushRange @ 0x140078040 (MiComputeFlushRange.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1406247F0 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140624A44 (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MmFlushSection(int a1, __int64 *a2, __int64 a3, __int64 a4, _DWORD *a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v12; // r15
  unsigned int v13; // eax
  __int64 *v14; // r13
  __int64 v15; // r12
  int v16; // edi
  unsigned int v18; // r14d
  ULONG_PTR v19; // rax
  struct _FILE_OBJECT *v20; // rsi
  unsigned int v21; // r15d
  __int64 v22[6]; // [rsp+40h] [rbp-30h] BYREF
  struct _KTHREAD *v23; // [rsp+B8h] [rbp+48h]
  __int64 v25; // [rsp+C8h] [rbp+58h] BYREF

  v6 = a3;
  v25 = 0LL;
  memset(v22, 0, sizeof(v22));
  if ( a2 )
  {
    v9 = *a2;
    a2 = &v25;
    v25 = v9;
  }
  v10 = (__int64)a5;
  *a5 = 0;
  *(_QWORD *)(v10 + 8) = v6;
  if ( !(unsigned int)MiComputeFlushRange(a1, (_DWORD)a2, v6, 0, (__int64)v22) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = v22[0];
  v23 = CurrentThread;
  LOBYTE(v25) = BYTE4(CurrentThread[1].Queue);
  v13 = a6;
  BYTE4(CurrentThread[1].Queue) = 1;
  if ( (v13 & 1) != 0 )
  {
    v18 = 0;
    v19 = MiReferenceControlAreaFile(v12);
    v15 = v22[4];
    v20 = (struct _FILE_OBJECT *)v19;
    v14 = (__int64 *)v22[3];
    v21 = a6;
    do
    {
      v16 = FsRtlAcquireFileForCcFlushEx(v20);
      if ( v16 < 0 )
        break;
      v16 = MiFlushSectionInternal(v22[1], v22[2], v14, v15, 0LL, v21, (unsigned int *)v10);
      FsRtlReleaseFileForCcFlush(v20);
      if ( v16 != -1073741740 )
        break;
      ++v18;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    }
    while ( v18 < 5 );
    v12 = v22[0];
    MiDereferenceControlAreaFile(v22[0], (unsigned __int64)v20);
    CurrentThread = v23;
    v6 = a3;
  }
  else
  {
    v14 = (__int64 *)v22[3];
    v15 = v22[4];
    v16 = MiFlushSectionInternal(v22[1], v22[2], (__int64 *)v22[3], v22[4], 0LL, v13, (unsigned int *)v10);
  }
  if ( v16 < 0 || *(_QWORD *)(v10 + 8) )
    *(_QWORD *)(v10 + 8) += (unsigned int)(LODWORD(v22[5]) << 12);
  else
    *(_QWORD *)(v10 + 8) = v6;
  BYTE4(CurrentThread[1].Queue) = v25;
  MiFlushRelease(v12, (ULONG_PTR)v14, v15);
  return (unsigned int)v16;
}
