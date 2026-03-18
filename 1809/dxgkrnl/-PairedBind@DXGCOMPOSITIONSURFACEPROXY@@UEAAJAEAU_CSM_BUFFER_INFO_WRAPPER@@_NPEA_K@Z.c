/*
 * XREFs of ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C0231A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z @ 0x1C025C03C (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z.c)
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C025C6C0 (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C025CC38 (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedBind(
        DXGCOMPOSITIONSURFACEPROXY *this,
        struct _LUID *a2,
        unsigned __int8 a3,
        unsigned __int64 *a4)
{
  __int64 v7; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGADAPTER *v13; // rbx
  __int64 v14; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGADAPTER *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  struct _LUID v25; // rbx
  __int64 v26; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  DXGSESSIONMGR *v34; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  __int64 v37; // rdi
  __int64 v38; // rcx
  unsigned int HighPart; // edx
  __int64 i; // r8
  void *v41; // rax
  void *v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // eax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rax
  _QWORD *v53; // rax
  unsigned int v54; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGADAPTER *v55; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v56; // [rsp+40h] [rbp-C0h] BYREF
  char v57; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v58; // [rsp+50h] [rbp-B0h]
  _BYTE v59[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v60[32]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v61[40]; // [rsp+88h] [rbp-78h] BYREF
  void *v62[32]; // [rsp+B0h] [rbp-50h] BYREF

  v58 = a4;
  memset(v62, 0, sizeof(v62));
  v54 = 0;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal(v7);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a2[19], (unsigned __int64 *)&v55);
  v13 = v9;
  if ( !v9 )
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = 1115LL;
LABEL_3:
    WdLogEvent5_WdWarning(v14);
    return 3221225485LL;
  }
  DxgkpGetPairingAdapters(v9, 0, &v55, &v56, 0LL, 0LL);
  DXGADAPTER::ReleaseReference(v13);
  v19 = v55;
  if ( !v55 )
  {
    v14 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v14 + 24) = 1136LL;
    goto LABEL_3;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v59, v55, 0LL);
  v20 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v59);
  DXGADAPTER::ReleaseReference(v19);
  if ( (int)v20 >= 0 )
  {
    v25 = *(struct _LUID *)((char *)v19 + 4228);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v59);
    Current = DXGPROCESS::GetCurrent();
    if ( Current )
    {
      KeEnterCriticalRegion();
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v56, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v56);
      if ( *((_DWORD *)Current + 98)
        && (*((_BYTE *)Current + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
      {
        if ( !*((_BYTE *)Current + 448) )
        {
          LODWORD(v20) = -2147483611;
          v32 = WdLogNewEntry5_WdWarning(v30, v29, v31);
          *(_QWORD *)(v32 + 24) = -2147483611LL;
          WdLogEvent5_WdWarning(v32);
        }
        if ( (int)v20 >= 0 )
        {
          v34 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v30) + 77);
          if ( v34 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v33);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v34,
                                               CurrentProcessSessionId);
          }
          else
          {
            SessionDataForSpecifiedSession = 0LL;
          }
          if ( !SessionDataForSpecifiedSession )
          {
            LODWORD(v20) = -1073741811;
            v37 = WdLogNewEntry5_WdError(v33);
            *(_QWORD *)(v37 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v38);
            *(_QWORD *)(v37 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v37);
          }
          if ( (int)v20 >= 0 )
          {
            if ( *((_DWORD *)this + 5) && *((_BYTE *)this + 24) )
            {
              HighPart = a2[17].HighPart;
              for ( i = 0LL; (unsigned int)i < HighPart; HighPart = a2[17].HighPart )
              {
                v41 = (void *)a2[3 * i + 18];
                a2[3 * i + 18] = 0LL;
                v62[i] = v41;
                a2[3 * i + 19] = v25;
                i = (unsigned int)(i + 1);
              }
              v42 = (void *)a2[113];
              a2[113] = 0LL;
              v62[HighPart] = v42;
              v43 = DXGSESSIONDATA::VailSendCreateBundleObjectByPointer(
                      SessionDataForSpecifiedSession,
                      HighPart + 1,
                      v62,
                      &v54);
              v20 = v43;
              if ( v43 < 0
                || (v47 = DXGSESSIONDATA::VailSendBindCompositionSurface(
                            SessionDataForSpecifiedSession,
                            *((_DWORD *)this + 5),
                            a3,
                            (struct _CSM_BUFFER_INFO_WRAPPER *)a2,
                            v54,
                            v58),
                    v20 = v47,
                    v47 < 0) )
              {
                v48 = WdLogNewEntry5_WdWarning(v45, v44, v46);
                *(_QWORD *)(v48 + 24) = v20;
                WdLogEvent5_WdWarning(v48);
              }
              if ( v54 )
              {
                v49 = DXGSESSIONDATA::VailSendDestroyBundleObject(SessionDataForSpecifiedSession, v54);
                v51 = v49;
                if ( v49 < 0 )
                {
                  v52 = WdLogNewEntry5_WdError(v50);
                  *(_QWORD *)(v52 + 24) = v51;
                  *(_QWORD *)(v52 + 32) = this;
                  WdLogEvent5_WdError(v52);
                }
              }
              if ( (int)v20 >= 0 )
              {
                ++*((_DWORD *)this + 7);
                *((_BYTE *)this + 25) = 1;
              }
            }
            else
            {
              v53 = (_QWORD *)WdLogNewEntry5_WdError(v33);
              LODWORD(v20) = -1073741823;
              v53[3] = -1073741823LL;
              v53[4] = *((unsigned int *)this + 5);
              v53[5] = *((unsigned __int8 *)this + 24);
              v53[6] = this;
              WdLogEvent5_WdError(v53);
            }
          }
        }
      }
      KeLeaveCriticalRegion();
      if ( v57 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v56);
      KeLeaveCriticalRegion();
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v26);
      *(_QWORD *)(v28 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v28);
      LODWORD(v20) = -1073741811;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v24 + 24) = v19;
    *(_QWORD *)(v24 + 32) = v20;
    WdLogEvent5_WdWarning(v24);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v61);
  COREACCESS::~COREACCESS((COREACCESS *)v60);
  return (unsigned int)v20;
}
