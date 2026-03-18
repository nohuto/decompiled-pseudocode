/*
 * XREFs of ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00AD028
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00DA660 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0158E80 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02467F4 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C024FD74 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 * Callees:
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0011D38 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0011E90 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00DDED4 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C01E9C44 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1C01F3CF8 (-VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONO.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C0235B68 (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
 */

__int64 __fastcall CreateSynchronizationObjectInternal(
        __int64 a1,
        char a2,
        ADAPTER_RENDER *a3,
        __int64 a4,
        POBJECT_HANDLE_INFORMATION a5,
        PVOID Object,
        __int64 *a7,
        __int64 a8)
{
  __int64 v11; // r14
  __int64 v12; // rax
  _DWORD *v13; // r12
  unsigned int v14; // esi
  int v15; // edx
  PERESOURCE *Global; // rax
  __int64 v17; // rcx
  struct DXGGLOBAL *v18; // rax
  int v19; // ebx
  __int64 v20; // rsi
  DXGSYNCOBJECT *v21; // r15
  _QWORD *v22; // rax
  __int64 v23; // rcx
  unsigned int HostProcess; // r13d
  __int64 v25; // rax
  NTSTATUS v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  PVOID v32; // rax
  __int64 v33; // r8
  int SyncObject; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 *v39; // rbx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v44[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v45; // [rsp+68h] [rbp-18h]
  unsigned __int64 v46; // [rsp+70h] [rbp-10h]
  unsigned int v47; // [rsp+C0h] [rbp+40h] BYREF
  ADAPTER_RENDER *v48; // [rsp+D0h] [rbp+50h]
  DXGSYNCOBJECT *v49; // [rsp+D8h] [rbp+58h] BYREF

  v48 = a3;
  v11 = a1;
  if ( a1 && !ADAPTER_RENDER::IsCoreResourceSharedOwner(a3) )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v12 + 24) = 35LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = (_DWORD *)(a4 + 8);
  v47 = 0;
  v14 = 0;
  v49 = 0LL;
  *(_QWORD *)Object = 0LL;
  v15 = *(_DWORD *)(a4 + 8);
  if ( v15 == 5 )
  {
    v14 = *(_DWORD *)(a4 + 40);
  }
  else
  {
    if ( v15 != 6 )
      goto LABEL_14;
    v14 = *(_DWORD *)(a4 + 48);
  }
  a1 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL) + 256LL);
  if ( (_DWORD)a1 == 1 )
    v14 = 1;
  if ( v14 >= 1 << a1 )
    v14 = (1 << a1) - 1;
  if ( v15 == 6 )
    *(_DWORD *)(a4 + 12) |= 0x17u;
LABEL_14:
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(a1);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v44, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v44);
  v18 = DXGGLOBAL::GetGlobal(v17);
  v19 = (int)a5;
  LODWORD(v20) = DXGGLOBAL::CreateSyncObject(
                   v18,
                   a3,
                   v11,
                   v14,
                   a4 + 8,
                   (_DWORD)a5,
                   a2,
                   0LL,
                   &v49,
                   a7,
                   (unsigned __int64)&v47 & -(__int64)(v11 != 0),
                   a8);
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v44);
  if ( (int)v20 < 0 )
    return (unsigned int)v20;
  v21 = v49;
  *(_DWORD *)(a4 + 88) = v47;
  v22 = Object;
  *(_DWORD *)(a4 + 80) = *((_DWORD *)v21 + 18);
  *v22 = v21;
  v23 = *((_QWORD *)a3 + 2);
  if ( !*(_BYTE *)(v23 + 185) )
    return (unsigned int)v20;
  if ( v11 )
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v11 + 40));
  else
    HostProcess = 0;
  if ( !HostProcess && v11 )
  {
    v25 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v25 + 24) = -1073741823LL;
    WdLogEvent5_WdError(v25);
    return 3221225473LL;
  }
  if ( *v13 != 4 )
  {
LABEL_26:
    if ( v11 )
      v33 = *(unsigned int *)(v11 + 336);
    else
      v33 = 0LL;
    SyncObject = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateSyncObject(
                   *((_QWORD *)v48 + 2) + 4152LL,
                   HostProcess,
                   v33,
                   a4,
                   v19,
                   v44);
    v20 = SyncObject;
    if ( SyncObject >= 0 )
    {
      if ( (unsigned int)(*v13 - 5) <= 1 )
      {
        v37 = *a7;
        *(_DWORD *)(v37 + 44) = v44[0];
        v38 = v45;
        *(_QWORD *)(v37 + 48) = v45;
        if ( *v13 == 5 )
          *(_QWORD *)(a4 + 32) = v38;
        else
          *(_QWORD *)(a4 + 40) = v38;
        v39 = (__int64 *)(v37 + 56);
        v40 = MapGuestFenceCpuVaToHost(
                v46,
                (void **)(v37 + 56),
                (unsigned __int64 *)(v37 + 80),
                (unsigned int *)(v37 + 88));
        v20 = v40;
        if ( v40 >= 0 )
        {
          v43 = *v39;
          if ( *v13 == 5 )
            *(_QWORD *)(a4 + 24) = v43;
          else
            *(_QWORD *)(a4 + 32) = v43;
        }
        else
        {
          v42 = WdLogNewEntry5_WdError(v41);
          *(_QWORD *)(v42 + 24) = v20;
          *(_QWORD *)(v42 + 32) = 180LL;
          WdLogEvent5_WdError(v42);
        }
      }
      else if ( v44[0] )
      {
        LODWORD(v20) = DXGSYNCOBJECT::SetHostHandle(v21, v47, v44[0]);
      }
      if ( (*((_BYTE *)v21 + 172) & 1) != 0 )
        *((_DWORD *)v21 + 19) = v44[1];
    }
    else
    {
      v36 = WdLogNewEntry5_WdError(v35);
      *(_QWORD *)(v36 + 24) = v20;
      *(_QWORD *)(v36 + 32) = 155LL;
      WdLogEvent5_WdError(v36);
    }
    return (unsigned int)v20;
  }
  v27 = ObReferenceObjectByHandle(*(HANDLE *)(a4 + 16), 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  v20 = v27;
  if ( v27 >= 0 )
  {
    v32 = Object;
    *((_QWORD *)v21 + 10) = Object;
    *(_QWORD *)(a4 + 16) = v32;
    goto LABEL_26;
  }
  v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
  *(_QWORD *)(v31 + 24) = v20;
  WdLogEvent5_WdWarning(v31);
  return (unsigned int)v20;
}
