/*
 * XREFs of ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00CC5E0
 * Callers:
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00CC4BC (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006A5C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CDD4 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILE.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A7F8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CD618 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C00CEDA4 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF050 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C014BBC0 (DxgkRemoveSessionViewForCurrentSession.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0277EF0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C02BA210 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGFASTMUTEX *const *a2,
        unsigned int a3)
{
  __int64 v5; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  ADAPTER_DISPLAY **v11; // r15
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  ADAPTER_DISPLAY *v17; // rdx
  unsigned int v18; // r14d
  char v19; // bl
  __int64 v20; // r12
  __int64 v21; // r10
  ADAPTER_DISPLAY *v22; // rcx
  __int64 v23; // r9
  int v25; // r10d
  _QWORD *v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _BYTE v34[8]; // [rsp+48h] [rbp-B8h] BYREF
  char v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  _BYTE v37[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v38[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v39[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v40[88]; // [rsp+B8h] [rbp-48h] BYREF

  v5 = a3;
  while ( 1 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332 * v5),
                                             0);
    v10 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
      v33[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332 * v5 + 4);
      v33[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332 * v5);
      v33[5] = v10;
      WdLogEvent5_WdError(v33);
      return (unsigned int)v10;
    }
    v11 = (ADAPTER_DISPLAY **)MEMORY[0x6C0];
    if ( !MEMORY[0x6C0] )
      break;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37, 0LL);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v34, a2[36], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, 0LL, 1, v12, 0);
    v13 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v38, 2LL);
    if ( !DXGDEVICE::IsExecutionStateErrorState(0LL) )
    {
      if ( (int)v13 < 0 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
        v26[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332 * v5 + 4);
        v26[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332 * v5);
        v26[5] = *((_QWORD *)this + 8);
        v26[6] = v13;
        WdLogEvent5_WdError(v26);
      }
      else
      {
        v17 = v11[319];
        v18 = 0;
        if ( *((_DWORD *)v17 + 20) )
        {
          v19 = 1;
          v20 = 332 * v5;
          do
          {
            v21 = *((_QWORD *)this + 8);
            v22 = v17;
            v23 = *(_QWORD *)(v21 + 40);
            if ( ((1 << v18) & *(_DWORD *)(v20 + v23 + 84)) != 0 )
            {
              v36 = 83 * v5;
              v22 = v17;
              v25 = *(_DWORD *)(272LL * *(unsigned int *)(v23 + 4 * (v18 + 83 * v5) + 8) + v21 + 240);
              if ( v25 < 0 )
              {
                v19 = 0;
                *(_DWORD *)(v23 + 4 * (v18 + v36) + 164) = v25;
                *(_DWORD *)(v20 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 160) |= 1 << v18;
                v27 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(v11[319], v18);
                v13 = v27;
                if ( v27 < 0 )
                {
                  v31 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v30);
                  v31[3] = v18;
                  v31[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v20 + 4);
                  v31[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332 * v5);
                  v31[6] = v13;
                  WdLogEvent5_WdError(v31);
                }
                DxgkRemoveSessionViewForCurrentSession(
                  (struct _LUID *)(v20 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                  v18,
                  0);
                v22 = v11[319];
              }
            }
            ++v18;
            v17 = v22;
          }
          while ( v18 < *((_DWORD *)v22 + 20) );
          if ( !v19 )
            DmmDisableAllFailurePathsOnAdapter(
              v11,
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v20 + 160),
              0LL);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v40);
      COREACCESS::~COREACCESS((COREACCESS *)v39);
      if ( v35 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x40, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(MEMORY[0x10], 0LL);
      return (unsigned int)v13;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v40);
    COREACCESS::~COREACCESS((COREACCESS *)v39);
    if ( v35 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37);
  }
  v32 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
  v32[3] = 0LL;
  v32[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332 * v5 + 4);
  v32[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332 * v5);
  v32[6] = -1073741811LL;
  WdLogEvent5_WdError(v32);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x40, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(MEMORY[0x10], 0LL);
  return 3221225485LL;
}
