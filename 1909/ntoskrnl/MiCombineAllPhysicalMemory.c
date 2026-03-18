/*
 * XREFs of MiCombineAllPhysicalMemory @ 0x1406F5EB0
 * Callers:
 *     MiCombineIdenticalPages @ 0x1406F8B84 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiGetUltraMapping @ 0x14002AC80 (MiGetUltraMapping.c)
 *     MiFreeZeroPageSizeIndex @ 0x14002DE60 (MiFreeZeroPageSizeIndex.c)
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FC050 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FC2F0 (KeSetSystemGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x140118A60 (KeQueryNodeActiveAffinity.c)
 *     MiReferencePageRuns @ 0x14012CD00 (MiReferencePageRuns.c)
 *     MiPerformCombineScan @ 0x140140600 (MiPerformCombineScan.c)
 *     MiReleaseArbitraryPage @ 0x1401406B0 (MiReleaseArbitraryPage.c)
 *     MiCombineCandidate @ 0x140140780 (MiCombineCandidate.c)
 *     MiMapArbitraryPage @ 0x140140B10 (MiMapArbitraryPage.c)
 *     KeQueryAffinityThread @ 0x14015C720 (KeQueryAffinityThread.c)
 *     MiDereferencePageRuns @ 0x14015D40C (MiDereferencePageRuns.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiProcessCrcList @ 0x1406F56E0 (MiProcessCrcList.c)
 *     MiAllocateCrcList @ 0x1406F8350 (MiAllocateCrcList.c)
 */

