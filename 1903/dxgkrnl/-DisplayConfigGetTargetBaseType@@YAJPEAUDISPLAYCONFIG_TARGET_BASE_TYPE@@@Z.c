/*
 * XREFs of ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C014879C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DisplayConfigGetTargetBaseType(struct _LUID *a1, __int64 a2, __int64 a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGADAPTER *v8; // rsi
  __int64 v9; // r8
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v29[8]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v30[64]; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v31[72]; // [rsp+78h] [rbp-60h] BYREF

  if ( a1 && a1->LowPart == 6 && a1->HighPart == 24 )
  {
    a1[2].HighPart = -1;
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
    v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1[1], &v28);
    v8 = v5;
    if ( v5 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v5, 0LL);
      v10 = COREADAPTERACCESS::AcquireShared((__int64)v29, 0xFFFFFFFFLL, v9);
      DXGADAPTER::ReleaseReferenceNoTracking(v8);
      if ( v10 < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
        v23[3] = v8;
        v23[4] = *((int *)v8 + 70);
        v23[5] = *((unsigned int *)v8 + 69);
        WdLogEvent5_WdWarning(v23);
        v10 = -1073741811;
      }
      else
      {
        v14 = *((_QWORD *)v8 + 319);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v27, v15);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 80) + 72LL));
          v16 = *(_QWORD *)(v15 + 80);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v16, a1[2].LowPart);
          if ( TargetById )
          {
            a1[2].HighPart = *((_DWORD *)TargetById + 21);
          }
          else
          {
            v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18);
            v10 = -1073741811;
            v25[3] = a1[2].LowPart;
            v25[4] = a1;
            v25[5] = v8;
          }
          if ( v16 )
            ReferenceCounted::Release((ReferenceCounted *)(v16 + 64), v18, v20);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v27 + 40));
        }
        else
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
          v24[3] = v8;
          v24[4] = *((int *)v8 + 70);
          v24[5] = *((unsigned int *)v8 + 69);
          WdLogEvent5_WdWarning(v24);
          v10 = -1073741637;
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v31);
      COREACCESS::~COREACCESS((COREACCESS *)v30);
      return (unsigned int)v10;
    }
    else
    {
      v22 = WdLogNewEntry5_WdTrace(v7, v6);
      *(_QWORD *)(v22 + 24) = a1[1].HighPart;
      *(_QWORD *)(v22 + 32) = a1[1].LowPart;
      return 3223191554LL;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v26 + 24) = a1;
    WdLogEvent5_WdWarning(v26);
    return 3221225485LL;
  }
}
