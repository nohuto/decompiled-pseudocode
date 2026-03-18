/*
 * XREFs of ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C008E81C
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C008E620 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C00014F4 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0001BA8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0003394 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0010924 (RtlStringCbPrintfW.c)
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0017BF4 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?AddToAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008EE64 (-AddToAdapterList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C008F040 (-CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C008F274 (-InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNA.c)
 *     ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C008F978 (-ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@I@Z @ 0x1C00AC7D4 (-InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBU.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00B7B1C (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00B7CA8 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Init(
        VIDMM_GLOBAL *this,
        struct ADAPTER_RENDER *a2,
        struct _DXGK_QUERYSEGMENTOUT4 *a3,
        unsigned int a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int *v11; // r14
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  bool v14; // cf
  SIZE_T v15; // rax
  char *v16; // rax
  __int64 v17; // rcx
  char *v18; // rbx
  unsigned int v19; // eax
  char v20; // cl
  int v21; // edx
  char v22; // al
  unsigned int v23; // r12d
  unsigned int v24; // eax
  __int64 v25; // r14
  __int64 v26; // rbx
  _DWORD *v27; // r12
  __int64 v28; // r15
  UINT *p_PagingBufferSegmentId; // rsi
  __int64 v30; // r11
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  unsigned int v34; // eax
  unsigned int v35; // r10d
  __int64 v36; // r9
  char v37; // cl
  __int16 v38; // ax
  int v39; // ecx
  bool v40; // cl
  int v41; // ebx
  HANDLE *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  SIZE_T v46; // rax
  PVOID v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  wchar_t *v51; // r15
  unsigned int v52; // esi
  UCHAR **p_pSegmentDescriptor; // r12
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v54; // rbx
  PPCW_INSTANCE *v55; // r14
  int inited; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  bool v63; // zf
  __int64 v64; // rdx
  __int64 v65; // rcx
  VIDMM_PARTITION *v66; // rax
  VIDMM_PARTITION *i; // rsi
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  VIDMM_PARTITION *v72; // rcx
  VIDMM_PARTITION *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  SIZE_T v76; // rax
  PVOID v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rax
  SIZE_T v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  SIZE_T v90; // rax
  PVOID v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r14
  unsigned int v95; // ecx
  __int64 v96; // r12
  __int64 v97; // rcx
  const struct DXGADAPTER_GPUMMUCAPS *v98; // rsi
  unsigned int *v99; // r15
  int v100; // eax
  __int64 v101; // rax
  VIDMM_PARTITION **v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // rcx
  unsigned __int64 v105; // rsi
  _QWORD *v106; // rax
  void (__fastcall ***v107)(_QWORD, __int64); // r8
  PPCW_DATA Data; // [rsp+28h] [rbp-89h]
  struct DXGK_PHYSICALADAPTERINFO *v109; // [rsp+30h] [rbp-81h]
  UNICODE_STRING Name; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int64 v111; // [rsp+58h] [rbp-59h] BYREF
  char v112[8]; // [rsp+60h] [rbp-51h] BYREF
  __int64 v113; // [rsp+68h] [rbp-49h]
  int v114; // [rsp+70h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-39h] BYREF
  struct _PCW_DATA v116; // [rsp+88h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-19h] BYREF
  unsigned int v118; // [rsp+118h] [rbp+67h]

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v111 = 0LL;
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v9 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 3) = v9;
  *((_DWORD *)this + 8) = a4;
  v10 = *(_DWORD *)(v9 + 308) >> 9;
  LOBYTE(v10) = (*(_DWORD *)(v9 + 308) & 0x200) != 0;
  byte_1C004E460 |= v10;
  v11 = (unsigned int *)*((_QWORD *)this + 3);
  if ( a4 >= 0x6000 )
    *((_BYTE *)this + 40873) |= 4u;
  v12 = v11[64];
  *((_DWORD *)this + 1748) = v12;
  if ( (unsigned int)v12 > 0x40 )
  {
    v74 = WdLogNewEntry5_WdAssertion(v10, v7);
    *(_QWORD *)(v74 + 24) = 64LL;
LABEL_71:
    WdLogEvent5_WdAssertion(v74);
    return 3221225485LL;
  }
  v13 = 1560 * v12;
  if ( !is_mul_ok(v12, 0x618uLL) )
    v13 = -1LL;
  v14 = __CFADD__(v13, 8LL);
  v15 = v13 + 8;
  if ( v14 )
    v15 = -1LL;
  v16 = (char *)operator new(v15, 0x30356956u, v8, (POOL_TYPE)512);
  if ( v16 )
  {
    v18 = v16 + 8;
    *(_QWORD *)v16 = v12;
    `vector constructor iterator'(
      v16 + 8,
      1560LL,
      (unsigned int)v12,
      (void (__fastcall *)(char *))VIDMM_PHYSICAL_ADAPTER::VIDMM_PHYSICAL_ADAPTER);
  }
  else
  {
    v18 = 0LL;
  }
  *((_QWORD *)this + 5023) = v18;
  if ( !v18 )
  {
    _InterlockedIncrement(&dword_1C004E5DC);
    v75 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v75 + 24) = 1427LL;
    WdLogEvent5_WdLowResource(v75);
    return 3221225495LL;
  }
  v19 = v11[479];
  if ( (v19 & 0x20) != 0 )
  {
    *((_BYTE *)this + 40872) ^= (*((_BYTE *)this + 40872) ^ (v19 >> 5)) & 2;
    v20 = *((_BYTE *)this + 40872) ^ (*((_BYTE *)this + 40872) ^ (v11[479] >> 5)) & 4;
    *((_BYTE *)this + 40872) = v20;
    if ( (v20 & 4) != 0 )
    {
      if ( (VIDMM_GLOBAL::_Config & 0x20) != 0
        || (v21 = *(_DWORD *)(*((_QWORD *)this + 3) + 308LL), (v21 & 4) != 0)
        || (v21 & 8) != 0 )
      {
        v22 = 0;
      }
      else
      {
        v22 = 8;
      }
      v20 = v22 | v20 & 0xF7;
      *((_BYTE *)this + 40872) = v20;
    }
    if ( a4 >= 0x5017 || (VIDMM_GLOBAL::_Config & 0x100) != 0 )
      *((_BYTE *)this + 40872) = v20 | 0x80;
  }
  v23 = 0;
  v24 = v11[478] >> 5;
  v25 = 0LL;
  v118 = 0;
  *((_BYTE *)this + 4616) = (v24 & 1) == 0;
  if ( (_DWORD)v12 )
  {
    *(_QWORD *)&Name.Length = 0LL;
    v26 = 0LL;
    v27 = (_DWORD *)((char *)this + 372);
    v28 = 0LL;
    p_PagingBufferSegmentId = &a3->PagingBufferSegmentId;
    while ( 1 )
    {
      VIDMM_GLOBAL::ReadPhysicalAdapterConfiguration(this, v25);
      v30 = *(_QWORD *)(*((_QWORD *)this + 3) + 2440LL);
      v31 = *(_QWORD *)(*((_QWORD *)this + 2) + 1008LL);
      v32 = v31 ? v31 + 144 * v25 : 0LL;
      v33 = *((_QWORD *)this + 5023);
      *(_DWORD *)(v26 + v33 + 20) = v118;
      *(_DWORD *)(v26 + v33 + 24) = *(p_PagingBufferSegmentId - 4);
      v34 = *(p_PagingBufferSegmentId - 4);
      if ( v34 > 0x20 )
        break;
      if ( *p_PagingBufferSegmentId > v34 )
      {
        v74 = WdLogNewEntry5_WdAssertion(v31, v33);
        *(_QWORD *)(v74 + 24) = 1474LL;
        goto LABEL_71;
      }
      v35 = v34 + v118;
      v118 = v35;
      if ( v35 >= 0xFFFE )
      {
        v74 = WdLogNewEntry5_WdAssertion(v31, v33);
        *(_QWORD *)(v74 + 24) = 1481LL;
        goto LABEL_71;
      }
      v36 = *(_QWORD *)&Name.Length;
      *((_BYTE *)this + *(_QWORD *)&Name.Length + 52) = *(_BYTE *)p_PagingBufferSegmentId;
      *(v27 - 64) = p_PagingBufferSegmentId[1];
      *v27 = p_PagingBufferSegmentId[2];
      *(_BYTE *)(v26 + v33 + 436) ^= (*(_BYTE *)(v26 + v33 + 436) ^ (2 * *(_BYTE *)(v28 + v30 + 16))) & 2;
      v37 = *(_BYTE *)(v26 + v33 + 436) ^ (*(_BYTE *)(v26 + v33 + 436) ^ (*(_DWORD *)(v28 + v30 + 16) >> 1)) & 1;
      *(_BYTE *)(v26 + v33 + 436) = v37;
      if ( (v37 & 3) != 0 )
      {
        ++*(_DWORD *)(v26 + v33 + 24);
        v38 = v35;
        v118 = v35 + 1;
      }
      else
      {
        v38 = -1;
      }
      v39 = *(_DWORD *)(v26 + v33 + 24);
      *(_WORD *)(v26 + v33 + 28) = v38;
      *(_DWORD *)(v26 + v33 + 16) = (1 << v39) - 1;
      if ( v32 )
        *((_BYTE *)this + 40137) &= (*(_BYTE *)(v32 + 20) & 1) == 0;
      v25 = (unsigned int)(v25 + 1);
      ++v27;
      *(_QWORD *)&Name.Length = v36 + 1;
      v28 += 352LL;
      v26 += 1560LL;
      p_PagingBufferSegmentId += 10;
      if ( (unsigned int)v25 >= (unsigned int)v12 )
      {
        v23 = v118;
        goto LABEL_32;
      }
    }
    v74 = WdLogNewEntry5_WdAssertion(v31, v33);
    *(_QWORD *)(v74 + 24) = 1469LL;
    goto LABEL_71;
  }
LABEL_32:
  if ( dword_1C004E2E0 == 2 )
    v40 = (*(_DWORD *)(*((_QWORD *)this + 3) + 1900LL) & 4) != 0;
  else
    v40 = dword_1C004E2E0 == 1;
  *((_BYTE *)this + 7136) = v40;
  *((_QWORD *)this + 5171) = qword_1C004E3D8;
  v41 = dword_1C004E29C;
  if ( dword_1C004E29C )
  {
    v76 = 360LL * (unsigned int)dword_1C004E29C;
    if ( !is_mul_ok((unsigned int)dword_1C004E29C, 0x168uLL) )
      v76 = -1LL;
    v77 = operator new[](v76, 0x6D4D6956u, (POOL_TYPE)512);
    *((_QWORD *)this + 983) = v77;
    if ( v77 )
    {
      *((_DWORD *)this + 1968) = 0;
      *((_DWORD *)this + 1969) = 0;
      *((_DWORD *)this + 1964) = v41;
    }
  }
  *((_QWORD *)this + 875) = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  v42 = (HANDLE *)((char *)this + 7008);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v45) = ZwOpenSection((PHANDLE)this + 876, 0xF001Fu, &ObjectAttributes);
  if ( (int)v45 < 0 )
  {
    v78 = WdLogNewEntry5_WdAssertion(v44, v43);
    *(_QWORD *)(v78 + 24) = 1581LL;
    WdLogEvent5_WdAssertion(v78);
    goto LABEL_133;
  }
  v46 = 8LL * v23;
  if ( !is_mul_ok(v23, 8uLL) )
    v46 = -1LL;
  v47 = operator new[](v46, 0x36306956u, (POOL_TYPE)512);
  *((_QWORD *)this + 464) = v47;
  if ( !v47 )
  {
    _InterlockedIncrement(&dword_1C004E614);
    v79 = WdLogNewEntry5_WdLowResource(v48);
    *(_QWORD *)(v79 + 24) = 1593LL;
    WdLogEvent5_WdLowResource(v79);
    LODWORD(v45) = -1073741801;
    goto LABEL_133;
  }
  v51 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
  if ( !v51 )
  {
    v80 = WdLogNewEntry5_WdAssertion(v50, v49);
LABEL_90:
    WdLogEvent5_WdAssertion(v80);
    LODWORD(v45) = -1073741801;
    goto LABEL_132;
  }
  v52 = 0;
  if ( (_DWORD)v12 )
  {
    p_pSegmentDescriptor = &a3->pSegmentDescriptor;
    while ( 1 )
    {
      v54 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)*p_pSegmentDescriptor;
      v55 = (PPCW_INSTANCE *)(*((_QWORD *)this + 5023) + 1560LL * v52);
      memset(v55 + 62, 0, 0x30uLL);
      inited = VIDMM_GLOBAL::InitSegments(this, v52, (struct VIDMM_PHYSICAL_ADAPTER *)v55, v54, &v111);
      v45 = inited;
      if ( inited < 0 )
        break;
      LODWORD(v109) = v52;
      *(_QWORD *)&Name.Length = 0LL;
      Name.Buffer = 0LL;
      v59 = *((_QWORD *)a2 + 2);
      LODWORD(Data) = *(_DWORD *)(v59 + 276);
      LODWORD(v45) = RtlStringCbPrintfW(
                       v51,
                       0x208uLL,
                       L"luid_0x%08X_0x%08X_phys_%u",
                       *(unsigned int *)(v59 + 280),
                       Data);
      if ( (int)v45 < 0
        || (RtlInitUnicodeString(&Name, v51),
            v116.Data = v55,
            v116.Size = 1560,
            LODWORD(v45) = PcwCreateInstance(v55 + 194, GpuPerformanceCounterSetAdapterMemory, &Name, 1u, &v116),
            (int)v45 < 0) )
      {
        v81 = WdLogNewEntry5_WdAssertion(v61, v60);
        WdLogEvent5_WdAssertion(v81);
        goto LABEL_46;
      }
      ++v52;
      p_pSegmentDescriptor += 5;
      if ( v52 >= (unsigned int)v12 )
        goto LABEL_46;
    }
    v82 = WdLogNewEntry5_WdWarning(v58, v57);
    *(_QWORD *)(v82 + 24) = v45;
    WdLogEvent5_WdWarning(v82);
LABEL_46:
    v23 = v118;
  }
  operator delete(v51);
  if ( (int)v45 < 0 )
    goto LABEL_132;
  v14 = v111 + qword_1C004E158 < *(_QWORD *)(*((_QWORD *)this + 3) + 2472LL);
  *((_DWORD *)this + 926) = v23;
  v63 = (*((_BYTE *)this + 40872) & 2) == 0;
  *((_BYTE *)this + 40136) = v14;
  if ( v63 )
  {
LABEL_49:
    LODWORD(v45) = VIDMM_GLOBAL::CreateWorkerThread(this);
    if ( (int)v45 < 0 )
    {
      v101 = WdLogNewEntry5_WdAssertion(v65, v64);
      *(_QWORD *)(v101 + 24) = 1749LL;
      WdLogEvent5_WdAssertion(v101);
    }
    else
    {
      DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
        (DXGAUTOEXPUSHLOCKSHARED *)v112,
        (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
      v66 = (VIDMM_PARTITION *)VIDMM_PARTITION::_PartitionTree;
      i = 0LL;
      while ( v66 )
      {
        i = v66;
        v66 = *(VIDMM_PARTITION **)v66;
      }
      while ( 1 )
      {
        if ( !i )
        {
          if ( v114 == 1 )
          {
            ExReleasePushLockSharedEx(v113, 0LL);
          }
          else if ( v114 == 2 )
          {
            ExReleasePushLockExclusiveEx(v113, 0LL);
          }
          *((_QWORD *)this + 987) = MEMORY[0xFFFFF78000000014];
          *((_QWORD *)this + 988) = MEMORY[0xFFFFF78000000014];
          VIDMM_GLOBAL::AddToAdapterList(this);
          return (unsigned int)v45;
        }
        v69 = VIDMM_PARTITION::EnsureAdapter(i, this);
        v45 = v69;
        if ( v69 < 0 )
          break;
        v102 = (VIDMM_PARTITION **)*((_QWORD *)i + 1);
        v73 = i;
        if ( v102 )
        {
          v72 = *v102;
          for ( i = (VIDMM_PARTITION *)*((_QWORD *)i + 1); v72; v72 = *(VIDMM_PARTITION **)v72 )
            i = v72;
        }
        else
        {
          while ( 1 )
          {
            i = (VIDMM_PARTITION *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || *(VIDMM_PARTITION **)i == v73 )
              break;
            v73 = i;
          }
        }
      }
      v103 = (_QWORD *)WdLogNewEntry5_WdAssertion(v71, v70);
      v103[3] = this;
      v103[4] = i;
      v103[5] = v45;
      WdLogEvent5_WdAssertion(v103);
      if ( v114 == 1 )
      {
        ExReleasePushLockSharedEx(v113, 0LL);
      }
      else if ( v114 == 2 )
      {
        ExReleasePushLockExclusiveEx(v113, 0LL);
      }
    }
    goto LABEL_132;
  }
  if ( dword_1C004E32C )
  {
    v83 = (unsigned int)dword_1C004E32C;
    v84 = 24LL * (unsigned int)dword_1C004E32C;
    if ( !is_mul_ok((unsigned int)dword_1C004E32C, 0x18uLL) )
      v84 = -1LL;
    v14 = __CFADD__(v84, 8LL);
    v85 = v84 + 8;
    if ( v14 )
      v85 = -1LL;
    v86 = operator new(v85, 0x32356956u, v62, PagedPool);
    if ( v86 )
      *v86++ = v83;
    *((_QWORD *)this + 5115) = v86;
    if ( !v86 )
    {
      v80 = WdLogNewEntry5_WdAssertion(v88, v87);
      *(_QWORD *)(v80 + 24) = 1674LL;
      goto LABEL_90;
    }
    v90 = 48LL * (unsigned int)dword_1C004E330;
    if ( !is_mul_ok((unsigned int)dword_1C004E330, 0x30uLL) )
      v90 = -1LL;
    v91 = operator new(v90, 0x32356956u, v89, PagedPool);
    *((_QWORD *)this + 5119) = v91;
    if ( !v91 )
    {
      v80 = WdLogNewEntry5_WdAssertion(v93, v92);
      *(_QWORD *)(v80 + 24) = 1681LL;
      goto LABEL_90;
    }
  }
  *((_DWORD *)this + 10217) = 0;
  v94 = 0LL;
  *((_BYTE *)this + 40872) &= 0xBEu;
  LOBYTE(v95) = 0;
  if ( (_DWORD)v12 )
  {
    v96 = 0LL;
    do
    {
      v97 = *(_QWORD *)(*((_QWORD *)this + 2) + 1008LL);
      v98 = v97 ? (const struct DXGADAPTER_GPUMMUCAPS *)(v97 + 144 * v94) : 0LL;
      v99 = (unsigned int *)(v96 + *((_QWORD *)this + 5023));
      LODWORD(v45) = VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
                       (VIDMM_PHYSICAL_ADAPTER *)v99,
                       this,
                       v94,
                       (struct VIDMM_SEGMENT *const *)(*((_QWORD *)this + 464) + 8LL * v99[5]),
                       v98,
                       v109,
                       v99[6]);
      if ( (int)v45 < 0 )
        goto LABEL_132;
      v95 = v99[17];
      if ( v95 <= *((_DWORD *)this + 10217) )
        LOBYTE(v95) = *((_DWORD *)this + 10217);
      else
        *((_DWORD *)this + 10217) = v95;
      if ( v99[107] == 1 )
        *((_BYTE *)this + 40872) |= 0x40u;
      if ( (*(_DWORD *)v98 & 0x40) != 0 )
        *((_BYTE *)this + 40872) |= 1u;
      v94 = (unsigned int)(v94 + 1);
      v96 += 1560LL;
    }
    while ( (unsigned int)v94 < (unsigned int)v12 );
  }
  if ( a4 >= 0x5023 )
    v100 = dword_1C004E334;
  else
    v100 = 4096 << v95;
  *((_DWORD *)this + 10229) = v100;
  LODWORD(v45) = VIDMM_PAGING_PROCESS::CreateVaAllocator((VIDMM_GLOBAL *)((char *)this + 40320), this);
  if ( (int)v45 >= 0 )
    goto LABEL_49;
LABEL_132:
  v42 = (HANDLE *)((char *)this + 7008);
LABEL_133:
  v104 = (_QWORD *)*((_QWORD *)this + 464);
  if ( v104 )
  {
    v105 = 0LL;
    if ( v118 )
    {
      v106 = (_QWORD *)*((_QWORD *)this + 464);
      do
      {
        v107 = (void (__fastcall ***)(_QWORD, __int64))v104[v105];
        if ( v107 )
        {
          (**v107)(v104[v105], 1LL);
          v104 = (_QWORD *)*((_QWORD *)this + 464);
          v106 = v104;
        }
        ++v105;
      }
      while ( v105 < v118 );
      v104 = v106;
    }
    operator delete(v104);
    *((_QWORD *)this + 464) = 0LL;
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40320));
  if ( *v42 )
  {
    ZwClose(*v42);
    *v42 = 0LL;
  }
  operator delete(*((void **)this + 875));
  *((_QWORD *)this + 875) = 0LL;
  return (unsigned int)v45;
}
