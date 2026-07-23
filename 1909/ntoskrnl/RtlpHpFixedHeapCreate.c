/*
 * XREFs of RtlpHpFixedHeapCreate @ 0x140137770
 * Callers:
 *     RtlCreateHeap @ 0x1406E7930 (RtlCreateHeap.c)
 * Callees:
 *     RtlSetBitsEx @ 0x140073620 (RtlSetBitsEx.c)
 *     RtlpHpVsContextInitialize @ 0x140137934 (RtlpHpVsContextInitialize.c)
 *     ZwQueryVirtualMemory @ 0x1401C10B0 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

unsigned __int64 __fastcall RtlpHpFixedHeapCreate(
        PVOID BaseAddress,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        _DWORD *a6)
{
  unsigned __int64 v8; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r15
  int v14; // edi
  int v15; // eax
  int v16; // r9d
  __int128 v18; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v20[5]; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v21[6]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD MemoryInformation[12]; // [rsp+A0h] [rbp-19h] BYREF
  PVOID BaseAddressa; // [rsp+110h] [rbp+57h] BYREF
  int v24; // [rsp+118h] [rbp+5Fh] BYREF

  BaseAddressa = BaseAddress;
  v8 = (unsigned __int64)BaseAddress;
  memset(MemoryInformation, 0, 0x28uLL);
  memset(v21, 0, sizeof(v21));
  v10 = 0LL;
  if ( a2 )
  {
    if ( !a4 || !a3 || a4 > a3 )
      return v10;
  }
  else
  {
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PVOID)v8,
           MemoryRegionInformation,
           MemoryInformation,
           0x28uLL,
           0LL) < 0 )
      return v10;
    if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddressa, MemoryBasicInformation, v21, 0x30uLL, 0LL) < 0 )
      return v10;
    v8 = (unsigned __int64)BaseAddressa;
    if ( (PVOID)v21[0] != BaseAddressa || LODWORD(v21[4]) == 0x10000 )
      return v10;
    a3 = MemoryInformation[2];
    if ( LODWORD(v21[4]) == 4096 )
      a4 = v21[3];
  }
  v11 = (unsigned __int64)&RtlpHpFixedHeapCommitRoutine;
  if ( a2 )
    v11 = a2;
  v12 = a3 >> 12;
  v13 = ((v12 >> 3) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v19 = (v13 + 4351) & 0xFFFFFFFFFFFFF000uLL;
  if ( a4 < v19 )
  {
    if ( ((int (__fastcall *)(unsigned __int64, PVOID *, unsigned __int64 *))v11)(v8, &BaseAddressa, &v19) < 0 )
      return v10;
    v8 = (unsigned __int64)BaseAddressa;
  }
  memset((void *)v8, 0, v13 + 256);
  if ( v11 )
    *(_QWORD *)(v8 + 8) = RtlpHpHeapGlobals ^ v11;
  *(_DWORD *)(v8 + 32) = *a6 & 1;
  *(_QWORD *)(v8 + 24) = 0LL;
  v14 = a5;
  v15 = a5 & 0x13000003;
  *(_DWORD *)(v8 + 16) = -857879331;
  *(_DWORD *)(v8 + 20) = v15;
  *(_QWORD *)v8 = v12;
  *(_QWORD *)&v18 = v12;
  *((_QWORD *)&v18 + 1) = v8 + 256;
  RtlSetBitsEx((__int64)&v18, 0LL, (v13 + 4351) >> 12);
  v16 = *(_DWORD *)(v8 + 32);
  v20[0] = RtlpHpFixedVsAllocate;
  v20[4] = 0LL;
  v20[1] = RtlpHpFixedVsFree;
  v24 = 0;
  v20[2] = RtlpHpFixedVsCommit;
  *((_QWORD *)&v18 + 1) = v8 ^ (v8 + 256);
  v20[3] = xHalTimerWatchdogStop;
  *(_OWORD *)(v8 + 48) = v18;
  RtlpHpVsContextInitialize(v8 + 64, v8, (unsigned int)v20, v16, v14 & 0x8000000, (__int64)&v24);
  return v8;
}
