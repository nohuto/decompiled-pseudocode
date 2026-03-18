/*
 * XREFs of ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C0132F78
 * Callers:
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1C0132F60 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C02537B0 (DxgkOpenSyncObjectFromNtHandle2.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00073D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0007424 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     McTemplateK0ppp @ 0x1C0042E68 (McTemplateK0ppp.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00F426C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00FAF80 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Impl(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        char a2,
        const GUID *a3)
{
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *Current; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct ADAPTER_RENDER **v14; // r13
  __int64 v15; // r9
  __int64 v16; // rbx
  HANDLE v17; // r12
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // ebx
  PERESOURCE *Global; // rax
  __int64 v24; // rcx
  const GUID *v25; // r8
  int v26; // r12d
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  const GUID *v34; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  const GUID *v39; // r8
  ULONG64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  const GUID *v46; // r8
  __int64 v47; // rax
  struct DXGDEVICE *v49; // [rsp+68h] [rbp-1B0h] BYREF
  int v50; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v51; // [rsp+78h] [rbp-1A0h]
  char v52; // [rsp+80h] [rbp-198h]
  struct DXGDEVICE *v53; // [rsp+88h] [rbp-190h] BYREF
  _QWORD v54[2]; // [rsp+90h] [rbp-188h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v55[2]; // [rsp+A0h] [rbp-178h]
  HANDLE Handle[2]; // [rsp+B0h] [rbp-168h]
  void *v57[2]; // [rsp+C0h] [rbp-158h] BYREF
  unsigned int v58[4]; // [rsp+D0h] [rbp-148h] BYREF
  __int128 v59; // [rsp+E0h] [rbp-138h]
  __int128 v60; // [rsp+F0h] [rbp-128h]
  UINT64 v61; // [rsp+100h] [rbp-118h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+110h] [rbp-108h] BYREF
  struct DXGADAPTERSYNCOBJECT *v63; // [rsp+118h] [rbp-100h] BYREF
  PVOID Object; // [rsp+120h] [rbp-F8h] BYREF
  _BYTE v65[8]; // [rsp+128h] [rbp-F0h] BYREF
  char v66; // [rsp+130h] [rbp-E8h]
  _BYTE v67[160]; // [rsp+140h] [rbp-D8h] BYREF

  v4 = a1;
  *(_QWORD *)&v55[0].hSyncObject = a1;
  v50 = -1;
  v51 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v52 = 1;
    v50 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2086);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v50, 2086LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  if ( Current )
  {
    if ( a2 )
    {
      v8 = MmUserProbeAddress;
      v40 = (ULONG64)v4;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v40 = MmUserProbeAddress;
      *(_OWORD *)Handle = *(_OWORD *)v40;
      *(_OWORD *)v57 = *(_OWORD *)(v40 + 16);
      *(_OWORD *)v58 = *(_OWORD *)(v40 + 32);
      v59 = *(_OWORD *)(v40 + 48);
      v60 = *(_OWORD *)(v40 + 64);
      v61 = *(_QWORD *)(v40 + 80);
    }
    else
    {
      *(_OWORD *)Handle = *(_OWORD *)&v4->hNtHandle;
      *(_OWORD *)v57 = *(_OWORD *)&v4->hSyncObject;
      *(_OWORD *)v58 = *(_OWORD *)&v4->Reserved[1];
      v59 = *(_OWORD *)&v4->Reserved[3];
      v60 = *(_OWORD *)&v4->Reserved[5];
      v61 = v4->Reserved[7];
    }
    LODWORD(v57[0]) = 0;
    if ( (HIDWORD(Handle[1]) & 0x7FFFFF00) != 0 )
    {
      v41 = WdLogNewEntry5_WdWarning(v8, v7, v9);
      *(_QWORD *)(v41 + 24) = 1588LL;
      WdLogEvent5_WdWarning(v41);
    }
    else
    {
      if ( (BYTE4(Handle[1]) & 0x10) != 0 || (BYTE4(Handle[1]) & 0x20) != 0 )
      {
        v42 = WdLogNewEntry5_WdWarning(v8, v7, v9);
        *(_QWORD *)(v42 + 24) = 1595LL;
        WdLogEvent5_WdWarning(v42);
      }
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
        (DXGDEVICEBYHANDLE *)&v49,
        (unsigned int)Handle[1],
        (struct _KTHREAD **)Current,
        &v53);
      v14 = (struct ADAPTER_RENDER **)v53;
      if ( v53 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54, v53);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v67, (__int64)v14, 0, v15, 0);
        LODWORD(v16) = COREDEVICEACCESS::AcquireShared((__int64)v67, 0xFFFFFFFF, 0LL);
        if ( (int)v16 < 0 )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
          if ( v54[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
          if ( !v49 )
            goto LABEL_60;
        }
        else
        {
          HandleInformation = 0LL;
          v17 = Handle[0];
          v18 = ObReferenceObjectByHandle(
                  Handle[0],
                  0x20000u,
                  g_pDxgkSharedSyncObjectType,
                  1,
                  &Object,
                  &HandleInformation);
          v16 = v18;
          if ( v18 == -1073741788 )
          {
            v47 = WdLogNewEntry5_WdWarning(v20, v19, v21);
            v16 = -1073741788LL;
          }
          else
          {
            if ( v18 >= 0 )
            {
              v22 = HIDWORD(Handle[1]) & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32 * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
              v63 = 0LL;
              Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v20, v19);
              DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v65, Global);
              DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v65);
              v26 = DXGSYNCOBJECT::Open(
                      *(DXGSYNCOBJECT **)Object,
                      v14[2],
                      (struct DXGDEVICE *)v14,
                      0LL,
                      (unsigned int *)v57,
                      &v57[1],
                      (unsigned __int64 *)v58,
                      v58[2],
                      &v63,
                      1,
                      (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v22);
              if ( v26 < 0 )
              {
                if ( v66 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
                if ( v54[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
              }
              else
              {
                if ( v66 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
                if ( bTracingEnabled )
                {
                  v27 = v63 ? *((_QWORD *)v63 + 4) : 0LL;
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0ppp(v24, &EventOpenSyncObject, v25, v27, LODWORD(v57[0]), v14);
                }
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
                if ( v54[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
                if ( a2 && (unsigned __int64)v4 >= MmUserProbeAddress )
                  v4 = (struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *)MmUserProbeAddress;
                *(_OWORD *)&v4->hNtHandle = *(_OWORD *)Handle;
                *(_OWORD *)&v4->hSyncObject = *(_OWORD *)v57;
                *(_OWORD *)&v4->Reserved[1] = *(_OWORD *)v58;
                *(_OWORD *)&v4->Reserved[3] = v59;
                *(_OWORD *)&v4->Reserved[5] = v60;
                v4->Reserved[7] = v61;
                DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 184));
                v28 = (LODWORD(v57[0]) >> 6) & 0xFFFFFF;
                if ( (unsigned int)v28 < *((_DWORD *)Current + 56) )
                {
                  v29 = *((_QWORD *)Current + 26);
                  if ( ((LODWORD(v57[0]) >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60)
                    && (*(_DWORD *)(v29 + 16 * v28 + 8) & 0x1F) != 0 )
                  {
                    v30 = 2 * (((unsigned __int64)v57[0] >> 6) & 0xFFFFFF);
                    if ( (*(_DWORD *)(v29 + 16 * (((unsigned __int64)v57[0] >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
                    {
                      v31 = WdLogNewEntry5_WdAssertion((LODWORD(v57[0]) >> 25) & 0x60, v29);
                      *(_QWORD *)(v31 + 24) = 217LL;
                      WdLogEvent5_WdAssertion(v31);
                      v29 = *((_QWORD *)Current + 26);
                    }
                    *(_DWORD *)(v29 + 8 * v30 + 8) &= ~0x2000u;
                  }
                }
                *((_QWORD *)Current + 24) = 0LL;
                ExReleasePushLockExclusiveEx((char *)Current + 184, 0LL);
                KeLeaveCriticalRegion();
              }
              ObfDereferenceObject(Object);
              if ( v49 && _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v32);
              if ( v52 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                  McTemplateK0q(v33, &EventProfilerExit, v34, v50);
              }
              return (unsigned int)v26;
            }
            v47 = WdLogNewEntry5_WdWarning(v20, v19, v21);
          }
          *(_QWORD *)(v47 + 24) = v17;
          *(_QWORD *)(v47 + 32) = v16;
          WdLogEvent5_WdWarning(v47);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
          if ( v54[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
          if ( !v49 )
            goto LABEL_60;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
LABEL_60:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v44);
        if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v45, &EventProfilerExit, v46, v50);
        return (unsigned int)v16;
      }
      v43 = WdLogNewEntry5_WdError(v12, v11, v13);
      *(_QWORD *)(v43 + 24) = LODWORD(Handle[1]);
      *(_QWORD *)(v43 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v43);
      if ( v49 && _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
    }
  }
  else
  {
    v36 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v36);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v37);
  if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v38, &EventProfilerExit, v39, v50);
  return 3221225485LL;
}
