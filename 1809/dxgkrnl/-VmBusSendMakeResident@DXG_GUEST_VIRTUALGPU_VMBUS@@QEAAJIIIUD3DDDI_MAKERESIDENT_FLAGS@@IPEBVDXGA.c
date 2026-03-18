/*
 * XREFs of ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C01F5024
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C01235A0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ?MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C01FEF28 (-MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C023E4EC (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02467F4 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        int a4,
        struct D3DDDI_MAKERESIDENT_FLAGS a5,
        unsigned int a6,
        const struct DXGALLOCATIONREFERENCE *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  char *v12; // rax
  __int64 v13; // rcx
  struct DXGKVMB_COMMAND_BASE *v14; // rbx
  __int64 v15; // rax
  _DWORD *v18; // r9
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rax
  __int64 v24; // rax
  struct _MDL *v25; // [rsp+28h] [rbp-60h]
  unsigned int v26; // [rsp+30h] [rbp-58h] BYREF
  DXG_VMBUS_CHANNEL_BASE *v27; // [rsp+38h] [rbp-50h]
  _QWORD v28[2]; // [rsp+40h] [rbp-48h] BYREF
  int v29; // [rsp+50h] [rbp-38h]

  v27 = this;
  if ( a6 - 1 > 0x7FFF )
  {
    v24 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v24 + 24) = 7575LL;
    WdLogEvent5_WdError(v24);
    return 3221225485LL;
  }
  else
  {
    v12 = (char *)operator new(4 * a6 + 44, 0x4B677844u, 1, (POOL_TYPE)512);
    v14 = (struct DXGKVMB_COMMAND_BASE *)v12;
    if ( v12 )
    {
      *(_QWORD *)v12 = 0LL;
      *((_DWORD *)v12 + 3) = 0;
      *((_DWORD *)v12 + 4) = 11;
      *((_DWORD *)v12 + 2) = a2;
      *((struct D3DDDI_MAKERESIDENT_FLAGS *)v12 + 8) = a5;
      *((_DWORD *)v12 + 6) = a3;
      *((_DWORD *)v12 + 7) = a4;
      *((_DWORD *)v12 + 9) = a6;
      if ( a6 )
      {
        v18 = v12 + 40;
        v19 = a6;
        do
        {
          v20 = *(_QWORD *)a7;
          a7 = (const struct DXGALLOCATIONREFERENCE *)((char *)a7 + 8);
          *v18++ = *(_DWORD *)(v20 + 96);
          --v19;
        }
        while ( v19 );
      }
      v26 = 24;
      v22 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v27, v14, 4 * a6 + 44, v28, &v26, v25);
      if ( v22 < 0 )
        goto LABEL_14;
      v22 = -1073741823;
      if ( v26 < 0x18 )
        goto LABEL_14;
      if ( a8 )
        *a8 = v28[0];
      if ( a9 )
        *a9 = v28[1];
      v22 = v29;
      if ( v29 < 0 )
      {
LABEL_14:
        v23 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v23 + 24) = v22;
        WdLogEvent5_WdError(v23);
      }
      operator delete[](v14);
      return (unsigned int)v22;
    }
    else
    {
      v15 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v15 + 24) = 7582LL;
      WdLogEvent5_WdLowResource(v15);
      return 3221225495LL;
    }
  }
}
