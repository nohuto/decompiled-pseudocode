/*
 * XREFs of MiAllocatePagesForMdl @ 0x140011048
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140010F40 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocatePagesForMdl @ 0x1401777A0 (MmAllocatePagesForMdl.c)
 *     MiPopulateCombineMdls @ 0x1406B9DF8 (MiPopulateCombineMdls.c)
 *     MmAllocateNonCachedMemory @ 0x14084EEA0 (MmAllocateNonCachedMemory.c)
 *     NtAllocateUserPhysicalPages @ 0x1408518F0 (NtAllocateUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408610C4 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiInitializeMdlPages @ 0x140011258 (MiInitializeMdlPages.c)
 *     MiInitializeMdlBatchPages @ 0x140011478 (MiInitializeMdlBatchPages.c)
 *     MiFindPagesForMdl @ 0x140011954 (MiFindPagesForMdl.c)
 *     MiObtainMdlCharges @ 0x140011B44 (MiObtainMdlCharges.c)
 *     TraceLoggingProviderEnabled @ 0x1400129D8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MiLogGetDurationSince @ 0x1402A949C (MiLogGetDurationSince.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiRemoveMdlPages @ 0x14084F140 (MiRemoveMdlPages.c)
 */

_DWORD *__fastcall MiAllocatePagesForMdl(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int16 a7,
        unsigned int a8)
{
  unsigned int v9; // r12d
  LARGE_INTEGER PerformanceCounter; // r14
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  _DWORD *v20; // r13
  unsigned __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned __int64 v23; // rdx
  ULONG_PTR *v25; // r8
  unsigned __int64 v26; // rcx
  _WORD *PoolWithTag; // rax
  int v28; // edx
  unsigned __int64 v29; // r8
  int v30; // edx
  __int64 v31; // r9
  const struct _TlgProvider_t *v32; // r10
  unsigned int v33; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v34; // [rsp+54h] [rbp-ACh]
  unsigned int v35; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v36; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v38; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v40; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp-78h]
  __int64 v42; // [rsp+90h] [rbp-70h]
  unsigned __int64 v43; // [rsp+98h] [rbp-68h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  __int64 *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  __int64 *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  __int64 *v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  __int64 *v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  unsigned int *v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  unsigned int *v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  __int64 *v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]

  v9 = a8;
  v42 = a5;
  v37 = a1;
  v34 = a6;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (a4 & 0xFFF) != 0 )
    goto LABEL_22;
  v14 = a2 >> 12;
  v15 = a3 >> 12;
  v16 = a4;
  v38 = (_DWORD *)(a2 >> 12);
  v40 = a3 >> 12;
  if ( a3 >> 12 < 0xFFFFFFFFFLL )
  {
    if ( v15 >= *(_QWORD *)(a1 + 7112) && !v14 )
      v9 = a8 | 0x10000;
  }
  else
  {
    LODWORD(v15) = -1;
    v40 = 0xFFFFFFFFFLL;
    if ( v14 )
      v16 = a4;
    v17 = a8 | 0x10000;
    if ( v14 )
      v17 = a8;
    v9 = v17;
  }
  v18 = v16 >> 12;
  v39 = v18;
  if ( ((v18 - 1) & v18) == 0 )
    goto LABEL_9;
  if ( (v9 & 0x40) != 0 )
  {
LABEL_22:
    v20 = 0LL;
    goto LABEL_14;
  }
  LODWORD(v18) = 0;
  v39 = 0LL;
