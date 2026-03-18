/*
 * XREFs of ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00B50E0
 * Callers:
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00B53A0 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00B5508 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00B59D8 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001E74 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002900 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003750 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C005C1DC (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C005EF0C (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C005F560 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 */

struct CVirtualAddressAllocator *__fastcall VIDMM_PROCESS::GetCpuVisibleBufferAllocator(VIDMM_PROCESS *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rax
  CVirtualAddressAllocator *v6; // rax
  CVirtualAddressAllocator *v7; // r10
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  const GUID *v13; // r8
  CVirtualAddressAllocator *v14; // rcx
  _BYTE v16[40]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0LL;
  while ( 1 )
  {
    v3 = *((_QWORD *)this + 4);
    if ( (*(_BYTE *)(v3 + 299) & 8) == 0 )
      break;
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 432) + 72LL);
    if ( v4 )
      this = *(VIDMM_PROCESS **)(v4 + 8);
    else
      this = 0LL;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v16, (struct _KTHREAD **)this + 27);
  v5 = *((_QWORD *)this + 26);
  if ( v5 )
    goto LABEL_17;
  v6 = (CVirtualAddressAllocator *)operator new[](0x90uLL, 0x4B677844u, PagedPool);
  v7 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 7) = 0LL;
    *((_QWORD *)v6 + 8) = 0LL;
    *((_DWORD *)v6 + 18) = 64;
    *((_QWORD *)v6 + 11) = 0LL;
    *((_QWORD *)v6 + 12) = 0LL;
    *((_QWORD *)v6 + 13) = 0LL;
    *((_QWORD *)v6 + 14) = 0LL;
    *((_QWORD *)v6 + 16) = (char *)v6 + 120;
    *((_QWORD *)v6 + 15) = (char *)v6 + 120;
    *((_DWORD *)v6 + 34) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  *((_QWORD *)this + 26) = v7;
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 4);
    v9 = *(_BYTE *)(v8 + 299);
    if ( (v9 & 8) != 0 )
      v10 = *(_QWORD *)(v8 + 432);
    else
      v10 = v8 & -(__int64)((v9 & 4) != 0);
    v11 = CVirtualAddressAllocator::InitializeVaAllocator(v7, *(_QWORD *)(*(_QWORD *)(v10 + 432) + 176LL), 0, 0LL, 0LL);
    v14 = (CVirtualAddressAllocator *)*((_QWORD *)this + 26);
    if ( v11 < 0 )
    {
      CVirtualAddressAllocator::DestroyVaAllocator(v14, v12, v13);
      *((_QWORD *)this + 26) = 0LL;
      goto LABEL_18;
    }
    CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
      (struct _KTHREAD **)v14,
      0x1000uLL,
      (__int64)v13,
      0LL,
      0LL,
      0x1000u,
      &v17);
    v5 = *((_QWORD *)this + 26);
LABEL_17:
    v2 = v5;
  }
LABEL_18:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return (struct CVirtualAddressAllocator *)v2;
}
