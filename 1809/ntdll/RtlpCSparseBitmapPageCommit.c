/*
 * XREFs of RtlpCSparseBitmapPageCommit @ 0x18005D4D0
 * Callers:
 *     RtlSparseArrayElementAllocate @ 0x18005CD00 (RtlSparseArrayElementAllocate.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18005D3FC (RtlCSparseBitmapBitmaskWrite.c)
 * Callees:
 *     RtlpCSparseBitmapUnlock @ 0x18005D4B4 (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapLock @ 0x18005D5B4 (RtlpCSparseBitmapLock.c)
 *     RtlpWaitOnAddress @ 0x18005EBE8 (RtlpWaitOnAddress.c)
 *     RtlpHpEnvAllocVA @ 0x180060E80 (RtlpHpEnvAllocVA.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageCommit(__int64 a1, unsigned __int64 a2, __int64 a3, _OWORD *a4)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rsi
  int v9; // edi
  int v11; // [rsp+28h] [rbp-48h]
  int v12; // [rsp+30h] [rbp-40h]
  PVOID BaseAddress; // [rsp+50h] [rbp-20h] BYREF
  __int128 v14; // [rsp+58h] [rbp-18h]
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp+30h] BYREF
  unsigned __int64 v16; // [rsp+A8h] [rbp+38h] BYREF

  v16 = a2;
  v5 = a2 >> 15;
  v7 = a2;
  if ( !_bittest64((const signed __int64 *)a1, a2 >> 15) )
  {
    RegionSize = 4096LL;
    BaseAddress = (PVOID)(*(_QWORD *)(a1 + 8) + (v5 << 12));
    v9 = RtlpHpEnvAllocVA(&BaseAddress, &RegionSize, 4u, v11, v12, 0LL);
    if ( v9 < 0 )
      return (unsigned int)v9;
    _interlockedbittestandset64((volatile signed __int32 *)a1, v5);
    v7 = v16;
  }
  v14 = 0uLL;
  *a4 = 0uLL;
  while ( 1 )
  {
    RtlpCSparseBitmapLock(a1, 0LL, a3);
    if ( *(_QWORD *)(a1 + 40) != v7 )
      break;
    RtlpCSparseBitmapUnlock(a3);
    RtlpWaitOnAddress(a1 + 40, (unsigned int)&v16, 8, 0, RtlpWaitOnAddressSpinCount);
  }
  if ( !_bittest64(*(const signed __int64 **)(a1 + 8), v7) )
  {
    RegionSize = 4096LL;
    BaseAddress = (PVOID)(*(_QWORD *)(a1 + 16) + (v7 << 12));
    v9 = RtlpHpEnvAllocVA(&BaseAddress, &RegionSize, 4u, v11, v12, 0LL);
    if ( v9 < 0 )
    {
      RtlpCSparseBitmapUnlock(a3);
      return (unsigned int)v9;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)(a1 + 8), v7);
  }
  return 0;
}
