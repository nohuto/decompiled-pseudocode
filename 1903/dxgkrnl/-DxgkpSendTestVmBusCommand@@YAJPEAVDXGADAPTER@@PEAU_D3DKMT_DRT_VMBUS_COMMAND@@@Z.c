/*
 * XREFs of ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C021803C
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02386DC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0002010 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018920 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0024458 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C003CD84 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C021989C (-SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z.c)
 *     ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1C0219978 (-SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z.c)
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C0292588 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C0293400 (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 */

__int64 __fastcall DxgkpSendTestVmBusCommand(struct DXGADAPTER *a1, struct _D3DKMT_DRT_VMBUS_COMMAND *a2, __int64 a3)
{
  __int64 v4; // rsi
  PVOID PoolWithTag; // r13
  PVOID v6; // r12
  DXG_VMBUS_CHANNEL_BASE *v7; // rbx
  __int64 v8; // rax
  char *v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  SIZE_T v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  size_t v18; // r8
  char *v19; // rdx
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  DXGSESSIONMGR *v23; // rbx
  __int64 v24; // r8
  unsigned int v25; // eax
  DXGSESSIONDATA *v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct _KPROCESS *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  DXGSESSIONMGR *v43; // rbx
  __int64 v44; // r8
  unsigned int v45; // eax
  DXGSESSIONDATA *v46; // r15
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  DXGSESSIONMGR *v51; // rbx
  __int64 v52; // r8
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  struct _KPROCESS *v64; // rbx
  __int64 ProcessDxgProcess; // rax
  __int64 v66; // r15
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  DXGSESSIONMGR *v71; // rbx
  __int64 v72; // r8
  unsigned int v73; // eax
  DXGSESSIONDATA *v74; // r15
  __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rdx
  DXGSESSIONMGR *v80; // rbx
  __int64 v81; // r8
  unsigned int v82; // eax
  DXGSESSIONDATA *v83; // r15
  __int64 v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // rcx
  int v87; // eax
  __int64 v88; // rbx
  __int64 v89; // rdx
  __int64 v90; // rcx
  struct _KPROCESS *v91; // rbx
  __int64 v92; // rax
  __int64 v93; // r15
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  DXGSESSIONMGR *v98; // rbx
  __int64 v99; // r8
  unsigned int v100; // eax
  DXGSESSIONDATA *v101; // r15
  __int64 v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // rcx
  DXGSESSIONMGR *v105; // rbx
  unsigned int v106; // eax
  DXGSESSIONDATA *v107; // r15
  __int64 v108; // rbx
  __int64 v109; // rdx
  __int64 v110; // rcx
  int v111; // eax
  __int64 v112; // rbx
  __int64 v113; // rdx
  __int64 v114; // rcx
  struct _KPROCESS *v115; // rbx
  __int64 v116; // rax
  __int64 v117; // r15
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // rcx
  DXGSESSIONMGR *v122; // rbx
  __int64 v123; // r8
  unsigned int v124; // eax
  DXGSESSIONDATA *v125; // r15
  __int64 v126; // rbx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  size_t v130; // r8
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  unsigned int v135; // [rsp+30h] [rbp-1C8h] BYREF
  PVOID Object; // [rsp+38h] [rbp-1C0h] BYREF
  PVOID v137; // [rsp+40h] [rbp-1B8h] BYREF
  PVOID v138; // [rsp+48h] [rbp-1B0h] BYREF
  PVOID v139; // [rsp+50h] [rbp-1A8h] BYREF
  PVOID P; // [rsp+58h] [rbp-1A0h]
  PVOID v141; // [rsp+60h] [rbp-198h]
  _BYTE v142[16]; // [rsp+68h] [rbp-190h] BYREF
  _BYTE v143[16]; // [rsp+78h] [rbp-180h] BYREF
  _BYTE v144[16]; // [rsp+88h] [rbp-170h] BYREF
  _BYTE v145[16]; // [rsp+98h] [rbp-160h] BYREF
  _BYTE v146[16]; // [rsp+A8h] [rbp-150h] BYREF
  _BYTE v147[16]; // [rsp+B8h] [rbp-140h] BYREF
  _BYTE v148[16]; // [rsp+C8h] [rbp-130h] BYREF
  _BYTE v149[16]; // [rsp+D8h] [rbp-120h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-110h] BYREF
  char v151; // [rsp+118h] [rbp-E0h]
  struct _KAPC_STATE v152; // [rsp+120h] [rbp-D8h] BYREF
  char v153; // [rsp+150h] [rbp-A8h]
  struct _KAPC_STATE v154; // [rsp+158h] [rbp-A0h] BYREF
  char v155; // [rsp+188h] [rbp-70h]
  struct _KAPC_STATE v156; // [rsp+190h] [rbp-68h] BYREF
  char v157; // [rsp+1C0h] [rbp-38h]

  LODWORD(v4) = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  v6 = 0LL;
  v141 = 0LL;
  v135 = 0;
  v7 = 0LL;
  if ( a2 )
  {
    v10 = *((_DWORD *)a2 + 3);
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        if ( !a1 )
        {
          v8 = WdLogNewEntry5_WdError(0LL, a2, a3);
          *(_QWORD *)(v8 + 24) = 10240LL;
          goto LABEL_3;
        }
        v7 = (struct DXGADAPTER *)((char *)a1 + 4144);
        if ( a1 == (struct DXGADAPTER *)-4144LL )
        {
          v8 = WdLogNewEntry5_WdError(-4144LL, a2, a3);
          *(_QWORD *)(v8 + 24) = 10248LL;
          goto LABEL_3;
        }
      }
      else if ( v10 <= 1 || v10 > 3 )
      {
        v8 = WdLogNewEntry5_WdError(a1, a2, a3);
        *(_QWORD *)(v8 + 24) = 10259LL;
        goto LABEL_3;
      }
    }
    else
    {
      v7 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2) + 164);
      if ( !v7 )
      {
        v8 = WdLogNewEntry5_WdError(a1, v11, a3);
        *(_QWORD *)(v8 + 24) = 10231LL;
        goto LABEL_3;
      }
    }
    v12 = *((_QWORD *)a2 + 3);
    if ( v12 )
    {
      if ( !*((_QWORD *)a2 + 2) )
      {
        v8 = WdLogNewEntry5_WdError(a1, v12, a3);
        *(_QWORD *)(v8 + 24) = 10270LL;
        goto LABEL_3;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v12, 0x4B677844u);
      P = PoolWithTag;
      if ( !PoolWithTag )
      {
        v17 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
        *(_QWORD *)(v17 + 24) = 10278LL;
LABEL_20:
        WdLogEvent5_WdLowResource(v17);
        LODWORD(v4) = -1073741801;
        goto LABEL_169;
      }
      v18 = *((_QWORD *)a2 + 3);
      v19 = (char *)*((_QWORD *)a2 + 2);
      if ( &v19[v18] < v19 || (unsigned __int64)&v19[v18] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(PoolWithTag, v19, v18);
    }
    if ( *((_QWORD *)a2 + 5) )
    {
      if ( *((_QWORD *)a2 + 4) )
      {
        v135 = (*((_DWORD *)a2 + 10) + 7) & 0xFFFFFFF8;
        v6 = ExAllocatePoolWithTag((POOL_TYPE)512, v135, 0x4B677844u);
        v141 = v6;
        if ( !v6 )
        {
          v17 = WdLogNewEntry5_WdLowResource(a1, v12, a3, v20);
          *(_QWORD *)(v17 + 24) = 10304LL;
          goto LABEL_20;
        }
      }
    }
    if ( !v6 && !*((_QWORD *)a2 + 5) )
    {
      v21 = *((_DWORD *)a2 + 3);
      if ( v21 >= 0 )
      {
        if ( v21 <= 1 )
        {
          LODWORD(v4) = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessageAsync(v7, PoolWithTag, *((_DWORD *)a2 + 6));
LABEL_157:
          if ( (int)v4 < 0 )
            goto LABEL_169;
          v130 = *((_QWORD *)a2 + 5);
          if ( v135 < v130 )
          {
            v131 = WdLogNewEntry5_WdEvent(v9);
            *(_QWORD *)(v131 + 24) = *((_QWORD *)a2 + 5);
            *(_QWORD *)(v131 + 32) = v135;
            WdLogEvent5_WdEvent(v131);
            LODWORD(v4) = -1073741823;
            goto LABEL_169;
          }
          if ( v6 )
          {
            v9 = (char *)*((_QWORD *)a2 + 4);
            if ( v9 )
            {
              if ( v130 )
              {
                if ( (unsigned __int64)&v9[v130] > MmUserProbeAddress || &v9[v130] <= v9 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v9, v6, v130);
              }
            }
          }
LABEL_168:
          if ( (int)v4 >= 0 )
            goto LABEL_170;
          goto LABEL_169;
        }
        if ( v21 == 2 )
        {
          v137 = 0LL;
          v51 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, v12) + 74);
          if ( v51 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v50);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v51,
                                               CurrentProcessSessionId);
          }
          else
          {
            SessionDataForSpecifiedSession = 0LL;
          }
          if ( !SessionDataForSpecifiedSession )
          {
            v55 = WdLogNewEntry5_WdError(v9, v50, v52);
            *(_QWORD *)(v55 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v57, v56);
            LODWORD(v4) = -1073741790;
            *(_QWORD *)(v55 + 32) = -1073741790LL;
            WdLogEvent5_WdError(v55);
          }
          if ( (int)v4 >= 0 )
          {
            v58 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&v137);
            v4 = v58;
            if ( v58 < 0 )
            {
              v61 = WdLogNewEntry5_WdError(v9, v59, v60);
              *(_QWORD *)(v61 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v63, v62);
              *(_QWORD *)(v61 + 32) = v4;
              WdLogEvent5_WdError(v61);
            }
            if ( (int)v4 >= 0 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v143, v59);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v143);
              v64 = (struct _KPROCESS *)v137;
              ProcessDxgProcess = PsGetProcessDxgProcess(v137);
              v66 = ProcessDxgProcess;
              if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 299) & 0x20) == 0 )
              {
                DXGPROCESSMUTEX::DXGPROCESSMUTEX(
                  (DXGPROCESSMUTEX *)v147,
                  (struct DXGFASTMUTEX *const *)ProcessDxgProcess);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v147);
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v143);
                v153 = 0;
                CPROCESSATTACHHELPER::Attach(&v152, v64);
                KeEnterCriticalRegion();
                if ( *(_DWORD *)(v66 + 368)
                  && (*(_BYTE *)(v66 + 298) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
                {
                  v71 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v68, v67) + 74);
                  if ( v71 )
                  {
                    v73 = PsGetCurrentProcessSessionId(v70, v69);
                    v74 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v71, v73);
                  }
                  else
                  {
                    v74 = 0LL;
                  }
                  if ( !v74 )
                  {
                    LODWORD(v4) = -1073741811;
                    v75 = WdLogNewEntry5_WdError(v70, v69, v72);
                    *(_QWORD *)(v75 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v77, v76);
                    *(_QWORD *)(v75 + 32) = -1073741811LL;
                    WdLogEvent5_WdError(v75);
                  }
                  if ( (int)v4 >= 0 )
                    LODWORD(v4) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                    v74,
                                    PoolWithTag,
                                    *((_DWORD *)a2 + 6),
                                    0LL,
                                    0LL,
                                    0);
                }
                KeLeaveCriticalRegion();
                if ( v153 )
                {
                  KeUnstackDetachProcess(&v152);
                  v153 = 0;
                }
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v147);
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v143);
            }
          }
          if ( v137 )
          {
            ObfDereferenceObject(v137);
            v137 = 0LL;
          }
          goto LABEL_157;
        }
        if ( v21 == 3 )
        {
          Object = 0LL;
          v23 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, v12) + 74);
          if ( v23 )
          {
            v25 = PsGetCurrentProcessSessionId(v9, v22);
            v26 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v23, v25);
          }
          else
          {
            v26 = 0LL;
          }
          if ( !v26 )
          {
            v27 = WdLogNewEntry5_WdError(v9, v22, v24);
            *(_QWORD *)(v27 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v29, v28);
            LODWORD(v4) = -1073741790;
            *(_QWORD *)(v27 + 32) = -1073741790LL;
            WdLogEvent5_WdError(v27);
          }
          if ( (int)v4 >= 0 )
          {
            v30 = DXGSESSIONDATA::ReferenceDwmProcess(v26, (struct _EPROCESS **)&Object);
            v4 = v30;
            if ( v30 < 0 )
            {
              v33 = WdLogNewEntry5_WdError(v9, v31, v32);
              *(_QWORD *)(v33 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v35, v34);
              *(_QWORD *)(v33 + 32) = v4;
              WdLogEvent5_WdError(v33);
            }
            if ( (int)v4 >= 0 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v142, v31);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v142);
              v36 = (struct _KPROCESS *)Object;
              v37 = PsGetProcessDxgProcess(Object);
              v38 = v37;
              if ( v37 && (*(_BYTE *)(v37 + 299) & 0x20) == 0 )
              {
                DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v146, (struct DXGFASTMUTEX *const *)v37);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v146);
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v142);
                v151 = 0;
                CPROCESSATTACHHELPER::Attach(&ApcState, v36);
                KeEnterCriticalRegion();
                if ( *(_DWORD *)(v38 + 368)
                  && (*(_BYTE *)(v38 + 298) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
                {
                  v43 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v40, v39) + 74);
                  if ( v43 )
                  {
                    v45 = PsGetCurrentProcessSessionId(v42, v41);
                    v46 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v43, v45);
                  }
                  else
                  {
                    v46 = 0LL;
                  }
                  if ( !v46 )
                  {
                    LODWORD(v4) = -1073741811;
                    v47 = WdLogNewEntry5_WdError(v42, v41, v44);
                    *(_QWORD *)(v47 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v49, v48);
                    *(_QWORD *)(v47 + 32) = -1073741811LL;
                    WdLogEvent5_WdError(v47);
                  }
                  if ( (int)v4 >= 0 )
                    LODWORD(v4) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                    v46,
                                    PoolWithTag,
                                    *((_DWORD *)a2 + 6),
                                    0LL,
                                    0LL,
                                    0);
                }
                KeLeaveCriticalRegion();
                if ( v151 )
                {
                  KeUnstackDetachProcess(&ApcState);
                  v151 = 0;
                }
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v146);
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v142);
            }
          }
          if ( Object )
          {
            ObfDereferenceObject(Object);
            Object = 0LL;
          }
          goto LABEL_157;
        }
      }
      v8 = WdLogNewEntry5_WdError(a1, v12, a3);
      *(_QWORD *)(v8 + 24) = 10357LL;
      goto LABEL_3;
    }
    v78 = *((_DWORD *)a2 + 3);
    if ( v78 >= 0 )
    {
      if ( v78 <= 1 )
      {
        LODWORD(v4) = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(v7, PoolWithTag, *((_DWORD *)a2 + 6), v6, &v135);
LABEL_154:
        if ( !v6 && v135 )
        {
          v129 = WdLogNewEntry5_WdWarning(v9, v79, v81);
          *(_QWORD *)(v129 + 24) = v135;
          WdLogEvent5_WdWarning(v129);
        }
        goto LABEL_157;
      }
      if ( v78 == 2 )
      {
        v139 = 0LL;
        v105 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, v12) + 74);
        if ( v105 )
        {
          v106 = PsGetCurrentProcessSessionId(v9, v79);
          v107 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v105, v106);
        }
        else
        {
          v107 = 0LL;
        }
        if ( !v107 )
        {
          v108 = WdLogNewEntry5_WdError(v9, v79, v81);
          *(_QWORD *)(v108 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v110, v109);
          LODWORD(v4) = -1073741790;
          *(_QWORD *)(v108 + 32) = -1073741790LL;
          WdLogEvent5_WdError(v108);
        }
        if ( (int)v4 >= 0 )
        {
          v111 = DXGSESSIONDATA::ReferenceDwmProcess(v107, (struct _EPROCESS **)&v139);
          v4 = v111;
          if ( v111 < 0 )
          {
            v112 = WdLogNewEntry5_WdError(v9, v79, v81);
            *(_QWORD *)(v112 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v114, v113);
            *(_QWORD *)(v112 + 32) = v4;
            WdLogEvent5_WdError(v112);
          }
          if ( (int)v4 >= 0 )
          {
            DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v145, v79);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v145);
            v115 = (struct _KPROCESS *)v139;
            v116 = PsGetProcessDxgProcess(v139);
            v117 = v116;
            if ( v116 && (*(_BYTE *)(v116 + 299) & 0x20) == 0 )
            {
              DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v149, (struct DXGFASTMUTEX *const *)v116);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v149);
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v145);
              v157 = 0;
              CPROCESSATTACHHELPER::Attach(&v156, v115);
              KeEnterCriticalRegion();
              if ( *(_DWORD *)(v117 + 368)
                && (*(_BYTE *)(v117 + 298) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
              {
                v122 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v119, v118) + 74);
                if ( v122 )
                {
                  v124 = PsGetCurrentProcessSessionId(v121, v120);
                  v125 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v122, v124);
                }
                else
                {
                  v125 = 0LL;
                }
                if ( !v125 )
                {
                  LODWORD(v4) = -1073741811;
                  v126 = WdLogNewEntry5_WdError(v121, v120, v123);
                  *(_QWORD *)(v126 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v128, v127);
                  *(_QWORD *)(v126 + 32) = -1073741811LL;
                  WdLogEvent5_WdError(v126);
                }
                if ( (int)v4 >= 0 )
                  LODWORD(v4) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                  v125,
                                  PoolWithTag,
                                  *((_DWORD *)a2 + 6),
                                  v6,
                                  &v135,
                                  1);
              }
              KeLeaveCriticalRegion();
              if ( v157 )
              {
                KeUnstackDetachProcess(&v156);
                v157 = 0;
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v149);
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v145);
          }
        }
        if ( v139 )
        {
          ObfDereferenceObject(v139);
          v139 = 0LL;
        }
        goto LABEL_154;
      }
      if ( v78 == 3 )
      {
        v138 = 0LL;
        v80 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, v12) + 74);
        if ( v80 )
        {
          v82 = PsGetCurrentProcessSessionId(v9, v79);
          v83 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v80, v82);
        }
        else
        {
          v83 = 0LL;
        }
        if ( !v83 )
        {
          v84 = WdLogNewEntry5_WdError(v9, v79, v81);
          *(_QWORD *)(v84 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v86, v85);
          LODWORD(v4) = -1073741790;
          *(_QWORD *)(v84 + 32) = -1073741790LL;
          WdLogEvent5_WdError(v84);
        }
        if ( (int)v4 >= 0 )
        {
          v87 = DXGSESSIONDATA::ReferenceDwmProcess(v83, (struct _EPROCESS **)&v138);
          v4 = v87;
          if ( v87 < 0 )
          {
            v88 = WdLogNewEntry5_WdError(v9, v79, v81);
            *(_QWORD *)(v88 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v90, v89);
            *(_QWORD *)(v88 + 32) = v4;
            WdLogEvent5_WdError(v88);
          }
          if ( (int)v4 >= 0 )
          {
            DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v144, v79);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v144);
            v91 = (struct _KPROCESS *)v138;
            v92 = PsGetProcessDxgProcess(v138);
            v93 = v92;
            if ( v92 && (*(_BYTE *)(v92 + 299) & 0x20) == 0 )
            {
              DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v148, (struct DXGFASTMUTEX *const *)v92);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v148);
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v144);
              v155 = 0;
              CPROCESSATTACHHELPER::Attach(&v154, v91);
              KeEnterCriticalRegion();
              if ( *(_DWORD *)(v93 + 368)
                && (*(_BYTE *)(v93 + 298) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
              {
                v98 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v95, v94) + 74);
                if ( v98 )
                {
                  v100 = PsGetCurrentProcessSessionId(v97, v96);
                  v101 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v98, v100);
                }
                else
                {
                  v101 = 0LL;
                }
                if ( !v101 )
                {
                  LODWORD(v4) = -1073741811;
                  v102 = WdLogNewEntry5_WdError(v97, v96, v99);
                  *(_QWORD *)(v102 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v104, v103);
                  *(_QWORD *)(v102 + 32) = -1073741811LL;
                  WdLogEvent5_WdError(v102);
                }
                if ( (int)v4 >= 0 )
                  LODWORD(v4) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                  v101,
                                  PoolWithTag,
                                  *((_DWORD *)a2 + 6),
                                  v6,
                                  &v135,
                                  1);
              }
              KeLeaveCriticalRegion();
              if ( v155 )
              {
                KeUnstackDetachProcess(&v154);
                v155 = 0;
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v148);
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v144);
          }
        }
        if ( v138 )
        {
          ObfDereferenceObject(v138);
          v138 = 0LL;
        }
        goto LABEL_154;
      }
    }
    v132 = WdLogNewEntry5_WdError(a1, v12, a3);
    *(_QWORD *)(v132 + 24) = 10409LL;
    WdLogEvent5_WdError(v132);
    LODWORD(v4) = -1073741811;
    goto LABEL_168;
  }
  v8 = WdLogNewEntry5_WdError(a1, 0LL, a3);
  *(_QWORD *)(v8 + 24) = 10219LL;
LABEL_3:
  WdLogEvent5_WdError(v8);
  LODWORD(v4) = -1073741811;
LABEL_169:
  v133 = WdLogNewEntry5_WdEvent(v9);
  *(_QWORD *)(v133 + 24) = (int)v4;
  WdLogEvent5_WdEvent(v133);
LABEL_170:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v4;
}
