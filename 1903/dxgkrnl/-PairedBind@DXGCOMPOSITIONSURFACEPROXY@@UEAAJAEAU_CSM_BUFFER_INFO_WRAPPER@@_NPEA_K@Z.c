/*
 * XREFs of ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C0265F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00036DC (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z @ 0x1C0292368 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z.c)
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C02929C0 (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C0292DDC (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedBind(
        DXGCOMPOSITIONSURFACEPROXY *this,
        struct _LUID *a2,
        unsigned __int8 a3,
        unsigned __int64 *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DXGADAPTER *v14; // rbx
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGADAPTER *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  struct _LUID v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  DXGSESSIONMGR *v41; // rdi
  __int64 v42; // r8
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int HighPart; // edx
  __int64 i; // r8
  void *v50; // rax
  void *v51; // rax
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // eax
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rbx
  __int64 v63; // rax
  _QWORD *v64; // rax
  unsigned int v65; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v66; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v67; // [rsp+50h] [rbp-B0h] BYREF
  char v68; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v69; // [rsp+60h] [rbp-A0h]
  _BYTE v70[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v71[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v72[72]; // [rsp+B8h] [rbp-48h] BYREF
  void *v73[32]; // [rsp+100h] [rbp+0h] BYREF

  v69 = a4;
  memset(v73, 0, sizeof(v73));
  v65 = 0;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal(v8, v7);
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a2[19], (unsigned __int64 *)&v66);
  v14 = v10;
  if ( !v10 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = 1115LL;
LABEL_3:
    WdLogEvent5_WdWarning(v15);
    return 3221225485LL;
  }
  DxgkpGetPairingAdapters(v10, 0LL, &v66, &v67, 0LL, 0LL, 0);
  DXGADAPTER::ReleaseReferenceNoTracking(v14);
  v20 = v66;
  if ( !v66 )
  {
    v15 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v15 + 24) = 1136LL;
    goto LABEL_3;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v70, v66, 0LL);
  v22 = (int)COREADAPTERACCESS::AcquireShared((__int64)v70, 0xFFFFFFFFLL, v21);
  DXGADAPTER::ReleaseReferenceNoTracking(v20);
  if ( (int)v22 >= 0 )
  {
    v27 = *(struct _LUID *)((char *)v20 + 4220);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v70);
    Current = DXGPROCESS::GetCurrent(v29, v28);
    if ( Current )
    {
      KeEnterCriticalRegion();
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v67, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v67);
      if ( *((_DWORD *)Current + 92)
        && (*((_BYTE *)Current + 298) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
      {
        if ( !*((_BYTE *)Current + 424) )
        {
          LODWORD(v22) = -2147483611;
          v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
          *(_QWORD *)(v38 + 24) = -2147483611LL;
          WdLogEvent5_WdWarning(v38);
        }
        if ( (int)v22 >= 0 )
        {
          v41 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v36, v35) + 74);
          if ( v41 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v40, v39);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v41,
                                               CurrentProcessSessionId);
          }
          else
          {
            SessionDataForSpecifiedSession = 0LL;
          }
          if ( !SessionDataForSpecifiedSession )
          {
            LODWORD(v22) = -1073741811;
            v45 = WdLogNewEntry5_WdError(v40, v39, v42);
            *(_QWORD *)(v45 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v47, v46);
            *(_QWORD *)(v45 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v45);
          }
          if ( (int)v22 >= 0 )
          {
            if ( *((_DWORD *)this + 5) && *((_BYTE *)this + 24) )
            {
              HighPart = a2[17].HighPart;
              for ( i = 0LL; (unsigned int)i < HighPart; HighPart = a2[17].HighPart )
              {
                v50 = (void *)a2[3 * i + 18];
                a2[3 * i + 18] = 0LL;
                v73[i] = v50;
                a2[3 * i + 19] = v27;
                i = (unsigned int)(i + 1);
              }
              v51 = (void *)a2[113];
              a2[113] = 0LL;
              v73[HighPart] = v51;
              v52 = DXGSESSIONDATA::VailSendCreateBundleObjectByPointer(
                      SessionDataForSpecifiedSession,
                      HighPart + 1,
                      v73,
                      &v65);
              v22 = v52;
              if ( v52 < 0
                || (v56 = DXGSESSIONDATA::VailSendBindCompositionSurface(
                            SessionDataForSpecifiedSession,
                            *((_DWORD *)this + 5),
                            a3,
                            (struct _CSM_BUFFER_INFO_WRAPPER *)a2,
                            v65,
                            v69),
                    v22 = v56,
                    v56 < 0) )
              {
                v57 = WdLogNewEntry5_WdWarning(v54, v53, v55);
                *(_QWORD *)(v57 + 24) = v22;
                WdLogEvent5_WdWarning(v57);
              }
              if ( v65 )
              {
                v58 = DXGSESSIONDATA::VailSendDestroyBundleObject(SessionDataForSpecifiedSession, v65);
                v62 = v58;
                if ( v58 < 0 )
                {
                  v63 = WdLogNewEntry5_WdError(v60, v59, v61);
                  *(_QWORD *)(v63 + 24) = v62;
                  *(_QWORD *)(v63 + 32) = this;
                  WdLogEvent5_WdError(v63);
                }
              }
              if ( (int)v22 >= 0 )
              {
                ++*((_DWORD *)this + 7);
                *((_BYTE *)this + 25) = 1;
              }
            }
            else
            {
              v64 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39, v42);
              LODWORD(v22) = -1073741823;
              v64[3] = -1073741823LL;
              v64[4] = *((unsigned int *)this + 5);
              v64[5] = *((unsigned __int8 *)this + 24);
              v64[6] = this;
              WdLogEvent5_WdError(v64);
            }
          }
        }
      }
      KeLeaveCriticalRegion();
      if ( v68 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v67);
      KeLeaveCriticalRegion();
    }
    else
    {
      v34 = WdLogNewEntry5_WdError(v31, v30, v33);
      *(_QWORD *)(v34 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v34);
      LODWORD(v22) = -1073741811;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v26 + 24) = v20;
    *(_QWORD *)(v26 + 32) = v22;
    WdLogEvent5_WdWarning(v26);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v72);
  COREACCESS::~COREACCESS((COREACCESS *)v71);
  return (unsigned int)v22;
}
