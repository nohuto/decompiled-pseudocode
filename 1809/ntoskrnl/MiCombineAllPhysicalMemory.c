/*
 * XREFs of MiCombineAllPhysicalMemory @ 0x1406D5450
 * Callers:
 *     MiCombineIdenticalPages @ 0x1406D2818 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiFreeZeroPageSizeIndex @ 0x14009B3EC (MiFreeZeroPageSizeIndex.c)
 *     MiCombineCandidate @ 0x1400B2610 (MiCombineCandidate.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x1400E3CC0 (KeQueryNodeActiveAffinity.c)
 *     MiPerformCombineScan @ 0x140101DE0 (MiPerformCombineScan.c)
 *     MiMapArbitraryPage @ 0x14010EA90 (MiMapArbitraryPage.c)
 *     MiReleaseArbitraryPage @ 0x140111CF0 (MiReleaseArbitraryPage.c)
 *     MiReferencePageRuns @ 0x14012B7A0 (MiReferencePageRuns.c)
 *     KeQueryAffinityThread @ 0x14013B1E0 (KeQueryAffinityThread.c)
 *     MiDereferencePageRuns @ 0x140141BD0 (MiDereferencePageRuns.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiHashIsCommon @ 0x1402CC1A8 (MiHashIsCommon.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiProcessCrcList @ 0x140620320 (MiProcessCrcList.c)
 *     MiAllocateCrcList @ 0x1406D5908 (MiAllocateCrcList.c)
 */

