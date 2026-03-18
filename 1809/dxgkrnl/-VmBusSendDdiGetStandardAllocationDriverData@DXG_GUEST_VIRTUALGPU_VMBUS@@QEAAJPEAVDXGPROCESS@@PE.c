/*
 * XREFs of ?VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C01F3F10
 * Callers:
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00F88FC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetStandardAllocationDriverData(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a3)
{
  UINT AllocationPrivateDriverDataSize; // r9d
  UINT ResourcePrivateDriverDataSize; // r8d
  int v7; // eax
  D3DKMDT_STANDARDALLOCATION_TYPE StandardAllocationType; // ecx
  UINT PhysicalAdapterIndex; // eax
  __int32 v10; // ecx
  __int32 v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v15; // rax
  unsigned int v16; // r14d
  int *v17; // rdi
  __int64 v19; // rcx
  int v20; // esi
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v21; // rax
  UINT v22; // eax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v23; // rcx
  UINT v24; // eax
  __int64 v25; // rax
  struct _MDL *v26; // [rsp+28h] [rbp-48h]
  __int64 v27; // [rsp+30h] [rbp-40h] BYREF
  int v28; // [rsp+38h] [rbp-38h]
  int v29; // [rsp+3Ch] [rbp-34h]
  int v30; // [rsp+40h] [rbp-30h]
  D3DKMDT_STANDARDALLOCATION_TYPE v31; // [rsp+48h] [rbp-28h]
  UINT v32; // [rsp+4Ch] [rbp-24h]
  UINT v33; // [rsp+50h] [rbp-20h]
  UINT v34; // [rsp+54h] [rbp-1Ch]
  __int128 v35; // [rsp+58h] [rbp-18h]
  __int64 v36; // [rsp+68h] [rbp-8h]
  unsigned int v37; // [rsp+A0h] [rbp+30h] BYREF

  AllocationPrivateDriverDataSize = a3->AllocationPrivateDriverDataSize;
  if ( AllocationPrivateDriverDataSize > 0x20000
    || (ResourcePrivateDriverDataSize = a3->ResourcePrivateDriverDataSize, ResourcePrivateDriverDataSize > 0x20000) )
  {
    v13 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v13 + 24) = 7453LL;
    goto LABEL_32;
  }
  v7 = *((_DWORD *)a2 + 98);
  StandardAllocationType = a3->StandardAllocationType;
  v27 = 0LL;
  v29 = 0;
  v28 = v7;
  PhysicalAdapterIndex = a3->PhysicalAdapterIndex;
  v31 = StandardAllocationType;
  v34 = PhysicalAdapterIndex;
  v30 = 39;
  v33 = ResourcePrivateDriverDataSize;
  v32 = AllocationPrivateDriverDataSize;
  v10 = StandardAllocationType - 1;
  if ( !v10 )
    goto LABEL_10;
  v11 = v10 - 1;
  if ( !v11 )
  {
    v35 = *(_OWORD *)&a3->pCreateSharedPrimarySurfaceData->Width;
    goto LABEL_11;
  }
  v12 = (unsigned int)(v11 - 1);
  if ( !(_DWORD)v12 )
  {
    pCreateSharedPrimarySurfaceData = a3->pCreateSharedPrimarySurfaceData;
    *(_QWORD *)&v35 = *(_QWORD *)&pCreateSharedPrimarySurfaceData->Width;
    DWORD2(v35) = pCreateSharedPrimarySurfaceData->Format;
LABEL_11:
    v16 = (ResourcePrivateDriverDataSize + AllocationPrivateDriverDataSize + 43) & 0xFFFFFFF8;
    v17 = (int *)operator new[](v16, 0x4B677844u, (POOL_TYPE)512);
    if ( !v17 )
      return 3221225495LL;
    v37 = v16;
    v20 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v27, 0x40u, v17, &v37, v26);
    if ( v20 < 0 || (v20 = -1073741823, v37 < v16) || (v20 = *v17, *v17 < 0) )
    {
      v25 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v25 + 24) = v20;
      WdLogEvent5_WdError(v25);
LABEL_30:
      operator delete[](v17);
      return (unsigned int)v20;
    }
    switch ( a3->StandardAllocationType )
    {
      case D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE:
        goto LABEL_20;
      case D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE:
        *(_OWORD *)&a3->pCreateSharedPrimarySurfaceData->Width = *(_OWORD *)(v17 + 3);
        break;
      case D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE:
        v23 = a3->pCreateSharedPrimarySurfaceData;
        *(_QWORD *)&v23->Width = *(_QWORD *)(v17 + 3);
        v23->Format = v17[5];
        break;
      case D3DKMDT_STANDARDALLOCATION_GDISURFACE:
LABEL_20:
        v21 = a3->pCreateSharedPrimarySurfaceData;
        *(_OWORD *)&v21->Width = *(_OWORD *)(v17 + 3);
        *(_QWORD *)&v21->RefreshRate.Denominator = *(_QWORD *)(v17 + 7);
        break;
    }
    v22 = v17[1];
    if ( v32 )
      memmove(a3->pAllocationPrivateDriverData, v17 + 9, v22);
    else
      a3->AllocationPrivateDriverDataSize = v22;
    v24 = v17[2];
    if ( v33 )
      memmove(a3->pResourcePrivateDriverData, (char *)v17 + (unsigned int)v17[1] + 36, v24);
    else
      a3->ResourcePrivateDriverDataSize = v24;
    goto LABEL_30;
  }
  if ( (_DWORD)v12 == 1 )
  {
LABEL_10:
    v15 = a3->pCreateSharedPrimarySurfaceData;
    v35 = *(_OWORD *)&v15->Width;
    v36 = *(_QWORD *)&v15->RefreshRate.Denominator;
    goto LABEL_11;
  }
  v13 = WdLogNewEntry5_WdError(v12);
  *(_QWORD *)(v13 + 24) = 7477LL;
LABEL_32:
  WdLogEvent5_WdError(v13);
  return 3221225485LL;
}
