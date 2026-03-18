/*
 * XREFs of ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00F9C74
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00F8F00 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015FC34 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C027C730 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C0285DDC (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x1C02972EC (-CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00FA870 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C0219BE4 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1C0224098 (-VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONO.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C026ABA0 (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
 */

__int64 __fastcall CreateSynchronizationObjectInternal(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        POBJECT_HANDLE_INFORMATION a5,
        DXGSYNCOBJECT **a6,
        __int64 *a7,
        __int64 a8)
{
  __int64 v11; // r14
  __int64 v12; // rdx
  _DWORD *v13; // r12
  unsigned int v14; // esi
  __int64 v15; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  PERESOURCE *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGGLOBAL *v24; // rax
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // r8
  DXGSYNCOBJECT *v30; // r15
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  unsigned int HostProcess; // r13d
  __int64 v37; // rax
  NTSTATUS v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  PVOID v43; // rax
  __int64 v44; // r8
  int SyncObject; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 *v52; // rbx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rax
  PVOID Object; // [rsp+60h] [rbp-39h] BYREF
  PERESOURCE *v60; // [rsp+68h] [rbp-31h] BYREF
  char v61; // [rsp+70h] [rbp-29h]
  unsigned int v62[22]; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v63; // [rsp+E0h] [rbp+47h] BYREF
  __int64 v64; // [rsp+F0h] [rbp+57h]
  DXGSYNCOBJECT *v65; // [rsp+F8h] [rbp+5Fh] BYREF

  v64 = a3;
  v11 = a1;
  if ( a1 )
  {
    a1 = *(_QWORD *)(a3 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
    {
      v32 = WdLogNewEntry5_WdAssertion(a1, v12);
      *(_QWORD *)(v32 + 24) = 35LL;
      WdLogEvent5_WdAssertion(v32);
    }
  }
  v13 = (_DWORD *)(a4 + 8);
  v63 = 0;
  v14 = 0;
  v65 = 0LL;
  *a6 = 0LL;
  v15 = *(unsigned int *)(a4 + 8);
  if ( (_DWORD)v15 == 5 )
  {
    v14 = *(_DWORD *)(a4 + 40);
  }
  else
  {
    if ( (_DWORD)v15 != 6 )
      goto LABEL_7;
    v14 = *(_DWORD *)(a4 + 48);
  }
  a1 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL) + 256LL);
  if ( (_DWORD)a1 == 1 )
    v14 = 1;
  if ( v14 >= 1 << a1 )
    v14 = (1 << a1) - 1;
  if ( (_DWORD)v15 == 6 )
    *(_DWORD *)(a4 + 12) |= 0x17u;
LABEL_7:
  Global = DXGGLOBAL::GetGlobal(a1, v15);
  v60 = (PERESOURCE *)Global;
  v61 = 0;
  if ( !Global )
  {
    v33 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v33 + 24) = 2313LL;
    WdLogEvent5_WdAssertion(v33);
    Global = (struct DXGGLOBAL *)v60;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v34 + 24) = 2318LL;
    WdLogEvent5_WdAssertion(v34);
  }
  if ( v61 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
    v35[5] = &v60;
    v35[3] = 275LL;
    v35[4] = 4LL;
    v35[6] = 0LL;
    v35[7] = 0LL;
    WdLogEvent5_WdCriticalError(v35);
  }
  v21 = v60;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v21[43], 1u);
  v61 = 1;
  v24 = DXGGLOBAL::GetGlobal(v23, v22);
  v25 = (int)a5;
  LODWORD(v28) = DXGGLOBAL::CreateSyncObject(
                   v24,
                   a3,
                   v11,
                   v14,
                   a4 + 8,
                   (_DWORD)a5,
                   a2,
                   0LL,
                   &v65,
                   a7,
                   (unsigned __int64)&v63 & -(__int64)(v11 != 0),
                   a8);
  if ( v61 )
  {
    v61 = 0;
    ExReleaseResourceLite(v60[43]);
    KeLeaveCriticalRegion();
  }
  if ( (int)v28 < 0 )
    return (unsigned int)v28;
  v30 = v65;
  *(_DWORD *)(a4 + 88) = v63;
  *(_DWORD *)(a4 + 80) = *((_DWORD *)v30 + 18);
  *a6 = v30;
  if ( !*(_BYTE *)(*(_QWORD *)(a3 + 16) + 185LL) )
    return (unsigned int)v28;
  if ( v11 )
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v11 + 40));
  else
    HostProcess = 0;
  if ( HostProcess || !v11 )
  {
    if ( *v13 == 4 )
    {
      v38 = ObReferenceObjectByHandle(*(HANDLE *)(a4 + 16), 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v28 = v38;
      if ( v38 < 0 )
      {
        v42 = WdLogNewEntry5_WdWarning(v40, v39, v41);
        *(_QWORD *)(v42 + 24) = v28;
        WdLogEvent5_WdWarning(v42);
        return (unsigned int)v28;
      }
      v43 = Object;
      *((_QWORD *)v30 + 10) = Object;
      *(_QWORD *)(a4 + 16) = v43;
    }
    memset(v62, 0, 0x20uLL);
    if ( v11 )
      v44 = *(unsigned int *)(v11 + 336);
    else
      v44 = 0LL;
    SyncObject = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateSyncObject(
                   *(_QWORD *)(v64 + 16) + 4144LL,
                   HostProcess,
                   v44,
                   a4,
                   v25,
                   v62);
    v28 = SyncObject;
    if ( SyncObject >= 0 )
    {
      if ( (unsigned int)(*v13 - 5) <= 1 )
      {
        v50 = *a7;
        *(_DWORD *)(v50 + 44) = v62[0];
        v51 = *(_QWORD *)&v62[2];
        *(_QWORD *)(v50 + 48) = *(_QWORD *)&v62[2];
        if ( *v13 == 5 )
          *(_QWORD *)(a4 + 32) = v51;
        else
          *(_QWORD *)(a4 + 40) = v51;
        v52 = (__int64 *)(v50 + 56);
        v53 = MapGuestFenceCpuVaToHost(
                *(unsigned __int64 *)&v62[4],
                (void **)(v50 + 56),
                (unsigned __int64 *)(v50 + 80),
                (unsigned int *)(v50 + 88));
        v28 = v53;
        if ( v53 >= 0 )
        {
          v58 = *v52;
          if ( *v13 == 5 )
            *(_QWORD *)(a4 + 24) = v58;
          else
            *(_QWORD *)(a4 + 32) = v58;
        }
        else
        {
          v57 = WdLogNewEntry5_WdError(v55, v54, v56);
          *(_QWORD *)(v57 + 24) = v28;
          *(_QWORD *)(v57 + 32) = 180LL;
          WdLogEvent5_WdError(v57);
        }
      }
      else if ( v62[0] )
      {
        LODWORD(v28) = DXGSYNCOBJECT::SetHostHandle(v30, v63, v62[0]);
      }
      if ( (*((_BYTE *)v30 + 196) & 1) != 0 )
        *((_DWORD *)v30 + 19) = v62[1];
    }
    else
    {
      v49 = WdLogNewEntry5_WdError(v47, v46, v48);
      *(_QWORD *)(v49 + 24) = v28;
      *(_QWORD *)(v49 + 32) = 155LL;
      WdLogEvent5_WdError(v49);
    }
    return (unsigned int)v28;
  }
  v37 = WdLogNewEntry5_WdError(v27, v26, v29);
  *(_QWORD *)(v37 + 24) = -1073741823LL;
  WdLogEvent5_WdError(v37);
  return 3221225473LL;
}
