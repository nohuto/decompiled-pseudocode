/*
 * XREFs of ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C00604D4
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C00603F0 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001E20 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0059008 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00592E4 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00609D8 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00767E8 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAVVIDMM_PAGING_QUEUE@@_K@Z @ 0x1C00B605C (-RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        char a5)
{
  bool v5; // cf
  unsigned __int64 v8; // rbx
  unsigned __int64 *v9; // r12
  VIDMM_GLOBAL *v10; // r8
  unsigned int v11; // r11d
  unsigned __int64 v12; // rsi
  char v13; // r13
  __int64 *v14; // rdx
  D3DGPU_SIZE_T OffsetInPages; // rax
  __int64 v16; // r10
  D3DGPU_SIZE_T v17; // rcx
  __int64 v18; // rax
  D3DGPU_SIZE_T SizeInPages; // rcx
  unsigned __int64 v21; // rcx
  unsigned int v22; // r9d
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // r14
  struct VIDMM_VAD **v27; // r14
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  bool v33; // zf
  VIDMM_GLOBAL *v34; // r13
  unsigned int v35; // edi
  struct VIDMM_PAGING_QUEUE *v36; // rcx
  bool v37; // r9
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // [rsp+28h] [rbp-D8h]
  D3DGPU_VIRTUAL_ADDRESS MinimumAddress; // [rsp+30h] [rbp-D0h]
  D3DGPU_VIRTUAL_ADDRESS MaximumAddress; // [rsp+38h] [rbp-C8h]
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // [rsp+48h] [rbp-B8h]
  UINT64 DriverProtection; // [rsp+50h] [rbp-B0h]
  _OWORD v43[15]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v46; // [rsp+180h] [rbp+80h]
  struct VIDMM_VAD_PENDING_OPERATION *v47; // [rsp+188h] [rbp+88h] BYREF

  v5 = a5 != 0;
  a5 = -a5;
  v46 = *((_DWORD *)a2 + 36);
  v8 = 0LL;
  v9 = (unsigned __int64 *)((unsigned __int64)&a4->PagingFenceValue & -(__int64)v5);
  v10 = this;
  v11 = 4096;
  v12 = a4->SizeInPages << 12;
  v13 = 1;
  if ( a3 )
  {
    if ( !a4->SizeInPages )
      v12 = *(_QWORD *)(**a3 + 16);
    if ( *((_BYTE *)a3 + 24) )
      a4->Protection.Value &= ~1uLL;
    v14 = *a3;
    OffsetInPages = a4->OffsetInPages;
    v16 = **a3;
    v17 = *(_QWORD *)(v16 + 16) >> 12;
    if ( OffsetInPages >= v17 )
    {
      v18 = WdLogNewEntry5_WdWarning(v17, v14);
      SizeInPages = a4->OffsetInPages;
      *(_QWORD *)(v18 + 32) = 19521LL;
LABEL_8:
      *(_QWORD *)(v18 + 24) = SizeInPages;
      WdLogEvent5_WdWarning(v18);
      return 3221225485LL;
    }
    v21 = v17 - OffsetInPages;
    if ( v21 < v12 >> 12 && (*((_BYTE *)v10 + 40873) & 4) == 0 )
    {
      v18 = WdLogNewEntry5_WdWarning(v21, v14);
      SizeInPages = a4->SizeInPages;
      *(_QWORD *)(v18 + 32) = 19532LL;
      goto LABEL_8;
    }
    v22 = 1;
    v23 = v14[1];
    if ( *(_DWORD *)(v16 + 32) > 0x1000u )
      v11 = *(_DWORD *)(v16 + 32);
  }
  else
  {
    v24 = *((_QWORD *)DXGPROCESS::GetCurrent() + 9);
    if ( v24 )
      v23 = *(_QWORD *)(v24 + 8);
    else
      v23 = 0LL;
    v22 = 0;
    v10 = this;
    if ( (*(_BYTE *)&a4->Protection.0 & 4) != 0 )
      v22 = 6;
    v11 = 4096;
  }
  if ( !v12 )
  {
    v18 = WdLogNewEntry5_WdWarning(v21, v23);
    SizeInPages = a4->SizeInPages;
    *(_QWORD *)(v18 + 32) = 19554LL;
    goto LABEL_8;
  }
  v25 = *(unsigned int *)(*((_QWORD *)v10 + 3) + 208LL);
  v26 = *(_QWORD **)(*(_QWORD *)(v23 + 16) + 8 * v25);
  if ( v26 && (v25 = *v26, *(_DWORD *)(*v26 + 40864LL)) )
  {
    if ( (*(_DWORD *)(v23 + 88) & 2) != 0 )
      v27 = *(struct VIDMM_VAD ***)(v25 + 0x800009D98LL);
    else
      v27 = (struct VIDMM_VAD **)v26[62];
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v27 )
  {
    v28 = WdLogNewEntry5_WdWarning(v25, v23);
    WdLogEvent5_WdWarning(v28);
    return 3221225495LL;
  }
  DriverProtection = a4->DriverProtection;
  Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
  MaximumAddress = a4->MaximumAddress;
  MinimumAddress = a4->MinimumAddress;
  BaseAddress = a4->BaseAddress;
  v29 = a4->OffsetInPages << 12;
  v47 = 0LL;
  v30 = CVirtualAddressAllocator::MapVirtualAddressRange(
          v27,
          (__int64)a3,
          v29,
          v22,
          v12,
          BaseAddress,
          MinimumAddress,
          MaximumAddress,
          v11,
          (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)Value,
          DriverProtection,
          v46,
          (void **)&v47,
          1);
  v31 = v30;
  if ( !v30 )
  {
    v32 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v32 + 24) = 19586LL;
    WdLogEvent5_WdError(v32);
    return 3221225473LL;
  }
  v33 = (*(_BYTE *)&a4->Protection.0 & 8) == 0;
  a4->VirtualAddress = *(_QWORD *)(v30 + 96);
  a4->PagingFenceValue = 0LL;
  if ( v33 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v30 + 128), 1u);
    memset(&v43[5], 0, 0x58uLL);
    v43[8] = (unsigned __int64)v31;
    *((_QWORD *)&v43[7] + 1) = v27;
    *(_QWORD *)&v43[9] = v47;
    memset(v43, 0, 0x50uLL);
    LODWORD(v43[0]) = 113;
    *((_QWORD *)&v43[0] + 1) = *((_QWORD *)a2 + 17);
    if ( (*(_DWORD *)(v31 + 64) & 0xF) == 1 )
      *(_QWORD *)&v43[1] = *(_QWORD *)(v31 + 56);
    v43[2] = *(_OWORD *)((char *)&v43[7] + 8);
    *(_QWORD *)&v43[4] = *((_QWORD *)&v43[9] + 1);
    LOBYTE(v43[4]) = 1;
    v43[3] = *(_OWORD *)((char *)&v43[8] + 8);
    if ( v9 && dword_1C004D338 )
      v13 = 0;
    v37 = v13;
    v34 = this;
    v35 = VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v43, v37, v9);
    if ( v35 == 259 )
    {
      v36 = a2;
      if ( a3 && (*((_DWORD *)a3 + 7) & 0x20) != 0 )
      {
        a3[31] = (__int64 *)a2;
        a3[34] = (__int64 *)*v9;
      }
      goto LABEL_36;
    }
  }
  else
  {
    v34 = this;
    v35 = VIDMM_GLOBAL::UncommitVirtualAddressRange(
            this,
            (struct CVirtualAddressAllocator *)v27,
            (struct VIDMM_MAPPED_VA_RANGE *)v30,
            0,
            v47);
  }
  v36 = a2;
LABEL_36:
  if ( *((_QWORD *)v34 + 5115) )
  {
    if ( v9 )
      v8 = *v9;
    VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(v34, v27[11], (struct VIDMM_MAPPED_VA_RANGE *)v31, v36, v8);
  }
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((volatile signed __int32 *)v31, v27);
  return v35;
}
