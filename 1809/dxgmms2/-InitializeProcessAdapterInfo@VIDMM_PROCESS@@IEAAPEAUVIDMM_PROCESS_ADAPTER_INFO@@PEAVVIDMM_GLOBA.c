/*
 * XREFs of ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C007A130
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C006E300 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001A80 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001E20 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C000FE2C (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0010378 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     RtlStringCbPrintfW @ 0x1C0012904 (RtlStringCbPrintfW.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C006A814 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C006BF94 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C0077360 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C007A5AC (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C007BB00 (--0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 */

struct VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS::InitializeProcessAdapterInfo(
        struct VIDMM_PARTITION **this,
        struct VIDMM_GLOBAL *a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbp
  VIDMM_PROCESS_ADAPTER_INFO *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r12
  VIDMM_PROCESS_ADAPTER_INFO *v10; // rbx
  SIZE_T v11; // rax
  unsigned __int64 v12; // r14
  char *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  unsigned __int8 v17; // r9
  char *v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // rdx
  char *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rbp
  _QWORD *v25; // rcx
  unsigned int v26; // ebp
  PVOID PoolWithTag; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  wchar_t *v30; // r14
  unsigned int v31; // esi
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v32; // ebp
  __int64 v33; // r15
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  NTSTATUS v38; // ebp
  int v39; // ecx
  unsigned int v40; // ecx
  int v41; // eax
  int v42; // ecx
  _QWORD *v44; // rax
  __int64 v45; // r8
  _QWORD *v46; // rdx
  __int64 v47; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  CVirtualAddressAllocator *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  PPCW_DATA Data; // [rsp+20h] [rbp-68h]
  __int64 v55; // [rsp+28h] [rbp-60h]
  __int64 v56; // [rsp+30h] [rbp-58h]
  struct _PCW_DATA v57; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  NTSTATUS v59; // [rsp+98h] [rbp+10h]

  v3 = *((unsigned int *)a2 + 926);
  v6 = (VIDMM_PROCESS_ADAPTER_INFO *)operator new(0x208uLL, 0x33316956u, a3, PagedPool);
  v9 = 0LL;
  if ( v6 )
    v10 = VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(v6);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    _InterlockedAdd(&dword_1C004D61C, 1u);
    v49 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v49 + 24) = 624LL;
    WdLogEvent5_WdLowResource(v49);
    return 0LL;
  }
  *((_DWORD *)v10 + 3) = v3;
  v11 = 184 * v3;
  v12 = v3;
  if ( !is_mul_ok(v3, 0xB8uLL) )
    v11 = -1LL;
  v13 = (char *)operator new(v11, 0x34316956u, v8, PagedPool);
  v18 = v13;
  if ( v13 )
    `vector constructor iterator'(
      v13,
      184LL,
      v3,
      (void (__fastcall *)(char *))_VIDMM_PROCESS_COMMITMENT_INFO::_VIDMM_PROCESS_COMMITMENT_INFO);
  else
    v18 = 0LL;
  *((_QWORD *)v10 + 2) = v18;
  if ( !v18 )
  {
    _InterlockedAdd(&dword_1C004D620, 1u);
    v50 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v50 + 24) = 637LL;
    WdLogEvent5_WdLowResource(v50);
LABEL_43:
    v51 = (CVirtualAddressAllocator *)*((_QWORD *)v10 + 62);
    if ( v51 )
      CVirtualAddressAllocator::DestroyVaAllocator(v51, v14, v16, v17);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v10);
    return 0LL;
  }
  if ( (*((_BYTE *)a2 + 40872) & 2) != 0 && ((_DWORD)this[11] & 2) == 0 )
  {
    v19 = operator new[](0x90uLL, 0x4B677844u, PagedPool);
    if ( v19 )
    {
      v19[2] = 0LL;
      v21 = (char *)(v19 + 15);
      v19[8] = 0LL;
      v19[7] = 0LL;
      *((_DWORD *)v19 + 18) = 64;
      v19[11] = 0LL;
      v19[12] = 0LL;
      v19[13] = 0LL;
      v19[14] = 0LL;
      v19[16] = v19 + 15;
      v19[15] = v19 + 15;
      *((_DWORD *)v19 + 34) = 0;
    }
    else
    {
      v19 = 0LL;
    }
    *((_QWORD *)v10 + 62) = v19;
    if ( !v19 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v21, v20);
      *(_QWORD *)(v52 + 24) = 646LL;
LABEL_50:
      WdLogEvent5_WdAssertion(v52);
      goto LABEL_43;
    }
    if ( (int)CVirtualAddressAllocator::InitializeVaAllocator(
                (CVirtualAddressAllocator *)v19,
                1LL << *((_DWORD *)a2 + 10216),
                *((_DWORD *)a2 + 10229),
                a2,
                (struct VIDMM_PROCESS *)this) < 0 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v22, v14);
      *(_QWORD *)(v52 + 24) = 658LL;
      goto LABEL_50;
    }
  }
  if ( (_DWORD)v3 )
  {
    v23 = 0LL;
    v24 = 0LL;
    do
    {
      *(_QWORD *)(v23 + *((_QWORD *)v10 + 2)) = this;
      *(_DWORD *)(v23 + *((_QWORD *)v10 + 2) + 8) = 0;
      *(_QWORD *)(v23 + *((_QWORD *)v10 + 2) + 16) = 0LL;
      *(_DWORD *)(v23 + *((_QWORD *)v10 + 2) + 168) = *(_DWORD *)(v23 + *((_QWORD *)v10 + 2) + 168) & 0xFFFFFFF8 | 1;
      *(_QWORD *)(v23 + *((_QWORD *)v10 + 2) + 24) = 0LL;
      *(_QWORD *)(v23 + *((_QWORD *)v10 + 2) + 32) = 0LL;
      v25 = (_QWORD *)(v23 + *((_QWORD *)v10 + 2) + 40LL);
      v25[1] = v25;
      *v25 = v25;
      memset((void *)(v24 + *((_QWORD *)v10 + 2) + 56LL), 0, 0x70uLL);
      v24 += 184LL;
      v23 += 184LL;
      --v12;
    }
    while ( v12 );
  }
  v26 = *((_DWORD *)a2 + 1748);
  if ( v26 > 1 )
  {
    v14 = 0xFFFFFFFFFFFFFFFFuLL % v26;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v26 < 0x128 )
      goto LABEL_43;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 296LL * v26, 0x4B677844u);
  }
  else
  {
    PoolWithTag = (char *)v10 + 56;
  }
  *((_QWORD *)v10 + 6) = PoolWithTag;
  *((_DWORD *)v10 + 88) = v26;
  if ( !PoolWithTag )
    goto LABEL_43;
  memset(PoolWithTag, 0, 296LL * v26);
  if ( !*((_QWORD *)v10 + 6) )
    goto LABEL_43;
  v30 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
  if ( !v30 )
  {
    v52 = WdLogNewEntry5_WdAssertion(v29, v28);
    goto LABEL_50;
  }
  v31 = 0;
  if ( *((_DWORD *)a2 + 1748) )
  {
    while ( 1 )
    {
      v32 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
      v33 = *((_QWORD *)v10 + 6) + 296LL * v31;
      *(_QWORD *)(v33 + 16) = v10;
      do
      {
        SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(a2, v31, v32++, this[33]);
        v9 += 8LL;
        *(_QWORD *)(v9 + v33 + 16) = *((_QWORD *)SegmentGroupState + 3);
      }
      while ( v32 < 2 );
      v35 = *((_QWORD *)a2 + 3);
      LODWORD(v56) = v31;
      LODWORD(v55) = *(_DWORD *)(v35 + 276);
      LODWORD(Data) = *(_DWORD *)(v35 + 280);
      v9 = 0LL;
      v38 = RtlStringCbPrintfW(v30, 0x208uLL, L"pid_%u_luid_0x%08X_0x%08X_phys_%u", this[1], Data, v55, v56);
      if ( v38 < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, v30);
      v57.Data = (const void *)v33;
      v57.Size = 296;
      v38 = PcwCreateInstance(
              (PPCW_INSTANCE *)(v33 + 248),
              GpuPerformanceCounterSetProcessMemory,
              &DestinationString,
              1u,
              &v57);
      if ( v38 < 0 )
        break;
      if ( ++v31 >= *((_DWORD *)a2 + 1748) )
        goto LABEL_29;
    }
    v53 = WdLogNewEntry5_WdAssertion(v37, v36);
    WdLogEvent5_WdAssertion(v53);
  }
  else
  {
    v38 = v59;
  }
LABEL_29:
  operator delete(v30);
  if ( v38 < 0 )
    goto LABEL_43;
  v39 = *((_DWORD *)v10 + 116);
  if ( dword_1C004D218 )
  {
    v40 = v39 & 0xFFFFFFFE;
    v41 = v40 | 2;
    v42 = v40 | 6;
  }
  else
  {
    v41 = v39 | 3;
    v42 = v39 | 7;
  }
  *((_DWORD *)v10 + 116) = v41;
  *((_DWORD *)v10 + 116) = v42;
  if ( (VIDMM_GLOBAL::_Config & 4) != 0 )
  {
    if ( DXGPROCESS::GetCurrent() ? *((_BYTE *)DXGPROCESS::GetCurrent() + 322) : 0 )
      *((_DWORD *)v10 + 119) = 1;
  }
  *(_QWORD *)v10 = a2;
  *((_DWORD *)v10 + 2) = 1;
  *((_QWORD *)v10 + 5) = this;
  DXGPUSHLOCK::AcquireExclusive((struct VIDMM_GLOBAL *)((char *)a2 + 40968));
  v44 = (_QWORD *)((char *)a2 + 41008);
  v45 = *((_QWORD *)a2 + 5126);
  v46 = (_QWORD *)((char *)v10 + 24);
  if ( *(struct VIDMM_GLOBAL **)(v45 + 8) != (struct VIDMM_GLOBAL *)((char *)a2 + 41008) )
    __fastfail(3u);
  *((_QWORD *)v10 + 4) = v44;
  *v46 = v45;
  *(_QWORD *)(v45 + 8) = v46;
  *v44 = v46;
  v47 = *((_QWORD *)a2 + 5181);
  *((_QWORD *)a2 + 5181) = v47 + 1;
  *((_QWORD *)v10 + 64) = v47;
  *((_QWORD *)a2 + 5122) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 40968, 0LL);
  KeLeaveCriticalRegion();
  VIDMM_GLOBAL::RequestNewBudget(a2, 1);
  return v10;
}