LABEL_9:
  v19 = MiObtainMdlCharges(a1, a2 >> 12, v15, v18, v42, v34, v9);
  v20 = (_DWORD *)v19;
  if ( !v19 )
    goto LABEL_14;
  v21 = (unsigned __int64)*(unsigned int *)(v19 + 40) >> 12;
  v36 = v21;
  *(_DWORD *)(v19 + 40) = 0;
  v33 = 0;
  v35 = 0;
  while ( 1 )
  {
    MiFindPagesForMdl(v37, (_DWORD)v20, v9, v34, v21, (__int64)v38, v40, v39, a7);
    v22 = v20[10];
    v21 = v36;
    v23 = (unsigned __int64)v22 >> 12;
    v41 = v23;
    if ( v23 == v36 )
      goto LABEL_12;
    if ( (v9 & 0x80u) == 0 )
      break;
    if ( v35 != v22 )
    {
      v33 = 0;
      goto LABEL_32;
    }
    if ( v33 > 3 || KeGetCurrentIrql() >= 2u || (v9 & 8) != 0 )
      break;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
    ++v33;
    v22 = v20[10];
    v21 = v36;
LABEL_32:
    v35 = v22;
    v9 &= ~0x10000u;
  }
  v25 = (ULONG_PTR *)v37;
  v26 = v36 - v23;
  v36 -= v23;
  if ( (ULONG_PTR *)v37 == &MiSystemPartition )
  {
    MiReturnResidentAvailable();
    v26 = v36;
    v25 = (ULONG_PTR *)v37;
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 7360), v26);
  }
  if ( v25 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_14043C0D8, -(__int64)v26);
  MiReturnCommit(v25, v26);
  if ( !v41 )
  {
LABEL_21:
    ExFreePoolWithTag(v20, 0);
    goto LABEL_22;
  }
  if ( (v9 & 4) != 0 )
  {
    MiInitializeMdlBatchPages(v20, v9, v34);
    MiInitializeMdlPages(v20, v9);
    MiFreePagesFromMdl((ULONG_PTR)v20);
    goto LABEL_21;
  }
  if ( v36 > 0x800 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v41 + 48, 0x69646D4Du);
    v38 = PoolWithTag;
    if ( PoolWithTag )
    {
      v28 = v41;
      v29 = v41;
      *(_QWORD *)PoolWithTag = 0LL;
      PoolWithTag[5] = 0;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      PoolWithTag[4] = 8 * (v28 + 6);
      *((_DWORD *)PoolWithTag + 10) = v28 << 12;
      *((_DWORD *)PoolWithTag + 11) = 0;
      memmove(PoolWithTag + 24, v20 + 12, 8 * v29);
      ExFreePoolWithTag(v20, 0);
      v20 = v38;
    }
  }
LABEL_12:
  MiInitializeMdlBatchPages(v20, v9, v34);
  MiInitializeMdlPages(v20, v9);
  if ( (v9 & 0x100) != 0 )
    v20 = (_DWORD *)MiRemoveMdlPages(v20);
LABEL_14:
  if ( hProvider )
  {
    if ( TraceLoggingProviderEnabled(hProvider, 0, 0x40uLL) )
    {
      ((void (__fastcall *)(_QWORD))MiLogGetDurationSince)((LARGE_INTEGER)PerformanceCounter.QuadPart);
      if ( hProvider->LevelPlus1 > 5 )
      {
        if ( TlgKeywordOn(hProvider, 0x40uLL) )
        {
          LOWORD(v33) = a7;
          v44 = v42;
          v46 = (__int64 *)&v38;
          v48 = (__int64 *)&v40;
          v50 = &v39;
          v52 = (__int64 *)&v37;
          v54 = (__int64 *)&v43;
          v56 = &v33;
          v58 = &v35;
          v60 = &v44;
          v38 = (_DWORD *)v31;
          v40 = (unsigned __int64)v20;
          v39 = a2;
          v37 = a3;
          v43 = a4;
          v35 = v9;
          v47 = 8LL;
          v49 = 8LL;
          v51 = 8LL;
          v53 = 8LL;
          v55 = 8LL;
          v57 = 2LL;
          v59 = 4LL;
          v61 = 8LL;
          TlgWriteEx(v32, &unk_14036EBF3, 0LL, v30 - 63, 0LL, 0LL, 0xAu, &pData);
        }
      }
    }
  }
  return v20;
}
