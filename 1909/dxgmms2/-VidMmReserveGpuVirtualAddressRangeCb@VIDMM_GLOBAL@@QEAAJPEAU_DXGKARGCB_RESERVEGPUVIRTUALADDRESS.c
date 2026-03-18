/*
 * XREFs of ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C005EBE8
 * Callers:
 *     VidMmReserveGpuVirtualAddressRangeCb @ 0x1C0001590 (VidMmReserveGpuVirtualAddressRangeCb.c)
 * Callees:
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C005ED74 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0062B94 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006C068 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddressRangeCb(
        VIDMM_GLOBAL *this,
        struct _DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE *a2)
{
  struct _DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE *v2; // rbx
  __int64 Alignment; // rcx
  UINT64 v5; // rcx
  __int64 v6; // rax
  UINT64 v7; // rcx
  unsigned int v8; // r10d
  VIDMM_PROCESS *v9; // r15
  unsigned int v10; // ebp
  unsigned int v11; // esi
  __int64 v12; // r14
  CVirtualAddressAllocator *VirtualAddressAllocator; // r11
  __int64 result; // rax
  UINT64 BaseAddress; // rax
  UINT64 SizeInBytes; // rax
  __int64 v17; // rax

  v2 = a2;
  LOBYTE(a2) = *((_BYTE *)this + 40872);
  if ( ((unsigned __int8)a2 & 2) == 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v17 + 24) = 21232LL;
    goto LABEL_34;
  }
  Alignment = v2->Alignment;
  if ( !(_DWORD)Alignment || (((_DWORD)Alignment - 1) & (unsigned int)Alignment) != 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(Alignment, a2);
    *(_QWORD *)(v17 + 24) = 21238LL;
    goto LABEL_34;
  }
  if ( (v2->Flags & 1) != 0 )
  {
    BaseAddress = v2->BaseAddress;
    if ( BaseAddress && (BaseAddress & 0xFFF) != 0 )
    {
      v17 = WdLogNewEntry5_WdAssertion(4095LL, a2);
      *(_QWORD *)(v17 + 24) = 21261LL;
    }
    else
    {
      SizeInBytes = v2->SizeInBytes;
      if ( SizeInBytes && (SizeInBytes & 0xFFF) == 0 )
        goto LABEL_9;
      v17 = WdLogNewEntry5_WdAssertion(4095LL, a2);
      *(_QWORD *)(v17 + 24) = 21267LL;
    }
LABEL_34:
    WdLogEvent5_WdAssertion(v17);
    return 3221225485LL;
  }
  v5 = v2->BaseAddress;
  v6 = (1LL << *((_DWORD *)this + 10217) << 12) - 1;
  if ( v5 && (v5 & v6) != 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v5, a2);
    *(_QWORD *)(v17 + 24) = 21247LL;
    goto LABEL_34;
  }
  v7 = v2->SizeInBytes;
  if ( !v7 || (v7 & v6) != 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7, a2);
    *(_QWORD *)(v17 + 24) = 21253LL;
    goto LABEL_34;
  }
LABEL_9:
  v8 = 0;
  v9 = (VIDMM_PROCESS *)*((_QWORD *)v2->hDxgkProcess + 1);
  v10 = 1;
  if ( *(_BYTE *)(*((_QWORD *)v2->hDxgkProcess + 4) + 297LL) )
  {
    if ( ((unsigned __int8)a2 & 0x20) == 0 )
    {
      result = VIDMM_PROCESS::OpenAdapter(*((VIDMM_PROCESS **)v2->hDxgkProcess + 1), this);
      v8 = result;
      if ( (int)result < 0 )
        return result;
      *((_BYTE *)this + 40872) |= 0x20u;
    }
    v10 = *((_DWORD *)this + 1748);
  }
  v11 = 0;
  if ( v10 )
  {
    v12 = 0LL;
    do
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  v9,
                                  *(_DWORD *)(*((_QWORD *)this + 3) + 208LL),
                                  v11);
      if ( VirtualAddressAllocator )
      {
        v8 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
               VirtualAddressAllocator,
               v2->SizeInBytes,
               v2->BaseAddress,
               0LL,
               0LL,
               v2->Alignment,
               D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_COMMIT,
               0LL,
               (*(_BYTE *)&v2->0 & 1) == 0,
               &v2->StartVirtualAddress,
               0LL,
               0);
      }
      else if ( (*(_BYTE *)(*((_QWORD *)this + 5023) + v12 + 436) & 1) != 0 )
      {
        return 3221225485LL;
      }
      ++v11;
      v12 += 1560LL;
    }
    while ( v11 < v10 );
  }
  return v8;
}
