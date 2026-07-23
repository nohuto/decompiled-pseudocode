/*
 * XREFs of PopBatteryUpdateCompositeInformation @ 0x14086E9B8
 * Callers:
 *     PopBatteryWorker @ 0x14071B020 (PopBatteryWorker.c)
 * Callees:
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x1407487DC (PopResetCurrentPolicies.c)
 */

__int64 PopBatteryUpdateCompositeInformation()
{
  __int64 v0; // rcx
  unsigned __int32 v1; // r10d
  __int32 v2; // r8d
  __int32 v3; // edx
  __int32 v4; // r9d
  unsigned __int32 v5; // r11d
  unsigned __int32 v6; // ebx
  int v7; // eax
  int v8; // eax
  unsigned __int32 v9; // eax
  __m128i v11[3]; // [rsp+50h] [rbp-30h] BYREF

  memset(v11, 0, 0x24uLL);
  v0 = qword_1404189D0;
  v1 = v11[1].m128i_u32[2];
  v2 = v11[1].m128i_i32[0];
  v3 = v11[0].m128i_i32[3];
  v4 = v11[0].m128i_i32[0];
  if ( (__int64 *)qword_1404189D0 != &qword_1404189D0 )
  {
    v5 = v11[1].m128i_u32[3];
    v6 = v11[1].m128i_u32[1];
    do
    {
      v4 |= *(_DWORD *)(v0 + 48);
      v7 = *(_DWORD *)(v0 + 60);
      if ( v7 != -1 )
        v3 += v7;
      v8 = *(_DWORD *)(v0 + 64);
      if ( v8 != -1 )
        v2 += v8;
      if ( v6 < *(_DWORD *)(v0 + 68) )
        v6 = *(_DWORD *)(v0 + 68);
      if ( v1 < *(_DWORD *)(v0 + 72) )
        v1 = *(_DWORD *)(v0 + 72);
      v9 = *(_DWORD *)(v0 + 76);
      v0 = *(_QWORD *)v0;
      if ( v5 < v9 )
        v5 = v9;
    }
    while ( (__int64 *)v0 != &qword_1404189D0 );
    v11[0].m128i_i32[3] = v3;
    v11[0].m128i_i32[0] = v4;
    v11[1].m128i_i32[3] = v5;
    *(__int64 *)((char *)v11[1].m128i_i64 + 4) = __PAIR64__(v1, v6);
  }
  dword_140418A14 = v11[2].m128i_i32[0];
  if ( !v2 )
    v2 = v3;
  v11[1].m128i_i32[0] = v2;
  unk_1404189F4 = v11[0];
  *(__m128i *)((char *)&qword_140418A00 + 4) = v11[1];
  DbgPrintEx(
    0x92u,
    2u,
    "\n"
    "Composite Information\n"
    "|-- Capabilities        = 0x%08x\n"
    "|-- DesignedCapacity    = %u\n"
    "|-- FullChargedCapacity = %u\n"
    "|-- DefaultAlert1       = %u\n"
    "|-- DefaultAlert2       = %u\n"
    "|-- CriticalBias        = %u\n",
    v4,
    _mm_srli_si128(*v11, 8).m128i_i32[1],
    v2,
    v11[1].m128i_i32[1],
    v1,
    _mm_srli_si128(*(v11 + 16), 8).m128i_i32[1]);
  PopAcquirePolicyLock();
  if ( byte_1404192FF )
  {
    byte_1404192FF = 0;
    PopResetCurrentPolicies();
  }
  return PopReleasePolicyLock();
}
