/*
 * XREFs of ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C01E88C8
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0020CBC (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002195C (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C003699C (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C01E9F6C (-SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z.c)
 *     ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1C01EA048 (-SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z.c)
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C025C25C (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C025D25C (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 */

__int64 __fastcall DxgkpSendTestVmBusCommand(struct DXGADAPTER *a1, struct _D3DKMT_DRT_VMBUS_COMMAND *a2)
{
  __int64 v3; // rsi
  PVOID PoolWithTag; // r12
  PVOID v5; // r13
  DXG_VMBUS_CHANNEL_BASE *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  SIZE_T v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  size_t v14; // r8
  char *v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  DXGSESSIONMGR *v19; // rbx
  unsigned int v20; // eax
  DXGSESSIONDATA *v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  struct DXGPROCESS *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  DXGSESSIONMGR *v31; // rbx
  unsigned int v32; // eax
  DXGSESSIONDATA *v33; // r15
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  DXGSESSIONMGR *v37; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  __int64 v40; // rbx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v47; // rcx
  __int64 v48; // rcx
  DXGSESSIONMGR *v49; // rbx
  unsigned int v50; // eax
  DXGSESSIONDATA *v51; // r15
  __int64 v52; // rbx
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  DXGSESSIONMGR *v56; // rbx
  unsigned int v57; // eax
  DXGSESSIONDATA *v58; // r15
  __int64 v59; // rbx
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rcx
  struct DXGPROCESS *v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rcx
  DXGSESSIONMGR *v68; // rbx
  unsigned int v69; // eax
  DXGSESSIONDATA *v70; // r15
  __int64 v71; // rbx
  __int64 v72; // rcx
  __int64 v73; // rcx
  DXGSESSIONMGR *v74; // rbx
  unsigned int v75; // eax
  DXGSESSIONDATA *v76; // r15
  __int64 v77; // rbx
  __int64 v78; // rcx
  int v79; // eax
  __int64 v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // rcx
  struct DXGPROCESS *v83; // rbx
  __int64 v84; // rcx
  __int64 v85; // rcx
  DXGSESSIONMGR *v86; // rbx
  unsigned int v87; // eax
  DXGSESSIONDATA *v88; // r15
  __int64 v89; // rbx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rax
  size_t v93; // r8
  __int64 v94; // rax
  char *v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  unsigned int v99; // [rsp+30h] [rbp-188h] BYREF
  PVOID Object; // [rsp+38h] [rbp-180h] BYREF
  PVOID v101; // [rsp+40h] [rbp-178h] BYREF
  PVOID v102; // [rsp+48h] [rbp-170h] BYREF
  PVOID v103; // [rsp+50h] [rbp-168h] BYREF
  PVOID P; // [rsp+58h] [rbp-160h]
  PVOID v105; // [rsp+60h] [rbp-158h]
  _BYTE v106[16]; // [rsp+68h] [rbp-150h] BYREF
  _BYTE v107[16]; // [rsp+78h] [rbp-140h] BYREF
  _BYTE v108[16]; // [rsp+88h] [rbp-130h] BYREF
  _BYTE v109[16]; // [rsp+98h] [rbp-120h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-110h] BYREF
  char v111; // [rsp+D8h] [rbp-E0h]
  struct _KAPC_STATE v112; // [rsp+E0h] [rbp-D8h] BYREF
  char v113; // [rsp+110h] [rbp-A8h]
  struct _KAPC_STATE v114; // [rsp+118h] [rbp-A0h] BYREF
  char v115; // [rsp+148h] [rbp-70h]
  struct _KAPC_STATE v116; // [rsp+150h] [rbp-68h] BYREF
  char v117; // [rsp+180h] [rbp-38h]

  LODWORD(v3) = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  v5 = 0LL;
  v105 = 0LL;
  v99 = 0;
  v6 = 0LL;
  if ( a2 )
  {
    v10 = *((_DWORD *)a2 + 3);
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        if ( !a1 )
        {
          v7 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v7 + 24) = 10219LL;
          goto LABEL_3;
        }
        v6 = (struct DXGADAPTER *)((char *)a1 + 4152);
        if ( a1 == (struct DXGADAPTER *)-4152LL )
        {
          v7 = WdLogNewEntry5_WdError(-4152LL);
          *(_QWORD *)(v7 + 24) = 10227LL;
          goto LABEL_3;
        }
      }
      else if ( v10 <= 1 || v10 > 3 )
      {
        v7 = WdLogNewEntry5_WdError(a1);
        *(_QWORD *)(v7 + 24) = 10238LL;
        goto LABEL_3;
      }
    }
    else
    {
      v6 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 168);
      if ( !v6 )
      {
        v7 = WdLogNewEntry5_WdError(a1);
        *(_QWORD *)(v7 + 24) = 10210LL;
        goto LABEL_3;
      }
    }
    v11 = *((_QWORD *)a2 + 3);
    if ( v11 )
    {
      if ( !*((_QWORD *)a2 + 2) )
      {
        v7 = WdLogNewEntry5_WdError(a1);
        *(_QWORD *)(v7 + 24) = 10249LL;
        goto LABEL_3;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v11, 0x4B677844u);
      P = PoolWithTag;
      if ( !PoolWithTag )
      {
        v13 = WdLogNewEntry5_WdLowResource(v12);
        *(_QWORD *)(v13 + 24) = 10257LL;
LABEL_20:
        WdLogEvent5_WdLowResource(v13);
        LODWORD(v3) = -1073741801;
        goto LABEL_152;
      }
      v14 = *((_QWORD *)a2 + 3);
      v15 = (char *)*((_QWORD *)a2 + 2);
      if ( &v15[v14] < v15 || (unsigned __int64)&v15[v14] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(PoolWithTag, v15, v14);
    }
    v16 = *((_QWORD *)a2 + 5);
    if ( v16 )
    {
      if ( *((_QWORD *)a2 + 4) )
      {
        v99 = (v16 + 7) & 0xFFFFFFF8;
        v5 = ExAllocatePoolWithTag((POOL_TYPE)512, v99, 0x4B677844u);
        v105 = v5;
        if ( !v5 )
        {
          v13 = WdLogNewEntry5_WdLowResource(a1);
          *(_QWORD *)(v13 + 24) = 10283LL;
          goto LABEL_20;
        }
      }
    }
    if ( !v5 && !*((_QWORD *)a2 + 5) )
    {
      v17 = *((_DWORD *)a2 + 3);
      if ( v17 >= 0 )
      {
        if ( v17 <= 1 )
        {
          LODWORD(v3) = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessageAsync(v6, PoolWithTag, *((_DWORD *)a2 + 6));
          goto LABEL_143;
        }
        if ( v17 == 2 )
        {
          v101 = 0LL;
          v37 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 77);
          if ( v37 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v36);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v37,
                                               CurrentProcessSessionId);
          }
          else
          {
            SessionDataForSpecifiedSession = 0LL;
          }
          if ( !SessionDataForSpecifiedSession )
          {
            v40 = WdLogNewEntry5_WdError(v36);
            *(_QWORD *)(v40 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v41);
            LODWORD(v3) = -1073741790;
            *(_QWORD *)(v40 + 32) = -1073741790LL;
            WdLogEvent5_WdError(v40);
          }
          if ( (int)v3 >= 0 )
          {
            v42 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&v101);
            v3 = v42;
            if ( v42 < 0 )
            {
              v44 = WdLogNewEntry5_WdError(v43);
              *(_QWORD *)(v44 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v45);
              *(_QWORD *)(v44 + 32) = v3;
              WdLogEvent5_WdError(v44);
            }
            if ( (int)v3 >= 0 )
            {
              v113 = 0;
              CPROCESSATTACHHELPER::Attach(&v112, (PRKPROCESS)v101);
              Current = DXGPROCESS::GetCurrent();
              KeEnterCriticalRegion();
              DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v107, (struct DXGFASTMUTEX *const *)Current);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v107);
              if ( *((_DWORD *)Current + 98)
                && (*((_BYTE *)Current + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
              {
                v49 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v47) + 77);
                if ( v49 )
                {
                  v50 = PsGetCurrentProcessSessionId(v48);
                  v51 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v49, v50);
                }
                else
                {
                  v51 = 0LL;
                }
                if ( !v51 )
                {
                  LODWORD(v3) = -1073741811;
                  v52 = WdLogNewEntry5_WdError(v48);
                  *(_QWORD *)(v52 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v53);
                  *(_QWORD *)(v52 + 32) = -1073741811LL;
                  WdLogEvent5_WdError(v52);
                }
                if ( (int)v3 >= 0 )
                  LODWORD(v3) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                  v51,
                                  PoolWithTag,
                                  *((_DWORD *)a2 + 6),
                                  0LL,
                                  0LL,
                                  0);
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v107);
              if ( v113 )
              {
                KeUnstackDetachProcess(&v112);
                v113 = 0;
              }
            }
          }
          if ( v101 )
          {
            ObfDereferenceObject(v101);
            v101 = 0LL;
          }
          goto LABEL_83;
        }
        if ( v17 == 3 )
        {
          Object = 0LL;
          v19 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 77);
          if ( v19 )
          {
            v20 = PsGetCurrentProcessSessionId(v18);
            v21 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v19, v20);
          }
          else
          {
            v21 = 0LL;
          }
          if ( !v21 )
          {
            v22 = WdLogNewEntry5_WdError(v18);
            *(_QWORD *)(v22 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v23);
            LODWORD(v3) = -1073741790;
            *(_QWORD *)(v22 + 32) = -1073741790LL;
            WdLogEvent5_WdError(v22);
          }
          if ( (int)v3 >= 0 )
          {
            v24 = DXGSESSIONDATA::ReferenceDwmProcess(v21, (struct _EPROCESS **)&Object);
            v3 = v24;
            if ( v24 < 0 )
            {
              v26 = WdLogNewEntry5_WdError(v25);
              *(_QWORD *)(v26 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v27);
              *(_QWORD *)(v26 + 32) = v3;
              WdLogEvent5_WdError(v26);
            }
            if ( (int)v3 >= 0 )
            {
              v111 = 0;
              CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
              v28 = DXGPROCESS::GetCurrent();
              KeEnterCriticalRegion();
              DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v106, (struct DXGFASTMUTEX *const *)v28);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v106);
              if ( *((_DWORD *)v28 + 98)
                && (*((_BYTE *)v28 + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
              {
                v31 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v29) + 77);
                if ( v31 )
                {
                  v32 = PsGetCurrentProcessSessionId(v30);
                  v33 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v31, v32);
                }
                else
                {
                  v33 = 0LL;
                }
                if ( !v33 )
                {
                  LODWORD(v3) = -1073741811;
                  v34 = WdLogNewEntry5_WdError(v30);
                  *(_QWORD *)(v34 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v35);
                  *(_QWORD *)(v34 + 32) = -1073741811LL;
                  WdLogEvent5_WdError(v34);
                }
                if ( (int)v3 >= 0 )
                  LODWORD(v3) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                  v33,
                                  PoolWithTag,
                                  *((_DWORD *)a2 + 6),
                                  0LL,
                                  0LL,
                                  0);
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v106);
              if ( v111 )
              {
                KeUnstackDetachProcess(&ApcState);
                v111 = 0;
              }
            }
          }
          if ( Object )
          {
            ObfDereferenceObject(Object);
            Object = 0LL;
          }
