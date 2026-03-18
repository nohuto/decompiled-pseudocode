/*
 * XREFs of ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00CCA90
 * Callers:
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00CC96C (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00027B0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILE.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006D08 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001AA60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C00C47B0 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF690 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C01268E8 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C012CCCC (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C014F980 (DxgkRemoveSessionViewForCurrentSession.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0278650 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
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
  __int64 v11; // r15
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // r14d
  char v19; // bl
  __int64 v20; // r12
  __int64 v21; // r10
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r9
  int v26; // r10d
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _BYTE v35[8]; // [rsp+48h] [rbp-B8h] BYREF
  char v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  _BYTE v38[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v39[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v40[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v41[88]; // [rsp+B8h] [rbp-48h] BYREF

  v5 = a3;
  while ( 1 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332 * v5),
                                             0);
    v10 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
      v34[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332 * v5 + 4);
      v34[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332 * v5);
      v34[5] = v10;
      WdLogEvent5_WdError(v34);
      return (unsigned int)v10;
    }
    v11 = MEMORY[0x6C0];
    if ( !MEMORY[0x6C0] )
      break;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v38, 0LL);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v35, a2[36], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, 0LL, 1, v12, 0);
    v13 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v39, 2LL);
    if ( !DXGDEVICE::IsExecutionStateErrorState(0LL) )
    {
      if ( (int)v13 < 0 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
        v27[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332 * v5 + 4);
        v27[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332 * v5);
        v27[5] = *((_QWORD *)this + 8);
        v27[6] = v13;
        WdLogEvent5_WdError(v27);
      }
      else
      {
        v17 = *(_QWORD *)(v11 + 2552);
        v18 = 0;
        if ( *(_DWORD *)(v17 + 80) )
        {
          v19 = 1;
          v20 = 332 * v5;
          do
          {
            v21 = *((_QWORD *)this + 8);
            v22 = (unsigned int)(1 << v18);
            v23 = v17;
            v24 = *(_QWORD *)(v21 + 40);
            if ( ((unsigned int)v22 & *(_DWORD *)(v20 + v24 + 84)) != 0 )
            {
              v37 = 83 * v5;
              v23 = v17;
              v26 = *(_DWORD *)(272LL * *(unsigned int *)(v24 + 4 * (v18 + 83 * v5) + 8) + v21 + 240);
              if ( v26 < 0 )
              {
                v19 = 0;
                *(_DWORD *)(v24 + 4 * (v18 + v37) + 164) = v26;
                *(_DWORD *)(v20 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 160) |= v22;
                v28 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(*(ADAPTER_DISPLAY **)(v11 + 2552), v18);
                v13 = v28;
                if ( v28 < 0 )
                {
                  v32 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29, v31);
                  v32[3] = v18;
                  v32[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v20 + 4);
                  v32[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332 * v5);
                  v32[6] = v13;
                  WdLogEvent5_WdError(v32);
                }
                DxgkRemoveSessionViewForCurrentSession(
                  (struct _LUID *)(v20 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                  v18,
                  0);
                v23 = *(_QWORD *)(v11 + 2552);
              }
            }
            ++v18;
            v17 = v23;
          }
          while ( v18 < *(_DWORD *)(v23 + 80) );
          if ( !v19 )
            DmmDisableAllFailurePathsOnAdapter(
              v11,
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v20 + 160),
              v22,
              0LL);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v41);
      COREACCESS::~COREACCESS((COREACCESS *)v40);
      if ( v36 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v38);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x40, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(MEMORY[0x10], 0LL);
      return (unsigned int)v13;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v41);
    COREACCESS::~COREACCESS((COREACCESS *)v40);
    if ( v36 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v38);
  }
  v33 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
  v33[3] = 0LL;
  v33[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332 * v5 + 4);
  v33[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332 * v5);
  v33[6] = -1073741811LL;
  WdLogEvent5_WdError(v33);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x40, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(MEMORY[0x10], 0LL);
  return 3221225485LL;
}
