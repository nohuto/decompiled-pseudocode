/*
 * XREFs of ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00BB554
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00040D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005C3C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C00BB6CC (MonitorFillMonitorDeviceInfo.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DisplayConfigFillTargetDeviceInfo(
        struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGADAPTER *v11; // rsi
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rbx
  _QWORD *v18; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct DMMVIDEOPRESENTTARGET *v24; // r14
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r8
  _QWORD *v26; // rcx
  __int64 v27; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  _BYTE v34[8]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v35[32]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v36[80]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v38; // [rsp+A8h] [rbp+10h] BYREF

  if ( a1 && *(_DWORD *)a1 == 2 && *((_DWORD *)a1 + 1) == 420 )
  {
    *(_QWORD *)((char *)a1 + 28) = 0LL;
    *((_DWORD *)a1 + 5) = 0;
    memset((char *)a1 + 36, 0, 0x180uLL);
    *((_DWORD *)a1 + 6) = -1;
    Global = DXGGLOBAL::GetGlobal(v4);
    v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a1 + 8), &v38);
    v11 = v6;
    if ( v6 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v6, 0LL);
      v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34);
      DXGADAPTER::ReleaseReference(v11);
      if ( v12 < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
        v30[3] = v11;
        v30[4] = *((int *)v11 + 70);
        v30[5] = *((unsigned int *)v11 + 69);
        WdLogEvent5_WdWarning(v30);
        v12 = -1073741811;
      }
      else
      {
        v16 = *((_QWORD *)v11 + 315);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v37, v17);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 80) + 72LL));
          v18 = *(_QWORD **)(v17 + 80);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v18, *((_DWORD *)a1 + 4));
          v24 = TargetById;
          if ( TargetById )
          {
            NextTarget = 0LL;
            v26 = (_QWORD *)v18[3];
            if ( v26 != v18 + 3 )
              NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v26 - 1);
            if ( NextTarget != TargetById )
            {
              do
              {
                if ( *((_DWORD *)NextTarget + 20) == *((_DWORD *)v24 + 20) )
                  ++*((_DWORD *)a1 + 8);
                NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v18, NextTarget);
              }
              while ( NextTarget != v24 );
            }
            *((_DWORD *)a1 + 6) = *((_DWORD *)v24 + 20);
            v27 = *((_QWORD *)v24 + 14);
            if ( v27 )
              v12 = MonitorFillMonitorDeviceInfo(v27, a1);
            else
              *((_DWORD *)a1 + 5) |= 2u;
          }
          else
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
            v12 = -1073741811;
            v32[3] = *((unsigned int *)a1 + 4);
            v32[4] = a1;
            v32[5] = v11;
          }
          if ( v18 )
            ReferenceCounted::Release((ReferenceCounted *)(v18 + 8));
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v37 + 40));
        }
        else
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
          v31[3] = v11;
          v31[4] = *((int *)v11 + 70);
          v31[5] = *((unsigned int *)v11 + 69);
          WdLogEvent5_WdWarning(v31);
          v12 = -1073741637;
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v36);
      COREACCESS::~COREACCESS((COREACCESS *)v35);
      return (unsigned int)v12;
    }
    else
    {
      v29 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
      *(_QWORD *)(v29 + 24) = *((int *)a1 + 3);
      *(_QWORD *)(v29 + 32) = *((unsigned int *)a1 + 2);
      return 3223191554LL;
    }
  }
  else
  {
    v33 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v33 + 24) = a1;
    WdLogEvent5_WdWarning(v33);
    return 3221225485LL;
  }
}
