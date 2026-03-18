/*
 * XREFs of ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C0225038
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010C210 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0131DD0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C022F604 (-MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C0273804 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C027BFD0 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C022769C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        __int64 a2,
        __int64 a3,
        int a4,
        struct D3DDDI_MAKERESIDENT_FLAGS a5,
        unsigned int a6,
        const struct DXGALLOCATIONREFERENCE *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  int v10; // r15d
  int v11; // r12d
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGKVMB_COMMAND_BASE *v17; // rbx
  __int64 v18; // rax
  _DWORD *v21; // r9
  __int64 v22; // r10
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  struct _MDL *v30; // [rsp+28h] [rbp-60h]
  unsigned int v31; // [rsp+30h] [rbp-58h] BYREF
  DXG_VMBUS_CHANNEL_BASE *v32; // [rsp+38h] [rbp-50h]
  _QWORD v33[2]; // [rsp+40h] [rbp-48h] BYREF
  int v34; // [rsp+50h] [rbp-38h]

  v10 = a3;
  v11 = a2;
  v32 = this;
  if ( a6 - 1 > 0x7FFF )
  {
    v29 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v29 + 24) = 7541LL;
    WdLogEvent5_WdError(v29);
    return 3221225485LL;
  }
  else
  {
    v12 = (char *)operator new(4 * a6 + 44, 0x4B677844u, 1, (POOL_TYPE)512);
    v17 = (struct DXGKVMB_COMMAND_BASE *)v12;
    if ( v12 )
    {
      *(_QWORD *)v12 = 0LL;
      *((_DWORD *)v12 + 3) = 0;
      *((_DWORD *)v12 + 4) = 11;
      *((_DWORD *)v12 + 2) = v11;
      *((struct D3DDDI_MAKERESIDENT_FLAGS *)v12 + 8) = a5;
      *((_DWORD *)v12 + 6) = v10;
      *((_DWORD *)v12 + 7) = a4;
      *((_DWORD *)v12 + 9) = a6;
      if ( a6 )
      {
        v21 = v12 + 40;
        v22 = a6;
        do
        {
          v23 = *(_QWORD *)a7;
          a7 = (const struct DXGALLOCATIONREFERENCE *)((char *)a7 + 8);
          *v21++ = *(_DWORD *)(v23 + 96);
          --v22;
        }
        while ( v22 );
      }
      v31 = 24;
      v26 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v32, v17, 4 * a6 + 44, v33, &v31, v30);
      if ( v26 < 0 )
        goto LABEL_14;
      v26 = -1073741823;
      if ( v31 < 0x18 )
        goto LABEL_14;
      if ( a8 )
        *a8 = v33[0];
      if ( a9 )
        *a9 = v33[1];
      v26 = v34;
      if ( v34 < 0 )
      {
LABEL_14:
        v28 = WdLogNewEntry5_WdError(v25, v24, v27);
        *(_QWORD *)(v28 + 24) = v26;
        WdLogEvent5_WdError(v28);
      }
      operator delete[](v17);
      return (unsigned int)v26;
    }
    else
    {
      v18 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
      *(_QWORD *)(v18 + 24) = 7548LL;
      WdLogEvent5_WdLowResource(v18);
      return 3221225495LL;
    }
  }
}
