/*
 * XREFs of qsort @ 0x1401A0AD0
 * Callers:
 *     MiFlushTbAsNeeded @ 0x140021F90 (MiFlushTbAsNeeded.c)
 *     MiWsleFlush @ 0x140024E30 (MiWsleFlush.c)
 *     MiZeroPage @ 0x140029010 (MiZeroPage.c)
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x14004CF70 (MiAgePteWorker.c)
 *     MiClearPteAccessed @ 0x14004D420 (MiClearPteAccessed.c)
 *     MiTerminateWsleCluster @ 0x14004E000 (MiTerminateWsleCluster.c)
 *     MiRevertValidPte @ 0x14004F8F0 (MiRevertValidPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MmUnmapViewInSystemCache @ 0x140070300 (MmUnmapViewInSystemCache.c)
 *     KiIntSteerCalculateDistribution @ 0x1400BEB70 (KiIntSteerCalculateDistribution.c)
 *     RtlpDynamicLookasideRebalance @ 0x1400FF680 (RtlpDynamicLookasideRebalance.c)
 *     MiFillNoReservationCluster @ 0x14014D9A4 (MiFillNoReservationCluster.c)
 *     HvlStartBootLogicalProcessors @ 0x140185480 (HvlStartBootLogicalProcessors.c)
 *     sub_1401ABE10 @ 0x1401ABE10 (sub_1401ABE10.c)
 *     SymCryptParallelHashProcess @ 0x1401BD834 (SymCryptParallelHashProcess.c)
 *     VslInitializeSecureKernelCfg @ 0x14028FB18 (VslInitializeSecureKernelCfg.c)
 *     MiSortMdlFrames @ 0x1402C2D20 (MiSortMdlFrames.c)
 *     PpmCheckComputeHeteroResponse @ 0x140300AB0 (PpmCheckComputeHeteroResponse.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x140323024 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     AsiPopulateHashes @ 0x140343B30 (AsiPopulateHashes.c)
 *     PspBuildCreateProcessContext @ 0x14060B770 (PspBuildCreateProcessContext.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1406AB970 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExUpdateLicenseDataInternal @ 0x1406ABBE0 (ExUpdateLicenseDataInternal.c)
 *     MiProcessCrcList @ 0x1406F3950 (MiProcessCrcList.c)
 *     PnpAllocateResources @ 0x140721A50 (PnpAllocateResources.c)
 *     PipSortDeviceObjectList @ 0x14072EEAC (PipSortDeviceObjectList.c)
 *     MmFreeBootRegistry @ 0x140757D54 (MmFreeBootRegistry.c)
 *     IopRearrangeReqList @ 0x14077D8A4 (IopRearrangeReqList.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x140839D2C (CmpSortedValueEnumStackEntryStart.c)
 *     EtwpGetTraceGroupInfo @ 0x1408F2A34 (EtwpGetTraceGroupInfo.c)
 *     EtwpUpdateDisallowedGuids @ 0x14090033C (EtwpUpdateDisallowedGuids.c)
 *     AdtpBuildObjectTypeStrings @ 0x14092DFCC (AdtpBuildObjectTypeStrings.c)
 *     PpmInitPolicyConfiguration @ 0x1409ED550 (PpmInitPolicyConfiguration.c)
 *     MiAssignTopLevelRanges @ 0x1409F06A0 (MiAssignTopLevelRanges.c)
 *     MiInitializeNumaGraph @ 0x1409F24EC (MiInitializeNumaGraph.c)
 *     MiCreateFreePfns @ 0x1409F2960 (MiCreateFreePfns.c)
 *     KiComputeNumaCosts @ 0x1409FE4E0 (KiComputeNumaCosts.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177050 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_check_icall @ 0x1401CC5A0 (_guard_check_icall.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  char *v6; // r13
  char *v7; // r15
  __int64 v8; // rcx
  size_t v9; // rbx
  char *v10; // rbx
  unsigned __int64 v11; // rdi
  size_t v12; // r8
  char *v13; // rdx
  signed __int64 v14; // rbx
  char v15; // cl
  __int64 v16; // rax
  size_t v17; // rbx
  char *v18; // rdi
  char *v19; // r8
  size_t v20; // r9
  char v21; // cl
  size_t v22; // r8
  char *v23; // rdx
  signed __int64 v24; // r9
  char v25; // cl
  size_t v26; // r8
  char *v27; // rdx
  signed __int64 v28; // r9
  char v29; // cl
  unsigned __int64 v30; // rbx
  char *v31; // rsi
  char *v32; // rbp
  char *v33; // rdx
  unsigned __int64 v34; // r9
  char v35; // cl
  char *v36; // rax
  __int64 v37; // [rsp+30h] [rbp-448h]
  _QWORD v38[124]; // [rsp+40h] [rbp-438h]

  v6 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v8 = 0LL;
      v37 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = (v7 - v6) / SizeOfElements + 1;
          if ( v9 <= 8 )
          {
            if ( v7 > v6 )
            {
              do
              {
                v10 = v6;
                v11 = (unsigned __int64)&v6[SizeOfElements];
                if ( &v6[SizeOfElements] <= v7 )
                {
                  do
                  {
                    if ( ((int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v11, v10) > 0 )
                      v10 = (char *)v11;
                    v11 += SizeOfElements;
                  }
                  while ( v11 <= (unsigned __int64)v7 );
                }
                v12 = SizeOfElements;
                v13 = v7;
                if ( v10 != v7 )
                {
                  v14 = v10 - v7;
                  do
                  {
                    v15 = v13[v14];
                    v13[v14] = *v13;
                    *v13++ = v15;
                    --v12;
                  }
                  while ( v12 );
                }
                v7 -= SizeOfElements;
              }
              while ( v7 > v6 );
              v8 = v37;
            }
            goto LABEL_18;
          }
          v17 = SizeOfElements * (v9 >> 1);
          v18 = &v6[v17];
          if ( ((int (__fastcall *)(char *, char *))PtFuncCompare)(v6, &v6[v17]) > 0 )
          {
            v20 = SizeOfElements;
            v19 = &v6[v17];
            if ( v6 != v18 )
            {
              do
              {
                v21 = v19[-v17];
                v19[-v17] = *v19;
                *v19++ = v21;
                --v20;
              }
              while ( v20 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, char *, size_t))PtFuncCompare)(v6, v7, v19, v20) > 0 )
          {
            v22 = SizeOfElements;
            v23 = v7;
            if ( v6 != v7 )
            {
              v24 = v6 - v7;
              do
              {
                v25 = v23[v24];
                v23[v24] = *v23;
                *v23++ = v25;
                --v22;
              }
              while ( v22 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(&v6[v17], v7, v22) > 0 )
          {
            v26 = SizeOfElements;
            v27 = v7;
            if ( v18 != v7 )
            {
              v28 = v18 - v7;
              do
              {
                v29 = v27[v28];
                v27[v28] = *v27;
                *v27++ = v29;
                --v26;
              }
              while ( v26 );
            }
          }
          v30 = (unsigned __int64)v6;
          v31 = v7;
          while ( 1 )
          {
            if ( (unsigned __int64)v18 > v30 )
            {
              while ( 1 )
              {
                v30 += SizeOfElements;
                if ( v30 >= (unsigned __int64)v18 )
                  break;
                if ( ((int (__fastcall *)(unsigned __int64, char *, size_t))PtFuncCompare)(v30, v18, v26) > 0 )
                {
                  if ( (unsigned __int64)v18 > v30 )
                    goto LABEL_38;
                  goto LABEL_36;
                }
              }
            }
            do
LABEL_36:
              v30 += SizeOfElements;
            while ( v30 <= (unsigned __int64)v7
                 && ((int (__fastcall *)(unsigned __int64, char *, size_t))PtFuncCompare)(v30, v18, v26) <= 0 );
            do
            {
LABEL_38:
              v32 = v31;
              v31 -= SizeOfElements;
            }
            while ( v31 > v18 && ((int (__fastcall *)(char *, char *))PtFuncCompare)(v31, v18) > 0 );
            if ( (unsigned __int64)v31 < v30 )
              break;
            v26 = SizeOfElements;
            v33 = v31;
            if ( v31 != (char *)v30 )
            {
              v34 = v30 - (_QWORD)v31;
              do
              {
                v35 = v33[v34];
                v33[v34] = *v33;
                *v33++ = v35;
                --v26;
              }
              while ( v26 );
            }
            v36 = (char *)v30;
            if ( v18 != v31 )
              v36 = v18;
            v18 = v36;
          }
          if ( v18 < v32 )
          {
            while ( 1 )
            {
              v32 -= SizeOfElements;
              if ( v32 <= v18 )
                break;
              if ( ((unsigned int (__fastcall *)(char *, char *))PtFuncCompare)(v32, v18) )
              {
                if ( v18 < v32 )
                  goto LABEL_53;
                goto LABEL_51;
              }
            }
          }
          do
LABEL_51:
            v32 -= SizeOfElements;
          while ( v32 > v6 && !((unsigned int (__fastcall *)(char *, char *))PtFuncCompare)(v32, v18) );
LABEL_53:
          v8 = v37;
          if ( v32 - v6 >= (__int64)&v7[-v30] )
            break;
          if ( v30 < (unsigned __int64)v7 )
          {
            v38[v37] = v30;
            v38[v37 + 62] = v7;
            v8 = ++v37;
          }
          if ( v6 >= v32 )
          {
LABEL_18:
            v16 = v8--;
            v37 = v8;
            if ( v16 <= 0 )
              return;
            v6 = (char *)v38[v8];
            v7 = (char *)v38[v8 + 62];
          }
          else
          {
            v7 = v32;
          }
        }
        if ( v6 < v32 )
        {
          v38[v37] = v6;
          v38[v37 + 62] = v32;
          v8 = ++v37;
        }
        if ( v30 >= (unsigned __int64)v7 )
          goto LABEL_18;
        v6 = (char *)v30;
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
}
