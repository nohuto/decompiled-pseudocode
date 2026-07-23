/*
 * XREFs of ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14030453C
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014748C (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401489BC (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1403049A0 (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x140305C6C (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 *     ?StStagingRegionIssueIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x140306584 (-StStagingRegionIssueIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 * Callees:
 *     SmEtwEnabled @ 0x1400E3EA8 (SmEtwEnabled.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14011E134 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDeviceIoIsFailed@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DEVICE_IO@1@PEAJ@Z @ 0x140303FB8 (-StDeviceIoIsFailed@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DEVICE_IO@1@PEAJ@Z.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140304194 (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x140304400 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 *     ?StDmDeviceIoTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST_DEVICE_IO@1@@Z @ 0x1403048A4 (-StDmDeviceIoTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST.c)
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x140305370 (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StRegionReadDereference@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403064E0 (-StRegionReadDereference@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmEtwLogRegionOp @ 0x140307058 (SmEtwLogRegionOp.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 k; // r14
  __int64 v8; // r13
  __int64 m; // rbp
  LARGE_INTEGER v10; // rax
  __int64 v11; // rcx
  int v12; // r10d
  int v13; // ebp
  _DWORD *v14; // rax
  __int16 v15; // r8
  int v16; // r12d
  ULONGLONG *v17; // rax
  char v18; // r8
  int v19; // r10d
  unsigned int v20; // r13d
  unsigned int IsCurrentRegion; // eax
  unsigned int v22; // eax
  __int64 v23; // r14
  unsigned int v24; // eax
  __int64 i; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  _DWORD *v29; // rax
  LARGE_INTEGER v30; // rax
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 j; // rcx
  __int64 v37; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v38; // [rsp+88h] [rbp+10h]
  __int64 v39; // [rsp+90h] [rbp+18h]

  v3 = a2 + 8;
  v5 = (unsigned int)(*(_DWORD *)(a2 + 24) >> *(_DWORD *)(a1 + 812));
  v6 = *(_QWORD *)(a1 + 1032);
  v39 = v6;
  v38 = v5;
  if ( *(_QWORD *)(a2 + 16) )
  {
    v22 = *(_DWORD *)(a2 + 28);
    if ( (v22 & 8) != 0 )
    {
      v23 = *(_QWORD *)(a1 + 1000);
      v24 = v22 >> 5;
      for ( i = *(_QWORD *)(v23 + 16); *(_DWORD *)i < v24; i += 32LL )
        ;
      if ( v3 == *(_QWORD *)(i + 24) )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v27 = 7LL * *(_QWORD *)(i + 8);
        *(_QWORD *)(i + 24) |= 1uLL;
        *(_QWORD *)(i + 8) = (unsigned __int64)(PerformanceCounter.QuadPart + v27 - *(_QWORD *)(i + 16)) >> 3;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v23 + 8));
    }
    if ( (unsigned int)ST_STORE<SM_TRAITS>::StDeviceIoIsFailed(v3, &v37) )
    {
      v13 = v37;
      ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 1, v37);
    }
    else
    {
      v13 = ST_STORE<SM_TRAITS>::StDmDeviceIoTransfer(a1, v28, v3);
      v29 = *(_DWORD **)(a1 + 1816);
      if ( v29 )
      {
        if ( v13 >= 0 )
          ++*v29;
        if ( (*(_DWORD *)(v3 + 20) & 4) == 0 )
        {
          v30 = KeQueryPerformanceCounter(0LL);
          v31 = *(_QWORD *)(v3 + 8);
          LODWORD(v37) = *(_DWORD *)(v31 + 4);
          v32 = *(_DWORD *)(v31 + 8);
          v33 = *(_QWORD *)(a1 + 1816);
          HIDWORD(v37) = v32;
          v34 = v30.QuadPart - v37;
          j = *(_QWORD *)(v33 + 1328);
          if ( *(_QWORD *)j < v34 || j != *(_QWORD *)(v33 + 1344) && *(_QWORD *)(j - 16) >= v34 )
          {
            for ( j = *(_QWORD *)(v33 + 1344); *(_QWORD *)j < v34; j += 16LL )
              ;
            *(_QWORD *)(v33 + 1328) = j;
          }
          ++*(_DWORD *)(j + 8);
        }
      }
    }
    ST_STORE<SM_TRAITS>::StDeviceWorkItemCleanup((_DWORD *)a1, a2);
  }
  else
  {
    for ( k = a1 + 1104; *(_DWORD *)k != (_DWORD)v5; k += 24LL )
      ;
    v8 = *(_QWORD *)(a1 + 1000);
    for ( m = *(_QWORD *)(v8 + 24); *(_DWORD *)m < *(_DWORD *)(a1 + 784); m += 32LL )
      ;
    if ( v3 == *(_QWORD *)(m + 24) )
    {
      v10 = KeQueryPerformanceCounter(0LL);
      v11 = 7LL * *(_QWORD *)(m + 8);
      *(_QWORD *)(m + 24) |= 1uLL;
      *(_QWORD *)(m + 8) = (unsigned __int64)(v10.QuadPart + v11 - *(_QWORD *)(m + 16)) >> 3;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 8));
    if ( (unsigned int)ST_STORE<SM_TRAITS>::StDeviceIoIsFailed(v3, &v37) )
    {
      v13 = v37;
      ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 1, v37);
      v12 = 0;
    }
    else
    {
      v14 = *(_DWORD **)(a1 + 1816);
      v13 = v12;
      if ( v14 )
        ++*v14;
    }
    v15 = *(_WORD *)(v6 + 2 * v5);
    if ( v15 >= 0 )
    {
      if ( (*(_DWORD *)(v3 + 20) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 1892);
        v16 = 1;
      }
      else
      {
        v16 = v12;
      }
      v20 = v38;
      ST_STORE<SM_TRAITS>::StRegionReadDereference(a1, v38);
    }
    else
    {
      *(_WORD *)(v6 + 2 * v5) = v15 & 0x7FFF;
      v16 = 1;
      v17 = SmEtwEnabled(0);
      v20 = v38;
      if ( v17 )
      {
        SmEtwLogRegionOp((_DWORD)v17, 4, a1, v38, v13, v18, *(_BYTE *)(*(_QWORD *)(a1 + 1048) + v5));
        v19 = 0;
      }
      if ( (*(_DWORD *)(v3 + 20) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 1888);
        if ( (*(_WORD *)(v39 + 2 * v5) & 0x1FFF) != 0 )
          v16 = v19;
      }
    }
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
    if ( v16 )
    {
      if ( *(_DWORD *)k != -1 )
      {
        ExFreePoolWithTag(*(PVOID *)(k + 8), 0);
        ExFreePoolWithTag(*(PVOID *)(k + 16), 0);
      }
      *(_QWORD *)k = 0LL;
      *(_QWORD *)(k + 8) = 0LL;
      *(_QWORD *)(k + 16) = 0LL;
      *(_DWORD *)k = -1;
      IsCurrentRegion = ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, v20);
      if ( IsCurrentRegion != 8 )
        ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, IsCurrentRegion, 0xFFFFFFFF);
    }
  }
  return (unsigned int)v13;
}
