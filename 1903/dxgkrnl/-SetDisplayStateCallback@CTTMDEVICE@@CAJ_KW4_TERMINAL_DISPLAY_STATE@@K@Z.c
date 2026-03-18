/*
 * XREFs of ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C0277270
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01552E4 (DxgkPowerOnOffMonitor.c)
 *     ?LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C024FAD8 (-LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C02A7C88 (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 */

__int64 __fastcall CTTMDEVICE::SetDisplayStateCallback(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rbx
  __int64 v9; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  __int64 result; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // r14d
  unsigned int v25; // r14d
  SIZE_T v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  PVOID v31; // r15
  __int64 v32; // rax
  unsigned __int16 v33; // ax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 *v36; // rcx
  unsigned __int64 v37; // r9
  _DWORD *v38; // r12
  __int64 v39; // r8
  struct _ERESOURCE *v40; // rdx
  struct _DEVICE_OBJECT *v41; // r14
  unsigned int v42; // r15d
  unsigned int v43; // eax
  __int64 v44; // r9
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rbx
  unsigned int v48; // ecx
  __int64 v49; // r13
  bool v50; // zf
  char v51; // r13
  __int64 v52; // rax
  __int64 v53; // rax
  SIZE_T v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // r13
  __int64 v63; // rax
  int *v64; // r9
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v65; // rax
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rbx
  _QWORD *v70; // rax
  __int64 v71; // r12
  _BYTE *v72; // r13
  unsigned int *v73; // rax
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rbx
  int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r12
  __int64 v82; // rax
  struct _EX_RUNDOWN_REF **v83; // r12
  unsigned int v84; // r13d
  unsigned int v85; // eax
  struct _EX_RUNDOWN_REF *v86; // r9
  int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rax
  struct DXGSESSIONDATA *v90; // rbx
  int v91; // [rsp+38h] [rbp-D0h]
  char v92; // [rsp+3Ch] [rbp-CCh]
  unsigned int v93; // [rsp+40h] [rbp-C8h]
  unsigned int v94; // [rsp+44h] [rbp-C4h]
  int v95; // [rsp+48h] [rbp-C0h]
  __int64 *v96; // [rsp+50h] [rbp-B8h]
  _BYTE *v97; // [rsp+50h] [rbp-B8h]
  __int64 *v98; // [rsp+58h] [rbp-B0h]
  __int64 v99; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE *v100; // [rsp+68h] [rbp-A0h]
  int v101; // [rsp+70h] [rbp-98h] BYREF
  int v102; // [rsp+74h] [rbp-94h] BYREF
  struct DXGSESSIONDATA *v103; // [rsp+78h] [rbp-90h]
  _QWORD v104[10]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v105[10]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v106[16]; // [rsp+128h] [rbp+20h] BYREF

  v3 = a3;
  v100 = v106;
  v5 = (int)a2;
  v94 = -1073741637;
  v93 = 4;
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 74);
  if ( v8 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v103 = SessionDataForSpecifiedSession;
  if ( !SessionDataForSpecifiedSession )
  {
    v12 = WdLogNewEntry5_WdError(v7, v6, v9);
    *(_QWORD *)(v12 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v14, v13);
    v15 = (_QWORD *)v12;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
LABEL_6:
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  if ( a1 != 0xFFFFFFFFLL )
  {
    if ( !*((_WORD *)SessionDataForSpecifiedSession + 9305) )
    {
      *((_DWORD *)SessionDataForSpecifiedSession + 4650) = v3;
      *((_DWORD *)SessionDataForSpecifiedSession + 4651) = v5;
      goto LABEL_10;
    }
    if ( *((_DWORD *)SessionDataForSpecifiedSession + 4650) == (_DWORD)v3 )
    {
      if ( *((_DWORD *)SessionDataForSpecifiedSession + 4651) == (_DWORD)v5 )
      {
LABEL_10:
        v99 = a1;
        if ( !a1 )
        {
          v17 = WdLogNewEntry5_WdAssertion(v7, v6);
          *(_QWORD *)(v17 + 24) = 4922LL;
          WdLogEvent5_WdAssertion(v17);
        }
        v18 = *(_DWORD *)(a1 + 84);
        if ( (v18 & 1) == 0 && (v18 & 2) == 0 )
        {
          v19 = WdLogNewEntry5_WdAssertion(v7, v6);
          *(_QWORD *)(v19 + 24) = 4924LL;
          WdLogEvent5_WdAssertion(v19);
        }
        if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 48)) )
          return 3221226166LL;
        v23 = *((unsigned __int16 *)SessionDataForSpecifiedSession + 9305);
        v24 = *((unsigned __int16 *)SessionDataForSpecifiedSession + 9304);
        if ( v24 <= (int)v23 + 1 )
        {
          v25 = v24 + 4;
          if ( v25 >= 0xFFFF )
          {
            v34 = WdLogNewEntry5_WdWarning(v23, v20, v21);
            *(_QWORD *)(v34 + 24) = v25;
            WdLogEvent5_WdWarning(v34);
            goto LABEL_33;
          }
          v26 = 8LL * v25;
          if ( !is_mul_ok(v25, 8uLL) )
            v26 = -1LL;
          v31 = operator new[](v26, 0x4B677844u, PagedPool);
          if ( !v31 )
          {
            v32 = WdLogNewEntry5_WdLowResource(v28, v27, v29, v30);
            *(_QWORD *)(v32 + 24) = v25;
            WdLogEvent5_WdLowResource(v32);
LABEL_33:
            v35 = *((_QWORD *)SessionDataForSpecifiedSession + 2327);
            if ( !v35 )
            {
              v36 = &v99;
              v91 = 1;
              v98 = &v99;
              LODWORD(v37) = 1;
LABEL_35:
              v38 = v106;
              goto LABEL_36;
            }
            *(_QWORD *)(v35 + 8LL * (unsigned __int16)(*((_WORD *)SessionDataForSpecifiedSession + 9305))++) = a1;
            goto LABEL_58;
          }
          v33 = *((_WORD *)SessionDataForSpecifiedSession + 9305);
          if ( v33 )
          {
            memmove(v31, *((const void **)SessionDataForSpecifiedSession + 2327), 8LL * v33);
            operator delete[](*((void **)SessionDataForSpecifiedSession + 2327));
            v33 = *((_WORD *)SessionDataForSpecifiedSession + 9305);
          }
          *((_QWORD *)SessionDataForSpecifiedSession + 2327) = v31;
          LOWORD(v23) = v33;
          *((_WORD *)SessionDataForSpecifiedSession + 9304) = v25;
        }
        *(_QWORD *)(*((_QWORD *)SessionDataForSpecifiedSession + 2327) + 8LL * (unsigned __int16)v23) = a1;
        ++*((_WORD *)SessionDataForSpecifiedSession + 9305);
        return 0LL;
      }
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6, v9);
      v22 = *((int *)SessionDataForSpecifiedSession + 4651);
      v15[4] = v5;
    }
    else
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6, v9);
      v22 = *((unsigned int *)SessionDataForSpecifiedSession + 4650);
      v15[4] = v3;
    }
    v15[3] = v22;
    v15[5] = -1073741811LL;
    goto LABEL_6;
  }
  if ( *((_DWORD *)SessionDataForSpecifiedSession + 4650) != (_DWORD)v3 )
  {
    v52 = WdLogNewEntry5_WdError(v7, v6, v9);
    *(_QWORD *)(v52 + 24) = *((unsigned int *)SessionDataForSpecifiedSession + 4650);
    *(_QWORD *)(v52 + 32) = v3;
    WdLogEvent5_WdError(v52);
  }
  if ( *((_DWORD *)SessionDataForSpecifiedSession + 4651) != (_DWORD)v5 )
  {
    v53 = WdLogNewEntry5_WdError(v7, v6, v9);
    *(_QWORD *)(v53 + 24) = *((int *)SessionDataForSpecifiedSession + 4651);
    *(_QWORD *)(v53 + 32) = v5;
    WdLogEvent5_WdError(v53);
    LODWORD(v5) = *((_DWORD *)SessionDataForSpecifiedSession + 4651);
  }
