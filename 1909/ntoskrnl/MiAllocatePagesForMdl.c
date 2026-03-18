/*
 * XREFs of MiAllocatePagesForMdl @ 0x1400DCB14
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400DCA10 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocatePagesForMdl @ 0x140181760 (MmAllocatePagesForMdl.c)
 *     MiPopulateCombineMdls @ 0x1406F92F4 (MiPopulateCombineMdls.c)
 *     MmAllocateNonCachedMemory @ 0x140888E30 (MmAllocateNonCachedMemory.c)
 *     NtAllocateUserPhysicalPages @ 0x140896680 (NtAllocateUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14089B9D0 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiInitializeMdlBatchPages @ 0x1400C3614 (MiInitializeMdlBatchPages.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiInitializeMdlPages @ 0x1400DCD38 (MiInitializeMdlPages.c)
 *     MiFindPagesForMdl @ 0x1400DCF54 (MiFindPagesForMdl.c)
 *     MiObtainMdlCharges @ 0x1400DD124 (MiObtainMdlCharges.c)
 *     MiFreePagesFromMdl @ 0x1400DDE94 (MiFreePagesFromMdl.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpGetDurationSince @ 0x14032E78C (EtwpGetDurationSince.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiRemoveMdlPages @ 0x140889380 (MiRemoveMdlPages.c)
 */

_DWORD *__fastcall MiAllocatePagesForMdl(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        unsigned int a7,
        unsigned int a8)
{
  int v9; // r13d
  LARGE_INTEGER PerformanceCounter; // r15
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  _DWORD *v19; // r13
  unsigned __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned int v25; // ecx
  __int64 v26; // r10
  ULONG_PTR *v27; // r11
  unsigned __int64 v28; // rdx
  _WORD *PoolWithTag; // rax
  unsigned int v30; // [rsp+50h] [rbp-91h]
  unsigned int v31; // [rsp+58h] [rbp-89h]
  unsigned int v32; // [rsp+5Ch] [rbp-85h]
  __int64 v33; // [rsp+60h] [rbp-81h]
  unsigned __int64 v34; // [rsp+60h] [rbp-81h]
  __int64 v36; // [rsp+70h] [rbp-71h]
  _DWORD *v37; // [rsp+70h] [rbp-71h]
  __int64 v38; // [rsp+78h] [rbp-69h]
  unsigned __int64 v39; // [rsp+80h] [rbp-61h]
  _QWORD v40[7]; // [rsp+90h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C8h] [rbp-19h] BYREF

  v9 = a8;
  v30 = a8;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (a4 & 0xFFF) != 0 )
    goto LABEL_21;
  v13 = a2 >> 12;
  v14 = a3 >> 12;
  v36 = a2 >> 12;
  v15 = a4;
  UserData.Ptr = a3 >> 12;
  if ( a3 >> 12 < 0xFFFFFFFFFLL )
  {
    if ( v14 >= *(_QWORD *)(a1 + 7880) && !v13 )
    {
      v9 = a8 | 0x10000;
      v30 = a8 | 0x10000;
    }
  }
  else
  {
    LODWORD(v14) = -1;
    UserData.Ptr = 0xFFFFFFFFFLL;
    if ( v13 )
      v15 = a4;
    v16 = a8 | 0x10000;
    if ( v13 )
      v16 = a8;
    v9 = v16;
    v30 = v16;
  }
  v17 = v15 >> 12;
  v38 = v17;
  if ( ((v17 - 1) & v17) != 0 )
  {
    if ( (v9 & 0x40) != 0 )
      goto LABEL_21;
    LODWORD(v17) = 0;
    v38 = 0LL;
  }
  v18 = MiObtainMdlCharges(a1, a2 >> 12, v14, v17, a5, a6, v9);
  v19 = (_DWORD *)v18;
  if ( !v18 )
    goto LABEL_13;
  v20 = *(unsigned int *)(v18 + 40);
  *(_DWORD *)(v18 + 40) = 0;
  v33 = v20 >> 12;
  v31 = 0;
  v32 = 0;
  MiFindPagesForMdl(a1, v18, v30, a6, v20 >> 12, v36, UserData.Ptr, v38);
  v21 = v19[10];
  v22 = v33;
  v23 = (unsigned __int64)v21 >> 12;
  v39 = v23;
  if ( v23 == v33 )
    goto LABEL_11;
  while ( 1 )
  {
    v25 = v30;
    if ( (v30 & 0x80u) == 0 )
      break;
    if ( v32 == v21 )
    {
      if ( v31 > 3 || KeGetCurrentIrql() >= 2u || (v30 & 8) != 0 )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
      ++v31;
      v21 = v19[10];
      v25 = v30;
      v22 = v33;
    }
    else
    {
      v31 = 0;
    }
    v32 = v21;
    v30 = v25 & 0xFFFEFFFF;
    MiFindPagesForMdl(a1, (_DWORD)v19, v25 & 0xFFFEFFFF, a6, v22, v36, UserData.Ptr, v38);
    v21 = v19[10];
    v22 = v33;
    v23 = (unsigned __int64)v21 >> 12;
    v39 = v23;
    if ( v23 == v33 )
      goto LABEL_11;
  }
  v26 = a1;
  v27 = &MiSystemPartition;
  v28 = v22 - v23;
  v34 = v28;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    MiReturnResidentAvailable(v28);
    v28 = v34;
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), v28);
  }
  if ( (ULONG_PTR *)v26 == v27 )
    _InterlockedExchangeAdd64(&qword_140466738, -(__int64)v28);
  MiReturnCommit(v26, v28);
  if ( !v39 )
  {
LABEL_20:
    ExFreePoolWithTag(v19, 0);
LABEL_21:
    v19 = 0LL;
    goto LABEL_13;
  }
  if ( (v30 & 4) != 0 )
  {
    MiInitializeMdlBatchPages((__int64)v19, v30, a6);
    MiInitializeMdlPages(v19, v30);
    MiFreePagesFromMdl((ULONG_PTR)v19);
    goto LABEL_20;
  }
  if ( v34 > 0x800 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v39 + 48, 0x69646D4Du);
    v37 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = 0LL;
      PoolWithTag[5] = 0;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      PoolWithTag[4] = 8 * (v39 + 6);
      *((_DWORD *)PoolWithTag + 10) = (_DWORD)v39 << 12;
      *((_DWORD *)PoolWithTag + 11) = 0;
      memmove(PoolWithTag + 24, v19 + 12, 8 * v39);
      ExFreePoolWithTag(v19, 0);
      v19 = v37;
    }
  }
LABEL_11:
  MiInitializeMdlBatchPages((__int64)v19, v30, a6);
  MiInitializeMdlPages(v19, v30);
  if ( (v30 & 0x100) != 0 )
    v19 = (_DWORD *)MiRemoveMdlPages(v19);
LABEL_13:
  memset(v40, 0, sizeof(v40));
  if ( EtwEventEnabled(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MDL_ALLOCATION) )
  {
    v40[0] = ((__int64 (__fastcall *)(_QWORD))EtwpGetDurationSince)((LARGE_INTEGER)PerformanceCounter.QuadPart);
    v40[1] = a5;
    UserData.Ptr = (ULONGLONG)v40;
    v40[5] = v19;
    v40[2] = a2;
    v40[3] = a3;
    v40[4] = a4;
    v40[6] = __PAIR64__(v30, a7);
    *(_QWORD *)&UserData.Size = 56LL;
    EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MDL_ALLOCATION, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
  }
  return v19;
}
