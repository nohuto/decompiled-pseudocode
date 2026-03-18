/*
 * XREFs of MiCreatePfnDatabase @ 0x1409F21E8
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     MiInitializePartition @ 0x1407506C0 (MiInitializePartition.c)
 *     MiInitializeNumaGraph @ 0x1409F23FC (MiInitializeNumaGraph.c)
 *     MiInitializePartitions @ 0x1409F24C0 (MiInitializePartitions.c)
 *     MiCreateSparsePfnDatabase @ 0x1409F3160 (MiCreateSparsePfnDatabase.c)
 *     MiInitializeColors @ 0x1409F3B30 (MiInitializeColors.c)
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
  v2 = (unsigned __int64 *)&unk_1404691E8;
  v3 = (unsigned __int16)KeNumberNodes;
  v4 = (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int8)MiChannelMaximumPowerOf2 * dword_1404657B4;
  qword_140468A00 = 0x30000000000LL;
  v5 = (unsigned int)v4;
  dword_1404657B4 *= (unsigned __int16)KeNumberNodes * (unsigned __int8)MiChannelMaximumPowerOf2;
  v4 *= 5LL;
  qword_140468A08 = 8 * v4 + 0x30000000000LL;
  v6 = (unsigned __int64 *)&unk_1404691E8;
  v7 = (qword_140468A08 + 8 * v4 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v8 = 16 * v5;
  do
  {
    *v6 = v7;
    v7 += v8;
    ++v6;
  }
  while ( (__int64)v6 < (__int64)qword_1404691F8 );
  v9 = dword_140465840;
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
  qword_140469568 = v11;
  dword_140465E00 = v15;
  qword_140465758 = (PSLIST_HEADER)((v11 + 24 * v15 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  qword_140465750 = (__int64)&qword_140465758[11 * (unsigned __int16)KeNumberNodes];
  qword_140466328 = (qword_140465750 + 4LL * v3 * v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v16 = 144LL * (unsigned __int16)KeNumberNodes + qword_140466328;
  MxPfnAllocation = (v16 + 72 * (unsigned __int64)(unsigned __int16)KeNumberNodes + 4095) >> 12;
  MmPfnDatabase = 0xFFFFFA8000000000uLL;
  v17 = &qword_140468A00;
  do
    *v17++ -= 0x58000000000LL;
  while ( (__int64)v17 < (__int64)qword_140468A10 );
  do
    *v2++ -= 0x58000000000LL;
  while ( (__int64)v2 < (__int64)qword_1404691F8 );
  qword_140469568 -= 0x58000000000LL;
  qword_140465758 -= 0x5800000000uLL;
  qword_140465750 -= 0x58000000000LL;
  qword_140466328 -= 0x58000000000LL;
  qword_140466330 = v16 - 0x58000000000LL;
  qword_1404681D0 = v10 - 0x58000000000LL;
  if ( !(unsigned int)MiCreateSparsePfnDatabase(a1) )
    return 0LL;
  MiInitializePartitions(0LL);
  MiInitializePartition((__int64)&MiSystemPartition, 0);
  MiInitializeNumaGraph(a1);
  return 1LL;
}
