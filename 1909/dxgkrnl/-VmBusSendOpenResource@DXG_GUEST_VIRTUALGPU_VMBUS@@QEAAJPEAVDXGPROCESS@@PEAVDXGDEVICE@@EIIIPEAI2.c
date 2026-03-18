/*
 * XREFs of ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1C0225B00
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F0628 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F3A54 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0227D0C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int *a8,
        unsigned int *a9)
{
  unsigned int HostProcess; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 v17; // rax
  unsigned int v19; // esi
  unsigned int *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // r8
  unsigned int *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rax
  struct _MDL *v29; // [rsp+28h] [rbp-38h]
  __int64 v30; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-28h]
  int v32; // [rsp+3Ch] [rbp-24h]
  int v33; // [rsp+40h] [rbp-20h]
  int v34; // [rsp+48h] [rbp-18h]
  char v35; // [rsp+4Ch] [rbp-14h]
  unsigned int v36; // [rsp+50h] [rbp-10h]
  unsigned int v37; // [rsp+54h] [rbp-Ch]
  unsigned int v38; // [rsp+58h] [rbp-8h]
  unsigned int v39; // [rsp+98h] [rbp+38h] BYREF

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v16 = a6;
  v30 = 0LL;
  v32 = 0;
  v31 = HostProcess;
  v34 = *((_DWORD *)a3 + 84);
  v36 = a5;
  v38 = a7;
  v33 = 32;
  v35 = a4;
  v37 = a6;
  if ( a6 < 0x8000 )
  {
    v19 = (4 * a6 + 15) & 0xFFFFFFF8;
    v20 = (unsigned int *)operator new(v19, 0x4B677844u, 1, (POOL_TYPE)512);
    if ( v20 )
    {
      v39 = (4 * v16 + 15) & 0xFFFFFFF8;
      v23 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
              this,
              (struct DXGKVMB_COMMAND_BASE *)&v30,
              0x30u,
              v20,
              &v39,
              v29);
      if ( v23 < 0 || (v23 = -1073741823, v39 < v19) || (v23 = v20[1], v23 < 0) )
      {
        v28 = WdLogNewEntry5_WdError(v22, v21, v24);
        *(_QWORD *)(v28 + 24) = v23;
        WdLogEvent5_WdError(v28);
      }
      else
      {
        *a8 = *v20;
        if ( (_DWORD)v16 )
        {
          v25 = a9;
          v26 = v16;
          v27 = (char *)(v20 + 2) - (char *)a9;
          do
          {
            *v25 = *(unsigned int *)((char *)v25 + v27);
            ++v25;
            --v26;
          }
          while ( v26 );
        }
      }
      operator delete[](v20);
      return (unsigned int)v23;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = 6788LL;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
}
