/*
 * XREFs of ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C00AE24C
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@@Z @ 0x1C00AE154 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0003560 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005C3C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000E62C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C001A318 (-GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00DDAF8 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E5618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00ED068 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00ED7C8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C0138250 (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 */

__int64 __fastcall DpiPersistence::CreateMonitorSetId(
        struct _LUID *this,
        const struct _LUID *a2,
        char a3,
        __int64 a4,
        struct _UNICODE_STRING *a5)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  DXGGLOBAL *Global; // rax
  __int64 v11; // rcx
  DXGSESSIONDATA *SessionData; // r15
  __int64 v13; // rbx
  __int64 v14; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v16; // rbx
  __int64 v17; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  SESSION_VIEW *SessionViewFromSource; // rbx
  _QWORD *v25; // rax
  unsigned __int16 v26; // si
  __int64 v27; // rax
  unsigned __int16 v28; // si
  unsigned __int16 v29; // r12
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct DISPLAY_SOURCE *v34; // r13
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  int v40; // eax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // r15
  unsigned int v45; // edi
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  DMMVIDPNTOPOLOGY *v52; // r13
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  bool i; // sf
  __int64 v58; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned __int16 *v60; // rbx
  __int16 v61; // si
  __int64 v62; // rax
  _QWORD *v63; // rax
  unsigned __int16 *v64; // [rsp+38h] [rbp-51h] BYREF
  unsigned int v65; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v66; // [rsp+44h] [rbp-45h]
  unsigned int v67[2]; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int16 *v68; // [rsp+50h] [rbp-39h]
  __int64 v69; // [rsp+58h] [rbp-31h] BYREF
  __int64 v70; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v71[80]; // [rsp+68h] [rbp-21h] BYREF

  v5 = (unsigned int)a2;
  LODWORD(v6) = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    Current = DXGPROCESS::GetCurrent();
    v16 = Current;
    if ( !Current )
    {
      v17 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v17 + 24) = 221LL;
      WdLogEvent5_WdError(v17);
      return -1073741811LL;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)Current + 13) + 224LL))(0LL, 0LL, 0LL) )
    {
      v19 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v19 + 24) = v16;
      WdLogEvent5_WdError(v19);
      return 3221225506LL;
    }
    LOBYTE(v64) = 0;
    if ( a3
      || (v20 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v64, 0), v6 = v20, v20 >= 0) )
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, this, v5);
      if ( SessionViewFromSource )
      {
        if ( a5 )
          LOBYTE(a5->Length) = 0;
        v26 = *(_WORD *)(a4 + 2);
        if ( (v26 & 1) != 0 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v23);
          *(_QWORD *)(v27 + 24) = 274LL;
          WdLogEvent5_WdAssertion(v27);
          v26 = *(_WORD *)(a4 + 2);
        }
        v28 = v26 >> 1;
        v29 = v28;
        v68 = *(unsigned __int16 **)(a4 + 8);
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
        v34 = PrimaryDisplaySource;
        if ( PrimaryDisplaySource )
        {
          v35 = *((_QWORD *)PrimaryDisplaySource + 1);
          v36 = *(_QWORD *)(v35 + 16);
          if ( !v36 )
          {
            v37 = WdLogNewEntry5_WdAssertion(v35);
            *(_QWORD *)(v37 + 24) = 289LL;
            WdLogEvent5_WdAssertion(v37);
            v31 = 0LL;
          }
          if ( *(_QWORD *)(v36 + 2520) == v31 )
          {
            v38 = WdLogNewEntry5_WdAssertion(v35);
            *(_QWORD *)(v38 + 24) = 290LL;
            WdLogEvent5_WdAssertion(v38);
          }
          v39 = *(_QWORD *)(v36 + 276);
          *(_QWORD *)v67 = v39;
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v71, (struct DXGADAPTER *const)v36, 0LL);
          v40 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v71);
          v6 = v40;
          if ( v40 >= 0 )
          {
            if ( a5 )
              LOBYTE(a5->Length) = (unsigned int)ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(*(ADAPTER_DISPLAY **)(v36 + 2520)) != 0;
            v43 = *(_QWORD *)(v36 + 2520);
            v44 = 0LL;
            v45 = *((_DWORD *)v34 + 4);
            v66 = v45;
            v46 = *(_QWORD *)(v43 + 88);
            if ( v46 )
            {
              EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v70, *(_QWORD *)(v43 + 88));
              v48 = *(_QWORD *)(v46 + 88);
              v69 = 0LL;
              if ( v48 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v48 + 32));
                v49 = *(_QWORD *)(v46 + 88);
                LODWORD(v39) = v67[0];
              }
              else
              {
                v49 = 0LL;
              }
              auto_rc<DMMVIDPN const>::reset(&v69, v49);
              if ( v69 )
              {
                v65 = -1;
                v52 = (DMMVIDPNTOPOLOGY *)(v69 + 96);
                LODWORD(v6) = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
                                (DMMVIDPNTOPOLOGY *)(v69 + 96),
                                v45,
                                0LL,
                                &v65);
                for ( i = (int)v6 < 0; !i; i = (int)v6 < 0 )
                {
                  if ( v65 == -1 )
                  {
                    auto_rc<DMMVIDPN const>::reset(&v69, 0LL);
                    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v70 + 40));
                    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v71);
                    goto LABEL_51;
                  }
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v46 + 80) + 72LL));
                  v58 = *(_QWORD *)(v46 + 80);
                  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v58, v65);
                  if ( TargetById && *((_DWORD *)TargetById + 22) )
                  {
                    if ( v58 )
                      ReferenceCounted::Release((ReferenceCounted *)(v58 + 64));
                  }
                  else
                  {
                    if ( v58 )
                      ReferenceCounted::Release((ReferenceCounted *)(v58 + 64));
                    v60 = v68;
                    WORD2(v64) = 0;
                    if ( v29 && v29 != v28 )
                    {
                      LODWORD(v6) = RtlStringCchCopyW(v68, v29, L"^");
                      if ( (_DWORD)v6 == -2147483643 )
                        LODWORD(v6) = -1073741789;
                      if ( (int)v6 < 0 )
                        goto LABEL_56;
                      --v29;
                      ++v60;
                    }
                    LODWORD(v6) = DpiPersistence::AppendMonitorId(
                                    (DpiPersistence *)v65,
                                    (unsigned int)v67,
                                    (const struct _LUID *)v46,
                                    (struct VIDPN_MGR *)v29,
                                    (unsigned __int16)&v64 + 4,
                                    v60,
                                    v64);
                    if ( (int)v6 < 0 )
                      goto LABEL_56;
                    v29 -= WORD2(v64);
                    v68 = &v60[WORD2(v64)];
                  }
                  v65 = -1;
                  LODWORD(v6) = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v52, v66, ++v44, &v65);
                }
                v63 = (_QWORD *)WdLogNewEntry5_WdTrace(v54, v53, v55, v56);
                v63[4] = v66;
                v63[6] = (int)v6;
                v63[3] = v44;
                v63[5] = v52;
              }
              else
              {
                v51 = WdLogNewEntry5_WdError(v50);
                *(_QWORD *)(v51 + 24) = (int)v67[1];
                *(_QWORD *)(v51 + 32) = (unsigned int)v39;
                WdLogEvent5_WdError(v51);
                LODWORD(v6) = -1071774884;
              }
