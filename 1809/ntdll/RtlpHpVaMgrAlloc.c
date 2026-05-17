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
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1800A06A0 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(unsigned __int64 a1, unsigned __int64 *a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // rbx
  unsigned __int64 v16; // rdx
  unsigned __int64 *v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 v21; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v22[4]; // [rsp+30h] [rbp-30h] BYREF

  v4 = *a2;
  v22[0] = 0x10000000100000LL;
  v5 = (unsigned __int64)a3;
  v22[1] = 0x4000000000200000LL;
  if ( !v4 )
    __int2c();
  v8 = (unsigned __int64)(*(unsigned __int16 *)(a1 + 40) << 20) >> 1;
  v20 = v4;
  if ( v4 <= v8 )
  {
    v9 = v4 >> 20;
    RtlAcquireSRWLockExclusive(a1, (unsigned __int64)a2, a3, a4);
    v10 = RtlpHpVaMgrRangeFind(a1, (unsigned __int16)v9, (unsigned __int16)(v5 >> 20), v22, v20);
    v11 = v10;
    if ( v10 )
    {
      RtlRbRemoveNode(a1 + 8, v10);
      v12 = v22[0];
      if ( v22[0] != v11 )
      {
        *(_QWORD *)v11 = 0LL;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = 0LL;
        *(_BYTE *)v11 = 1;
        *(_BYTE *)(v11 + 1) = *(_BYTE *)(a1 + 44);
        RtlpHpVaMgrRangeSplit(a1, v11, (v12 - v11) >> 5);
        RtlpHpVaMgrFree(a1, v11);
        v11 = v12;
      }
      goto LABEL_7;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    v11 = RtlpHpVaMgrRegionAllocate(a1);
    if ( v11 )
    {
      RtlAcquireSRWLockExclusive(a1, v16, v17, v18);
LABEL_7:
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
          + ((v11 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 88LL) << 20);
      *(_QWORD *)v11 = 0LL;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_BYTE *)v11 = 1;
      *(_BYTE *)(v11 + 1) = *(_BYTE *)(a1 + 44);
      if ( *(_WORD *)(v11 + 24) > (unsigned __int16)v9 )
      {
        v19 = RtlpHpVaMgrRangeSplit(a1, v11, (unsigned __int16)v9);
        RtlpHpVaMgrFree(a1, v19);
      }
      v21 = v13;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
      return v21;
    }
    return 0LL;
  }
  if ( (unsigned __int64)a3 <= *((unsigned int *)v22 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 3)) )
    v5 = *((unsigned int *)v22 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 3));
  v20 = v4 - ((v5 - 1) & (v5 + v4 - 1)) + v5 - 1;
  v21 = RtlpHpVaMgrAllocAligned(a1, &v20);
  v14 = v21;
  if ( v21 )
  {
    memset(v22, 0, sizeof(v22));
    BYTE1(v22[0]) = *(_BYTE *)(a1 + 44);
    v22[3] = v20 >> 20;
    LOBYTE(v22[0]) = 5;
    if ( RtlpHpVaMgrRangeCreate(a1, v21, (__int64)v22) )
    {
      *a2 = v20;
      return v21;
    }
    ZwFreeVirtualMemory(-1LL, &v21, &v20, 0x8000LL);
    return 0LL;
  }
  return v14;
}
