/*
 * XREFs of ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0081928
 * Callers:
 *     VidMmReserveGpuVirtualAddress @ 0x1C00181F0 (VidMmReserveGpuVirtualAddress.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00183C0 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C006C650 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C006CE8C (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0071FF8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00B4CF0 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a4)
{
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // r11
  __int64 v9; // rdx
  __int64 v10; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  __int64 v12; // r8
  int v13; // r9d
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r11
  D3DGPU_VIRTUAL_ADDRESS MinimumAddress; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v21; // rax
  __int64 v22; // rax
  D3DGPU_VIRTUAL_ADDRESS Size; // rcx
  __int64 v24; // rax
  _QWORD *v25; // r14
  unsigned int v26; // ecx
  void *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  D3DGPU_VIRTUAL_ADDRESS MaximumAddress; // [rsp+20h] [rbp-78h]
  unsigned int v32; // [rsp+28h] [rbp-70h]
  enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE ReservationType; // [rsp+30h] [rbp-68h]
  struct VIDMM_VAD_PENDING_OPERATION *DriverProtection; // [rsp+38h] [rbp-60h]
  D3DGPU_VIRTUAL_ADDRESS VirtualAddress; // [rsp+60h] [rbp-38h]
  D3DGPU_SIZE_T v36; // [rsp+68h] [rbp-30h]
  struct VIDMM_MAPPED_VA_RANGE *v37; // [rsp+A0h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 40872) & 2) == 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(this, a2);
    WdLogEvent5_WdWarning(v21);
    return 3221225485LL;
  }
  BaseAddress = a4->BaseAddress;
  a4->PagingFenceValue = 0LL;
  if ( (BaseAddress & 0xFFF) != 0 )
  {
    v22 = WdLogNewEntry5_WdError(this, a2, a3);
    Size = a4->BaseAddress;
LABEL_12:
    *(_QWORD *)(v22 + 24) = Size;
LABEL_13:
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  if ( (a4->Size & 0xFFF) != 0 )
  {
    v22 = WdLogNewEntry5_WdError(this, a2, a3);
    Size = a4->Size;
    goto LABEL_12;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 208LL),
                              0xFFFFFFFF);
  if ( !VirtualAddressAllocator )
  {
    v22 = WdLogNewEntry5_WdError(v10, v9, v12);
    *(_QWORD *)(v22 + 24) = 19797LL;
    goto LABEL_13;
  }
  if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) >= 2400
    && (*((_BYTE *)this + 40872) & 1) != 0
    && *((_DWORD *)this + 10216) >= 0x28u
    && !(v14 % (unsigned int)(4096 << *((_DWORD *)this + 10217))) )
  {
    v13 = 4096 << *((_DWORD *)this + 10217);
  }
  DriverProtection = (struct VIDMM_VAD_PENDING_OPERATION *)a4->DriverProtection;
  ReservationType = a4->ReservationType;
  v32 = v13;
  MinimumAddress = a4->MinimumAddress;
  MaximumAddress = a4->MaximumAddress;
  v37 = 0LL;
  v19 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
          VirtualAddressAllocator,
          v14,
          v15,
          MinimumAddress,
          MaximumAddress,
          v32,
          ReservationType,
          (unsigned __int64)DriverProtection,
          0,
          &a4->VirtualAddress,
          &v37,
          1u);
  if ( v19 < 0 )
  {
    v24 = WdLogNewEntry5_WdWarning(v18, v17);
    WdLogEvent5_WdWarning(v24);
  }
  else
  {
    v36 = a4->Size;
    VirtualAddress = a4->VirtualAddress;
    if ( *((_QWORD *)this + 5115) )
    {
      v25 = operator new[](0x20uLL, 0x32356956u, PagedPool);
      if ( v25 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
        *((_QWORD *)this + 5118) = KeGetCurrentThread();
        v26 = *((_DWORD *)this + 10232);
        if ( v26 == dword_1C004D32C )
        {
          *((_DWORD *)this + 10232) = 0;
          v26 = 0;
        }
        v27 = *(void **)(*((_QWORD *)this + 5115) + 24LL * v26 + 16);
        if ( v27 )
          operator delete(v27);
        *v25 = *(_QWORD *)a2;
        v25[1] = *((_QWORD *)a2 + 4);
        v25[2] = VirtualAddress;
        v25[3] = v36;
        *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v25;
        *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 16;
        *((_QWORD *)this + 5118) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( a4->Reserved0 == 1 )
    {
      v19 = VIDMM_GLOBAL::CommitVirtualAddressRange(this, VirtualAddressAllocator, a3, v37, 0, 0LL, 0LL, 0LL);
      if ( v19 < 0 )
      {
        v30 = WdLogNewEntry5_WdWarning(v29, v28);
        WdLogEvent5_WdWarning(v30);
        CVirtualAddressAllocator::FreeVirtualAddressRange(VirtualAddressAllocator, a4->BaseAddress);
      }
    }
  }
  return (unsigned int)v19;
}
