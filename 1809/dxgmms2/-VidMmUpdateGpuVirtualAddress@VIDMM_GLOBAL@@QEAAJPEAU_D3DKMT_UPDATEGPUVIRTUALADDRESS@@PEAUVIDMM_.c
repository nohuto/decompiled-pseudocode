/*
 * XREFs of ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00AEF64
 * Callers:
 *     VidMmUpdateGpuVirtualAddress @ 0x1C0025670 (VidMmUpdateGpuVirtualAddress.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023E8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchWaitForSingleSyncObject @ 0x1C0002D90 (VidSchWaitForSingleSyncObject.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00107D4 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0015E04 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C00257CC (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     VidSchSubmitGlobalCommand @ 0x1C007E47C (VidSchSubmitGlobalCommand.c)
 *     ?IsRangeValid@@YAE_K00@Z @ 0x1C00A9A94 (-IsRangeValid@@YAE_K00@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C00B64F8 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00B667C (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 *     ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1C00B6DA0 (-ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmUpdateGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a2,
        struct VIDMM_COMPANION_CONTEXT *a3,
        int a4,
        struct _VIDMM_MULTI_ALLOC **a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        struct _KSEMAPHORE **a7)
{
  struct _VIDSCH_SYNC_OBJECT *v7; // r15
  UINT64 FenceValue; // rbx
  UINT64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 Value; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r13
  unsigned int v22; // edi
  __int64 v23; // r9
  _QWORD *v24; // rbx
  VIDMM_GLOBAL *v25; // r10
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  UINT v28; // esi
  unsigned __int64 BaseAddress; // r15
  unsigned __int64 v30; // r13
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v31; // rdi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  PVOID v35; // r10
  __int64 v36; // rax
  _QWORD *v37; // rax
  struct VIDMM_ALLOC *v38; // rcx
  D3DGPU_SIZE_T AllocationSizeInBytes; // r8
  unsigned __int64 AllocationOffsetInBytes; // r11
  D3DGPU_SIZE_T SizeInBytes; // r13
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  PVOID v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  _QWORD *v49; // rcx
  _QWORD *v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  _QWORD *v53; // rax
  char *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  struct VIDMM_VAD *v65; // rdi
  __int64 v66; // rax
  struct VIDMM_VAD *v67; // r8
  char *v68; // rcx
  struct VIDMM_VAD *v69; // rax
  struct VIDMM_VAD **v70; // rdx
  char **v71; // rdx
  __int128 *i; // rcx
  bool v73; // zf
  __int64 v74; // rdx
  char *v75; // rcx
  unsigned int j; // r8d
  __int64 v77; // rax
  __int128 v78; // [rsp+60h] [rbp-A0h] BYREF
  int v79; // [rsp+70h] [rbp-90h]
  int v80; // [rsp+74h] [rbp-8Ch]
  int v81; // [rsp+78h] [rbp-88h]
  unsigned __int64 v82; // [rsp+80h] [rbp-80h]
  __int64 v83; // [rsp+88h] [rbp-78h]
  unsigned __int64 v84; // [rsp+90h] [rbp-70h]
  unsigned __int64 v85; // [rsp+98h] [rbp-68h]
  unsigned __int64 v86; // [rsp+A0h] [rbp-60h]
  struct VIDMM_ALLOC *v87; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v88; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v89; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v90; // [rsp+C0h] [rbp-40h]
  UINT64 DriverProtection; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v92; // [rsp+D0h] [rbp-30h]
  D3DGPU_SIZE_T v93; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v94; // [rsp+E0h] [rbp-20h]
  __int64 v95; // [rsp+E8h] [rbp-18h]
  union _LARGE_INTEGER Timeout; // [rsp+F0h] [rbp-10h] BYREF
  PRKSEMAPHORE Semaphore; // [rsp+F8h] [rbp-8h]
  struct VIDMM_VAD *v98; // [rsp+100h] [rbp+0h]
  _BYTE v99[24]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v100[24]; // [rsp+120h] [rbp+20h] BYREF
  bool v102; // [rsp+1F8h] [rbp+F8h]
  char v103; // [rsp+200h] [rbp+100h]

  v7 = a6;
  FenceValue = a2->FenceValue;
  v11 = *((_QWORD *)a3 + 7);
  if ( *((_BYTE *)a6 + 29) )
  {
    if ( FenceValue < v11 )
    {
      v12 = WdLogNewEntry5_WdWarning(this, a2);
      *(_QWORD *)(v12 + 24) = FenceValue;
      *(_QWORD *)(v12 + 32) = v11;
LABEL_8:
      WdLogEvent5_WdWarning(v12);
      v16 = WdLogNewEntry5_WdWarning(v15, v14);
      *(_QWORD *)(v16 + 24) = a2->FenceValue;
      WdLogEvent5_WdWarning(v16);
      return 3221225485LL;
    }
    if ( FenceValue == v11 )
    {
      v13 = WdLogNewEntry5_WdWarning(this, a2);
      *(_QWORD *)(v13 + 24) = FenceValue;
LABEL_11:
      WdLogEvent5_WdWarning(v13);
    }
  }
  else
  {
    if ( (int)v11 - (int)FenceValue > 0 )
    {
      v12 = WdLogNewEntry5_WdWarning(this, a2);
      *(_QWORD *)(v12 + 24) = (unsigned int)FenceValue;
      *(_QWORD *)(v12 + 32) = (unsigned int)v11;
      goto LABEL_8;
    }
    if ( (_DWORD)v11 == (_DWORD)FenceValue )
    {
      v13 = WdLogNewEntry5_WdWarning(this, a2);
      *(_QWORD *)(v13 + 24) = (unsigned int)FenceValue;
      goto LABEL_11;
    }
  }
  Semaphore = (PRKSEMAPHORE)((char *)a3 + 24);
  *a7 = (struct _KSEMAPHORE *)((char *)a3 + 24);
  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject((char *)a3 + 24, Executive, 0, 0, &Timeout) == 258 )
  {
    v20 = WdLogNewEntry5_WdWarning(v19, Value);
    WdLogEvent5_WdWarning(v20);
    return 3223191810LL;
  }
  v21 = *(_QWORD *)a3;
  v22 = -1073741811;
  v23 = *((_QWORD *)a3 + 1);
  v24 = 0LL;
  v25 = this;
  *((_QWORD *)a3 + 7) = a2->FenceValue;
  v26 = *(_QWORD *)(v21 + 16);
  v27 = *(_QWORD *)(v23 + 96);
  v83 = v21;
  v82 = v26;
  v80 = -1073741811;
  v79 = *(unsigned __int16 *)(v27 + 6);
  *((_QWORD *)&v78 + 1) = &v78;
  *(_QWORD *)&v78 = &v78;
  v98 = 0LL;
  v85 = -1LL;
  v84 = 0LL;
  v89 = -1LL;
  v88 = 0LL;
  v103 = 0;
  if ( *((_QWORD *)this + 5115) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      this,
      1u,
      *(struct VIDMM_PROCESS **)(v21 + 88),
      (struct _VIDSCH_CONTEXT *)v23,
      a2->NumOperations,
      a6,
      a2->FenceValue);
    v25 = this;
    v26 = v82;
  }
  v28 = 0;
  if ( !a2->NumOperations )
  {
LABEL_97:
    if ( (a2->Flags.Value & 1) == 0 )
    {
      *((_BYTE *)v7 + 25) = 0;
      v80 = VidSchWaitForSingleSyncObject(*((_QWORD *)a3 + 1), (__int64)v7, a2->FenceValue);
      v22 = v80;
      if ( v80 < 0 )
      {
        v58 = WdLogNewEntry5_WdAssertion(v57, v56);
        *(_QWORD *)(v58 + 24) = 24855LL;
        WdLogEvent5_WdAssertion(v58);
        goto LABEL_86;
      }
    }
    v59 = operator new[](0xB8uLL, 0x39346956u, PagedPool);
    v24 = v59;
    if ( v59 )
    {
      memset(v59, 0, 0xB8uLL);
      v24[13] = v24 + 12;
      v24[12] = v24 + 12;
      v24[7] = v24 + 6;
      v24[6] = v24 + 6;
    }
    else
    {
      v24 = 0LL;
    }
    if ( !v24 )
    {
      v62 = WdLogNewEntry5_WdWarning(v61, v60);
      WdLogEvent5_WdWarning(v62);
      goto LABEL_86;
    }
    v24[1] = this;
    *((_DWORD *)v24 + 5) = a2->NumOperations;
    v24[10] = a2->FenceValue + 1;
    *((_DWORD *)v24 + 4) = v79;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v99, (struct _KTHREAD **)(v21 + 56));
    v65 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v21, v85, v84);
    if ( !v65 )
      goto LABEL_113;
    if ( v103 )
    {
      v67 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v21, v89, v88);
      if ( !v67 )
      {
LABEL_113:
        v66 = WdLogNewEntry5_WdWarning(v64, v63);
        WdLogEvent5_WdWarning(v66);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v99);
        v22 = v80;
        goto LABEL_86;
      }
    }
    else
    {
      v67 = v98;
    }
    v24[14] = v65;
    v24[18] = v24 + 14;
    v68 = (char *)v65 + 80;
    v24[15] = v67;
    v24[21] = v24 + 15;
    v69 = (struct VIDMM_VAD *)(v24 + 16);
    v70 = (struct VIDMM_VAD **)*((_QWORD *)v65 + 11);
    if ( *v70 != (struct VIDMM_VAD *)((char *)v65 + 80) )
      goto LABEL_135;
    *(_QWORD *)v69 = v68;
    v24[17] = v70;
    *v70 = v69;
    *((_QWORD *)v65 + 11) = v69;
    if ( v67 )
    {
      v71 = (char **)(v24 + 19);
      if ( *(char **)v69 != v68 )
        goto LABEL_135;
      *v71 = v68;
      v24[20] = v69;
      *(_QWORD *)v69 = v71;
      *((_QWORD *)v65 + 11) = v71;
      *((_BYTE *)v24 + 176) = 1;
    }
    for ( i = (__int128 *)v78; i != &v78; i = *(__int128 **)i )
    {
      v73 = *((_QWORD *)i + 9) == 0LL;
      *((_QWORD *)i - 1) = v65;
      if ( v73 )
      {
        v74 = *((_QWORD *)v65 + 12);
        if ( (struct VIDMM_VAD *)v74 != (struct VIDMM_VAD *)((char *)v65 + 96) )
          *((_QWORD *)i + 9) = *(_QWORD *)(v74 + 72);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v99);
    v75 = (char *)(v24 + 12);
    v24[8] = a5;
    *((_DWORD *)v24 + 8) = a4;
    v24[3] = a2->Operations;
    a2->Operations = 0LL;
    v24[9] = v7;
    v24[11] = a3;
    *v24 = *((_QWORD *)a3 + 1);
    if ( (__int128 *)v78 == &v78 )
    {
      v24[13] = v24 + 12;
      *(_QWORD *)v75 = v75;
    }
    else
    {
      *(_OWORD *)v75 = v78;
      *(_QWORD *)(*(_QWORD *)v75 + 8LL) = v75;
      *(_QWORD *)v24[13] = v75;
    }
    *((_QWORD *)&v78 + 1) = &v78;
    *(_QWORD *)&v78 = &v78;
    _InterlockedIncrement((volatile signed __int32 *)v7 + 8);
    for ( j = 0; j < *((_DWORD *)v24 + 8); ++j )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v24[8] + 8LL * j) + 160LL));
    memset(v100, 0, 0x80uLL);
    v100[6] = v24;
    LODWORD(v100[5]) = 2;
    LODWORD(v100[0]) = 2;
    v100[3] = VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress;
    v77 = *((_QWORD *)a3 + 1);
    v100[4] = 0LL;
    VidSchSubmitGlobalCommand(*(_QWORD *)(*(_QWORD *)(v77 + 104) + 32LL), (__int64)v100);
    return 0LL;
  }
  BaseAddress = (unsigned __int64)a6;
  v30 = v86;
  while ( 1 )
  {
    v31 = &a2->Operations[(unsigned __int64)v28];
    OperationType = v31->OperationType;
    if ( v31->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
      || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
    {
      break;
    }
    if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
    {
      BaseAddress = v31->Map.BaseAddress;
      v30 = BaseAddress + v31->Map.SizeInBytes;
      if ( *((_QWORD *)v25 + 5115) )
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
          v25,
          *(struct VIDMM_PROCESS **)(v83 + 88),
          *((struct _VIDSCH_CONTEXT **)a3 + 1),
          0LL,
          &a2->Operations[(unsigned __int64)v28]);
      if ( !IsRangeValid(BaseAddress, v30, v82) )
        goto LABEL_85;
      v35 = operator new[](0x88uLL, 0x39346956u, PagedPool);
      if ( v35 )
        v36 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                (__int64)v35,
                0LL,
                BaseAddress,
                v30,
                v79,
                0LL,
                0LL,
                (v31->Copy.DestAddress & 8) != 0 ? 0 : 6,
                v31->Unmap.Protection.Value,
                0LL,
                0LL,
                0LL);
      else
        v36 = 0LL;
      if ( !v36 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33);
        v53[3] = 24771LL;
        goto LABEL_84;
      }
      v26 = *((_QWORD *)&v78 + 1);
      v37 = (_QWORD *)(v36 + 8);
      if ( **((__int128 ***)&v78 + 1) == &v78 )
      {
        v37[1] = *((_QWORD *)&v78 + 1);
        Value = (unsigned __int64)&v78;
        *v37 = &v78;
        *(_QWORD *)v26 = v37;
        *((_QWORD *)&v78 + 1) = v37;
        goto LABEL_73;
      }
LABEL_135:
      __fastfail(3u);
    }
    if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
    {
      BaseAddress = v31->Unmap.Protection.Value;
      v30 = BaseAddress + v31->Map.SizeInBytes;
      if ( *((_QWORD *)v25 + 5115) )
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
          v25,
          *(struct VIDMM_PROCESS **)(v83 + 88),
          *((struct _VIDSCH_CONTEXT **)a3 + 1),
          0LL,
          &a2->Operations[(unsigned __int64)v28]);
      if ( !IsRangeValid(BaseAddress, v30, v82) )
        goto LABEL_85;
      v26 = v31->Map.BaseAddress;
      Value = v26 + v31->Map.SizeInBytes;
      if ( Value <= v26 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, Value);
        v53[3] = v28;
        v53[4] = 24796LL;
        goto LABEL_84;
      }
      if ( (v26 & 0xFFF) != 0 || (Value & 0xFFF) != 0 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, Value);
        v53[3] = v28;
        v53[4] = 24801LL;
        goto LABEL_84;
      }
      if ( BaseAddress < Value && v30 > v26 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, Value);
        v53[3] = v28;
        v53[4] = 24807LL;
        goto LABEL_84;
      }
      v103 = 1;
      if ( v89 <= v26 )
        v26 = v89;
      v89 = v26;
      if ( v88 >= Value )
        Value = v88;
      v88 = Value;
LABEL_73:
      v25 = this;
    }
LABEL_74:
    if ( v30 <= BaseAddress )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, Value);
      v53[3] = v28;
      v53[4] = 24827LL;
      goto LABEL_84;
    }
    if ( ((BaseAddress | v30) & 0xFFF) != 0 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, Value);
      v53[3] = v28;
      v53[4] = 24832LL;
      goto LABEL_84;
    }
    v51 = BaseAddress;
    v52 = v30;
    if ( v85 <= BaseAddress )
      v51 = v85;
    v85 = v51;
    if ( v84 >= v30 )
      v52 = v84;
    ++v28;
    v84 = v52;
    if ( v28 >= a2->NumOperations )
    {
      v7 = a6;
      v22 = -1073741811;
      v21 = v83;
      v85 = v51;
      v84 = v52;
      goto LABEL_97;
    }
    v26 = v82;
  }
  BaseAddress = v31->Map.BaseAddress;
  v86 = BaseAddress + v31->Map.SizeInBytes;
  if ( !IsRangeValid(BaseAddress, v86, v26) )
    goto LABEL_85;
  v25 = this;
  v38 = a5[v31->Map.hAllocation];
  v87 = v38;
  if ( *((_QWORD *)this + 5115) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
      this,
      *(struct VIDMM_PROCESS **)(v83 + 88),
      *((struct _VIDSCH_CONTEXT **)a3 + 1),
      v38,
      v31);
    v25 = this;
    v38 = v87;
  }
  AllocationSizeInBytes = v31->Map.AllocationSizeInBytes;
  if ( (AllocationSizeInBytes & 0xFFF) != 0
    || (AllocationOffsetInBytes = v31->Map.AllocationOffsetInBytes,
        v90 = AllocationOffsetInBytes,
        (AllocationOffsetInBytes & 0xFFF) != 0) )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, Value);
    v53[3] = v28;
    v53[4] = 24646LL;
    goto LABEL_84;
  }
  SizeInBytes = v31->Map.SizeInBytes;
  if ( AllocationSizeInBytes )
  {
    if ( AllocationSizeInBytes > SizeInBytes )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, Value);
      v53[3] = v28;
      goto LABEL_84;
    }
    Value = SizeInBytes % AllocationSizeInBytes;
    if ( SizeInBytes % AllocationSizeInBytes )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, Value);
      v53[3] = v28;
      v53[4] = 24669LL;
      goto LABEL_84;
    }
  }
  else
  {
    v31->Map.AllocationSizeInBytes = SizeInBytes;
    AllocationSizeInBytes = SizeInBytes;
  }
  if ( AllocationOffsetInBytes + AllocationSizeInBytes < AllocationOffsetInBytes
    || (v38 = *(struct VIDMM_ALLOC **)v38,
        Value = *(_QWORD *)v38,
        AllocationOffsetInBytes + AllocationSizeInBytes > *(_QWORD *)(*(_QWORD *)v38 + 16LL)) )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, Value);
    v53[3] = *(_QWORD *)(**(_QWORD **)v87 + 16LL);
    v53[4] = v28;
    v53[5] = 24680LL;
    goto LABEL_84;
  }
  if ( (*((_BYTE *)v25 + 40873) & 4) != 0 )
  {
    v26 = 1LL;
    v95 = 1LL;
    v102 = SizeInBytes != AllocationSizeInBytes;
  }
  else
  {
    v42 = SizeInBytes / AllocationSizeInBytes;
    Value = SizeInBytes % AllocationSizeInBytes;
    SizeInBytes = AllocationSizeInBytes;
    v26 = v42;
    v95 = v42;
    v102 = 0;
    v90 = 0LL;
  }
  if ( v26 >= 0xFFFFFFFF )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, Value);
    v53[3] = v28;
    v53[4] = 24703LL;
    goto LABEL_84;
  }
  v43 = BaseAddress;
  DriverProtection = 0LL;
  v94 = BaseAddress;
  if ( v31->OperationType )
  {
    DriverProtection = v31->MapProtect.DriverProtection;
    Value = v31->MapProtect.Protection.Value;
    v92 = Value;
  }
  else
  {
    v92 = 1LL;
  }
  v81 = 0;
  if ( !(_DWORD)v26 )
  {
    v30 = v86;
    goto LABEL_74;
  }
  while ( 1 )
  {
    v93 = SizeInBytes + v43;
    v44 = operator new[](0x88uLL, 0x39346956u, PagedPool);
    if ( v44 )
    {
      v47 = v102 ? v31->Map.AllocationSizeInBytes >> 12 : 0LL;
      v48 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
              (__int64)v44,
              0LL,
              v94,
              v93,
              v79,
              (__int64)v87,
              v31->Map.AllocationOffsetInBytes,
              1,
              v92,
              DriverProtection,
              v47,
              v90);
    }
    else
    {
      v48 = 0LL;
    }
    if ( !v48 )
      break;
    v49 = (_QWORD *)*((_QWORD *)&v78 + 1);
    v50 = (_QWORD *)(v48 + 8);
    if ( **((__int128 ***)&v78 + 1) != &v78 )
      goto LABEL_135;
    v50[1] = *((_QWORD *)&v78 + 1);
    Value = (unsigned __int64)&v78;
    *v50 = &v78;
    *v49 = v50;
    v26 = (unsigned int)(v81 + 1);
    *((_QWORD *)&v78 + 1) = v50;
    v43 = v93;
    v94 = v93;
    v81 = v26;
    if ( (unsigned int)v26 >= (unsigned int)v95 )
    {
      v30 = v86;
      goto LABEL_73;
    }
  }
  v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45);
  v53[3] = 24735LL;
LABEL_84:
  WdLogEvent5_WdWarning(v53);
LABEL_85:
  v22 = -1073741811;
LABEL_86:
  KeReleaseSemaphore(Semaphore, 0, 1, 0);
  if ( v24 )
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'((VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)v24);
  while ( 1 )
  {
    v54 = (char *)v78;
    if ( (__int128 *)v78 == &v78 )
      return v22;
    if ( *(__int128 **)(v78 + 8) != &v78 )
      goto LABEL_135;
    v55 = *(_QWORD *)v78;
    if ( *(_QWORD *)(*(_QWORD *)v78 + 8LL) != (_QWORD)v78 )
      goto LABEL_135;
    *(_QWORD *)&v78 = *(_QWORD *)v78;
    *(_QWORD *)(v55 + 8) = &v78;
    *((_QWORD *)v54 + 1) = 0LL;
    *(_QWORD *)v54 = 0LL;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v54 - 8);
  }
}