__int64 __fastcall MiCombineAllPhysicalMemory(__int64 a1)
{
  __int64 *v1; // r12
  unsigned int v2; // esi
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // r13
  int v5; // edi
  __int64 v6; // rbp
  __int64 v7; // r14
  unsigned int *v8; // r15
  __int64 *v9; // rax
  __int64 *v10; // r14
  unsigned __int64 Mask; // rax
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  unsigned int *v15; // rdx
  unsigned __int64 *v16; // rcx
  unsigned __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rdi
  char v20; // al
  __int64 PteAddress; // rax
  unsigned __int64 UltraMapping; // rax
  _QWORD *v24; // rdx
  BOOL v25; // esi
  __int64 *v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // rcx
  __int64 *v29; // rsi
  int v30; // [rsp+30h] [rbp-E8h]
  unsigned int v31; // [rsp+34h] [rbp-E4h]
  unsigned int v32; // [rsp+38h] [rbp-E0h]
  int v33; // [rsp+3Ch] [rbp-DCh]
  __int64 v34; // [rsp+40h] [rbp-D8h]
  __int64 *v35; // [rsp+48h] [rbp-D0h]
  __int64 v36; // [rsp+50h] [rbp-C8h]
  unsigned int *v37; // [rsp+58h] [rbp-C0h]
  unsigned int *v38; // [rsp+60h] [rbp-B8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD *v41; // [rsp+80h] [rbp-98h]
  unsigned __int64 v42; // [rsp+88h] [rbp-90h] BYREF
  __int64 v43; // [rsp+90h] [rbp-88h]
  __int64 *v44; // [rsp+98h] [rbp-80h]
  unsigned int *v45; // [rsp+A0h] [rbp-78h]
  unsigned int *v46; // [rsp+A8h] [rbp-70h]
  __int64 v47; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-60h]
  __int64 *v49; // [rsp+C0h] [rbp-58h]
  __int64 v50; // [rsp+C8h] [rbp-50h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+D0h] [rbp-48h] BYREF

  v1 = *(__int64 **)a1;
  v2 = *(_DWORD *)(a1 + 60);
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = **(_QWORD **)a1;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v41 = *(_QWORD **)(a1 + 16);
  v43 = *(_QWORD *)(a1 + 24);
  v32 = v2;
  v30 = 0;
  v50 = v7;
  v46 = (unsigned int *)MiReferencePageRuns(v7, 1u);
  v33 = 0;
  v34 = 0LL;
  v36 = *v46;
  v8 = &v46[4 * v36 + 4];
  v45 = v8;
  KeQueryAffinityThread((__int64)CurrentThread, (__int64)&v47);
  if ( KeNumberNodes )
  {
    while ( 1 )
    {
      v42 = (40LL * *(_QWORD *)(1984LL * v3 + *(_QWORD *)(v7 + 16) + 1808) + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v9 = (__int64 *)MiAllocateCrcList(v1, v2, &v42);
      v44 = v9;
      v10 = v9;
      if ( !v9 )
        break;
      v35 = v9;
      v49 = &v9[5 * (v42 / 0x28)];
      KeQueryNodeActiveAffinity(v3, &Affinity, 0LL);
      Mask = Affinity.Mask;
      if ( Affinity.Group == (_WORD)v48 && (Affinity.Mask & v47) != 0 )
      {
        Mask = Affinity.Mask & v47;
        Affinity.Mask &= v47;
      }
      if ( Mask )
      {
        if ( v33 )
        {
          p_PreviousAffinity = 0LL;
        }
        else
        {
          v33 = 1;
          p_PreviousAffinity = &PreviousAffinity;
        }
        KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      }
      v13 = v36;
      v31 = 0;
      v14 = 0;
      if ( (_DWORD)v36 )
      {
        v15 = v8;
        v16 = (unsigned __int64 *)(v46 + 6);
        v37 = v8;
        v38 = v46 + 6;
        do
        {
          if ( *(unsigned __int8 *)v15 == v3 )
          {
            v17 = *v16;
            v18 = *(v16 - 1) - 1;
            v19 = 48 * v18 - 0x58000000000LL;
            if ( *v16 )
            {
              while ( 1 )
              {
                if ( v6 && *(_DWORD *)(v6 + 4) || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
                {
                  v16 = (unsigned __int64 *)v38;
                  v5 = -1073741248;
                  v15 = v37;
                  v14 = v31;
                  v13 = v36;
                  v30 = -1073741248;
                  goto LABEL_22;
                }
                v20 = *(_BYTE *)(v19 + 82);
                v19 += 48LL;
                ++v18;
                if ( (v20 & 7u) <= 1 )
                {
                  do
                  {
                    v27 = MiFreeZeroPageSizeIndex(v19);
                    if ( v27 == -1 )
                      break;
                    v28 = MiLargePageSizes[v27] - (v18 & (MiLargePageSizes[v27] - 1));
                    if ( v28 >= v17 )
                      goto LABEL_20;
                    v18 += v28;
                    v17 -= v28;
                    v19 += 48 * v28;
                  }
                  while ( (*(_BYTE *)(v19 + 34) & 7u) <= 1 );
                }
                if ( (unsigned int)MiCombineCandidate(v1, v2, v19) )
                {
                  PteAddress = v34;
                  if ( !v34 )
                  {
                    UltraMapping = MiGetUltraMapping((unsigned __int64 *)(a1 + 208), 3u, 1LL, 0);
                    PteAddress = MiGetPteAddress(UltraMapping);
                    v34 = PteAddress;
                    if ( !PteAddress )
                    {
                      v5 = -1073741670;
                      v30 = -1073741670;
                      goto LABEL_26;
                    }
                  }
                  v24 = v41;
                  v41[9] = PteAddress;
                  v24[8] = v19;
                  if ( (unsigned int)MiMapArbitraryPage(v1, v24, v2, 0, 0) )
                  {
                    if ( (*(_BYTE *)(v19 + 34) & 7) == 6 )
                      ++*(_QWORD *)(v43 + 16);
                    else
                      ++*(_QWORD *)(v43 + 24);
                    v25 = MiPerformCombineScan(a1, (__int64)v41, 0LL, v35);
                    MiReleaseArbitraryPage((__int64)v41);
                    v34 = 0LL;
                    if ( v25 )
                    {
                      v35[1] = v18;
                      v35[2] = 0LL;
                      v35[4] = 0LL;
                      v26 = v35 + 5;
                      v35 = v26;
                      if ( v26 == v49 )
                      {
                        v29 = v44;
                        MiProcessCrcList(a1, v44, ((char *)v26 - (char *)v44) / 40, v3);
                        v35 = v29;
                      }
                    }
                    v2 = v32;
                  }
                }
                if ( !--v17 )
                {
LABEL_20:
                  v13 = v36;
                  v14 = v31;
                  v15 = v37;
                  v16 = (unsigned __int64 *)v38;
                  break;
                }
              }
            }
            v5 = v30;
LABEL_22:
            if ( v34 )
              v34 = 0LL;
            if ( v5 < 0 )
              break;
          }
          ++v14;
          v15 = (unsigned int *)((char *)v15 + 2);
          v16 += 2;
          v31 = v14;
          v37 = v15;
          v38 = (unsigned int *)v16;
        }
        while ( v14 < v13 );
LABEL_26:
        v10 = v44;
        if ( v35 != v44 )
          MiProcessCrcList(a1, v44, ((char *)v35 - (char *)v44) / 40, v3);
        v8 = v45;
      }
      ExFreePoolWithTag(v10, 0);
      if ( v5 >= 0 )
      {
        ++v3;
        v7 = v50;
        if ( v3 != (unsigned __int16)KeNumberNodes )
          continue;
      }
      goto LABEL_31;
    }
    v5 = -1073741670;
LABEL_31:
    if ( v33 == 1 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  MiDereferencePageRuns((__int64)v46);
  return (unsigned int)v5;
}