LABEL_83:
          KeLeaveCriticalRegion();
LABEL_143:
          if ( (int)v3 < 0 )
            goto LABEL_152;
          v93 = *((_QWORD *)a2 + 5);
          if ( v99 < v93 )
          {
            v94 = WdLogNewEntry5_WdEvent(v9, v8);
            *(_QWORD *)(v94 + 24) = *((_QWORD *)a2 + 5);
            *(_QWORD *)(v94 + 32) = v99;
            WdLogEvent5_WdEvent(v94);
            LODWORD(v3) = -1073741823;
            goto LABEL_152;
          }
          v95 = (char *)*((_QWORD *)a2 + 4);
          if ( (unsigned __int64)&v95[v93] > MmUserProbeAddress || &v95[v93] <= v95 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v95, v5, v93);
LABEL_151:
          if ( (int)v3 >= 0 )
            goto LABEL_153;
          goto LABEL_152;
        }
      }
      v7 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v7 + 24) = 10336LL;
      goto LABEL_3;
    }
    v54 = *((_DWORD *)a2 + 3);
    if ( v54 >= 0 )
    {
      if ( v54 <= 1 )
      {
        LODWORD(v3) = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(v6, PoolWithTag, *((_DWORD *)a2 + 6), v5, &v99);
        goto LABEL_140;
      }
      if ( v54 == 2 )
      {
        v103 = 0LL;
        v74 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 77);
        if ( v74 )
        {
          v75 = PsGetCurrentProcessSessionId(v73);
          v76 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v74, v75);
        }
        else
        {
          v76 = 0LL;
        }
        if ( !v76 )
        {
          v77 = WdLogNewEntry5_WdError(v73);
          *(_QWORD *)(v77 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v78);
          LODWORD(v3) = -1073741790;
          *(_QWORD *)(v77 + 32) = -1073741790LL;
          WdLogEvent5_WdError(v77);
        }
        if ( (int)v3 >= 0 )
        {
          v79 = DXGSESSIONDATA::ReferenceDwmProcess(v76, (struct _EPROCESS **)&v103);
          v3 = v79;
          if ( v79 < 0 )
          {
            v81 = WdLogNewEntry5_WdError(v80);
            *(_QWORD *)(v81 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v82);
            *(_QWORD *)(v81 + 32) = v3;
            WdLogEvent5_WdError(v81);
          }
          if ( (int)v3 >= 0 )
          {
            v117 = 0;
            CPROCESSATTACHHELPER::Attach(&v116, (PRKPROCESS)v103);
            v83 = DXGPROCESS::GetCurrent();
            KeEnterCriticalRegion();
            DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v109, (struct DXGFASTMUTEX *const *)v83);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v109);
            if ( *((_DWORD *)v83 + 98) && (*((_BYTE *)v83 + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
            {
              v86 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v84) + 77);
              if ( v86 )
              {
                v87 = PsGetCurrentProcessSessionId(v85);
                v88 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v86, v87);
              }
              else
              {
                v88 = 0LL;
              }
              if ( !v88 )
              {
                LODWORD(v3) = -1073741811;
                v89 = WdLogNewEntry5_WdError(v85);
                *(_QWORD *)(v89 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v90);
                *(_QWORD *)(v89 + 32) = -1073741811LL;
                WdLogEvent5_WdError(v89);
              }
              if ( (int)v3 >= 0 )
                LODWORD(v3) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                v88,
                                PoolWithTag,
                                *((_DWORD *)a2 + 6),
                                v5,
                                &v99,
                                1);
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109);
            if ( v117 )
            {
              KeUnstackDetachProcess(&v116);
              v117 = 0;
            }
          }
        }
        if ( v103 )
        {
          ObfDereferenceObject(v103);
          v103 = 0LL;
        }
        goto LABEL_138;
      }
      if ( v54 == 3 )
      {
        v102 = 0LL;
        v56 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 77);
        if ( v56 )
        {
          v57 = PsGetCurrentProcessSessionId(v55);
          v58 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v56, v57);
        }
        else
        {
          v58 = 0LL;
        }
        if ( !v58 )
        {
          v59 = WdLogNewEntry5_WdError(v55);
          *(_QWORD *)(v59 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v60);
          LODWORD(v3) = -1073741790;
          *(_QWORD *)(v59 + 32) = -1073741790LL;
          WdLogEvent5_WdError(v59);
        }
        if ( (int)v3 >= 0 )
        {
          v61 = DXGSESSIONDATA::ReferenceDwmProcess(v58, (struct _EPROCESS **)&v102);
          v3 = v61;
          if ( v61 < 0 )
          {
            v63 = WdLogNewEntry5_WdError(v62);
            *(_QWORD *)(v63 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v64);
            *(_QWORD *)(v63 + 32) = v3;
            WdLogEvent5_WdError(v63);
          }
          if ( (int)v3 >= 0 )
          {
            v115 = 0;
            CPROCESSATTACHHELPER::Attach(&v114, (PRKPROCESS)v102);
            v65 = DXGPROCESS::GetCurrent();
            KeEnterCriticalRegion();
            DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v108, (struct DXGFASTMUTEX *const *)v65);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v108);
            if ( *((_DWORD *)v65 + 98) && (*((_BYTE *)v65 + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
            {
              v68 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v66) + 77);
              if ( v68 )
              {
                v69 = PsGetCurrentProcessSessionId(v67);
                v70 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v68, v69);
              }
              else
              {
                v70 = 0LL;
              }
              if ( !v70 )
              {
                LODWORD(v3) = -1073741811;
                v71 = WdLogNewEntry5_WdError(v67);
                *(_QWORD *)(v71 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v72);
                *(_QWORD *)(v71 + 32) = -1073741811LL;
                WdLogEvent5_WdError(v71);
              }
              if ( (int)v3 >= 0 )
                LODWORD(v3) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                v70,
                                PoolWithTag,
                                *((_DWORD *)a2 + 6),
                                v5,
                                &v99,
                                1);
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v108);
            if ( v115 )
            {
              KeUnstackDetachProcess(&v114);
              v115 = 0;
            }
          }
        }
        if ( v102 )
        {
          ObfDereferenceObject(v102);
          v102 = 0LL;
        }
LABEL_138:
        KeLeaveCriticalRegion();
LABEL_140:
        if ( !v5 && v99 )
        {
          v92 = WdLogNewEntry5_WdWarning(v9, v8, v91);
          *(_QWORD *)(v92 + 24) = v99;
          WdLogEvent5_WdWarning(v92);
        }
        goto LABEL_143;
      }
    }
    v96 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v96 + 24) = 10388LL;
    WdLogEvent5_WdError(v96);
    LODWORD(v3) = -1073741811;
    goto LABEL_151;
  }
  v7 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v7 + 24) = 10198LL;
LABEL_3:
  WdLogEvent5_WdError(v7);
  LODWORD(v3) = -1073741811;
LABEL_152:
  v97 = WdLogNewEntry5_WdEvent(v9, v8);
  *(_QWORD *)(v97 + 24) = (int)v3;
  WdLogEvent5_WdEvent(v97);
LABEL_153:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v3;
}
