/*
 * XREFs of ?VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0223C40
 * Callers:
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00F09AC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C022769C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetStandardAllocationDriverData(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a3)
{
  UINT AllocationPrivateDriverDataSize; // r9d
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *v4; // rbx
  int v6; // eax
  D3DKMDT_STANDARDALLOCATION_TYPE StandardAllocationType; // ecx
  UINT PhysicalAdapterIndex; // eax
  __int32 v9; // ecx
  __int32 v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v14; // rax
  unsigned int v15; // r14d
  int *v16; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // r8
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v22; // rax
  UINT v23; // eax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v24; // rcx
  UINT v25; // eax
  __int64 v26; // rax
  struct _MDL *v27; // [rsp+28h] [rbp-48h]
  __int64 v28; // [rsp+30h] [rbp-40h] BYREF
  int v29; // [rsp+38h] [rbp-38h]
  int v30; // [rsp+3Ch] [rbp-34h]
  int v31; // [rsp+40h] [rbp-30h]
  D3DKMDT_STANDARDALLOCATION_TYPE v32; // [rsp+48h] [rbp-28h]
  UINT v33; // [rsp+4Ch] [rbp-24h]
  int v34; // [rsp+50h] [rbp-20h]
  UINT v35; // [rsp+54h] [rbp-1Ch]
  __int128 v36; // [rsp+58h] [rbp-18h]
  __int64 v37; // [rsp+68h] [rbp-8h]
  unsigned int v38; // [rsp+A0h] [rbp+30h] BYREF

  AllocationPrivateDriverDataSize = a3->AllocationPrivateDriverDataSize;
  v4 = a3;
  if ( AllocationPrivateDriverDataSize > 0x20000
    || (a3 = (struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *)a3->ResourcePrivateDriverDataSize,
        (unsigned int)a3 > 0x20000) )
  {
    v12 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v12 + 24) = 7419LL;
    goto LABEL_32;
  }
  v6 = *((_DWORD *)a2 + 92);
  StandardAllocationType = v4->StandardAllocationType;
  v28 = 0LL;
  v30 = 0;
  v29 = v6;
  PhysicalAdapterIndex = v4->PhysicalAdapterIndex;
  v32 = StandardAllocationType;
  v35 = PhysicalAdapterIndex;
  v31 = 39;
  v34 = (int)a3;
  v33 = AllocationPrivateDriverDataSize;
  v9 = StandardAllocationType - 1;
  if ( !v9 )
    goto LABEL_10;
  v10 = v9 - 1;
  if ( !v10 )
  {
    v36 = *(_OWORD *)&v4->pCreateSharedPrimarySurfaceData->Width;
    goto LABEL_11;
  }
  v11 = (unsigned int)(v10 - 1);
  if ( !(_DWORD)v11 )
  {
    pCreateSharedPrimarySurfaceData = v4->pCreateSharedPrimarySurfaceData;
    *(_QWORD *)&v36 = *(_QWORD *)&pCreateSharedPrimarySurfaceData->Width;
    DWORD2(v36) = pCreateSharedPrimarySurfaceData->Format;
LABEL_11:
    v15 = ((_DWORD)a3 + AllocationPrivateDriverDataSize + 43) & 0xFFFFFFF8;
    v16 = (int *)operator new[](v15, 0x4B677844u, (POOL_TYPE)512);
    if ( !v16 )
      return 3221225495LL;
    v38 = v15;
    v20 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v28, 0x40u, v16, &v38, v27);
    if ( v20 < 0 || (v20 = -1073741823, v38 < v15) || (v20 = *v16, *v16 < 0) )
    {
      v26 = WdLogNewEntry5_WdError(v19, v18, v21);
      *(_QWORD *)(v26 + 24) = v20;
      WdLogEvent5_WdError(v26);
LABEL_30:
      operator delete[](v16);
      return (unsigned int)v20;
    }
    switch ( v4->StandardAllocationType )
    {
      case D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE:
        goto LABEL_20;
      case D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE:
        *(_OWORD *)&v4->pCreateSharedPrimarySurfaceData->Width = *(_OWORD *)(v16 + 3);
        break;
      case D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE:
        v24 = v4->pCreateSharedPrimarySurfaceData;
        *(_QWORD *)&v24->Width = *(_QWORD *)(v16 + 3);
        v24->Format = v16[5];
        break;
      case D3DKMDT_STANDARDALLOCATION_GDISURFACE:
LABEL_20:
        v22 = v4->pCreateSharedPrimarySurfaceData;
        *(_OWORD *)&v22->Width = *(_OWORD *)(v16 + 3);
        *(_QWORD *)&v22->RefreshRate.Denominator = *(_QWORD *)(v16 + 7);
        break;
    }
    v23 = v16[1];
    if ( v33 )
      memmove(v4->pAllocationPrivateDriverData, v16 + 9, v23);
    else
      v4->AllocationPrivateDriverDataSize = v23;
    v25 = v16[2];
    if ( v34 )
      memmove(v4->pResourcePrivateDriverData, (char *)v16 + (unsigned int)v16[1] + 36, v25);
    else
      v4->ResourcePrivateDriverDataSize = v25;
    goto LABEL_30;
  }
  if ( (_DWORD)v11 == 1 )
  {
LABEL_10:
    v14 = v4->pCreateSharedPrimarySurfaceData;
    v36 = *(_OWORD *)&v14->Width;
    v37 = *(_QWORD *)&v14->RefreshRate.Denominator;
    goto LABEL_11;
  }
  v12 = WdLogNewEntry5_WdError(v11, a2, a3);
  *(_QWORD *)(v12 + 24) = 7443LL;
LABEL_32:
  WdLogEvent5_WdError(v12);
  return 3221225485LL;
}
