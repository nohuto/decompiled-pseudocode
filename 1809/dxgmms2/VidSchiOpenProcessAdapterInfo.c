/*
 * XREFs of VidSchiOpenProcessAdapterInfo @ 0x1C007B67C
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C007B00C (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0012904 (RtlStringCbPrintfW.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_NODE_STATISTICS@@$07$0DCGBGJFG@@@QEAAPEAPEAU_VIDSCH_NODE_STATISTICS@@I@Z @ 0x1C00129A8 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_NODE_STATISTICS@@$07$0DCGBGJFG@@@QEAAPEA.c)
 *     ??0VIDSCH_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C0012A34 (--0VIDSCH_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ??_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0012A68 (--_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 */

__int64 __fastcall VidSchiOpenProcessAdapterInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v6; // rsi
  _DWORD *v7; // rcx
  VIDSCH_PROCESS_ADAPTER_INFO *PoolWithTag; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  void **v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  PVOID *v17; // r15
  unsigned int v18; // r8d
  void **v19; // rax
  void **v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  int *v23; // rdx
  __int64 v24; // rax
  wchar_t *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  NTSTATUS v28; // r15d
  __int64 v29; // rax
  __int64 v30; // rcx
  const void **v31; // r9
  unsigned int v32; // edx
  const void **v33; // r8
  const void **v34; // rax
  PPCW_INSTANCE *v35; // rcx
  __int64 k; // r15
  PVOID v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 i; // rbx
  void *v44; // rcx
  __int64 j; // rbx
  __int64 v46; // rcx
  unsigned int v47; // edx
  _QWORD *v48; // rax
  _QWORD *v49; // rcx
  PVOID *v50; // rcx
  __int64 v51; // rcx
  unsigned int v52; // eax
  _QWORD *v53; // rdx
  _QWORD *v54; // rcx
  VIDSCH_PROCESS_ADAPTER_INFO *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  PPCW_DATA Data; // [rsp+20h] [rbp-78h]
  __int64 v59; // [rsp+28h] [rbp-70h]
  __int64 v60; // [rsp+30h] [rbp-68h]
  __int64 v61; // [rsp+38h] [rbp-60h]
  struct _PCW_DATA v62; // [rsp+50h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-38h] BYREF
  wchar_t *pszDest; // [rsp+A0h] [rbp+8h]

  v2 = *(unsigned int *)(a2 + 4);
  v3 = a1 + 2656;
  ExAcquirePushLockExclusiveEx(a1 + 2656, 0LL);
  v6 = (unsigned int)v2;
  v7 = *(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2);
  if ( v7 )
  {
    ++*v7;
    goto LABEL_29;
  }
  PoolWithTag = (VIDSCH_PROCESS_ADAPTER_INFO *)ExAllocatePoolWithTag((POOL_TYPE)512, 0xE8uLL, 0x32616956u);
  if ( PoolWithTag )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) = VIDSCH_PROCESS_ADAPTER_INFO::VIDSCH_PROCESS_ADAPTER_INFO(PoolWithTag);
    **(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2) = 1;
    if ( !NonPagedPoolZeroedArray<_VIDSCH_NODE_STATISTICS *,8,845244758>::AllocateElements(
            (_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8LL),
            *(_DWORD *)(a2 + 72)) )
    {
LABEL_32:
      v42 = WdLogNewEntry5_WdWarning(v12, v11);
      WdLogEvent5_WdWarning(v42);
LABEL_33:
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 40); i = (unsigned int)(i + 1) )
      {
        v44 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6) + 8 * i + 88);
        if ( v44 )
        {
          ExFreePoolWithTag(v44, 0);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6) + 8 * i + 88) = 0LL;
        }
      }
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a2 + 68); j = (unsigned int)(j + 1) )
      {
        v46 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6);
        v47 = *(_DWORD *)(v46 + 80);
        v48 = *(_QWORD **)(v46 + 8);
        v49 = &v48[j];
        if ( (unsigned int)j >= v47 )
          v49 = v48;
        if ( *v49 )
        {
          v50 = (PVOID *)&v48[j];
          if ( (unsigned int)j >= v47 )
            v50 = (PVOID *)v48;
          ExFreePoolWithTag(*v50, 0);
          v51 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6);
          v52 = *(_DWORD *)(v51 + 80);
          v53 = *(_QWORD **)(v51 + 8);
          v54 = &v53[j];
          if ( (unsigned int)j >= v52 )
            v54 = v53;
          *v54 = 0LL;
        }
      }
      v55 = *(VIDSCH_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(a1 + 24) + 8 * v6);
      if ( v55 )
      {
        VIDSCH_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v55);
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 24) + 8 * v6), 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6) = 0LL;
      }
      goto LABEL_49;
    }
    pszDest = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
    if ( !pszDest )
    {
      v56 = WdLogNewEntry5_WdAssertion(v14, v13);
      WdLogEvent5_WdAssertion(v56);
      goto LABEL_33;
    }
    v15 = 0LL;
    if ( *(_DWORD *)(a2 + 68) )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6);
        v17 = *(PVOID **)(v16 + 8);
        if ( (unsigned int)v15 < *(_DWORD *)(v16 + 80) )
          v17 += v15;
        *v17 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xE0uLL, 0x32616956u);
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6);
        v11 = *(void ***)(v12 + 8);
        v18 = *(_DWORD *)(v12 + 80);
        v19 = &v11[v15];
        if ( (unsigned int)v15 >= v18 )
          v19 = *(void ***)(v12 + 8);
        if ( !*v19 )
          goto LABEL_32;
        v20 = &v11[v15];
        if ( (unsigned int)v15 >= v18 )
          v20 = v11;
        memset(*v20, 0, 0xE0uLL);
        v21 = *(_QWORD *)(a2 + 16);
        v22 = *(_QWORD *)(a2 + 616) + 8 * v15;
        if ( (unsigned int)v15 >= *(_DWORD *)(a2 + 688) )
          v22 = *(_QWORD *)(a2 + 616);
        v23 = (int *)(*(_QWORD *)(352LL * *(unsigned __int16 *)(*(_QWORD *)v22 + 6LL) + *(_QWORD *)(v21 + 2416) + 24)
                    + 74LL * *(unsigned __int16 *)(*(_QWORD *)v22 + 8LL));
        v24 = *v23;
        if ( (_DWORD)v24 )
          v25 = off_1C003CDC0[v24];
        else
          v25 = (wchar_t *)(v23 + 1);
        LODWORD(v61) = *(unsigned __int16 *)(*(_QWORD *)v22 + 8LL);
        LODWORD(v60) = *(unsigned __int16 *)(*(_QWORD *)v22 + 6LL);
        LODWORD(v59) = *(_DWORD *)(v21 + 276);
        LODWORD(Data) = *(_DWORD *)(v21 + 280);
        v28 = RtlStringCbPrintfW(
                pszDest,
                0x208uLL,
                L"pid_%Iu_luid_0x%08X_0x%08X_phys_%u_eng_%u_engtype_%s",
                *(_QWORD *)(a1 + 2632),
                Data,
                v59,
                v60,
                v61,
                v25);
        if ( v28 < 0 )
          goto LABEL_52;
        RtlInitUnicodeString(&DestinationString, pszDest);
        v29 = *(_QWORD *)(a1 + 24);
        v62.Size = 224;
        v30 = *(_QWORD *)(v29 + 8 * v6);
        v31 = *(const void ***)(v30 + 8);
        v32 = *(_DWORD *)(v30 + 80);
        v33 = &v31[v15];
        v34 = v33;
        if ( (unsigned int)v15 >= v32 )
          v34 = *(const void ***)(v30 + 8);
        v35 = (PPCW_INSTANCE *)((char *)*v34 + 216);
        if ( (unsigned int)v15 >= v32 )
          v33 = v31;
        v62.Data = *v33;
        v28 = PcwCreateInstance(v35, GpuPerformanceCounterSetEngine, &DestinationString, 1u, &v62);
        if ( v28 < 0 )
        {
LABEL_52:
          v57 = WdLogNewEntry5_WdAssertion(v27, v26);
          WdLogEvent5_WdAssertion(v57);
          goto LABEL_24;
        }
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= *(_DWORD *)(a2 + 68) )
          goto LABEL_24;
      }
    }
    v28 = (int)pszDest;
LABEL_24:
    operator delete(pszDest);
    if ( v28 < 0 )
      goto LABEL_33;
    for ( k = 0LL; (unsigned int)k < *(_DWORD *)(a2 + 40); *(_DWORD *)(v38 + 8) = 0 )
    {
      v37 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xCuLL, 0x32616956u);
      v11 = *(void ***)(*(_QWORD *)(a1 + 24) + 8 * v6);
      v11[k + 11] = v37;
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6);
      v38 = *(_QWORD *)(v12 + 8 * k + 88);
      if ( !v38 )
        goto LABEL_32;
      k = (unsigned int)(k + 1);
      *(_QWORD *)v38 = 0LL;
    }
    v39 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6) + 216LL);
    v39[1] = v39;
    *v39 = v39;
LABEL_29:
    ExReleasePushLockExclusiveEx(v3, 0LL);
    return 0LL;
  }
  v41 = WdLogNewEntry5_WdWarning(v10, v9);
  WdLogEvent5_WdWarning(v41);
LABEL_49:
  ExReleasePushLockExclusiveEx(v3, 0LL);
  return 3221225495LL;
}
