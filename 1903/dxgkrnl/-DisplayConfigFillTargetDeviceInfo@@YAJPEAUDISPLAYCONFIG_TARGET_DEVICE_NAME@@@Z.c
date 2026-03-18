/*
 * XREFs of ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00CFA48
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0003D00 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C00CFBF8 (MonitorFillMonitorDeviceInfo.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DisplayConfigFillTargetDeviceInfo(
        struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGADAPTER *v10; // rsi
  __int64 v11; // r8
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rbx
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  _QWORD *v23; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rcx
  __int64 v25; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v34[8]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v35[64]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v36[72]; // [rsp+78h] [rbp-70h] BYREF

  if ( a1 && *(_DWORD *)a1 == 2 && *((_DWORD *)a1 + 1) == 420 )
  {
    *(_QWORD *)((char *)a1 + 28) = 0LL;
    *((_DWORD *)a1 + 5) = 0;
    memset((char *)a1 + 36, 0, 0x180uLL);
    *((_DWORD *)a1 + 6) = -1;
    Global = DXGGLOBAL::GetGlobal(v5, v4);
    v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a1 + 8), &v33);
    v10 = v7;
    if ( v7 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v7, 0LL);
      v12 = COREADAPTERACCESS::AcquireShared((__int64)v34, 0xFFFFFFFFLL, v11);
      DXGADAPTER::ReleaseReferenceNoTracking(v10);
      if ( v12 < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
        v28[3] = v10;
        v28[4] = *((int *)v10 + 70);
        v28[5] = *((unsigned int *)v10 + 69);
        WdLogEvent5_WdWarning(v28);
        v12 = -1073741811;
      }
      else
      {
        v16 = *((_QWORD *)v10 + 319);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v32, v17);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 80) + 72LL));
          v18 = *(_QWORD **)(v17 + 80);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v18, *((_DWORD *)a1 + 4));
          if ( TargetById )
          {
            v23 = (_QWORD *)v18[3];
            if ( v23 == v18 + 3 )
              NextTarget = 0LL;
            else
              NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v23 - 1);
            for ( ;
                  NextTarget != TargetById;
                  NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v18, NextTarget) )
            {
              if ( *((_DWORD *)NextTarget + 20) == *((_DWORD *)TargetById + 20) )
                ++*((_DWORD *)a1 + 8);
            }
            *((_DWORD *)a1 + 6) = *((_DWORD *)TargetById + 20);
            v25 = *((_QWORD *)TargetById + 14);
            if ( v25 )
              v12 = MonitorFillMonitorDeviceInfo(v25, a1);
            else
              *((_DWORD *)a1 + 5) |= 2u;
          }
          else
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
            v12 = -1073741811;
            v30[3] = *((unsigned int *)a1 + 4);
            v30[4] = a1;
            v30[5] = v10;
          }
          if ( v18 )
            ReferenceCounted::Release((ReferenceCounted *)(v18 + 8), v19, v21);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40));
        }
        else
        {
          v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
          v29[3] = v10;
          v29[4] = *((int *)v10 + 70);
          v29[5] = *((unsigned int *)v10 + 69);
          WdLogEvent5_WdWarning(v29);
          v12 = -1073741637;
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v36);
      COREACCESS::~COREACCESS((COREACCESS *)v35);
      return (unsigned int)v12;
    }
    else
    {
      v27 = WdLogNewEntry5_WdTrace(v9, v8);
      *(_QWORD *)(v27 + 24) = *((int *)a1 + 3);
      *(_QWORD *)(v27 + 32) = *((unsigned int *)a1 + 2);
      return 3223191554LL;
    }
  }
  else
  {
    v31 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v31 + 24) = a1;
    WdLogEvent5_WdWarning(v31);
    return 3221225485LL;
  }
}
