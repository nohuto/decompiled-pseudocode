/*
 * XREFs of ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C008AFE0
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C008ADF0 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001A80 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0010378 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0010C94 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0012904 (RtlStringCbPrintfW.c)
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0018744 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?AddToAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008B600 (-AddToAdapterList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C008B7DC (-CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C008BA08 (-InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNA.c)
 *     ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C008C104 (-ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@I@Z @ 0x1C00A90B0 (-InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBU.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00B45D0 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00B475C (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Init(
        VIDMM_GLOBAL *this,
        struct ADAPTER_RENDER *a2,
        struct _DXGK_QUERYSEGMENTOUT4 *a3,
        unsigned int a4)
{
  __int64 v6; // rax
  unsigned int *v7; // rsi
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  bool v10; // cf
  SIZE_T v11; // rax
  char *v12; // rax
  __int64 v13; // rcx
  char *v14; // rbx
  unsigned int v15; // eax
  char v16; // cl
  char v17; // al
  int v18; // edx
  char v19; // dl
  unsigned int v20; // r12d
  __int64 v21; // r14
  __int64 v22; // rbx
  _DWORD *v23; // r12
  __int64 v24; // r15
  UINT *p_PagingBufferSize; // rsi
  __int64 v26; // r11
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // r10d
  char *v33; // r9
  char v34; // cl
  __int16 v35; // ax
  int v36; // ecx
  bool v37; // cl
  int v38; // ebx
  HANDLE *v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rbx
  SIZE_T v43; // rax
  PVOID v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  wchar_t *v48; // r15
  unsigned int v49; // esi
  UCHAR **p_pSegmentDescriptor; // r12
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v51; // rbx
  PPCW_INSTANCE *v52; // r14
  int inited; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  bool v60; // zf
  __int64 v61; // rdx
  __int64 v62; // rcx
  VIDMM_PARTITION *v63; // rax
  VIDMM_PARTITION *i; // rsi
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  VIDMM_PARTITION **v69; // rax
  VIDMM_PARTITION *v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  SIZE_T v73; // rax
  PVOID v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rbx
  __int64 v81; // rax
  SIZE_T v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  SIZE_T v87; // rax
  PVOID v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r14
  unsigned int v92; // ecx
  __int64 v93; // r12
  __int64 v94; // rcx
  const struct DXGADAPTER_GPUMMUCAPS *v95; // rsi
  unsigned int *v96; // r15
  int v97; // eax
  __int64 v98; // rax
  VIDMM_PARTITION *v99; // rcx
  _QWORD *v100; // rax
  _QWORD *v101; // rcx
  unsigned __int64 v102; // rsi
  _QWORD *v103; // rax
  void (__fastcall ***v104)(_QWORD, __int64); // r8
  PPCW_DATA Data; // [rsp+28h] [rbp-89h]
  struct DXGK_PHYSICALADAPTERINFO *v106; // [rsp+30h] [rbp-81h]
  struct _PCW_DATA v107; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int64 v108; // [rsp+58h] [rbp-59h] BYREF
  char v109[8]; // [rsp+60h] [rbp-51h] BYREF
  __int64 v110; // [rsp+68h] [rbp-49h]
  int v111; // [rsp+70h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-39h] BYREF
  UNICODE_STRING Name; // [rsp+88h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-19h] BYREF
  unsigned int v115; // [rsp+118h] [rbp+67h]

  v108 = 0LL;
  *((_QWORD *)this + 2) = a2;
  v6 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 3) = v6;
  *((_DWORD *)this + 8) = a4;
  byte_1C004D458 |= (*(_DWORD *)(v6 + 308) & 0x200) != 0;
  v7 = (unsigned int *)*((_QWORD *)this + 3);
  if ( a4 >= 0x6000 )
    *((_BYTE *)this + 40873) |= 4u;
  v8 = v7[64];
  *((_DWORD *)this + 1748) = v8;
  if ( (unsigned int)v8 > 0x40 )
  {
    v71 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v71 + 24) = 64LL;
LABEL_67:
    WdLogEvent5_WdAssertion(v71);
    return 3221225485LL;
  }
  v9 = 1560 * v8;
  if ( !is_mul_ok(v8, 0x618uLL) )
    v9 = -1LL;
  v10 = __CFADD__(v9, 8LL);
  v11 = v9 + 8;
  if ( v10 )
    v11 = -1LL;
  v12 = (char *)operator new(v11, 0x30356956u, (__int64)a3, (POOL_TYPE)512);
  if ( v12 )
  {
    v14 = v12 + 8;
    *(_QWORD *)v12 = v8;
    `vector constructor iterator'(
      v12 + 8,
      1560LL,
      (unsigned int)v8,
      (void (__fastcall *)(char *))VIDMM_PHYSICAL_ADAPTER::VIDMM_PHYSICAL_ADAPTER);
  }
  else
  {
    v14 = 0LL;
  }
  *((_QWORD *)this + 5023) = v14;
  if ( !v14 )
  {
    _InterlockedIncrement(&dword_1C004D5FC);
    v72 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v72 + 24) = 1423LL;
    WdLogEvent5_WdLowResource(v72);
    return 3221225495LL;
  }
  v15 = v7[473];
  if ( (v15 & 0x20) != 0 )
  {
    *((_BYTE *)this + 40872) ^= (*((_BYTE *)this + 40872) ^ (v15 >> 5)) & 2;
    v16 = *((_BYTE *)this + 40872) ^ (*((_BYTE *)this + 40872) ^ (v7[473] >> 5)) & 4;
    *((_BYTE *)this + 40872) = v16;
    v17 = v16;
    if ( (v16 & 4) != 0 )
    {
      if ( (VIDMM_GLOBAL::_Config & 0x20) != 0
        || (v18 = *(_DWORD *)(*((_QWORD *)this + 3) + 308LL), (v18 & 4) != 0)
        || (v18 & 8) != 0 )
      {
        v19 = 0;
      }
      else
      {
        v19 = 8;
      }
      v17 = v19 | v16 & 0xF7;
      *((_BYTE *)this + 40872) = v17;
      v16 = v17;
    }
    if ( a4 >= 0x5017 || (v16 = v17, (VIDMM_GLOBAL::_Config & 0x100) != 0) )
      *((_BYTE *)this + 40872) = v16 | 0x80;
  }
  v20 = 0;
  v21 = 0LL;
  v115 = 0;
  *((_BYTE *)this + 4616) = (v7[472] & 0x20) == 0;
  if ( (_DWORD)v8 )
  {
    v107.Data = 0LL;
    v22 = 0LL;
    v23 = (_DWORD *)((char *)this + 372);
    v24 = 0LL;
    p_PagingBufferSize = &a3->PagingBufferSize;
    while ( 1 )
    {
      VIDMM_GLOBAL::ReadPhysicalAdapterConfiguration(this, v21);
      v26 = *(_QWORD *)(*((_QWORD *)this + 3) + 2416LL);
      v27 = *(_QWORD *)(*((_QWORD *)this + 2) + 1008LL);
      v28 = v27 ? v27 + 144 * v21 : 0LL;
      v29 = *((_QWORD *)this + 5023);
      *(_DWORD *)(v29 + v22 + 20) = v115;
      *(_DWORD *)(v29 + v22 + 24) = *(p_PagingBufferSize - 5);
      v30 = *(p_PagingBufferSize - 5);
      if ( v30 > 0x20 )
        break;
      v31 = *(p_PagingBufferSize - 1);
      if ( (unsigned int)v31 > v30 )
      {
        v71 = WdLogNewEntry5_WdAssertion(v31, v29);
        *(_QWORD *)(v71 + 24) = 1470LL;
        goto LABEL_67;
      }
      v32 = v30 + v115;
      v115 = v32;
      if ( v32 >= 0xFFFE )
      {
        v71 = WdLogNewEntry5_WdAssertion(v31, v29);
        *(_QWORD *)(v71 + 24) = 1477LL;
        goto LABEL_67;
      }
      v33 = (char *)v107.Data;
      *((_BYTE *)v107.Data + (unsigned __int64)this + 52) = v31;
      *(v23 - 64) = *p_PagingBufferSize;
      *v23 = p_PagingBufferSize[1];
      *(_BYTE *)(v29 + v22 + 436) ^= (*(_BYTE *)(v29 + v22 + 436) ^ (2 * *(_BYTE *)(v24 + v26 + 16))) & 2;
      v34 = *(_BYTE *)(v29 + v22 + 436) ^ (*(_BYTE *)(v29 + v22 + 436) ^ (*(_DWORD *)(v24 + v26 + 16) >> 1)) & 1;
      *(_BYTE *)(v29 + v22 + 436) = v34;
      if ( (v34 & 3) != 0 )
      {
        ++*(_DWORD *)(v29 + v22 + 24);
        v35 = v32;
        v115 = v32 + 1;
      }
      else
      {
        v35 = -1;
      }
      v36 = *(_DWORD *)(v29 + v22 + 24);
      *(_WORD *)(v29 + v22 + 28) = v35;
      *(_DWORD *)(v29 + v22 + 16) = (1 << v36) - 1;
      if ( v28 )
        *((_BYTE *)this + 40137) &= (*(_BYTE *)(v28 + 20) & 1) == 0;
      v21 = (unsigned int)(v21 + 1);
      ++v23;
      v107.Data = v33 + 1;
      v24 += 352LL;
      v22 += 1560LL;
      p_PagingBufferSize += 10;
      if ( (unsigned int)v21 >= (unsigned int)v8 )
      {
        v20 = v115;
        goto LABEL_32;
      }
    }
    v71 = WdLogNewEntry5_WdAssertion(v27, v29);
    *(_QWORD *)(v71 + 24) = 1465LL;
    goto LABEL_67;
  }
LABEL_32:
  if ( dword_1C004D2E0 == 2 )
    v37 = (*(_DWORD *)(*((_QWORD *)this + 3) + 1876LL) & 4) != 0;
  else
    v37 = dword_1C004D2E0 == 1;
  *((_BYTE *)this + 7136) = v37;
  *((_QWORD *)this + 5171) = qword_1C004D3D0;
  v38 = dword_1C004D29C;
  if ( dword_1C004D29C )
  {
    v73 = 360LL * (unsigned int)dword_1C004D29C;
    if ( !is_mul_ok((unsigned int)dword_1C004D29C, 0x168uLL) )
      v73 = -1LL;
    v74 = operator new[](v73, 0x6D4D6956u, (POOL_TYPE)512);
    *((_QWORD *)this + 983) = v74;
    if ( v74 )
    {
      *((_DWORD *)this + 1968) = 0;
      *((_DWORD *)this + 1969) = 0;
      *((_DWORD *)this + 1964) = v38;
    }
  }
  *((_QWORD *)this + 875) = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  v39 = (HANDLE *)((char *)this + 7008);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v42) = ZwOpenSection((PHANDLE)this + 876, 0xF001Fu, &ObjectAttributes);
  if ( (int)v42 < 0 )
  {
    v75 = WdLogNewEntry5_WdAssertion(v41, v40);
    *(_QWORD *)(v75 + 24) = 1577LL;
    WdLogEvent5_WdAssertion(v75);
    goto LABEL_131;
  }
  v43 = 8LL * v20;
  if ( !is_mul_ok(v20, 8uLL) )
    v43 = -1LL;
  v44 = operator new[](v43, 0x36306956u, (POOL_TYPE)512);
  *((_QWORD *)this + 464) = v44;
  if ( !v44 )
  {
    _InterlockedIncrement(&dword_1C004D634);
    v76 = WdLogNewEntry5_WdLowResource(v45);
    *(_QWORD *)(v76 + 24) = 1589LL;
    WdLogEvent5_WdLowResource(v76);
    LODWORD(v42) = -1073741801;
    goto LABEL_131;
  }
  v48 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
  if ( !v48 )
  {
    v77 = WdLogNewEntry5_WdAssertion(v47, v46);
LABEL_86:
    WdLogEvent5_WdAssertion(v77);
    LODWORD(v42) = -1073741801;
    goto LABEL_130;
  }
  v49 = 0;
  if ( (_DWORD)v8 )
  {
    p_pSegmentDescriptor = &a3->pSegmentDescriptor;
    while ( 1 )
    {
      v51 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)*p_pSegmentDescriptor;
      v52 = (PPCW_INSTANCE *)(*((_QWORD *)this + 5023) + 1560LL * v49);
      memset(v52 + 62, 0, 0x30uLL);
      inited = VIDMM_GLOBAL::InitSegments(this, v49, (struct VIDMM_PHYSICAL_ADAPTER *)v52, v51, &v108);
      v42 = inited;
      if ( inited < 0 )
        break;
      LODWORD(v106) = v49;
      v56 = *((_QWORD *)a2 + 2);
      LODWORD(Data) = *(_DWORD *)(v56 + 276);
      LODWORD(v42) = RtlStringCbPrintfW(
                       v48,
                       0x208uLL,
                       L"luid_0x%08X_0x%08X_phys_%u",
                       *(unsigned int *)(v56 + 280),
                       Data);
      if ( (int)v42 < 0
        || (RtlInitUnicodeString(&Name, v48),
            v107.Data = v52,
            v107.Size = 1560,
            LODWORD(v42) = PcwCreateInstance(v52 + 194, GpuPerformanceCounterSetAdapterMemory, &Name, 1u, &v107),
            (int)v42 < 0) )
      {
        v78 = WdLogNewEntry5_WdAssertion(v58, v57);
        WdLogEvent5_WdAssertion(v78);
        goto LABEL_46;
      }
      ++v49;
      p_pSegmentDescriptor += 5;
      if ( v49 >= (unsigned int)v8 )
        goto LABEL_46;
    }
    v79 = WdLogNewEntry5_WdWarning(v55, v54);
    *(_QWORD *)(v79 + 24) = v42;
    WdLogEvent5_WdWarning(v79);
LABEL_46:
    v20 = v115;
  }
  operator delete(v48);
  if ( (int)v42 < 0 )
    goto LABEL_130;
  v10 = v108 + qword_1C004D158 < *(_QWORD *)(*((_QWORD *)this + 3) + 2440LL);
  *((_DWORD *)this + 926) = v20;
  v60 = (*((_BYTE *)this + 40872) & 2) == 0;
  *((_BYTE *)this + 40136) = v10;
  if ( v60 )
  {
LABEL_49:
    LODWORD(v42) = VIDMM_GLOBAL::CreateWorkerThread(this);
    if ( (int)v42 < 0 )
    {
      v98 = WdLogNewEntry5_WdAssertion(v62, v61);
      *(_QWORD *)(v98 + 24) = 1745LL;
      WdLogEvent5_WdAssertion(v98);
    }
    else
    {
      DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
        (DXGAUTOEXPUSHLOCKSHARED *)v109,
        (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
      v63 = (VIDMM_PARTITION *)VIDMM_PARTITION::_PartitionTree;
      i = 0LL;
      while ( v63 )
      {
        i = v63;
        v63 = *(VIDMM_PARTITION **)v63;
      }
      while ( 1 )
      {
        if ( !i )
        {
          if ( v111 == 1 )
          {
            ExReleasePushLockSharedEx(v110, 0LL);
          }
          else if ( v111 == 2 )
          {
            ExReleasePushLockExclusiveEx(v110, 0LL);
          }
          *((_QWORD *)this + 987) = MEMORY[0xFFFFF78000000014];
          *((_QWORD *)this + 988) = MEMORY[0xFFFFF78000000014];
          VIDMM_GLOBAL::AddToAdapterList(this);
          return (unsigned int)v42;
        }
        v66 = VIDMM_PARTITION::EnsureAdapter(i, this);
        v42 = v66;
        if ( v66 < 0 )
          break;
        v69 = (VIDMM_PARTITION **)*((_QWORD *)i + 1);
        v70 = i;
        if ( v69 )
        {
          v99 = *v69;
          for ( i = (VIDMM_PARTITION *)*((_QWORD *)i + 1); v99; v99 = *(VIDMM_PARTITION **)v99 )
            i = v99;
        }
        else
        {
          while ( 1 )
          {
            i = (VIDMM_PARTITION *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || *(VIDMM_PARTITION **)i == v70 )
              break;
            v70 = i;
          }
        }
      }
      v100 = (_QWORD *)WdLogNewEntry5_WdAssertion(v68, v67);
      v100[3] = this;
      v100[4] = i;
      v100[5] = v42;
      WdLogEvent5_WdAssertion(v100);
      if ( v111 == 1 )
      {
        ExReleasePushLockSharedEx(v110, 0LL);
      }
      else if ( v111 == 2 )
      {
        ExReleasePushLockExclusiveEx(v110, 0LL);
      }
    }
    goto LABEL_130;
  }
  if ( dword_1C004D32C )
  {
    v80 = (unsigned int)dword_1C004D32C;
    v81 = 24LL * (unsigned int)dword_1C004D32C;
    if ( !is_mul_ok((unsigned int)dword_1C004D32C, 0x18uLL) )
      v81 = -1LL;
    v10 = __CFADD__(v81, 8LL);
    v82 = v81 + 8;
    if ( v10 )
      v82 = -1LL;
    v83 = operator new(v82, 0x32356956u, v59, PagedPool);
    if ( v83 )
      *v83++ = v80;
    *((_QWORD *)this + 5115) = v83;
    if ( !v83 )
    {
      v77 = WdLogNewEntry5_WdAssertion(v85, v84);
      *(_QWORD *)(v77 + 24) = 1670LL;
      goto LABEL_86;
    }
    v87 = 48LL * (unsigned int)dword_1C004D330;
    if ( !is_mul_ok((unsigned int)dword_1C004D330, 0x30uLL) )
      v87 = -1LL;
    v88 = operator new(v87, 0x32356956u, v86, PagedPool);
    *((_QWORD *)this + 5119) = v88;
    if ( !v88 )
    {
      v77 = WdLogNewEntry5_WdAssertion(v90, v89);
      *(_QWORD *)(v77 + 24) = 1677LL;
      goto LABEL_86;
    }
  }
  *((_DWORD *)this + 10217) = 0;
  v91 = 0LL;
  *((_BYTE *)this + 40872) &= 0xBEu;
  LOBYTE(v92) = 0;
  if ( (_DWORD)v8 )
  {
    v93 = 0LL;
    do
    {
      v94 = *(_QWORD *)(*((_QWORD *)this + 2) + 1008LL);
      v95 = v94 ? (const struct DXGADAPTER_GPUMMUCAPS *)(v94 + 144 * v91) : 0LL;
      v96 = (unsigned int *)(v93 + *((_QWORD *)this + 5023));
      LODWORD(v42) = VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
                       (VIDMM_PHYSICAL_ADAPTER *)v96,
                       this,
                       v91,
                       (struct VIDMM_SEGMENT *const *)(*((_QWORD *)this + 464) + 8LL * v96[5]),
                       v95,
                       v106,
                       v96[6]);
      if ( (int)v42 < 0 )
        goto LABEL_130;
      v92 = v96[17];
      if ( v92 <= *((_DWORD *)this + 10217) )
        LOBYTE(v92) = *((_DWORD *)this + 10217);
      else
        *((_DWORD *)this + 10217) = v92;
      if ( v96[107] == 1 )
        *((_BYTE *)this + 40872) |= 0x40u;
      if ( (*(_DWORD *)v95 & 0x40) != 0 )
        *((_BYTE *)this + 40872) |= 1u;
      v91 = (unsigned int)(v91 + 1);
      v93 += 1560LL;
    }
    while ( (unsigned int)v91 < (unsigned int)v8 );
  }
  if ( a4 >= 0x5023 )
    v97 = dword_1C004D334;
  else
    v97 = 4096 << v92;
  *((_DWORD *)this + 10229) = v97;
  LODWORD(v42) = VIDMM_PAGING_PROCESS::CreateVaAllocator((VIDMM_GLOBAL *)((char *)this + 40320), this);
  if ( (int)v42 >= 0 )
    goto LABEL_49;
LABEL_130:
  v39 = (HANDLE *)((char *)this + 7008);
LABEL_131:
  v101 = (_QWORD *)*((_QWORD *)this + 464);
  if ( v101 )
  {
    v102 = 0LL;
    if ( v115 )
    {
      v103 = (_QWORD *)*((_QWORD *)this + 464);
      do
      {
        v104 = (void (__fastcall ***)(_QWORD, __int64))v101[v102];
        if ( v104 )
        {
          (**v104)(v101[v102], 1LL);
          v101 = (_QWORD *)*((_QWORD *)this + 464);
          v103 = v101;
        }
        ++v102;
      }
      while ( v102 < v115 );
      v101 = v103;
    }
    operator delete(v101);
    *((_QWORD *)this + 464) = 0LL;
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40320));
  if ( *v39 )
  {
    ZwClose(*v39);
    *v39 = 0LL;
  }
  operator delete(*((void **)this + 875));
  *((_QWORD *)this + 875) = 0LL;
  return (unsigned int)v42;
}
