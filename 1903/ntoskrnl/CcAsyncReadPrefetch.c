/*
 * XREFs of CcAsyncReadPrefetch @ 0x1400A26FC
 * Callers:
 *     CcAsyncReadWorker @ 0x14018C320 (CcAsyncReadWorker.c)
 * Callees:
 *     CcUpdateReadHistory @ 0x1400A2918 (CcUpdateReadHistory.c)
 *     CcScheduleReadAheadEx @ 0x1400A9CA0 (CcScheduleReadAheadEx.c)
 *     FsRtlIsNtstatusExpected @ 0x14012EF30 (FsRtlIsNtstatusExpected.c)
 *     MmProbeAndLockProcessPages @ 0x14064CCC0 (MmProbeAndLockProcessPages.c)
 *     MmPrefetchForCacheManager @ 0x14066DB98 (MmPrefetchForCacheManager.c)
 */

char __fastcall CcAsyncReadPrefetch(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // r14
  int v5; // r12d
  struct _MDL *v6; // r10
  _DWORD *v7; // rbx
  int v9; // [rsp+B0h] [rbp+8h]
  int v10; // [rsp+B8h] [rbp+10h]
  __int64 v11; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+C8h] [rbp+20h]

  v10 = 0;
  v12 = 0LL;
  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD **)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 40);
  v4 = *(_QWORD **)(a1 + 48);
  v5 = *(_DWORD *)(a1 + 56);
  v6 = *(struct _MDL **)(a1 + 64);
  if ( (v6->MdlFlags & 0x817) == 0 )
    MmProbeAndLockProcessPages(v6, *(PEPROCESS *)(a1 + 88), *(_BYTE *)(a1 + 112), IoWriteAccess);
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  *v4 = 0LL;
  v9 = v3;
  if ( v11 < *(_QWORD *)(v1 + 8) )
  {
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)7;
    if ( v11 + v3 > *(_QWORD *)(v1 + 8) )
      v9 = *(_DWORD *)(v1 + 8) - v11;
    v12 = v11 & 0xFFFFFFFFFFFFF000uLL;
    v10 = MmPrefetchForCacheManager(
            (_DWORD)v2,
            (unsigned int)v11 & 0xFFFFF000,
            -4096,
            ((v9 + v11 + 4095) & 0xFFFFF000) - (v11 & 0xFFFFF000),
            v5);
    KeGetCurrentThread()[1].TrapFrame = 0LL;
  }
  if ( v10 )
    ++CcNumberAsyncReadPrefetches;
  else
    ++CcNumberAsyncReadCacheHits;
  v7 = (_DWORD *)v2[6];
  if ( CcEnableReadAheadInAsyncRead && v10 )
  {
    if ( !v7 )
      return 1;
    if ( (*v7 & 0x20000) == 0 )
      CcScheduleReadAheadEx(v2);
  }
  if ( v7 )
    CcUpdateReadHistory(v2, &v11, (unsigned int)v3);
  return 1;
}
