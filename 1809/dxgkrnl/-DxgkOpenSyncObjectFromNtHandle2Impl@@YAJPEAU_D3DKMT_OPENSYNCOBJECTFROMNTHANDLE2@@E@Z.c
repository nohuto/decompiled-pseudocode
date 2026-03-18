/*
 * XREFs of ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C0134FC8
 * Callers:
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1C0134FB0 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C021EBF0 (DxgkOpenSyncObjectFromNtHandle2.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     McTemplateK0ppp @ 0x1C003C574 (McTemplateK0ppp.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00DF410 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C01143A0 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Impl(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        char a2,
        const GUID *a3)
{
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v4; // rsi
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  struct DXGPROCESS *Current; // r15
  __int64 v9; // rax
  ULONG64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  struct ADAPTER_RENDER **v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  const GUID *v17; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rcx
  const GUID *v22; // r8
  HANDLE v23; // r12
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  unsigned int v29; // ebx
  PERESOURCE *Global; // rax
  __int64 v31; // rcx
  const GUID *v32; // r8
  int v33; // r12d
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned int v39; // r8d
  unsigned __int64 v40; // rbx
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rcx
  const GUID *v48; // r8
  int v49; // [rsp+60h] [rbp-158h] BYREF
  __int64 v50; // [rsp+68h] [rbp-150h]
  char v51; // [rsp+70h] [rbp-148h]
  _QWORD v52[3]; // [rsp+78h] [rbp-140h] BYREF
  HANDLE Handle[2]; // [rsp+90h] [rbp-128h]
  void *v54[2]; // [rsp+A0h] [rbp-118h] BYREF
  unsigned int v55[4]; // [rsp+B0h] [rbp-108h] BYREF
  __int128 v56; // [rsp+C0h] [rbp-F8h]
  __int128 v57; // [rsp+D0h] [rbp-E8h]
  UINT64 v58; // [rsp+E0h] [rbp-D8h]
  struct DXGADAPTERSYNCOBJECT *v59; // [rsp+F0h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+F8h] [rbp-C0h] BYREF
  _BYTE v61[8]; // [rsp+100h] [rbp-B8h] BYREF
  char v62; // [rsp+108h] [rbp-B0h]
  struct DXGDEVICE *v63; // [rsp+110h] [rbp-A8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+118h] [rbp-A0h] BYREF
  _BYTE v65[152]; // [rsp+120h] [rbp-98h] BYREF
  struct DXGDEVICE *v67; // [rsp+1D8h] [rbp+20h] BYREF

  v4 = a1;
  v49 = -1;
  v50 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v51 = 1;
    v49 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2086);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v49, 2086);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_21:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v16, &EventProfilerExit, v17, v49);
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    v10 = (ULONG64)v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v10 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v10;
    *(_OWORD *)v54 = *(_OWORD *)(v10 + 16);
    *(_OWORD *)v55 = *(_OWORD *)(v10 + 32);
    v56 = *(_OWORD *)(v10 + 48);
    v57 = *(_OWORD *)(v10 + 64);
    v58 = *(_QWORD *)(v10 + 80);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&v4->hNtHandle;
    *(_OWORD *)v54 = *(_OWORD *)&v4->hSyncObject;
    *(_OWORD *)v55 = *(_OWORD *)&v4->Reserved[1];
    v56 = *(_OWORD *)&v4->Reserved[3];
    v57 = *(_OWORD *)&v4->Reserved[5];
    v58 = v4->Reserved[7];
  }
  LODWORD(v54[0]) = 0;
  if ( (HIDWORD(Handle[1]) & 0x7FFFFF00) != 0 )
  {
    v11 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v11 + 24) = 1588LL;
    WdLogEvent5_WdWarning(v11);
    goto LABEL_21;
  }
  if ( (BYTE4(Handle[1]) & 0x10) != 0 || (BYTE4(Handle[1]) & 0x20) != 0 )
  {
    v12 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v12 + 24) = 1595LL;
    WdLogEvent5_WdWarning(v12);
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v67,
    (unsigned int)Handle[1],
    (struct _KTHREAD **)Current,
    &v63);
  v14 = (struct ADAPTER_RENDER **)v63;
  if ( !v63 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = LODWORD(Handle[1]);
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    if ( v67 && _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
    goto LABEL_21;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v52, v63);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, (__int64)v14, 0, v19, 0);
  LODWORD(v20) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v65);
  if ( (int)v20 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
    if ( v52[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v52);
    if ( !v67 )
      goto LABEL_31;
    goto LABEL_29;
  }
  v23 = Handle[0];
  v24 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v20 = v24;
  if ( v24 == -1073741788 )
  {
    v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
    v20 = -1073741788LL;
    goto LABEL_37;
  }
  if ( v24 < 0 )
  {
    v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
LABEL_37:
    *(_QWORD *)(v28 + 24) = v23;
    *(_QWORD *)(v28 + 32) = v20;
    WdLogEvent5_WdWarning(v28);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
    if ( v52[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v52);
    if ( !v67 )
      goto LABEL_31;
LABEL_29:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
LABEL_31:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, v49);
    return (unsigned int)v20;
  }
  v29 = HIDWORD(Handle[1]) & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32
                                                                                                  * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
  v59 = 0LL;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v26);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v61, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v61);
  v33 = DXGSYNCOBJECT::Open(
          *(DXGSYNCOBJECT **)Object,
          v14[2],
          (struct DXGDEVICE *)v14,
          0LL,
          (unsigned int *)v54,
          &v54[1],
          (unsigned __int64 *)v55,
          v55[2],
          &v59,
          1,
          (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v29);
  if ( v33 >= 0 )
  {
    if ( v62 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v61);
    if ( bTracingEnabled )
    {
      v34 = v59 ? *((_QWORD *)v59 + 4) : 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppp(v31, &EventOpenSyncObject, v32, v34, LODWORD(v54[0]), v14);
    }
    LOBYTE(v35) = EvaluateCurrentState((int **)&g_Feature_3289682233_58219311_FeatureDescriptorDetails);
    if ( v35 )
    {
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v36 = (LODWORD(v54[0]) >> 6) & 0xFFFFFF;
      v37 = LODWORD(v54[0]) >> 30;
      if ( (unsigned int)v36 < *((_DWORD *)Current + 62) )
      {
        v38 = *((_QWORD *)Current + 29);
        v39 = *(_DWORD *)(v38 + 16 * v36 + 8);
        if ( (_DWORD)v37 == ((v39 >> 5) & 3) && (v39 & 0x1F) != 0 )
        {
          v40 = 2 * (((unsigned __int64)v54[0] >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v38 + 16 * (((unsigned __int64)v54[0] >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v41 = WdLogNewEntry5_WdAssertion(v37);
            *(_QWORD *)(v41 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v41);
            v38 = *((_QWORD *)Current + 29);
          }
          *(_DWORD *)(v38 + 8 * v40 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
    if ( v52[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v52);
    if ( a2 && (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *)MmUserProbeAddress;
    *(_OWORD *)&v4->hNtHandle = *(_OWORD *)Handle;
    *(_OWORD *)&v4->hSyncObject = *(_OWORD *)v54;
    *(_OWORD *)&v4->Reserved[1] = *(_OWORD *)v55;
    *(_OWORD *)&v4->Reserved[3] = v56;
    *(_OWORD *)&v4->Reserved[5] = v57;
    v4->Reserved[7] = v58;
    LOBYTE(v42) = EvaluateCurrentState((int **)&g_Feature_3289682233_58219311_FeatureDescriptorDetails);
    if ( !v42 )
    {
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v43 = (LODWORD(v54[0]) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v43 < *((_DWORD *)Current + 62) )
      {
        v44 = *((_QWORD *)Current + 29);
        if ( ((LODWORD(v54[0]) >> 25) & 0x60) == (*(_BYTE *)(v44 + 16 * v43 + 8) & 0x60)
          && (*(_DWORD *)(v44 + 16 * v43 + 8) & 0x1F) != 0 )
        {
          v45 = 2 * (((unsigned __int64)v54[0] >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v44 + 16 * (((unsigned __int64)v54[0] >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v46 = WdLogNewEntry5_WdAssertion((LODWORD(v54[0]) >> 25) & 0x60);
            *(_QWORD *)(v46 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v46);
            v44 = *((_QWORD *)Current + 29);
          }
          *(_DWORD *)(v44 + 8 * v45 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    if ( v62 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v61);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
    if ( v52[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v52);
  }
  ObfDereferenceObject(Object);
  if ( v67 && _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v47, &EventProfilerExit, v48, v49);
  return (unsigned int)v33;
}
