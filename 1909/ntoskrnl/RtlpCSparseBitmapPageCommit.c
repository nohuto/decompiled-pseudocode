/*
 * XREFs of RtlpCSparseBitmapPageCommit @ 0x14010F3D8
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x14010E7C8 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x14010F094 (RtlSparseArrayElementAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x140022940 (RtlpHpEnvAllocVA.c)
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x14010F148 (RtlCSparseBitmapLeaveLockingRegion.c)
 *     RtlpCSparseBitmapUnlock @ 0x14010F18C (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapLock @ 0x14010F534 (RtlpCSparseBitmapLock.c)
 *     RtlCSparseBitmapEnterLockingRegion @ 0x14010F5AC (RtlCSparseBitmapEnterLockingRegion.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x14031BE6C (RtlpCSparseBitmapWaitOnAddress.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageCommit(__int64 a1, unsigned __int64 a2, int *a3, __int128 *a4)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rsi
  int v9; // edi
  int v11; // ecx
  __int64 v12; // r8
  int v13; // [rsp+20h] [rbp-60h]
  int v14; // [rsp+30h] [rbp-50h]
  __int64 v15; // [rsp+38h] [rbp-48h]
  __int64 v16[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v17; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v18[16]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int64 v20; // [rsp+B8h] [rbp+38h] BYREF

  v20 = a2;
  v5 = a2 >> 15;
  v7 = a2;
  if ( !_bittest64((const signed __int64 *)(a1 + 56), a2 >> 15) )
  {
    v19 = 4096LL;
    v16[0] = *(_QWORD *)a1 + (v5 << 12);
    v9 = RtlpHpEnvAllocVA(
           v16,
           &v19,
           0LL,
           1073745920,
           4,
           *(unsigned __int8 *)(a1 + 49),
           *(unsigned __int8 *)(a1 + 50),
           v15,
           0);
    if ( v9 < 0 )
      return (unsigned int)v9;
    _interlockedbittestandset64((volatile signed __int32 *)(a1 + 56), v5);
    v7 = v20;
  }
  *a4 = *(_OWORD *)RtlCSparseBitmapEnterLockingRegion(v18, a1, a3, a4);
  while ( 1 )
  {
    RtlpCSparseBitmapLock(a1, 0LL, a3);
    if ( *(_QWORD *)(a1 + 32) != v7 )
      break;
    RtlpCSparseBitmapUnlock(a3);
    RtlpCSparseBitmapWaitOnAddress(a1 + 32, &v20, v12, a1, v13);
  }
  if ( !_bittest64(*(const signed __int64 **)a1, v7) )
  {
    v11 = *(unsigned __int8 *)(a1 + 49);
    v16[0] = *(_QWORD *)(a1 + 8) + (v7 << 12);
    v14 = *(unsigned __int8 *)(a1 + 50);
    v19 = 4096LL;
    v9 = RtlpHpEnvAllocVA(v16, &v19, 0LL, 1073745920, 4, v11, v14, v15, 0);
    if ( v9 < 0 )
    {
      RtlpCSparseBitmapUnlock(a3);
      v17 = *a4;
      RtlCSparseBitmapLeaveLockingRegion((char *)&v17);
      return (unsigned int)v9;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)a1, v7);
  }
  return 0;
}
