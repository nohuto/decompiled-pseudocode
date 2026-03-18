/*
 * XREFs of ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C012D058
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C012D348 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00098BC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000C05C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000D0E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000D7C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C000DA44 (-GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00D7B40 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00EBEC0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00EDB7C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C012CFDC (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 */

__int64 __fastcall DpiPersistence::CreateMonitorSetId(
        struct _LUID *this,
        const struct _LUID *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4)
{
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rbx
  __int64 v13; // r8
  unsigned int CurrentProcessSessionId; // eax
  DXGPROCESS *Current; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  DXGPROCESS *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rbx
  __int64 v25; // r8
  unsigned __int16 v26; // si
  unsigned __int16 v27; // si
  unsigned __int16 v28; // r15
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DISPLAY_SOURCE *v33; // r13
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rbx
  __int64 v37; // r8
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // r12
  unsigned int v44; // edi
  __int64 v45; // r14
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  char **v52; // r13
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  unsigned __int16 *v61; // rbx
  __int64 v62; // r8
  __int16 v63; // si
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  _QWORD *v68; // rcx
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  unsigned __int16 v80; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v81; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v82; // [rsp+38h] [rbp-C8h]
  unsigned int v83[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v84; // [rsp+48h] [rbp-B8h]
  __int64 v85; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v86; // [rsp+58h] [rbp-A8h] BYREF
  _WORD *v87; // [rsp+60h] [rbp-A0h]
  _BYTE v88[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v89[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v90[72]; // [rsp+B8h] [rbp-48h] BYREF

  SessionDataForSpecifiedSession = 0LL;
  v87 = (_WORD *)a3;
  LODWORD(v5) = 0;
  v6 = (unsigned int)a2;
  v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 74);
  if ( v12 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v65 = WdLogNewEntry5_WdError(v11, v10, v13);
    *(_QWORD *)(v65 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v67, v66);
    v68 = (_QWORD *)v65;
    *(_QWORD *)(v65 + 32) = -1073741811LL;
LABEL_42:
    WdLogEvent5_WdError(v68);
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent(v11, v10);
  v19 = Current;
  if ( !Current )
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
    v69[3] = 225LL;
LABEL_41:
    v68 = v69;
    goto LABEL_42;
  }
  if ( DXGPROCESS::IsRemoteConnection(Current) )
  {
    v70 = WdLogNewEntry5_WdError(v21, v20, v22);
    *(_QWORD *)(v70 + 24) = v19;
    WdLogEvent5_WdError(v70);
    return 3221225506LL;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, this, v6);
  if ( !SessionViewFromSource )
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdError(v23, 0LL, v25);
    v69[3] = v6;
    v69[4] = this->HighPart;
    v69[5] = this->LowPart;
    goto LABEL_41;
  }
  if ( a4 )
    LOBYTE(a4->Length) = 0;
  v26 = *(_WORD *)(a3 + 2);
  if ( (v26 & 1) != 0 )
  {
    v71 = WdLogNewEntry5_WdAssertion(v23, 0LL);
    *(_QWORD *)(v71 + 24) = 262LL;
    WdLogEvent5_WdAssertion(v71);
    v26 = *(_WORD *)(a3 + 2);
  }
  v27 = v26 >> 1;
  v28 = v27;
  v84 = *(unsigned __int16 **)(a3 + 8);
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
  v33 = PrimaryDisplaySource;
  if ( PrimaryDisplaySource )
  {
    v34 = *((_QWORD *)PrimaryDisplaySource + 1);
    v35 = *(_QWORD *)(v34 + 16);
    if ( !v35 )
    {
      v72 = WdLogNewEntry5_WdAssertion(v34, v30);
      *(_QWORD *)(v72 + 24) = 277LL;
      WdLogEvent5_WdAssertion(v72);
      v30 = 0LL;
    }
    if ( *(_QWORD *)(v35 + 2552) == v30 )
    {
      v73 = WdLogNewEntry5_WdAssertion(v34, v30);
      *(_QWORD *)(v73 + 24) = 278LL;
      WdLogEvent5_WdAssertion(v73);
    }
    v36 = *(_QWORD *)(v35 + 276);
    *(_QWORD *)v83 = v36;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v88, (struct DXGADAPTER *const)v35, 0LL);
    v38 = COREADAPTERACCESS::AcquireShared((__int64)v88, 0xFFFFFFFFLL, v37);
    v5 = v38;
    if ( v38 < 0 )
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39, v41);
      v74[4] = (int)v83[1];
      v74[5] = (unsigned int)v36;
      v74[3] = v5;
      WdLogEvent5_WdError(v74);
    }
    else
    {
      if ( a4 )
        LOBYTE(a4->Length) = (unsigned int)ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(
                                             *(ADAPTER_DISPLAY **)(v35 + 2552),
                                             v39) != 0;
      v42 = *(_QWORD *)(v35 + 2552);
      v43 = 0LL;
      v44 = *((_DWORD *)v33 + 4);
      v82 = v44;
      v45 = *(_QWORD *)(v42 + 88);
      if ( v45 )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v86, *(_QWORD *)(v42 + 88));
        v47 = *(_QWORD *)(v45 + 88);
        v85 = 0LL;
        if ( v47 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v47 + 32));
          v48 = *(_QWORD *)(v45 + 88);
          LODWORD(v36) = v83[0];
        }
        else
        {
          v48 = 0LL;
        }
        auto_rc<DMMVIDPN const>::reset(&v85, v48, v46);
        if ( v85 )
        {
          v52 = (char **)(v85 + 96);
          while ( 1 )
          {
            v81 = -1;
            v53 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v52, v44, v43, &v81);
            v5 = v53;
            if ( v53 < 0 )
              break;
            if ( v81 == -1 )
            {
              auto_rc<DMMVIDPN const>::reset(&v85, 0LL, v56);
              DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v86 + 40));
              COREACCESS::~COREACCESS((COREACCESS *)v90);
              COREACCESS::~COREACCESS((COREACCESS *)v89);
              goto LABEL_36;
            }
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v45 + 80) + 72LL));
            v57 = *(_QWORD *)(v45 + 80);
            TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v57, v81);
            if ( TargetById && *((_DWORD *)TargetById + 22) )
            {
              if ( v57 )
                ReferenceCounted::Release((ReferenceCounted *)(v57 + 64), v59, v60);
            }
            else
            {
              if ( v57 )
                ReferenceCounted::Release((ReferenceCounted *)(v57 + 64), v59, v60);
              v61 = v84;
              v80 = 0;
              if ( v28 && v28 != v27 )
              {
                LODWORD(v5) = RtlStringCchCopyW(v84, v28, L"^");
                if ( (_DWORD)v5 == -2147483643 )
                  LODWORD(v5) = -1073741789;
                if ( (int)v5 < 0 )
                  goto LABEL_56;
                --v28;
                ++v61;
              }
              LODWORD(v5) = DpiPersistence::AppendMonitorId(
                              (DpiPersistence *)v81,
                              v83,
                              (struct _LUID *)v45,
                              (struct VIDPN_MGR *)v28,
                              &v80,
                              v61);
              if ( (int)v5 < 0 )
                goto LABEL_56;
              v28 -= v80;
              v84 = &v61[v80];
            }
            v44 = v82;
            ++v43;
          }
          v77 = (_QWORD *)WdLogNewEntry5_WdTrace(v55, v54);
          v78 = v82;
          v77[3] = v43;
          v77[4] = v78;
          v77[5] = v52;
          v77[6] = v5;
        }
        else
        {
          v76 = WdLogNewEntry5_WdError(v50, v49, v51);
          *(_QWORD *)(v76 + 24) = (int)v83[1];
          *(_QWORD *)(v76 + 32) = (unsigned int)v36;
          WdLogEvent5_WdError(v76);
          LODWORD(v5) = -1071774884;
        }
LABEL_56:
        auto_rc<DMMVIDPN const>::reset(&v85, 0LL, v62);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v86 + 40));
      }
      else
      {
        v75 = WdLogNewEntry5_WdError(v40, v39, v41);
        *(_QWORD *)(v75 + 24) = (int)v83[1];
        *(_QWORD *)(v75 + 32) = (unsigned int)v36;
        WdLogEvent5_WdError(v75);
        LODWORD(v5) = -1071774923;
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v90);
    COREACCESS::~COREACCESS((COREACCESS *)v89);
  }
  else
  {
LABEL_36:
    v63 = v27 - v28;
    *v87 = 2 * v63;
    if ( !(2 * v63) )
    {
      LODWORD(v5) = -1073741637;
      v79 = WdLogNewEntry5_WdWarning(v31, v30, v32);
      *(_QWORD *)(v79 + 24) = 416LL;
      WdLogEvent5_WdWarning(v79);
    }
  }
  return (unsigned int)v5;
}
