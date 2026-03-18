/*
 * XREFs of ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00B203C
 * Callers:
 *     VidMmUpdateGpuVirtualAddress @ 0x1C0024DD0 (VidMmUpdateGpuVirtualAddress.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001E74 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002474 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002900 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003750 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchWaitForSingleSyncObject @ 0x1C0003C30 (VidSchWaitForSingleSyncObject.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0017734 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C0024F2C (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     VidSchSubmitGlobalCommand @ 0x1C007D2AC (VidSchSubmitGlobalCommand.c)
 *     ?IsRangeValid@@YAE_K00@Z @ 0x1C00ACEB0 (-IsRangeValid@@YAE_K00@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C00B9418 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00B959C (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 *     ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1C00B9CC0 (-ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z.c)
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
  struct VIDMM_COMPANION_CONTEXT *v7; // r12
  unsigned __int64 DriverProtection; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rsi
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  VIDMM_GLOBAL *v16; // r10
  _QWORD *v17; // rdi
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  UINT v21; // r14d
  unsigned __int64 BaseAddress; // r15
  unsigned __int64 v23; // rbx
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v24; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  PVOID v28; // r10
  __int64 v29; // rax
  _QWORD *v30; // rax
  struct _VIDMM_MULTI_ALLOC **v31; // rcx
  struct VIDMM_ALLOC *v32; // rbx
  D3DGPU_SIZE_T AllocationSizeInBytes; // r8
  unsigned __int64 AllocationOffsetInBytes; // r11
  D3DGPU_SIZE_T SizeInBytes; // r12
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 Value; // rbx
  PVOID v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rcx
  _QWORD *v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  struct VIDMM_VAD *v57; // rbx
  struct VIDMM_VAD *v58; // r8
  __int64 v59; // rax
  volatile signed __int32 *v60; // rax
  __int64 v61; // rcx
  char *v62; // rcx
  struct VIDMM_VAD *v63; // rax
  struct VIDMM_VAD **v64; // rdx
  char **v65; // rdx
  __int128 *i; // rcx
  bool v67; // zf
  __int64 v68; // rdx
  char *v69; // rcx
  unsigned int j; // r9d
  __int64 v71; // rax
  char v72; // [rsp+68h] [rbp-A0h]
  __int128 v73; // [rsp+70h] [rbp-98h] BYREF
  int v74; // [rsp+80h] [rbp-88h]
  int v75; // [rsp+84h] [rbp-84h]
  int v76; // [rsp+88h] [rbp-80h]
  unsigned __int64 v77; // [rsp+90h] [rbp-78h]
  __int64 v78; // [rsp+98h] [rbp-70h]
  unsigned __int64 v79; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v80; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v81; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v82; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v83; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v84; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v85; // [rsp+D0h] [rbp-38h]
  D3DGPU_SIZE_T v86; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v87; // [rsp+E0h] [rbp-28h]
  __int64 v88; // [rsp+E8h] [rbp-20h]
  union _LARGE_INTEGER Timeout; // [rsp+F0h] [rbp-18h] BYREF
  struct VIDMM_ALLOC *v90; // [rsp+F8h] [rbp-10h]
  PRKSEMAPHORE Semaphore; // [rsp+100h] [rbp-8h]
  struct VIDMM_VAD *v92; // [rsp+108h] [rbp+0h]
  _BYTE v93[24]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v94[24]; // [rsp+128h] [rbp+20h] BYREF
  bool v98; // [rsp+228h] [rbp+120h]

  Timeout.QuadPart = 0LL;
  v7 = a3;
  Semaphore = (PRKSEMAPHORE)((char *)a3 + 24);
  *a7 = (struct _KSEMAPHORE *)((char *)a3 + 24);
  if ( KeWaitForSingleObject((char *)a3 + 24, Executive, 0, 0, &Timeout) == 258 )
  {
    v11 = WdLogNewEntry5_WdWarning(v10, DriverProtection);
    WdLogEvent5_WdWarning(v11);
    return 3223191810LL;
  }
  v13 = *(_QWORD *)v7;
  v14 = *((_QWORD *)v7 + 1);
  v15 = -1LL;
  v16 = this;
  v17 = 0LL;
  v78 = v13;
  v18 = 0LL;
  v19 = *(_QWORD *)(v13 + 16);
  v20 = *(_QWORD *)(v14 + 96);
  v77 = v19;
  v76 = -1073741811;
  v92 = 0LL;
  v74 = *(unsigned __int16 *)(v20 + 6);
  *((_QWORD *)&v73 + 1) = &v73;
  *(_QWORD *)&v73 = &v73;
  v79 = -1LL;
  v80 = 0LL;
  v83 = -1LL;
  v82 = 0LL;
  v72 = 0;
  if ( *((_QWORD *)this + 5115) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      this,
      1u,
      *(struct VIDMM_PROCESS **)(v13 + 88),
      (struct _VIDSCH_CONTEXT *)v14,
      a2->NumOperations,
      a6,
      a2->FenceValue);
    v16 = this;
    v19 = v77;
  }
  v21 = 0;
  if ( !a2->NumOperations )
  {
LABEL_78:
    if ( (a2->Flags.Value & 1) == 0 )
    {
      *((_BYTE *)a6 + 25) = 0;
      v76 = VidSchWaitForSingleSyncObject(*((_QWORD *)v7 + 1), (__int64)a6, a2->FenceValue);
      if ( v76 < 0 )
      {
        v51 = WdLogNewEntry5_WdAssertion(v50, v49);
        *(_QWORD *)(v51 + 24) = 25095LL;
        WdLogEvent5_WdAssertion(v51);
        goto LABEL_99;
      }
    }
    v52 = operator new[](0xB8uLL, 0x39346956u, PagedPool);
    v17 = v52;
    if ( v52 )
    {
      memset(v52, 0, 0xB8uLL);
      v17[13] = v17 + 12;
      v17[12] = v17 + 12;
      v17[7] = v17 + 6;
      v17[6] = v17 + 6;
    }
    else
    {
      v17 = 0LL;
    }
    if ( !v17 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v54, v53);
      goto LABEL_89;
    }
    v17[1] = this;
    *((_DWORD *)v17 + 5) = a2->NumOperations;
    v17[10] = a2->FenceValue + 1;
    *((_DWORD *)v17 + 4) = v74;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v93, (struct _KTHREAD **)(v13 + 56));
    v57 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v13, v15, v18);
    if ( !v57 )
      goto LABEL_98;
    if ( v72 )
    {
      v58 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v13, v83, v82);
      if ( !v58 )
      {
LABEL_98:
        v59 = WdLogNewEntry5_WdWarning(v56, v55);
        WdLogEvent5_WdWarning(v59);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v93);
        goto LABEL_99;
      }
    }
    else
    {
      v58 = v92;
    }
    v17[14] = v57;
    v17[18] = v17 + 14;
    v62 = (char *)v57 + 80;
    v17[15] = v58;
    v17[21] = v17 + 15;
    v63 = (struct VIDMM_VAD *)(v17 + 16);
    v64 = (struct VIDMM_VAD **)*((_QWORD *)v57 + 11);
    if ( *v64 != (struct VIDMM_VAD *)((char *)v57 + 80) )
      goto LABEL_123;
    *(_QWORD *)v63 = v62;
    v17[17] = v64;
    *v64 = v63;
    *((_QWORD *)v57 + 11) = v63;
    if ( v58 )
    {
      v65 = (char **)(v17 + 19);
      if ( *(char **)v63 != v62 )
        goto LABEL_123;
      *v65 = v62;
      v17[20] = v63;
      *(_QWORD *)v63 = v65;
      *((_QWORD *)v57 + 11) = v65;
      *((_BYTE *)v17 + 176) = 1;
    }
    for ( i = (__int128 *)v73; i != &v73; i = *(__int128 **)i )
    {
      v67 = *((_QWORD *)i + 9) == 0LL;
      *((_QWORD *)i - 1) = v57;
      if ( v67 )
      {
        v68 = *((_QWORD *)v57 + 12);
        if ( (struct VIDMM_VAD *)v68 != (struct VIDMM_VAD *)((char *)v57 + 96) )
          *((_QWORD *)i + 9) = *(_QWORD *)(v68 + 72);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v93);
    v69 = (char *)(v17 + 12);
    v17[8] = a5;
    *((_DWORD *)v17 + 8) = a4;
    v17[3] = a2->Operations;
    a2->Operations = 0LL;
    v17[9] = a6;
    v17[11] = v7;
    *v17 = *((_QWORD *)v7 + 1);
    if ( (__int128 *)v73 == &v73 )
    {
      v17[13] = v17 + 12;
      *(_QWORD *)v69 = v69;
    }
    else
    {
      *(_OWORD *)v69 = v73;
      *(_QWORD *)(*(_QWORD *)v69 + 8LL) = v69;
      *(_QWORD *)v17[13] = v69;
    }
    *((_QWORD *)&v73 + 1) = &v73;
    *(_QWORD *)&v73 = &v73;
    _InterlockedIncrement((volatile signed __int32 *)a6 + 8);
    for ( j = 0; j < *((_DWORD *)v17 + 8); ++j )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17[8] + 8LL * j) + 160LL));
    memset(v94, 0, 0x88uLL);
    v94[6] = v17;
    LODWORD(v94[5]) = 2;
    LODWORD(v94[0]) = 2;
    v94[3] = VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress;
    v71 = *((_QWORD *)v7 + 1);
    v94[4] = 0LL;
    VidSchSubmitGlobalCommand(*(_QWORD *)(*(_QWORD *)(v71 + 104) + 32LL), (__int64)v94);
    return 0LL;
  }
  BaseAddress = (unsigned __int64)a3;
  v23 = v81;
  while ( 1 )
  {
    v24 = &a2->Operations[(unsigned __int64)v21];
    OperationType = v24->OperationType;
    if ( v24->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
      || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
    {
      break;
    }
    if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
    {
      BaseAddress = v24->Map.BaseAddress;
      v23 = BaseAddress + v24->Map.SizeInBytes;
      if ( *((_QWORD *)v16 + 5115) )
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
          v16,
          *(struct VIDMM_PROCESS **)(v78 + 88),
          *((struct _VIDSCH_CONTEXT **)v7 + 1),
          0LL,
          &a2->Operations[(unsigned __int64)v21]);
      if ( !IsRangeValid(BaseAddress, v23, v77) )
        goto LABEL_99;
      v28 = operator new[](0x88uLL, 0x39346956u, PagedPool);
      if ( v28 )
        v29 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                (__int64)v28,
                0LL,
                BaseAddress,
                v23,
                v74,
                0LL,
                0LL,
                (v24->Copy.DestAddress & 8) != 0 ? 0 : 6,
                v24->Unmap.Protection.Value,
                0LL,
                0LL,
                0LL);
      else
        v29 = 0LL;
      if ( !v29 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26);
        v48[3] = 25011LL;
        goto LABEL_89;
      }
      v19 = *((_QWORD *)&v73 + 1);
      v30 = (_QWORD *)(v29 + 8);
      if ( **((__int128 ***)&v73 + 1) == &v73 )
      {
        v30[1] = *((_QWORD *)&v73 + 1);
        DriverProtection = (unsigned __int64)&v73;
        *v30 = &v73;
        *(_QWORD *)v19 = v30;
        *((_QWORD *)&v73 + 1) = v30;
        goto LABEL_62;
      }
LABEL_123:
      __fastfail(3u);
    }
    if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
    {
      BaseAddress = v24->Unmap.Protection.Value;
      v23 = BaseAddress + v24->Map.SizeInBytes;
      if ( *((_QWORD *)v16 + 5115) )
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
          v16,
          *(struct VIDMM_PROCESS **)(v78 + 88),
          *((struct _VIDSCH_CONTEXT **)v7 + 1),
          0LL,
          &a2->Operations[(unsigned __int64)v21]);
      if ( !IsRangeValid(BaseAddress, v23, v77) )
        goto LABEL_99;
      v19 = v24->Map.BaseAddress;
      DriverProtection = v19 + v24->Map.SizeInBytes;
      if ( DriverProtection <= v19 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, DriverProtection);
        v48[4] = 25036LL;
        goto LABEL_88;
      }
      if ( (v19 & 0xFFF) != 0 || (DriverProtection & 0xFFF) != 0 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, DriverProtection);
        v48[4] = 25041LL;
        goto LABEL_88;
      }
      if ( BaseAddress < DriverProtection && v23 > v19 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, DriverProtection);
        v48[4] = 25047LL;
        goto LABEL_88;
      }
      v72 = 1;
      if ( v83 <= v19 )
        v19 = v83;
      v83 = v19;
      if ( v82 >= DriverProtection )
        DriverProtection = v82;
      v82 = DriverProtection;
LABEL_62:
      v16 = this;
    }
LABEL_63:
    if ( v23 <= BaseAddress )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, DriverProtection);
      v48[4] = 25067LL;
      goto LABEL_88;
    }
    if ( ((BaseAddress | v23) & 0xFFF) != 0 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, DriverProtection);
      v48[4] = 25072LL;
      goto LABEL_88;
    }
    v46 = BaseAddress;
    v47 = v23;
    if ( v79 <= BaseAddress )
      v46 = v79;
    v79 = v46;
    if ( v80 >= v23 )
      v47 = v80;
    ++v21;
    v80 = v47;
    if ( v21 >= a2->NumOperations )
    {
      v13 = v78;
      v15 = v46;
      v18 = v47;
      goto LABEL_78;
    }
    v19 = v77;
  }
  BaseAddress = v24->Map.BaseAddress;
  v81 = BaseAddress + v24->Map.SizeInBytes;
  if ( !IsRangeValid(BaseAddress, v81, v19) )
    goto LABEL_99;
  v31 = a5;
  v16 = this;
  v32 = a5[v24->Map.hAllocation];
  v90 = v32;
  if ( *((_QWORD *)this + 5115) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
      this,
      *(struct VIDMM_PROCESS **)(v78 + 88),
      *((struct _VIDSCH_CONTEXT **)v7 + 1),
      v32,
      v24);
    v16 = this;
  }
  AllocationSizeInBytes = v24->Map.AllocationSizeInBytes;
  if ( (AllocationSizeInBytes & 0xFFF) != 0
    || (AllocationOffsetInBytes = v24->Map.AllocationOffsetInBytes,
        v84 = AllocationOffsetInBytes,
        (AllocationOffsetInBytes & 0xFFF) != 0) )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, DriverProtection);
    v48[4] = 24886LL;
    goto LABEL_88;
  }
  SizeInBytes = v24->Map.SizeInBytes;
  if ( AllocationSizeInBytes )
  {
    if ( AllocationSizeInBytes > SizeInBytes )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, DriverProtection);
    }
    else
    {
      DriverProtection = SizeInBytes % AllocationSizeInBytes;
      if ( !(SizeInBytes % AllocationSizeInBytes) )
        goto LABEL_42;
      v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, DriverProtection);
      v48[4] = 24909LL;
    }
LABEL_88:
    v48[3] = v21;
    goto LABEL_89;
  }
  v24->Map.AllocationSizeInBytes = SizeInBytes;
  AllocationSizeInBytes = SizeInBytes;
LABEL_42:
  if ( AllocationSizeInBytes + AllocationOffsetInBytes < AllocationOffsetInBytes
    || (v31 = *(struct _VIDMM_MULTI_ALLOC ***)v32,
        DriverProtection = **(_QWORD **)v32,
        AllocationSizeInBytes + AllocationOffsetInBytes > *(_QWORD *)(DriverProtection + 16)) )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, DriverProtection);
    v48[3] = *(_QWORD *)(**(_QWORD **)v32 + 16LL);
    v48[4] = v21;
    v48[5] = 24920LL;
    goto LABEL_89;
  }
  if ( (*((_BYTE *)v16 + 40873) & 4) != 0 )
  {
    v19 = 1LL;
    v88 = 1LL;
    v98 = SizeInBytes != AllocationSizeInBytes;
  }
  else
  {
    v36 = SizeInBytes / AllocationSizeInBytes;
    DriverProtection = SizeInBytes % AllocationSizeInBytes;
    SizeInBytes = AllocationSizeInBytes;
    v19 = v36;
    v88 = v36;
    v98 = 0;
    v84 = 0LL;
  }
  if ( v19 >= 0xFFFFFFFF )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, DriverProtection);
    v48[4] = 24943LL;
    goto LABEL_88;
  }
  v37 = BaseAddress;
  v85 = 0LL;
  v87 = BaseAddress;
  if ( v24->OperationType )
  {
    DriverProtection = v24->MapProtect.DriverProtection;
    Value = v24->MapProtect.Protection.Value;
    v85 = DriverProtection;
  }
  else
  {
    Value = 1LL;
  }
  v75 = 0;
  if ( !(_DWORD)v19 )
  {
    v23 = v81;
    v7 = a3;
    goto LABEL_63;
  }
  while ( 1 )
  {
    v86 = SizeInBytes + v37;
    v39 = operator new[](0x88uLL, 0x39346956u, PagedPool);
    if ( v39 )
    {
      v42 = v98 ? v24->Map.AllocationSizeInBytes >> 12 : 0LL;
      v43 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
              (__int64)v39,
              0LL,
              v87,
              v86,
              v74,
              (__int64)v90,
              v24->Map.AllocationOffsetInBytes,
              1,
              Value,
              v85,
              v42,
              v84);
    }
    else
    {
      v43 = 0LL;
    }
    if ( !v43 )
      break;
    v44 = (_QWORD *)*((_QWORD *)&v73 + 1);
    v45 = (_QWORD *)(v43 + 8);
    if ( **((__int128 ***)&v73 + 1) != &v73 )
      goto LABEL_123;
    v45[1] = *((_QWORD *)&v73 + 1);
    DriverProtection = (unsigned __int64)&v73;
    *v45 = &v73;
    *v44 = v45;
    v19 = (unsigned int)(v75 + 1);
    *((_QWORD *)&v73 + 1) = v45;
    v37 = v86;
    v87 = v86;
    v75 = v19;
    if ( (unsigned int)v19 >= (unsigned int)v88 )
    {
      v23 = v81;
      v7 = a3;
      goto LABEL_62;
    }
  }
  v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40);
  v48[3] = 24975LL;
LABEL_89:
  WdLogEvent5_WdWarning(v48);
LABEL_99:
  KeReleaseSemaphore(Semaphore, 0, 1, 0);
  if ( v17 )
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'((VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)v17);
  while ( 1 )
  {
    v60 = (volatile signed __int32 *)v73;
    if ( (__int128 *)v73 == &v73 )
      return (unsigned int)v76;
    if ( *(__int128 **)(v73 + 8) != &v73 )
      goto LABEL_123;
    v61 = *(_QWORD *)v73;
    if ( *(_QWORD *)(*(_QWORD *)v73 + 8LL) != (_QWORD)v73 )
      goto LABEL_123;
    *(_QWORD *)&v73 = *(_QWORD *)v73;
    *(_QWORD *)(v61 + 8) = &v73;
    *((_QWORD *)v60 + 1) = 0LL;
    *(_QWORD *)v60 = 0LL;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v60 - 2);
  }
}
