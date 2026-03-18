/*
 * XREFs of ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1C01F547C
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F0B28 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F3358 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
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
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned int v17; // esi
  unsigned int *v18; // rdi
  __int64 v19; // rcx
  int v20; // ebx
  unsigned int *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  struct _MDL *v25; // [rsp+28h] [rbp-38h]
  __int64 v26; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-28h]
  int v28; // [rsp+3Ch] [rbp-24h]
  int v29; // [rsp+40h] [rbp-20h]
  int v30; // [rsp+48h] [rbp-18h]
  char v31; // [rsp+4Ch] [rbp-14h]
  unsigned int v32; // [rsp+50h] [rbp-10h]
  unsigned int v33; // [rsp+54h] [rbp-Ch]
  unsigned int v34; // [rsp+58h] [rbp-8h]
  unsigned int v35; // [rsp+98h] [rbp+38h] BYREF

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v14 = a6;
  v26 = 0LL;
  v28 = 0;
  v27 = HostProcess;
  v30 = *((_DWORD *)a3 + 84);
  v32 = a5;
  v34 = a7;
  v29 = 32;
  v31 = a4;
  v33 = a6;
  if ( a6 < 0x8000 )
  {
    v17 = (4 * a6 + 15) & 0xFFFFFFF8;
    v18 = (unsigned int *)operator new(v17, 0x4B677844u, 1, (POOL_TYPE)512);
    if ( v18 )
    {
      v35 = (4 * v14 + 15) & 0xFFFFFFF8;
      v20 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
              this,
              (struct DXGKVMB_COMMAND_BASE *)&v26,
              0x30u,
              v18,
              &v35,
              v25);
      if ( v20 < 0 || (v20 = -1073741823, v35 < v17) || (v20 = v18[1], v20 < 0) )
      {
        v24 = WdLogNewEntry5_WdError(v19);
        *(_QWORD *)(v24 + 24) = v20;
        WdLogEvent5_WdError(v24);
      }
      else
      {
        *a8 = *v18;
        if ( (_DWORD)v14 )
        {
          v21 = a9;
          v22 = v14;
          v23 = (char *)(v18 + 2) - (char *)a9;
          do
          {
            *v21 = *(unsigned int *)((char *)v21 + v23);
            ++v21;
            --v22;
          }
          while ( v22 );
        }
      }
      operator delete[](v18);
      return (unsigned int)v20;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = 6822LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
}
