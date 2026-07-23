/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x180062088
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1800110C0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpGetSubSegmentBlockCount @ 0x180062308 (RtlpGetSubSegmentBlockCount.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x180062370 (RtlpHpLfhSubsegmentInitialize.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlpHpLfhBucketSubsegmentStatsUpdate @ 0x18010CC24 (RtlpHpLfhBucketSubsegmentStatsUpdate.c)
 */

unsigned __int16 *__fastcall RtlpHpLfhSubsegmentCreate(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  char v4; // bl
  unsigned int v5; // r13d
  unsigned int v8; // esi
  int v9; // r12d
  unsigned int v10; // ecx
  unsigned int v11; // r10d
  unsigned __int64 v12; // rax
  int SubSegmentBlockCount; // eax
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  unsigned int v16; // r10d
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // esi
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned __int16 *v26; // r14
  unsigned int v27; // ebx
  unsigned int v28; // ecx
  unsigned __int16 *v29; // rbx
  char v31[88]; // [rsp+30h] [rbp-58h] BYREF
  char v32; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v33; // [rsp+98h] [rbp+10h]
  unsigned int v34; // [rsp+A0h] [rbp+18h]
  unsigned int v35; // [rsp+A8h] [rbp+20h]

  v3 = *(unsigned __int8 *)(a2 + 1);
  v4 = RtlpHpLfhPerfFlags;
  v5 = a3;
  v8 = (unsigned __int16)RtlpBucketBlockSizes[v3];
  v34 = v8;
  if ( (RtlpHpLfhPerfFlags & 1) != 0 )
  {
    LODWORD(v3) = RtlpHpLfhBucketSubsegmentStatsUpdate(a1 + 64, (unsigned int)v3);
    v4 = RtlpHpLfhPerfFlags;
    v9 = v3;
    LOBYTE(v3) = *(_BYTE *)(a2 + 1);
  }
  else
  {
    v9 = 0;
  }
  v10 = *(unsigned __int8 *)(a2 + 2);
  v11 = (unsigned __int16)RtlpBucketBlockSizes[(unsigned __int8)v3];
  v12 = *(unsigned int *)(a2 + 56);
  if ( !v9 )
    v12 = ((unsigned int)v12 >> 3) / v10;
  if ( v12 >= 0xFFFFFFFF )
    LODWORD(v12) = -1;
  LOBYTE(a3) = v10 > 1;
  SubSegmentBlockCount = RtlpGetSubSegmentBlockCount(v11, (unsigned int)v12, a3, *(_QWORD *)(a2 + 64) != 0LL);
  v14 = 7;
  v15 = v8 * SubSegmentBlockCount;
  v16 = ((8 * (((unsigned __int64)(unsigned int)(2 * SubSegmentBlockCount) + 63) >> 6) + 63) & 0xFFFFFFF0)
      + 2
      * ((v8 * SubSegmentBlockCount
        + ((8 * (unsigned int)(((unsigned __int64)(unsigned int)(2 * SubSegmentBlockCount) + 63) >> 6) + 63) & 0xFFFFFFF0)
        + 4095) >> 12);
  v17 = v16 + v8 * SubSegmentBlockCount;
  v18 = 18;
  if ( v17 >= 0xF0000 )
    v17 = 983040;
  _BitScanReverse(&v19, v17 - 1);
  v20 = 7;
  v33 = v19;
  v21 = v19 + 1;
  if ( v21 > 7 )
    v20 = v21;
  v22 = 18;
  if ( v20 < 0x12 )
    v22 = v20;
  if ( v22 <= 0xC )
    LOBYTE(v22) = 12;
  v23 = 1 << v22;
  if ( (v4 & 8) != 0 && v16 <= v15 >> 6 )
  {
    if ( v15 >= 0xF0000 )
      v15 = 983040;
    _BitScanReverse(&v24, v15 - 1);
    v35 = v24;
    v25 = v24 + 1;
    if ( v25 > 7 )
      v14 = v25;
    if ( v14 < 0x12 )
      v18 = v14;
    if ( v18 <= 0xC )
      LOBYTE(v18) = 12;
    if ( v23 > 1 << v18 )
      v23 = 1 << v18;
  }
  if ( (v5 & 1) == 0 )
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 72));
  v26 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *, char *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 8)))(
                              *(_QWORD *)a1,
                              v23,
                              v5,
                              &v32,
                              v31);
  if ( v26 )
  {
    if ( v9 && (RtlpHpLfhPerfFlags & 2) != 0 || (v32 & 1) != 0 )
    {
      v27 = v23;
    }
    else if ( (RtlpHpAppCompatFlags & 4) != 0 )
    {
      v27 = v23;
    }
    else
    {
      v27 = 2 * v34;
      if ( ((v27 - 1) & v27) != 0 )
      {
        _BitScanReverse(&v28, v27);
        v34 = v28;
        v27 = 1 << (v28 + 1);
      }
      if ( v27 <= 0x1000 )
        v27 = 4096;
      if ( v27 >= v23 )
        v27 = v23;
    }
    if ( ((int (__fastcall *)(_QWORD, unsigned __int16 *, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
           *(_QWORD *)a1,
           v26,
           v27) < 0 )
    {
      v29 = 0LL;
    }
    else
    {
      RtlpHpLfhSubsegmentInitialize(v26, a1);
      _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), v26[17]);
      v29 = v26;
      v26 = 0LL;
    }
    if ( v26 )
      ((void (__fastcall *)(_QWORD, unsigned __int16 *, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)))(
        *(_QWORD *)a1,
        v26,
        v23,
        v5);
  }
  else
  {
    v29 = 0LL;
  }
  if ( (v5 & 1) == 0 )
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 72));
  return v29;
}
