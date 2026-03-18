/*
 * XREFs of ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C005D520
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0062F84 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C000142C (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001554 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0001BA8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0003394 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0010924 (RtlStringCbPrintfW.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C005C5CC (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C005D438 (--0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C005DAC4 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C005F2FC (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C007F0B8 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
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
  __int64 v11; // rax
  SIZE_T v12; // rax
  unsigned __int64 v13; // r14
  char *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  const GUID *v17; // r8
  char *v18; // rsi
  __int64 v19; // rax
  CVirtualAddressAllocator *v20; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  char *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rbp
  _QWORD *v29; // rcx
  unsigned int v30; // ebp
  PVOID PoolWithTag; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  wchar_t *v34; // r14
  unsigned int v35; // esi
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v36; // ebp
  __int64 v37; // r15
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v39; // rcx
  struct VIDMM_PARTITION *v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  NTSTATUS v43; // ebp
  __int64 v44; // rax
  int v45; // eax
  unsigned int v46; // eax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  __int64 v51; // r8
  PPCW_DATA Data; // [rsp+20h] [rbp-68h]
  __int64 v53; // [rsp+28h] [rbp-60h]
  __int64 v54; // [rsp+30h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  struct _PCW_DATA v56; // [rsp+50h] [rbp-38h] BYREF
  NTSTATUS v57; // [rsp+98h] [rbp+10h]

  v3 = *((unsigned int *)a2 + 926);
  v6 = (VIDMM_PROCESS_ADAPTER_INFO *)operator new(0x208uLL, 0x33316956u, a3, PagedPool);
  v9 = 0LL;
  if ( v6 )
    v10 = VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(v6);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    _InterlockedAdd(&dword_1C004E5FC, 1u);
    v11 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v11 + 24) = 630LL;
    WdLogEvent5_WdLowResource(v11);
    return 0LL;
  }
  *((_DWORD *)v10 + 3) = v3;
  v12 = 184 * v3;
  v13 = v3;
  if ( !is_mul_ok(v3, 0xB8uLL) )
    v12 = -1LL;
  v14 = (char *)operator new(v12, 0x34316956u, v8, PagedPool);
  v18 = v14;
  if ( v14 )
    `vector constructor iterator'(
      v14,
      184LL,
      v3,
      (void (__fastcall *)(char *))_VIDMM_PROCESS_COMMITMENT_INFO::_VIDMM_PROCESS_COMMITMENT_INFO);
  else
    v18 = 0LL;
  *((_QWORD *)v10 + 2) = v18;
  if ( !v18 )
  {
    _InterlockedAdd(&dword_1C004E600, 1u);
    v19 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v19 + 24) = 643LL;
    WdLogEvent5_WdLowResource(v19);
    goto LABEL_13;
  }
  if ( (*((_BYTE *)a2 + 40872) & 2) != 0 && ((_DWORD)this[11] & 2) == 0 )
  {
    v22 = operator new[](0x90uLL, 0x4B677844u, PagedPool);
    if ( v22 )
    {
      v22[2] = 0LL;
      v24 = (char *)(v22 + 15);
      v22[7] = 0LL;
      v22[8] = 0LL;
      *((_DWORD *)v22 + 18) = 64;
      v22[11] = 0LL;
      v22[12] = 0LL;
      v22[13] = 0LL;
      v22[14] = 0LL;
      v22[16] = v22 + 15;
      v22[15] = v22 + 15;
      *((_DWORD *)v22 + 34) = 0;
    }
    else
    {
      v22 = 0LL;
    }
    *((_QWORD *)v10 + 62) = v22;
    if ( !v22 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v24, v23);
      *(_QWORD *)(v25 + 24) = 652LL;
LABEL_24:
      WdLogEvent5_WdAssertion(v25);
      goto LABEL_13;
    }
    if ( (int)CVirtualAddressAllocator::InitializeVaAllocator(
                (CVirtualAddressAllocator *)v22,
                1LL << *((_DWORD *)a2 + 10216),
                *((_DWORD *)a2 + 10229),
                a2,
                (struct VIDMM_PROCESS *)this) < 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v26, v15);
      *(_QWORD *)(v25 + 24) = 664LL;
      goto LABEL_24;
    }
  }
  if ( (_DWORD)v3 )
  {
    v27 = 0LL;
    v28 = 0LL;
    do
    {
      *(_QWORD *)(v27 + *((_QWORD *)v10 + 2)) = this;
      *(_DWORD *)(v27 + *((_QWORD *)v10 + 2) + 8) = 0;
      *(_QWORD *)(v27 + *((_QWORD *)v10 + 2) + 16) = 0LL;
      *(_DWORD *)(v27 + *((_QWORD *)v10 + 2) + 168) = *(_DWORD *)(v27 + *((_QWORD *)v10 + 2) + 168) & 0xFFFFFFF8 | 1;
      *(_QWORD *)(v27 + *((_QWORD *)v10 + 2) + 24) = 0LL;
      *(_QWORD *)(v27 + *((_QWORD *)v10 + 2) + 32) = 0LL;
      v29 = (_QWORD *)(v27 + *((_QWORD *)v10 + 2) + 40LL);
      v29[1] = v29;
      *v29 = v29;
      memset((void *)(v28 + *((_QWORD *)v10 + 2) + 56LL), 0, 0x70uLL);
      v28 += 184LL;
      v27 += 184LL;
      --v13;
    }
    while ( v13 );
  }
  v30 = *((_DWORD *)a2 + 1748);
  if ( v30 <= 1 )
  {
    PoolWithTag = (char *)v10 + 56;
  }
  else
  {
    v15 = 0xFFFFFFFFFFFFFFFFuLL % v30;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v30 < 0x128 )
      goto LABEL_13;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 296LL * v30, 0x4B677844u);
  }
  *((_QWORD *)v10 + 6) = PoolWithTag;
  *((_DWORD *)v10 + 88) = v30;
  if ( !PoolWithTag || (memset(PoolWithTag, 0, 296LL * v30), !*((_QWORD *)v10 + 6)) )
  {
LABEL_13:
    v20 = (CVirtualAddressAllocator *)*((_QWORD *)v10 + 62);
    if ( v20 )
      CVirtualAddressAllocator::DestroyVaAllocator(v20, v15, v17);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v10);
    return 0LL;
  }
  v34 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
  if ( !v34 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v33, v32);
    goto LABEL_24;
  }
  v35 = 0;
  if ( *((_DWORD *)a2 + 1748) )
  {
    while ( 1 )
    {
      v36 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
      v37 = *((_QWORD *)v10 + 6) + 296LL * v35;
      *(_QWORD *)(v37 + 16) = v10;
      do
      {
        SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(a2, v35, v36++, this[33]);
        v9 += 8LL;
        *(_QWORD *)(v37 + v9 + 16) = *((_QWORD *)SegmentGroupState + 3);
      }
      while ( v36 < 2 );
      v39 = *((_QWORD *)a2 + 3);
      v40 = this[1];
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      LODWORD(v54) = v35;
      LODWORD(v53) = *(_DWORD *)(v39 + 276);
      LODWORD(Data) = *(_DWORD *)(v39 + 280);
      v9 = 0LL;
      v43 = RtlStringCbPrintfW(v34, 0x208uLL, L"pid_%u_luid_0x%08X_0x%08X_phys_%u", v40, Data, v53, v54);
      if ( v43 < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, v34);
      v56.Data = (const void *)v37;
      v56.Size = 296;
      v43 = PcwCreateInstance(
              (PPCW_INSTANCE *)(v37 + 248),
              GpuPerformanceCounterSetProcessMemory,
              &DestinationString,
              1u,
              &v56);
      if ( v43 < 0 )
        break;
      if ( ++v35 >= *((_DWORD *)a2 + 1748) )
        goto LABEL_48;
    }
    v44 = WdLogNewEntry5_WdAssertion(v42, v41);
    WdLogEvent5_WdAssertion(v44);
  }
  else
  {
    v43 = v57;
  }
LABEL_48:
  operator delete(v34);
  if ( v43 < 0 )
    goto LABEL_13;
  v45 = *((_DWORD *)v10 + 116);
  if ( dword_1C004E218 )
    v46 = v45 & 0xFFFFFFF8 | 6;
  else
    v46 = v45 | 7;
  *((_DWORD *)v10 + 116) = v46;
  if ( (VIDMM_GLOBAL::_Config & 4) != 0 )
  {
    if ( DXGPROCESS::GetCurrent() ? *((_BYTE *)DXGPROCESS::GetCurrent() + 298) : 0 )
      *((_DWORD *)v10 + 119) = 1;
  }
  *(_QWORD *)v10 = a2;
  *((_DWORD *)v10 + 2) = 1;
  *((_QWORD *)v10 + 5) = this;
  DXGPUSHLOCK::AcquireExclusive((struct VIDMM_GLOBAL *)((char *)a2 + 40968));
  v48 = (_QWORD *)((char *)a2 + 41008);
  v49 = *((_QWORD *)a2 + 5126);
  v50 = (_QWORD *)((char *)v10 + 24);
  if ( *(struct VIDMM_GLOBAL **)(v49 + 8) != (struct VIDMM_GLOBAL *)((char *)a2 + 41008) )
    __fastfail(3u);
  *v50 = v49;
  *((_QWORD *)v10 + 4) = v48;
  *(_QWORD *)(v49 + 8) = v50;
  *v48 = v50;
  v51 = *((_QWORD *)a2 + 5181);
  *((_QWORD *)a2 + 5181) = v51 + 1;
  *((_QWORD *)v10 + 64) = v51;
  *((_QWORD *)a2 + 5122) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 40968, 0LL);
  KeLeaveCriticalRegion();
  VIDMM_GLOBAL::RequestNewBudget(a2, 1);
  return v10;
}
