/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x14000C594
 * Callers:
 *     RtlpHpSegAlloc @ 0x14000B118 (RtlpHpSegAlloc.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14000B82C (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegLfhVsDecommit @ 0x14000BDB0 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpMetadataCommit @ 0x14019224C (RtlpHpMetadataCommit.c)
 * Callees:
 *     RtlpHpSegMgrCommit @ 0x14000C244 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegPageRangeHandleCommit @ 0x14000C760 (RtlpHpSegPageRangeHandleCommit.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCommit(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v7; // esi
  unsigned int v10; // r13d
  int v11; // edx
  int v12; // r8d
  unsigned int v13; // r12d
  int v14; // r15d
  unsigned int v15; // r14d
  int v16; // eax
  unsigned __int64 v17; // rbx
  int v18; // ecx
  __int64 result; // rax
  int v20; // [rsp+90h] [rbp+8h]
  int v21; // [rsp+98h] [rbp+10h]
  unsigned int v22; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v23; // [rsp+A8h] [rbp+20h] BYREF

  v7 = a3;
  a5 = (a5 >> 22) & 2;
  v10 = a3 + a4;
  v11 = (*(_BYTE *)(a1 + 13) & 7) == 0 ? 0x7FFF : 511;
  v12 = 0;
  v13 = (unsigned int)((a2 - (a2 & *(_QWORD *)a1)) >> 5) << *(_BYTE *)(a1 + 9);
  v20 = v11;
  if ( a4 <= 0 )
    v12 = 2;
  v21 = v12;
  if ( a4 <= 0 )
    v10 = v7 - a4;
  v14 = 0;
  while ( v7 < v10 )
  {
    v22 = v7;
    v15 = v11 - (v11 & (v7 + v13)) + 1;
    if ( v15 >= v10 - v7 )
      v15 = v10 - v7;
    v23 = v15;
    v16 = RtlpHpSegPageRangeHandleCommit(a1, a2, (unsigned int)&v22, (unsigned int)&v23, v12);
    v17 = v16;
    if ( v16 )
    {
      v18 = 0x4000;
      if ( v16 > 0 )
        v18 = 4096;
      result = RtlpHpSegMgrCommit(a1, a2 & *(_QWORD *)a1, v13 + v22, v23, v16, v18, a5);
      if ( (int)result < 0 )
        return result;
      if ( (int)v17 > 0 )
        RtlpHpSegPageRangeHandleCommit(a1, a2, (unsigned int)&v22, (unsigned int)&v23, 1);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v17);
      *(_WORD *)(a2 + 28) = ~(v17 + ~*(_WORD *)(a2 + 28));
    }
    v11 = v20;
    v7 += v15;
    v12 = v21;
    v14 += v17;
  }
  if ( a6 )
    *a6 = v14;
  return 0LL;
}
