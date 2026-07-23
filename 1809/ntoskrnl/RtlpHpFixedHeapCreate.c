/*
 * XREFs of RtlpHpFixedHeapCreate @ 0x14016B178
 * Callers:
 *     RtlCreateHeap @ 0x14070C1C0 (RtlCreateHeap.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14008AF10 (RtlSetBitsEx.c)
 *     RtlpHpVsContextInitialize @ 0x14015FF30 (RtlpHpVsContextInitialize.c)
 *     ZwQueryVirtualMemory @ 0x1401B8750 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall RtlpHpFixedHeapCreate(
        PVOID BaseAddress,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        _DWORD *a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v10; // r14
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r13
  int v15; // edi
  int v16; // eax
  int v17; // r9d
  __int128 v19; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-69h] BYREF
  __int128 v21; // [rsp+48h] [rbp-61h] BYREF
  __int64 (__fastcall *v22)(__int64, __int64, unsigned int); // [rsp+58h] [rbp-51h]
  __int64 (__fastcall *v23)(); // [rsp+60h] [rbp-49h]
  __int64 v24; // [rsp+68h] [rbp-41h]
  _QWORD v25[4]; // [rsp+70h] [rbp-39h] BYREF
  int v26; // [rsp+90h] [rbp-19h]
  char MemoryInformation[16]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 v28; // [rsp+B0h] [rbp+7h]
  PVOID BaseAddressa; // [rsp+100h] [rbp+57h] BYREF
  int v30; // [rsp+108h] [rbp+5Fh] BYREF

  BaseAddressa = BaseAddress;
  v6 = 0LL;
  v7 = a4;
  v8 = a3;
  v10 = (__int64)BaseAddress;
  if ( a2 )
  {
    if ( !a4 || !a3 || a4 > a3 )
      return v6;
  }
  else
  {
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BaseAddress,
           MemoryRegionInformation,
           MemoryInformation,
           0x20uLL,
           0LL) < 0 )
      return v6;
    if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddressa, MemoryBasicInformation, v25, 0x30uLL, 0LL) < 0 )
      return v6;
    v10 = (__int64)BaseAddressa;
    if ( (PVOID)v25[0] != BaseAddressa || v26 == 0x10000 )
      return v6;
    v8 = v28;
    if ( v26 == 4096 )
      v7 = v25[3];
  }
  v11 = (unsigned __int64)&RtlpHpFixedHeapCommitRoutine;
  if ( a2 )
    v11 = a2;
  v12 = v8 >> 12;
  v13 = ((v12 >> 3) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v14 = v13 + 4351;
  v20 = (v13 + 4351) & 0xFFFFFFFFFFFFF000uLL;
  if ( v7 < v20 )
  {
    if ( ((int (__fastcall *)(__int64, PVOID *, unsigned __int64 *))v11)(v10, &BaseAddressa, &v20) < 0 )
      return v6;
    v10 = (__int64)BaseAddressa;
  }
  memset((void *)v10, 0, v13 + 256);
  if ( v11 )
    *(_QWORD *)(v10 + 8) = RtlpHpHeapGlobals ^ v11;
  *(_DWORD *)(v10 + 32) = *a6 & 1;
  *(_QWORD *)(v10 + 24) = 0LL;
  v15 = a5;
  v16 = a5 & 0x13000003;
  *(_DWORD *)(v10 + 16) = -857879331;
  *(_DWORD *)(v10 + 20) = v16;
  *(_QWORD *)v10 = v12;
  *(_QWORD *)&v19 = v12;
  *((_QWORD *)&v19 + 1) = v10 + 256;
  RtlSetBitsEx((__int64)&v19, 0LL, v14 >> 12);
  v17 = *(_DWORD *)(v10 + 32);
  *(_QWORD *)&v21 = RtlpHpFixedVsAllocate;
  v24 = 0LL;
  *((_QWORD *)&v21 + 1) = RtlpHpFixedVsFree;
  v22 = RtlpHpFixedVsCommit;
  *((_QWORD *)&v19 + 1) = v10 ^ (v10 + 256);
  v23 = xHalTimerWatchdogStop;
  v30 = 0;
  *(_OWORD *)(v10 + 48) = v19;
  RtlpHpVsContextInitialize(v10 + 64, v10, &v21, v17, v15 & 0x8000000, &v30);
  return v10;
}
