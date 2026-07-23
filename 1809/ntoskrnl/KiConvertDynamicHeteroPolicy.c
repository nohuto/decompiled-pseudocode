/*
 * XREFs of KiConvertDynamicHeteroPolicy @ 0x1402985A0
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x140057A20 (KiSelectReadyThread.c)
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1400D0D34 (KiCheckPreferredHeteroProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x14029887C (KiHeteroChooseTargetProcessor.c)
 *     KiSetHeteroPolicyThread @ 0x14029924C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiIsThreadRankBiased @ 0x14029B8A0 (KiIsThreadRankBiased.c)
 */

__int64 __fastcall KiConvertDynamicHeteroPolicy(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned __int64 v4; // r10
  __int64 v5; // r9
  unsigned int v6; // ebx
  __int64 v8; // rdx
  unsigned int v9; // ecx
  int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // ecx
  __int64 v13; // rcx
  int v14; // ecx
  signed __int32 v15; // ett

  v3 = *(_DWORD *)(a1 + 120);
  v4 = 0x140000000uLL;
  v5 = a1;
  v6 = 1;
  if ( (v3 & 0x400000) != 0 )
    return (unsigned int)dword_140541324[2 * (v3 & 3)];
  v8 = *(_QWORD *)(a1 + 1912);
  if ( !v8 )
  {
    if ( *(_BYTE *)(a1 + 124) == 1 )
    {
      v10 = 3;
      goto LABEL_35;
    }
    if ( (*(_DWORD *)(a1 + 1508) & 3) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 1508) & 3) != 1 )
      {
        if ( (*(_DWORD *)(a1 + 1508) & 3) == 2 )
        {
          v10 = 1;
          goto LABEL_35;
        }
LABEL_29:
        v10 = 0;
        goto LABEL_35;
      }
    }
    else
    {
      v11 = (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 440LL) >> 7) & 7;
      v10 = KiProcessPolicyToQosMappingTable[v11];
      if ( (KiDynamicHeteroCpuPolicyMask & 4) == 0 || (_DWORD)v11 == 3 )
        goto LABEL_39;
      v12 = *(_DWORD *)(v5 + 80);
      if ( v12 <= *(_DWORD *)(v5 + 84) )
        v12 = *(_DWORD *)(v5 + 84);
      if ( v12 >= KiDynamicHeteroCpuPolicyExpectedCycles
        || (v6 = 0, !*(_DWORD *)((char *)&Mm64BitPhysicalAddress + 2))
        || (KiDynamicHeteroCpuPolicyMask & 8) == 0 )
      {
LABEL_39:
        if ( v10 != 4 )
          goto LABEL_35;
        if ( !(unsigned __int8)KiIsThreadRankBiased(v5, a3) )
        {
          if ( *(char *)(v5 + 195) < 15 )
          {
            v13 = *(_QWORD *)(v5 + 544);
            v10 = 2;
            if ( *(_BYTE *)(v13 + 1119) == 1 )
              goto LABEL_35;
            if ( (KiDynamicHeteroCpuPolicyMask & 1) == 0 || *(_BYTE *)(v13 + 1466) != 2 )
            {
              if ( (KiDynamicHeteroCpuPolicyMask & 2) == 0 )
                goto LABEL_35;
              v14 = *(char *)(v5 + 195);
              if ( v14 < KiDynamicHeteroCpuPolicyImportantPriority )
              {
                if ( (*(_DWORD *)(v5 + 116) & 0x400) != 0 && (char)v14 >= 8 )
                  v10 = 0;
                goto LABEL_35;
              }
            }
          }
          goto LABEL_29;
        }
      }
    }
    v10 = 2;
    goto LABEL_35;
  }
  v9 = *(_DWORD *)(a1 + 120) & 3;
  v10 = *(_DWORD *)(v8 + 120) & 3;
  if ( v10 == v9 || v10 != 3 && v9 != 3 && v10 >= v9 )
    return (unsigned int)dword_140541324[2 * (v3 & 3)];
  do
LABEL_35:
    v15 = *(_DWORD *)(v5 + 120);
  while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 120), v10 | v15 & 0xFFFFFFFC, v15) );
  return *(unsigned int *)(v4 + 4 * (v6 + 2LL * v10) + 5509920);
}
