/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x180063220
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x1800631B0 (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18001ECC0 (RtlRbRemoveNode.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x18005C928 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18005CC10 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrRangeFind @ 0x180063408 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrAllocAligned @ 0x1800638AC (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrFree @ 0x180063908 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x180063A94 (RtlpHpVaMgrRangeSplit.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1800A06C0 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

PVOID __fastcall RtlpHpVaMgrAlloc(PRTL_SRWLOCK SRWLock, ULONG_PTR *a2, unsigned __int64 a3)
{
  ULONG_PTR v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 v7; // rcx
  ULONG_PTR v8; // rsi
  _RTL_BALANCED_NODE *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r14
  void *v12; // r14
  PVOID v13; // rbx
  __int64 v15; // rax
  ULONG_PTR RegionSize; // [rsp+20h] [rbp-40h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v18[4]; // [rsp+30h] [rbp-30h] BYREF

  v3 = *a2;
  v18[0] = 0x10000000100000LL;
  v4 = a3;
  v18[1] = 0x4000000000200000LL;
  if ( !v3 )
    __int2c();
  v7 = (unsigned __int64)(LOWORD(SRWLock[5].Value) << 20) >> 1;
  RegionSize = v3;
  if ( v3 <= v7 )
  {
    v8 = v3 >> 20;
    RtlAcquireSRWLockExclusive(SRWLock);
    v9 = (_RTL_BALANCED_NODE *)RtlpHpVaMgrRangeFind(
                                 SRWLock,
                                 (unsigned __int16)v8,
                                 (unsigned __int16)(v4 >> 20),
                                 v18,
                                 RegionSize);
    v10 = (__int64)v9;
    if ( v9 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)&SRWLock[1], v9);
      v11 = v18[0];
      if ( v18[0] != v10 )
      {
        *(_QWORD *)v10 = 0LL;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_BYTE *)v10 = 1;
        *(_BYTE *)(v10 + 1) = BYTE4(SRWLock[5].Ptr);
        RtlpHpVaMgrRangeSplit(SRWLock, v10, (v11 - v10) >> 5);
        RtlpHpVaMgrFree(SRWLock, v10);
        v10 = v11;
      }
      goto LABEL_7;
    }
    RtlReleaseSRWLockExclusive(SRWLock);
    v10 = RtlpHpVaMgrRegionAllocate((__int64)SRWLock);
    if ( v10 )
    {
      RtlAcquireSRWLockExclusive(SRWLock);
LABEL_7:
      v12 = (void *)(*(_QWORD *)(SRWLock[3].Value + 8)
                   + ((v10 - *(_QWORD *)(SRWLock[3].Value + 32)) >> *(_DWORD *)(SRWLock[3].Value + 88) << 20));
      *(_QWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_BYTE *)v10 = 1;
      *(_BYTE *)(v10 + 1) = BYTE4(SRWLock[5].Ptr);
      if ( *(_WORD *)(v10 + 24) > (unsigned __int16)v8 )
      {
        v15 = RtlpHpVaMgrRangeSplit(SRWLock, v10, (unsigned __int16)v8);
        RtlpHpVaMgrFree(SRWLock, v15);
      }
      BaseAddress = v12;
      RtlReleaseSRWLockExclusive(SRWLock);
      return BaseAddress;
    }
    return 0LL;
  }
  if ( a3 <= *((unsigned int *)v18 + (((unsigned __int64)BYTE6(SRWLock[5].Ptr) >> 1) & 3)) )
    v4 = *((unsigned int *)v18 + (((unsigned __int64)BYTE6(SRWLock[5].Ptr) >> 1) & 3));
  RegionSize = v3 - ((v4 - 1) & (v4 + v3 - 1)) + v4 - 1;
  BaseAddress = (PVOID)RtlpHpVaMgrAllocAligned(SRWLock, &RegionSize);
  v13 = BaseAddress;
  if ( BaseAddress )
  {
    memset(v18, 0, sizeof(v18));
    BYTE1(v18[0]) = BYTE4(SRWLock[5].Ptr);
    v18[3] = RegionSize >> 20;
    LOBYTE(v18[0]) = 5;
    if ( RtlpHpVaMgrRangeCreate((__int64)SRWLock, (__int64)BaseAddress, (__int64)v18) )
    {
      *a2 = RegionSize;
      return BaseAddress;
    }
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return 0LL;
  }
  return v13;
}