LABEL_56:
              auto_rc<DMMVIDPN const>::reset(&v69, 0LL);
              DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v70 + 40));
            }
            else
            {
              v47 = WdLogNewEntry5_WdError(v41);
              *(_QWORD *)(v47 + 24) = (int)v67[1];
              *(_QWORD *)(v47 + 32) = (unsigned int)v39;
              WdLogEvent5_WdError(v47);
              LODWORD(v6) = -1071774923;
            }
          }
          else
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdError(v41);
            v42[4] = SHIDWORD(v39);
            v42[5] = (unsigned int)v39;
            v42[3] = v6;
            WdLogEvent5_WdError(v42);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v71);
        }
        else
        {
LABEL_51:
          v61 = v28 - v29;
          *(_WORD *)a4 = 2 * v61;
          if ( !(2 * v61) )
          {
            LODWORD(v6) = -1073741637;
            v62 = WdLogNewEntry5_WdWarning(v32, v31, v33);
            *(_QWORD *)(v62 + 24) = 428LL;
            WdLogEvent5_WdWarning(v62);
          }
        }
      }
      else
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        v25[3] = v5;
        v25[4] = this->HighPart;
        v25[5] = this->LowPart;
        WdLogEvent5_WdError(v25);
        LODWORD(v6) = -1073741811;
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v22 + 24) = v6;
      WdLogEvent5_WdError(v22);
    }
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v64);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11);
    LODWORD(v6) = -1073741811;
    *(_QWORD *)(v13 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v14);
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v6;
}
