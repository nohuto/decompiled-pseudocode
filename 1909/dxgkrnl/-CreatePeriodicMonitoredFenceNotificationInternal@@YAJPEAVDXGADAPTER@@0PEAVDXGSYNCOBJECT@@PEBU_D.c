/*
 * XREFs of ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C026924C
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00F8F00 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x1C02972EC (-CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001B30 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0003938 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z @ 0x1C0269100 (-CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z.c)
 */

__int64 __fastcall CreatePeriodicMonitoredFenceNotificationInternal(
        struct DXGADAPTER *a1,
        struct ADAPTER_RENDER **a2,
        struct DXGSYNCOBJECT *a3,
        const struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a4,
        bool a5)
{
  __int64 v9; // rdx
  struct DXGADAPTER *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  int PairingAdapters; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  ADAPTER_DISPLAY **v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  void *FenceValueCPUVirtualAddress; // rcx
  __int64 InitialCount; // r14
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  DXGADAPTER **v30; // r11
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int64 v35; // rax
  UINT64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rtt
  int PeriodicFrameNotification; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  struct DXGADAPTER *v45; // [rsp+40h] [rbp-A1h] BYREF
  struct DXGADAPTER *v46; // [rsp+48h] [rbp-99h] BYREF
  unsigned __int64 v47; // [rsp+50h] [rbp-91h] BYREF
  unsigned __int64 v48; // [rsp+58h] [rbp-89h] BYREF
  _BYTE v49[8]; // [rsp+60h] [rbp-81h] BYREF
  _BYTE v50[64]; // [rsp+68h] [rbp-79h] BYREF
  _BYTE v51[72]; // [rsp+A8h] [rbp-39h] BYREF

  if ( DXGADAPTER::IsDxgmms2(a1) || (*((_DWORD *)v10 + 77) & 0x100) != 0 )
  {
    PairingAdapters = DxgkpGetPairingAdapters(v10, 0LL, &v45, &v48, &v46, &v47, 0);
    v13 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v18 = WdLogNewEntry5_WdError(v16, v15, v17);
      *(_QWORD *)(v18 + 24) = a1;
      *(_QWORD *)(v18 + 32) = v13;
      WdLogEvent5_WdError(v18);
      return (unsigned int)v13;
    }
    v19 = (ADAPTER_DISPLAY **)v46;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v49, v45, v46);
    if ( !a5 )
      LODWORD(v13) = COREADAPTERACCESS::AcquireShared((__int64)v49, 0xFFFFFFFFLL, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking(v45);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v19);
    if ( (int)v13 >= 0 )
    {
      InitialCount = a4->Info.Semaphore.InitialCount;
      v26 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v19[319], a4->Info.Semaphore.InitialCount);
      v13 = v26;
      if ( v26 == -1 )
      {
        v31 = WdLogNewEntry5_WdError(v28, v27, v29);
        *(_QWORD *)(v31 + 24) = InitialCount;
        WdLogEvent5_WdError(v31);
        LODWORD(v13) = -1073741811;
        goto LABEL_21;
      }
      v33 = *((_QWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(v30, v26) + 2);
      v35 = HIDWORD(v33);
      if ( !HIDWORD(v33) || !(_DWORD)v33 )
      {
        v43 = WdLogNewEntry5_WdError(v33, v32, v34);
        *(_QWORD *)(v43 + 24) = v13;
        WdLogEvent5_WdError(v43);
        LODWORD(v13) = -1073741676;
        goto LABEL_21;
      }
      v38 = 10000000 * v35;
      v36 = 10000000 * v35 / (unsigned int)v33;
      v37 = v38 % (unsigned int)v33;
      if ( a4->Info.PeriodicMonitoredFence.Time <= v36 )
      {
        PeriodicFrameNotification = DXGSYNCOBJECT::CreatePeriodicFrameNotification(
                                      a3,
                                      a2,
                                      (struct ADAPTER_RENDER **)v45,
                                      (struct DXGADAPTER *)v19,
                                      v36,
                                      v13);
        v13 = PeriodicFrameNotification;
        if ( PeriodicFrameNotification >= 0 )
          goto LABEL_21;
        v23 = WdLogNewEntry5_WdWarning(v41, v40, v42);
        *(_QWORD *)(v23 + 24) = v13;
        goto LABEL_11;
      }
      v23 = WdLogNewEntry5_WdWarning(v33, v37, (unsigned int)v33);
      FenceValueCPUVirtualAddress = a4->Info.MonitoredFence.FenceValueCPUVirtualAddress;
      LODWORD(v13) = -1073741811;
      *(_QWORD *)(v23 + 32) = -1073741811LL;
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      FenceValueCPUVirtualAddress = (void *)(int)v13;
    }
    *(_QWORD *)(v23 + 24) = FenceValueCPUVirtualAddress;
LABEL_11:
    WdLogEvent5_WdWarning(v23);
LABEL_21:
    COREACCESS::~COREACCESS((COREACCESS *)v51);
    COREACCESS::~COREACCESS((COREACCESS *)v50);
    return (unsigned int)v13;
  }
  v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
  *(_QWORD *)(v12 + 24) = 229LL;
  WdLogEvent5_WdWarning(v12);
  LODWORD(v13) = -1073741811;
  return (unsigned int)v13;
}
