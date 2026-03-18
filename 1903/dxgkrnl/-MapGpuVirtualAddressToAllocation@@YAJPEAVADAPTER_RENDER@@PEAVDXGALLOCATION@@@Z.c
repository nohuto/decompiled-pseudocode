/*
 * XREFs of ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C020CD98
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C020B720 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C020BAE0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C00F0D90 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0225220 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 */

__int64 __fastcall MapGpuVirtualAddressToAllocation(struct ADAPTER_RENDER *a1, struct DXGALLOCATION *a2)
{
  DXGADAPTER *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r15
  int v9; // r14d
  int v10; // ebp
  __int64 v11; // rsi
  struct DXGPROCESS *Current; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  struct DXGPROCESS *v19; // rax
  int v20; // eax
  __int64 v21; // rax
  unsigned int v23; // [rsp+20h] [rbp-C8h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v24; // [rsp+40h] [rbp-A8h] BYREF

  memset(&v24, 0, sizeof(v24));
  v4 = (DXGADAPTER *)*((_QWORD *)a1 + 2);
  v24.Protection.Value = 1LL;
  if ( DXGADAPTER::ReplicateGdiContent(v4) )
  {
    v8 = *((_QWORD *)a2 + 5);
    v9 = 0;
    v10 = 0;
    v11 = *(_QWORD *)(v8 + 24);
    while ( v11 )
    {
      if ( *(_BYTE *)(*((_QWORD *)a1 + 2) + 185LL) )
      {
        Current = DXGPROCESS::GetCurrent(v6, v5);
        v13 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4144LL),
                *((_DWORD *)Current + 92),
                *(const struct DXGDEVICE **)(v8 + 8),
                0,
                *(_DWORD *)(v11 + 96),
                &v24);
      }
      else
      {
        LOBYTE(v23) = 0;
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, unsigned int, int))(*(_QWORD *)(*((_QWORD *)a1 + 68) + 8LL) + 792LL))(
                *((_QWORD *)a1 + 69),
                0LL,
                *(_QWORD *)(v11 + 24),
                &v24,
                v23,
                (*(_DWORD *)(v11 + 72) >> 12) & 0x3F);
      }
      v16 = v13;
      if ( v13 < 0 )
        goto LABEL_18;
      v24.BaseAddress = v24.VirtualAddress;
      v6 = (*(_DWORD *)(v11 + 72) >> 12) & 0x3F;
      v5 = (unsigned int)(1 << ((*(_DWORD *)(v11 + 72) >> 12) & 0x3F));
      if ( ((unsigned int)v5 & v9) != 0 )
      {
        v17 = WdLogNewEntry5_WdError(v6, v5, v7);
        *(_QWORD *)(v17 + 24) = 1655LL;
        goto LABEL_13;
      }
      v11 = *(_QWORD *)(v11 + 64);
      v9 |= v5;
      ++v10;
    }
    if ( v10 == *(_DWORD *)(*((_QWORD *)a1 + 2) + 256LL) )
      return 0LL;
    v17 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v17 + 24) = 1664LL;
LABEL_13:
    WdLogEvent5_WdError(v17);
    return (unsigned int)-1073741811;
  }
  v18 = *((_QWORD *)a1 + 2);
  if ( *(_BYTE *)(v18 + 185) )
  {
    v19 = DXGPROCESS::GetCurrent(v6, v5);
    v20 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4144LL),
            *((_DWORD *)v19 + 92),
            *(const struct DXGDEVICE **)(*((_QWORD *)a2 + 5) + 8LL),
            0,
            *((_DWORD *)a2 + 24),
            &v24);
  }
  else
  {
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, _BYTE, _DWORD))(*(_QWORD *)(*((_QWORD *)a1 + 68) + 8LL) + 792LL))(
            *((_QWORD *)a1 + 69),
            0LL,
            *((_QWORD *)a2 + 3),
            &v24,
            0,
            *(_DWORD *)(v18 + 2580));
  }
  v16 = v20;
  if ( v20 < 0 )
  {
LABEL_18:
    v21 = WdLogNewEntry5_WdWarning(v15, v14, v7);
    *(_QWORD *)(v21 + 24) = v16;
    WdLogEvent5_WdWarning(v21);
    return (unsigned int)v16;
  }
  return 0LL;
}
