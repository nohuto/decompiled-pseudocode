/*
 * XREFs of CcAsyncReadPrefetch @ 0x1400DFB4C
 * Callers:
 *     CcAsyncReadWorker @ 0x1401404B0 (CcAsyncReadWorker.c)
 * Callees:
 *     CcScheduleReadAheadEx @ 0x14008DEF0 (CcScheduleReadAheadEx.c)
 *     CcUpdateReadHistory @ 0x1400DFED0 (CcUpdateReadHistory.c)
 *     FsRtlIsNtstatusExpected @ 0x14012F320 (FsRtlIsNtstatusExpected.c)
 *     MmProbeAndLockProcessPages @ 0x1405D4FB0 (MmProbeAndLockProcessPages.c)
 *     MmPrefetchForCacheManager @ 0x1406637F8 (MmPrefetchForCacheManager.c)
 */

char __fastcall CcAsyncReadPrefetch(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // r14
  int v5; // r12d
  struct _MDL *v6; // r10
  struct _KTHREAD *v7; // r15
  __int64 v8; // rdx
  _DWORD *v9; // rbx
  int v11; // [rsp+90h] [rbp+8h]
  int v12; // [rsp+98h] [rbp+10h]
  __int64 v13; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+A8h] [rbp+20h]

  v12 = 0;
  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD **)(a1 + 32);
  v13 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 40);
  v4 = *(_QWORD **)(a1 + 48);
  v5 = *(_DWORD *)(a1 + 56);
  v6 = *(struct _MDL **)(a1 + 64);
  v7 = *(struct _KTHREAD **)(a1 + 96);
  if ( (v6->MdlFlags & 0x817) == 0 )
    MmProbeAndLockProcessPages(v6, *(PEPROCESS *)(a1 + 88), *(_BYTE *)(a1 + 112), IoWriteAccess);
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  *v4 = 0LL;
  v11 = v3;
  if ( v13 < *(_QWORD *)(v1 + 8) )
  {
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)7;
    v8 = *(_QWORD *)(v1 + 8);
    if ( v13 + v3 > v8 )
      v11 = v8 - v13;
    v14 = v13 & 0xFFFFFFFFFFFFF000uLL;
    v12 = MmPrefetchForCacheManager(
            (_DWORD)v2,
            (unsigned int)v13 & 0xFFFFF000,
            -4096,
            ((v11 + v13 + 4095) & 0xFFFFF000) - (v13 & 0xFFFFF000),
            v5);
    KeGetCurrentThread()[1].TrapFrame = 0LL;
  }
  if ( v12 )
    ++CcNumberAsyncReadPrefetches;
  else
    ++CcNumberAsyncReadCacheHits;
  v9 = (_DWORD *)v2[6];
  if ( CcEnableReadAheadInAsyncRead && v12 )
  {
    if ( !v9 )
      return 1;
    if ( (*v9 & 0x20000) == 0 )
      CcScheduleReadAheadEx(v2, &v13, v3, v7);
  }
  if ( v9 )
    CcUpdateReadHistory(v2, &v13, (unsigned int)v3);
  return 1;
}
