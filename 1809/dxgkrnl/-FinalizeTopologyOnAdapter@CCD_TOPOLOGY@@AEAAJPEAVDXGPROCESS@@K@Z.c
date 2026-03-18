/*
 * XREFs of ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C011F1C4
 * Callers:
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C011F0A0 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00114A8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00CED80 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C00CF024 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C0136F50 (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0137128 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0242AA0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C02821D0 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGFASTMUTEX *const *a2,
        unsigned int a3)
{
  volatile signed __int64 *v3; // rbx
  __int64 v6; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  ADAPTER_DISPLAY **v10; // r15
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rcx
  ADAPTER_DISPLAY *v14; // rdx
  unsigned int v15; // r14d
  char v16; // bl
  __int64 v17; // r12
  __int64 v18; // r10
  ADAPTER_DISPLAY *v19; // rcx
  __int64 v20; // r9
  bool v21; // zf
  int v23; // r10d
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _BYTE v30[8]; // [rsp+30h] [rbp-69h] BYREF
  char v31; // [rsp+38h] [rbp-61h]
  struct DXGDEVICE *v32; // [rsp+40h] [rbp-59h]
  _BYTE v33[24]; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v34[8]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v35[32]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v36[104]; // [rsp+88h] [rbp-11h] BYREF
  DXGDEVICE *v37; // [rsp+100h] [rbp+67h] BYREF
  char v38; // [rsp+110h] [rbp+77h]
  __int64 v39; // [rsp+118h] [rbp+7Fh]

  v3 = 0LL;
  v38 = 1;
  v37 = 0LL;
  v6 = a3;
  while ( 1 )
  {
    if ( v3 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 324 * v6),
        (struct DXGDEVICE *)v3);
      if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
      v37 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 324 * v6),
                                             &v37,
                                             0LL,
                                             0LL);
    v9 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v29[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 324 * v6 + 4);
      v29[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 324 * v6);
      v29[5] = v9;
      WdLogEvent5_WdError(v29);
      return (unsigned int)v9;
    }
    v3 = (volatile signed __int64 *)v37;
    v32 = v37;
    v10 = (ADAPTER_DISPLAY **)*((_QWORD *)v37 + 216);
    if ( !v10 )
      break;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v33, v37);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, a2[39], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, (__int64)v3, 1, v11, 0);
    v12 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v34, 2LL);
    if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v3) )
    {
      if ( (int)v12 < 0 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdError(v13);
        v24[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 324 * v6 + 4);
        v24[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 324 * v6);
        v24[5] = *((_QWORD *)this + 8);
        v24[6] = v12;
        WdLogEvent5_WdError(v24);
      }
      else
      {
        v14 = v10[315];
        v15 = 0;
        if ( *((_DWORD *)v14 + 20) )
        {
          v16 = v38;
          v17 = 324 * v6;
          do
          {
            v18 = *((_QWORD *)this + 8);
            v19 = v14;
            v20 = *(_QWORD *)(v18 + 40);
            if ( ((1 << v15) & *(_DWORD *)(v17 + v20 + 80)) != 0 )
            {
              v39 = 81 * v6;
              v19 = v14;
              v23 = *(_DWORD *)(272LL * *(unsigned int *)(v20 + 4 * (v15 + 81 * v6) + 8) + v18 + 240);
              if ( v23 < 0 )
              {
                v16 = 0;
                *(_DWORD *)(v20 + 4 * (v15 + v39) + 156) = v23;
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v17 + 152) |= 1 << v15;
                v25 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(v10[315], v15);
                v12 = v25;
                if ( v25 < 0 )
                {
                  v27 = (_QWORD *)WdLogNewEntry5_WdError(v26);
                  v27[3] = v15;
                  v27[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v17 + 4);
                  v27[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 324 * v6);
                  v27[6] = v12;
                  WdLogEvent5_WdError(v27);
                }
                DxgkRemoveSessionViewForCurrentSession(
                  (struct _LUID *)(v17 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                  v15,
                  0);
                v19 = v10[315];
              }
            }
            ++v15;
            v14 = v19;
          }
          while ( v15 < *((_DWORD *)v19 + 20) );
          v21 = v16 == 0;
          v3 = (volatile signed __int64 *)v32;
          if ( v21 )
            DmmDisableAllFailurePathsOnAdapter(
              v10,
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v17 + 152),
              v32);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v36);
      COREACCESS::~COREACCESS((COREACCESS *)v35);
      if ( v31 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v33);
      if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
      return (unsigned int)v12;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v36);
    COREACCESS::~COREACCESS((COREACCESS *)v35);
    if ( v31 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v33);
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdError(v8);
  v28[3] = v3;
  v28[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 324 * v6 + 4);
  v28[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 324 * v6);
  v28[6] = -1073741811LL;
  WdLogEvent5_WdError(v28);
  if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
  return 3221225485LL;
}
