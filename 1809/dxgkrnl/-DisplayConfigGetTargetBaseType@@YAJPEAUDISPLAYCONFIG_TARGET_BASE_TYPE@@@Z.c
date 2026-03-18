/*
 * XREFs of ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C0138914
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005C3C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DisplayConfigGetTargetBaseType(struct _LUID *a1, __int64 a2, __int64 a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGADAPTER *v10; // rsi
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  _BYTE v29[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v30[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v31[64]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v32; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v33; // [rsp+98h] [rbp+10h] BYREF

  if ( a1 && a1->LowPart == 6 && a1->HighPart == 24 )
  {
    a1[2].HighPart = -1;
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1[1], &v33);
    v10 = v5;
    if ( v5 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v5, 0LL);
      v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29);
      DXGADAPTER::ReleaseReference(v10);
      if ( v11 < 0 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
        v25[3] = v10;
        v25[4] = *((int *)v10 + 70);
        v25[5] = *((unsigned int *)v10 + 69);
        WdLogEvent5_WdWarning(v25);
        v11 = -1073741811;
      }
      else
      {
        v15 = *((_QWORD *)v10 + 315);
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v32, v16);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 80) + 72LL));
          v17 = *(_QWORD *)(v16 + 80);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v17, a1[2].LowPart);
          if ( TargetById )
          {
            a1[2].HighPart = *((_DWORD *)TargetById + 21);
          }
          else
          {
            v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
            v11 = -1073741811;
            v27[3] = a1[2].LowPart;
            v27[4] = a1;
            v27[5] = v10;
          }
          if ( v17 )
            ReferenceCounted::Release((ReferenceCounted *)(v17 + 64));
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40));
        }
        else
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
          v26[3] = v10;
          v26[4] = *((int *)v10 + 70);
          v26[5] = *((unsigned int *)v10 + 69);
          WdLogEvent5_WdWarning(v26);
          v11 = -1073741637;
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v31);
      COREACCESS::~COREACCESS((COREACCESS *)v30);
      return (unsigned int)v11;
    }
    else
    {
      v24 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
      *(_QWORD *)(v24 + 24) = a1[1].HighPart;
      *(_QWORD *)(v24 + 32) = a1[1].LowPart;
      return 3223191554LL;
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v28 + 24) = a1;
    WdLogEvent5_WdWarning(v28);
    return 3221225485LL;
  }
}
