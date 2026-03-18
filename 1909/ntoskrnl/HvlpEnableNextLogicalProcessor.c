/*
 * XREFs of HvlpEnableNextLogicalProcessor @ 0x140285B04
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140185A30 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1400F6BD0 (MmMapIoSpaceEx.c)
 *     HvlpGetVpIndexFromApicId @ 0x140285D74 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x140285FE4 (HvlpMapStatisticsPage.c)
 *     HvlpStartLogicalProcessor @ 0x140286C0C (HvlpStartLogicalProcessor.c)
 */

__int64 __fastcall HvlpEnableNextLogicalProcessor(__int64 a1, unsigned __int16 a2)
{
  int v2; // edi
  int v4; // esi
  int *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v2 = HvlpLogicalProcessorCount;
  v11 = 0LL;
  v8 = 0LL;
  v4 = a1;
  v9 = 0LL;
  v5 = &HvlpLogicalProcessorRegions[30 * (unsigned int)HvlpLogicalProcessorCount];
  if ( (HvlpRootFlags & 0x20) != 0 )
  {
    v10 = HvlpLogicalProcessorCount;
    result = HvlpStartLogicalProcessor((unsigned int)HvlpLogicalProcessorCount, (unsigned int)a1, a2, v5 + 14, v8, v9);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    result = HvlpGetVpIndexFromApicId(a1, &v10);
    if ( (int)result < 0 )
      return result;
    v2 = v10;
  }
  if ( (HvlpRootFlags & 0x10) != 0 )
  {
    LODWORD(v8) = v2;
    result = HvlpMapStatisticsPage(2LL, &v8, &v11);
    if ( (int)result < 0 )
      return result;
    v7 = MmMapIoSpaceEx(v11, 4096LL, 2u);
    if ( !v7 )
      return 3221225626LL;
    *((_QWORD *)v5 + 4) = v7;
  }
  v5[6] = -1;
  v5[1] = v2;
  result = 0LL;
  v5[2] = v4;
  *((_WORD *)v5 + 6) = a2;
  *v5 = 1;
  return result;
}
