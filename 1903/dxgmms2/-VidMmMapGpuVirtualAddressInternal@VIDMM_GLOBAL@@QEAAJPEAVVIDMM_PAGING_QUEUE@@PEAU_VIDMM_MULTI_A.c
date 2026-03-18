/*
 * XREFs of ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C006419C
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C00640B8 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00631FC (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00645B0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0074330 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAVVIDMM_PAGING_QUEUE@@_K@Z @ 0x1C00B92DC (-RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@.c)
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
  int v11; // r11d
  D3DGPU_SIZE_T v12; // rsi
  char v13; // r13
  __int64 *v14; // rdx
  D3DGPU_SIZE_T OffsetInPages; // rax
  __int64 v16; // r10
  D3DGPU_SIZE_T v17; // rcx
  D3DGPU_SIZE_T v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // r15
  struct VIDMM_PROCESS **v23; // r15
  D3DGPU_SIZE_T v24; // r8
  __int64 v25; // rax
  __int64 v26; // rsi
  bool v27; // zf
  char v28; // al
  bool v29; // r9
  VIDMM_GLOBAL *v30; // r13
  unsigned int v31; // edi
  struct VIDMM_PAGING_QUEUE *v32; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  D3DGPU_SIZE_T SizeInPages; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // [rsp+28h] [rbp-D8h]
  D3DGPU_VIRTUAL_ADDRESS MinimumAddress; // [rsp+30h] [rbp-D0h]
  D3DGPU_VIRTUAL_ADDRESS MaximumAddress; // [rsp+38h] [rbp-C8h]
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // [rsp+48h] [rbp-B8h]
  UINT64 DriverProtection; // [rsp+50h] [rbp-B0h]
  _QWORD v44[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v45; // [rsp+80h] [rbp-80h]
  __int128 v46; // [rsp+90h] [rbp-70h]
  __int128 v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  _QWORD v50[11]; // [rsp+C0h] [rbp-40h] BYREF
  int v53; // [rsp+180h] [rbp+80h]
  struct VIDMM_VAD_PENDING_OPERATION *v54; // [rsp+188h] [rbp+88h] BYREF

  v5 = a5 != 0;
  a5 = -a5;
  v53 = *((_DWORD *)a2 + 36);
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
      v35 = WdLogNewEntry5_WdWarning(v17, v14);
      SizeInPages = a4->OffsetInPages;
      *(_QWORD *)(v35 + 32) = 19733LL;
LABEL_39:
      *(_QWORD *)(v35 + 24) = SizeInPages;
      WdLogEvent5_WdWarning(v35);
      return 3221225485LL;
    }
    v18 = v17 - OffsetInPages;
    if ( v18 < v12 >> 12 && (*((_BYTE *)v10 + 40873) & 4) == 0 )
    {
      v35 = WdLogNewEntry5_WdWarning(v18, v14);
      SizeInPages = a4->SizeInPages;
      *(_QWORD *)(v35 + 32) = 19744LL;
      goto LABEL_39;
    }
    v19 = 1LL;
    v20 = v14[1];
    if ( *(_DWORD *)(v16 + 32) > 0x1000u )
      v11 = *(_DWORD *)(v16 + 32);
  }
  else
  {
    v34 = *((_QWORD *)DXGPROCESS::GetCurrent() + 9);
    if ( v34 )
      v20 = *(_QWORD *)(v34 + 8);
    else
      v20 = 0LL;
    v19 = 0LL;
    v10 = this;
    if ( (*(_BYTE *)&a4->Protection.0 & 4) != 0 )
      v19 = 6LL;
    v11 = 4096;
  }
  if ( !v12 )
  {
    v35 = WdLogNewEntry5_WdWarning(v18, v20);
    SizeInPages = a4->SizeInPages;
    *(_QWORD *)(v35 + 32) = 19766LL;
    goto LABEL_39;
  }
  v21 = *(unsigned int *)(*((_QWORD *)v10 + 3) + 208LL);
  v22 = *(_QWORD **)(*(_QWORD *)(v20 + 16) + 8 * v21);
  if ( v22 && (v21 = *v22, *(_DWORD *)(*v22 + 40864LL)) )
  {
    if ( (*(_DWORD *)(v20 + 88) & 2) != 0 )
      v23 = *(struct VIDMM_PROCESS ***)(v21 + 0x800009D98LL);
    else
      v23 = (struct VIDMM_PROCESS **)v22[62];
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v23 )
  {
    v37 = WdLogNewEntry5_WdWarning(v21, v20);
    WdLogEvent5_WdWarning(v37);
    return 3221225495LL;
  }
  DriverProtection = a4->DriverProtection;
  Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
  MaximumAddress = a4->MaximumAddress;
  MinimumAddress = a4->MinimumAddress;
  BaseAddress = a4->BaseAddress;
  v24 = a4->OffsetInPages << 12;
  v54 = 0LL;
  v25 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _DWORD, _QWORD))CVirtualAddressAllocator::MapVirtualAddressRange)(
          v23,
          a3,
          v24,
          v19,
          v12,
          BaseAddress,
          MinimumAddress,
          MaximumAddress,
          v11,
          Value,
          DriverProtection,
          v53,
          &v54);
  v26 = v25;
  if ( !v25 )
  {
    v38 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v38 + 24) = 19797LL;
    WdLogEvent5_WdError(v38);
    return 3221225473LL;
  }
  v27 = (*(_BYTE *)&a4->Protection.0 & 8) == 0;
  a4->VirtualAddress = *(_QWORD *)(v25 + 96);
  a4->PagingFenceValue = 0LL;
  if ( v27 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v25 + 128), 1u);
    memset(v50, 0, sizeof(v50));
    v50[8] = v54;
    v50[6] = v26;
    v50[5] = v23;
    v44[1] = *((_QWORD *)a2 + 17);
    v28 = *(_DWORD *)(v26 + 64) & 0xF;
    v50[7] = 0LL;
    v44[0] = 113LL;
    v45 = 0LL;
    v49 = 0LL;
    if ( v28 == 1 )
      *(_QWORD *)&v45 = *(_QWORD *)(v26 + 56);
    v46 = *(_OWORD *)&v50[5];
    v48 = v50[9];
    LOBYTE(v48) = 1;
    v47 = *(_OWORD *)&v50[7];
    if ( v9 && dword_1C004E338 )
      v13 = 0;
    v29 = v13;
    v30 = this;
    v31 = VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v44, v29, v9);
    if ( v31 == 259 )
    {
      v32 = a2;
      if ( a3 && (*((_DWORD *)a3 + 7) & 0x20) != 0 )
      {
        a3[31] = (__int64 *)a2;
        a3[34] = (__int64 *)*v9;
      }
      goto LABEL_27;
    }
  }
  else
  {
    v30 = this;
    v31 = VIDMM_GLOBAL::UncommitVirtualAddressRange(
            this,
            (struct CVirtualAddressAllocator *)v23,
            (struct VIDMM_MAPPED_VA_RANGE *)v25,
            0,
            v54);
  }
  v32 = a2;
LABEL_27:
  if ( *((_QWORD *)v30 + 5115) )
  {
    if ( v9 )
      v8 = *v9;
    VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(v30, v23[11], (struct VIDMM_MAPPED_VA_RANGE *)v26, v32, v8);
  }
  return v31;
}