LABEL_58:
  v36 = (__int64 *)*((_QWORD *)SessionDataForSpecifiedSession + 2327);
  v37 = *((unsigned __int16 *)SessionDataForSpecifiedSession + 9305);
  v98 = v36;
  v91 = v37;
  if ( (unsigned int)v37 <= 4 )
    goto LABEL_35;
  v54 = 4 * v37;
  v55 = *((unsigned __int16 *)SessionDataForSpecifiedSession + 9305);
  if ( !is_mul_ok(v37, 4uLL) )
    v54 = -1LL;
  v100 = operator new[](v54, 0x4B677844u, PagedPool);
  v38 = v100;
  if ( !v100 )
  {
    v60 = WdLogNewEntry5_WdLowResource(v57, v56, v58, v59);
    *(_QWORD *)(v60 + 24) = v55;
    WdLogEvent5_WdLowResource(v60);
    v38 = v106;
    LODWORD(v37) = v55;
    v100 = v106;
    goto LABEL_63;
  }
  v36 = v98;
  LODWORD(v37) = v55;
  v39 = (unsigned int)v55;
  v93 = v55;
LABEL_37:
  v40 = 0LL;
  v92 = 0;
  v95 = 0;
  v41 = 0LL;
  v42 = 0;
  if ( (_DWORD)v37 )
  {
    v43 = v91;
    v96 = v36;
    while ( 1 )
    {
      if ( v42 >= (unsigned int)v39 )
      {
        v51 = v92;
LABEL_70:
        if ( !v41 )
          break;
        if ( v51 )
        {
          if ( (v5 & 0xFFFFFFFC) == 0 && (_DWORD)v5 != 1 )
          {
            v61 = LPMSetTTMDisplayPowerState(v5, v40);
            v62 = v61;
            if ( v61 < 0 )
            {
              v63 = WdLogNewEntry5_WdError(v36, v40, v39);
              *(_QWORD *)(v63 + 24) = (int)v5;
              *(_QWORD *)(v63 + 32) = v62;
              WdLogEvent5_WdError(v63);
            }
          }
        }
        if ( (int)v5 < 0 )
          goto LABEL_90;
        if ( (int)v5 <= 1 )
        {
          memset(v105, 0, 0x48uLL);
          EtwActivityIdControl(3u, (LPGUID)&v105[1]);
          v64 = &v102;
          v105[8] = MEMORY[0xFFFFF78000000014];
          v65 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v105;
          LODWORD(v105[3]) = 54;
          LOBYTE(v105[6]) = -1;
          v102 = 4;
LABEL_81:
          v66 = DxgkPowerOnOffMonitor((__int64)v41, v42, v38, v64, 0, v65);
          v69 = v66;
          v94 = v66;
          if ( v66 < 0 )
          {
            v70 = (_QWORD *)WdLogNewEntry5_WdError(v67, v40, v68);
            v70[3] = v41;
            v70[4] = v69;
            goto LABEL_91;
          }
        }
        else if ( (_DWORD)v5 == 2 )
        {
          v71 = 0LL;
          if ( v42 )
          {
            v72 = v100;
            v73 = (unsigned int *)v100;
            v97 = v100;
            while ( 1 )
            {
              v74 = DpiBrightnessNotifyMonitorDimming(v41, *v73, 1u);
              v77 = v74;
              v94 = v74;
              if ( v74 < 0 )
                break;
              v73 = (unsigned int *)(v97 + 4);
              v71 = (unsigned int)(v71 + 1);
              v97 += 4;
              if ( (unsigned int)v71 >= v42 )
                goto LABEL_92;
            }
            v70 = (_QWORD *)WdLogNewEntry5_WdError(v75, v40, v76);
            v70[3] = *(unsigned int *)&v72[4 * v71];
            v70[4] = v41;
            v70[5] = v77;
            goto LABEL_91;
          }
        }
        else
        {
          if ( (_DWORD)v5 == 3 )
          {
            memset(v104, 0, 0x48uLL);
            EtwActivityIdControl(3u, (LPGUID)&v104[1]);
            v64 = &v101;
            v104[8] = MEMORY[0xFFFFF78000000014];
            v65 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v104;
            LODWORD(v104[3]) = 55;
            LOBYTE(v104[6]) = -1;
            v101 = 1;
            goto LABEL_81;
          }
LABEL_90:
          v94 = -1073741811;
          v70 = (_QWORD *)WdLogNewEntry5_WdError(v36, v40, v39);
          v70[3] = (int)v5;
          v70[4] = -1073741811LL;
LABEL_91:
          WdLogEvent5_WdError(v70);
        }
LABEL_92:
        if ( v92 )
        {
          if ( (_DWORD)v5 == 1 )
          {
            v78 = LPMSetTTMDisplayPowerState(1, v40);
            v81 = v78;
            if ( v78 < 0 )
            {
              v82 = WdLogNewEntry5_WdError(v79, v40, v80);
              *(_QWORD *)(v82 + 24) = 1LL;
              *(_QWORD *)(v82 + 32) = v81;
              WdLogEvent5_WdError(v82);
            }
          }
        }
        v83 = (struct _EX_RUNDOWN_REF **)v98;
        v84 = 0;
        v85 = v91;
        do
        {
          if ( !v42 )
            break;
          v86 = *v83;
          if ( *v83 && (struct _DEVICE_OBJECT *)v86[9].Count == v41 )
          {
            v87 = _InterlockedExchangeAdd((volatile signed __int32 *)&v86[78], 1u);
            v88 = (unsigned int)(v87 >> 31);
            LODWORD(v88) = v87 % 32;
            HIDWORD(v86[v88 + 78].Ptr) = v5 | 0x80000000;
            LODWORD(v86[(unsigned int)(v87 % 32) + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
            ExReleaseRundownProtection(*v83 + 6);
            *v83 = 0LL;
            v85 = v91;
          }
          ++v84;
          ++v83;
          --v42;
        }
        while ( v84 < v85 );
        if ( v42 )
        {
          v89 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL, v40);
          *(_QWORD *)(v89 + 24) = 5323LL;
          WdLogEvent5_WdAssertion(v89);
        }
        ObfDereferenceObject(v41);
        LODWORD(v37) = v91;
        v38 = v100;
LABEL_63:
        v36 = v98;
LABEL_36:
        v39 = v93;
        goto LABEL_37;
      }
      v44 = *v36;
      v99 = v44;
      if ( v44 && (!v41 || *(struct _DEVICE_OBJECT **)(v44 + 72) == v41) )
      {
        v45 = _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 624), 1u);
        v46 = (unsigned int)(v45 >> 31);
        LODWORD(v46) = v45 % 32;
        *(_DWORD *)(v44 + 8 * v46 + 628) = v5;
        v47 = v99 + 888;
        *(_DWORD *)(v44 + 8LL * (unsigned int)(v45 % 32) + 632) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v47, 0LL);
        v48 = 0;
        v49 = v99;
        for ( *(_QWORD *)(v47 + 8) = KeGetCurrentThread(); v48 < v42; ++v48 )
        {
          if ( v38[v48] == *(_DWORD *)(v49 + 80) )
            break;
        }
        if ( !*(_BYTE *)(v49 + 904) && v48 >= v42 )
        {
          if ( !v41 )
          {
            v41 = *(struct _DEVICE_OBJECT **)(v49 + 72);
            ObfReferenceObject(v41);
          }
          *(_DWORD *)(v49 + 908) = v5;
          v38[v42++] = *(_DWORD *)(v49 + 80);
          v50 = (*(_BYTE *)(v49 + 84) & 1) == 0;
          v51 = v92;
          if ( !v50 )
            v51 = 1;
          *(_QWORD *)(v47 + 8) = 0LL;
          v92 = v51;
          ExReleasePushLockExclusiveEx(v47, 0LL);
          KeLeaveCriticalRegion();
          v43 = v91;
          v36 = v96;
          LODWORD(v40) = v95;
          v39 = v93;
          goto LABEL_67;
        }
        *(_QWORD *)(v47 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v47, 0LL);
        KeLeaveCriticalRegion();
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v49 + 48));
        v36 = v96;
        v43 = v91;
        LODWORD(v40) = v95;
        v39 = v93;
        *v96 = 0LL;
      }
      v51 = v92;
LABEL_67:
      v40 = (struct _ERESOURCE *)(unsigned int)((_DWORD)v40 + 1);
      ++v36;
      v95 = (int)v40;
      v96 = v36;
      if ( (unsigned int)v40 >= v43 )
        goto LABEL_70;
    }
  }
  v90 = v103;
  if ( v38 != (_DWORD *)v106 )
    operator delete[](v38);
  result = v94;
  *((_WORD *)v90 + 9305) = 0;
  return result;
}
