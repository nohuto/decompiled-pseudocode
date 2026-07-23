/*
 * XREFs of MiCreatePfnDatabase @ 0x1409BB550
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     MiInitializePartition @ 0x14072BD18 (MiInitializePartition.c)
 *     MiInitializeNumaGraph @ 0x1409BB764 (MiInitializeNumaGraph.c)
 *     MiInitializePartitions @ 0x1409BB82C (MiInitializePartitions.c)
 *     MiCreateSparsePfnDatabase @ 0x1409BC4A4 (MiCreateSparsePfnDatabase.c)
 *     MiInitializeColors @ 0x1409BCE94 (MiInitializeColors.c)
 */

__int64 __fastcall MiCreatePfnDatabase(__int64 a1)
{
  unsigned __int64 *v2; // r9
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r10
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // r10
  int *v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // r11
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 *v17; // rcx

  MiInitializeColors();
  v2 = (unsigned __int64 *)&unk_14043EA28;
  v3 = (unsigned __int16)KeNumberNodes;
  v4 = (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int8)MiChannelMaximumPowerOf2 * dword_14043B14C;
  qword_14043E240 = 0x30000000000LL;
  v5 = (unsigned int)v4;
  dword_14043B14C *= (unsigned __int16)KeNumberNodes * (unsigned __int8)MiChannelMaximumPowerOf2;
  v4 *= 5LL;
  qword_14043E248 = 8 * v4 + 0x30000000000LL;
  v6 = (unsigned __int64 *)&unk_14043EA28;
  v7 = (qword_14043E248 + 8 * v4 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v8 = 16 * v5;
  do
  {
    *v6 = v7;
    v7 += v8;
    ++v6;
  }
  while ( (__int64)v6 < (__int64)qword_14043EA38 );
  v9 = dword_14043B1C0;
  v10 = v7;
  v11 = 1984LL * (unsigned __int16)KeNumberNodes + v7;
  v12 = 0;
  v13 = 3LL;
  do
  {
    v14 = *v9++;
    v12 += 16 * v14;
    --v13;
  }
  while ( v13 );
  v15 = (unsigned int)(v3 * v12);
  qword_14043EDA8 = v11;
  dword_14043B7B8 = v15;
  qword_14043B118 = (PSLIST_HEADER)((v11 + 24 * v15 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  qword_14043B110 = &qword_14043B118[25 * (unsigned __int16)KeNumberNodes];
  qword_14043BC68 = ((unsigned __int64)qword_14043B110 + 2 * v3 * v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v16 = 144LL * (unsigned __int16)KeNumberNodes + qword_14043BC68;
  MxPfnAllocation = (v16 + 72 * (unsigned __int64)(unsigned __int16)KeNumberNodes + 4095) >> 12;
  MmPfnDatabase = 0xFFFFFA8000000000uLL;
  v17 = &qword_14043E240;
  do
    *v17++ -= 0x58000000000LL;
  while ( (__int64)v17 < (__int64)qword_14043E250 );
  do
    *v2++ -= 0x58000000000LL;
  while ( (__int64)v2 < (__int64)qword_14043EA38 );
  qword_14043EDA8 -= 0x58000000000LL;
  qword_14043B118 -= 0x5800000000uLL;
  qword_14043B110 = (char *)qword_14043B110 - 0x58000000000LL;
  qword_14043BC68 -= 0x58000000000LL;
  qword_14043BC70 = v16 - 0x58000000000LL;
  qword_14043DA10 = v10 - 0x58000000000LL;
  if ( !(unsigned int)MiCreateSparsePfnDatabase(a1) )
    return 0LL;
  MiInitializePartitions(0LL);
  MiInitializePartition((__int64)&MiSystemPartition, 0);
  MiInitializeNumaGraph(a1);
  return 1LL;
}