__int64 __fastcall MiCombineAllPhysicalMemory(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 *v2; // r13
  int v3; // ebx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rsi
  unsigned int v6; // r12d
  __int64 v7; // r14
  unsigned int *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rax
  void *v11; // r14
  __int64 *v12; // rdi
  unsigned __int64 Mask; // rax
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  unsigned int *v17; // rcx
  unsigned __int64 *v18; // rdx
  unsigned __int64 v19; // rbp
  __int64 v20; // r14
  __int64 v21; // rbx
  char v22; // al
  __int64 PteAddress; // rax
  unsigned __int64 UltraMapping; // rax
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  bool v30; // zf
  int v31; // eax
  unsigned __int64 v32; // rcx
  int v33; // [rsp+30h] [rbp-E8h]
  unsigned int v34; // [rsp+34h] [rbp-E4h]
  unsigned int v35; // [rsp+38h] [rbp-E0h]
  int v36; // [rsp+3Ch] [rbp-DCh]
  __int64 *v37; // [rsp+40h] [rbp-D8h]
  __int64 v38; // [rsp+48h] [rbp-D0h]
  __int64 v40; // [rsp+58h] [rbp-C0h]
  unsigned int *v41; // [rsp+60h] [rbp-B8h]
  unsigned __int64 *v42; // [rsp+68h] [rbp-B0h]
  _QWORD *v43; // [rsp+70h] [rbp-A8h]
  __int64 *v44; // [rsp+78h] [rbp-A0h]
  unsigned int *v45; // [rsp+80h] [rbp-98h]
  struct _GROUP_AFFINITY Affinity; // [rsp+88h] [rbp-90h] BYREF
  unsigned __int64 v47; // [rsp+98h] [rbp-80h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-78h]
  unsigned int *v49; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v50; // [rsp+B0h] [rbp-68h]
  __int64 v51; // [rsp+B8h] [rbp-60h]
  __int64 v52; // [rsp+C0h] [rbp-58h] BYREF
  __int16 v53; // [rsp+C8h] [rbp-50h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+D0h] [rbp-48h] BYREF

  v1 = 0;
  v2 = *(__int64 **)a1;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 52);
  v7 = **(_QWORD **)a1;
  v43 = *(_QWORD **)(a1 + 16);
  v48 = *(_QWORD *)(a1 + 24);
  v33 = 0;
  v51 = v7;
  v8 = (unsigned int *)MiReferencePageRuns(v7, 1u);
  v45 = v8;
  v36 = 0;
  v38 = 0LL;
  v40 = *v8;
  v49 = &v8[4 * v40 + 4];
  KeQueryAffinityThread((__int64)CurrentThread, (__int64)&v52, v9);
  v34 = 0;
  if ( KeNumberNodes )
  {
    while ( 1 )
    {
      v47 = (32LL * *(_QWORD *)(1984LL * v1 + *(_QWORD *)(v7 + 16) + 1808) + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v10 = MiAllocateCrcList(v2, v6, &v47);
      v44 = (__int64 *)v10;
      v11 = (void *)v10;
      if ( !v10 )
        break;
      v12 = (__int64 *)v10;
      v37 = (__int64 *)v10;
      v50 = v10 + (v47 & 0xFFFFFFFFFFFFFFE0uLL);
      KeQueryNodeActiveAffinity(v1, &Affinity, 0LL);
      Mask = Affinity.Mask;
      if ( Affinity.Group == v53 && (Affinity.Mask & v52) != 0 )
      {
        Mask = Affinity.Mask & v52;
        Affinity.Mask &= v52;
      }
      if ( Mask )
      {
        if ( v36 )
        {
          p_PreviousAffinity = 0LL;
        }
        else
        {
          v36 = 1;
          p_PreviousAffinity = &PreviousAffinity;
        }
        KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      }
      v15 = v40;
      v35 = 0;
      v16 = 0;
      if ( (_DWORD)v40 )
      {
        v17 = v49;
        v18 = (unsigned __int64 *)(v45 + 6);
        v42 = (unsigned __int64 *)(v45 + 6);
        v41 = v49;
        while ( 1 )
        {
          if ( *(unsigned __int8 *)v17 == v1 )
          {
            v19 = *v18;
            v20 = *(v18 - 1) - 1;
            v21 = 48 * v20 - 0x58000000000LL;
            if ( *v18 )
            {
              while ( 1 )
              {
                if ( v5 && *(_DWORD *)(v5 + 4) || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
                {
                  v17 = v41;
                  v3 = -1073741248;
                  v18 = v42;
                  v16 = v35;
                  v15 = v40;
                  v33 = -1073741248;
                  goto LABEL_22;
                }
                v22 = *(_BYTE *)(v21 + 82);
                v21 += 48LL;
                ++v20;
                if ( (v22 & 7u) <= 1 )
                {
                  do
                  {
                    v31 = MiFreeZeroPageSizeIndex(v21);
                    if ( v31 == -1 )
                      break;
                    v32 = MiLargePageSizes[v31] - (v20 & (MiLargePageSizes[v31] - 1));
                    if ( v32 >= v19 )
                      goto LABEL_20;
                    v20 += v32;
                    v19 -= v32;
                    v21 += 48 * v32;
                  }
                  while ( (*(_BYTE *)(v21 + 34) & 7u) <= 1 );
                }
                if ( (unsigned int)MiCombineCandidate(v2, v6, v21) )
                {
                  PteAddress = v38;
                  if ( !v38 )
                  {
                    UltraMapping = MiGetUltraMapping((unsigned __int64 *)(a1 + 200), 3u, 1LL, 0);
                    PteAddress = MiGetPteAddress(UltraMapping);
                    v38 = PteAddress;
                    if ( !PteAddress )
                    {
                      v3 = -1073741670;
                      v33 = -1073741670;
                      goto LABEL_27;
                    }
                  }
                  v43[9] = PteAddress;
                  v43[8] = v21;
                  if ( (unsigned int)MiMapArbitraryPage(v2, v43, v6, 0, 0) )
                  {
                    if ( (*(_BYTE *)(v21 + 34) & 7) == 6 )
                      ++*(_QWORD *)(v48 + 16);
                    else
                      ++*(_QWORD *)(v48 + 24);
                    v26 = MiPerformCombineScan(a1, (__int64)v43);
                    MiReleaseArbitraryPage(v43, v27, v28);
                    v29 = a1;
                    v38 = 0LL;
                    if ( (v6 & 4) == 0 || (unsigned int)MiHashIsCommon(a1, *v37) )
                    {
                      v30 = v26 == 1;
                      v12 = v37;
                      if ( v30 )
                      {
                        v37[1] = v20;
                        v37[2] = 0LL;
                        v37[3] = 0LL;
                        v12 = v37 + 4;
                        v37 = v12;
                        if ( v12 == (__int64 *)v50 )
                        {
                          MiProcessCrcList(v29, v44, ((char *)v12 - (char *)v44) >> 5, v34);
                          v12 = v44;
                          v37 = v44;
                        }
                      }
                    }
                    else
                    {
                      v12 = v37;
                    }
                  }
                }
                if ( !--v19 )
                {
LABEL_20:
                  v15 = v40;
                  v16 = v35;
                  v18 = v42;
                  v17 = v41;
                  break;
                }
              }
            }
            v3 = v33;
LABEL_22:
            if ( v38 )
              v38 = 0LL;
            if ( v3 < 0 )
            {
LABEL_27:
              v11 = v44;
              v1 = v34;
              if ( v12 != v44 )
                MiProcessCrcList(a1, v44, ((char *)v12 - (char *)v44) >> 5, v34);
              break;
            }
            v1 = v34;
          }
          ++v16;
          v17 = (unsigned int *)((char *)v17 + 2);
          v18 += 2;
          v35 = v16;
          v41 = v17;
          v42 = v18;
          if ( v16 >= v15 )
            goto LABEL_27;
        }
      }
      ExFreePoolWithTag(v11, 0);
      if ( v3 >= 0 )
      {
        ++v1;
        v7 = v51;
        v34 = v1;
        if ( v1 != (unsigned __int16)KeNumberNodes )
          continue;
      }
      goto LABEL_31;
    }
    v3 = -1073741670;
LABEL_31:
    if ( v36 == 1 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    v8 = v45;
  }
  MiDereferencePageRuns((__int64)v8);
  return (unsigned int)v3;
}
