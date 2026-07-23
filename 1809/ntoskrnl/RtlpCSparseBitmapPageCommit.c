/*
 * XREFs of RtlpCSparseBitmapPageCommit @ 0x14000A9E4
 * Callers:
 *     RtlSparseArrayElementAllocate @ 0x14000A4E8 (RtlSparseArrayElementAllocate.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x14000A690 (RtlCSparseBitmapBitmaskWrite.c)
 * Callees:
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x14000A75C (RtlCSparseBitmapLeaveLockingRegion.c)
 *     RtlpCSparseBitmapUnlock @ 0x14000A7A0 (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapLock @ 0x14000AB40 (RtlpCSparseBitmapLock.c)
 *     RtlCSparseBitmapEnterLockingRegion @ 0x14000ABB8 (RtlCSparseBitmapEnterLockingRegion.c)
 *     RtlpHpEnvAllocVA @ 0x14000D060 (RtlpHpEnvAllocVA.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x1402FE420 (RtlpCSparseBitmapWaitOnAddress.c)
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
  _QWORD v15[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v16; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v17[16]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int64 v19; // [rsp+B8h] [rbp+38h] BYREF

  v19 = a2;
  v5 = a2 >> 15;
  v7 = a2;
  if ( !_bittest64((const signed __int64 *)a1, a2 >> 15) )
  {
    v18 = 4096LL;
    v15[0] = *(_QWORD *)(a1 + 8) + (v5 << 12);
    v9 = RtlpHpEnvAllocVA(
           (unsigned int)v15,
           (unsigned int)&v18,
           0,
           1073745920,
           4,
           *(unsigned __int8 *)(a1 + 57),
           *(unsigned __int8 *)(a1 + 58));
    if ( v9 < 0 )
      return (unsigned int)v9;
    _interlockedbittestandset64((volatile signed __int32 *)a1, v5);
    v7 = v19;
  }
  *a4 = *(_OWORD *)RtlCSparseBitmapEnterLockingRegion(v17, a1, a3, a4);
  while ( 1 )
  {
    RtlpCSparseBitmapLock(a1, 0LL, a3);
    if ( *(_QWORD *)(a1 + 40) != v7 )
      break;
    RtlpCSparseBitmapUnlock(a3);
    RtlpCSparseBitmapWaitOnAddress(a1 + 40, &v19, v12, a1, v13);
  }
  if ( !_bittest64(*(const signed __int64 **)(a1 + 8), v7) )
  {
    v11 = *(unsigned __int8 *)(a1 + 57);
    v15[0] = *(_QWORD *)(a1 + 16) + (v7 << 12);
    v14 = *(unsigned __int8 *)(a1 + 58);
    v18 = 4096LL;
    v9 = RtlpHpEnvAllocVA((unsigned int)v15, (unsigned int)&v18, 0, 1073745920, 4, v11, v14);
    if ( v9 < 0 )
    {
      RtlpCSparseBitmapUnlock(a3);
      v16 = *a4;
      RtlCSparseBitmapLeaveLockingRegion((char *)&v16);
      return (unsigned int)v9;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)(a1 + 8), v7);
  }
  return 0;
}
