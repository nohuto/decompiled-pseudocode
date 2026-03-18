/*
 * XREFs of ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C0241E20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01438D4 (DxgkPowerOnOffMonitor.c)
 *     ?LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C021B4C8 (-LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C026C558 (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 */

__int64 __fastcall CTTMDEVICE::SetDisplayStateCallback(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v5; // rdi
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  __int64 v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  __int64 result; // rax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r14d
  unsigned int v22; // r14d
  SIZE_T v23; // rax
  __int64 v24; // rcx
  PVOID v25; // r15
  __int64 v26; // rax
  unsigned __int16 v27; // ax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 *v30; // rcx
  unsigned __int64 v31; // r9
  _DWORD *v32; // r12
  unsigned int v33; // r8d
  struct _ERESOURCE *v34; // rdx
  struct _DEVICE_OBJECT *v35; // r14
  unsigned int v36; // r15d
  unsigned int v37; // eax
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rbx
  unsigned int v42; // ecx
  __int64 v43; // r13
  bool v44; // zf
  char v45; // r13
  __int64 v46; // rax
  __int64 v47; // rax
  SIZE_T v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // r13
  __int64 v54; // rax
  int *v55; // r9
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v56; // rax
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rbx
  _QWORD *v60; // rax
  __int64 v61; // r12
  _BYTE *v62; // r13
  unsigned int *v63; // rax
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rbx
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // r12
  __int64 v70; // rax
  struct _EX_RUNDOWN_REF **v71; // r12
  unsigned int v72; // r13d
  unsigned int v73; // eax
  struct _EX_RUNDOWN_REF *v74; // r9
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rax
  struct DXGSESSIONDATA *v78; // rbx
  int v79; // [rsp+38h] [rbp-D0h]
  char v80; // [rsp+3Ch] [rbp-CCh]
  int v81; // [rsp+40h] [rbp-C8h]
  unsigned int v82; // [rsp+44h] [rbp-C4h]
  int v83; // [rsp+48h] [rbp-C0h]
  __int64 *v84; // [rsp+50h] [rbp-B8h]
  _BYTE *v85; // [rsp+50h] [rbp-B8h]
  __int64 *v86; // [rsp+58h] [rbp-B0h]
  __int64 v87; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE *v88; // [rsp+68h] [rbp-A0h]
  int v89; // [rsp+70h] [rbp-98h] BYREF
  int v90; // [rsp+74h] [rbp-94h] BYREF
  struct DXGSESSIONDATA *v91; // [rsp+78h] [rbp-90h]
  _QWORD v92[10]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v93[10]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v94[16]; // [rsp+128h] [rbp+20h] BYREF

  v3 = a3;
  v88 = v94;
  v5 = a2;
  v82 = -1073741637;
  v81 = 4;
  v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 77);
  if ( v7 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v91 = SessionDataForSpecifiedSession;
  if ( !SessionDataForSpecifiedSession )
  {
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v11);
    v12 = (_QWORD *)v10;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
LABEL_6:
    WdLogEvent5_WdError(v12);
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
        v87 = a1;
        if ( !a1 )
        {
          v14 = WdLogNewEntry5_WdAssertion(v6);
          *(_QWORD *)(v14 + 24) = 4693LL;
          WdLogEvent5_WdAssertion(v14);
        }
        v15 = *(_DWORD *)(a1 + 84);
        if ( (v15 & 1) == 0 && (v15 & 2) == 0 )
        {
          v16 = WdLogNewEntry5_WdAssertion(v6);
          *(_QWORD *)(v16 + 24) = 4695LL;
          WdLogEvent5_WdAssertion(v16);
        }
        if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 48)) )
          return 3221226166LL;
        v20 = *((unsigned __int16 *)SessionDataForSpecifiedSession + 9305);
        v21 = *((unsigned __int16 *)SessionDataForSpecifiedSession + 9304);
        if ( v21 <= (int)v20 + 1 )
        {
          v22 = v21 + 4;
          if ( v22 >= 0xFFFF )
          {
            v28 = WdLogNewEntry5_WdWarning(v20, v17, v18);
            *(_QWORD *)(v28 + 24) = v22;
            WdLogEvent5_WdWarning(v28);
            goto LABEL_33;
          }
          v23 = 8LL * v22;
          if ( !is_mul_ok(v22, 8uLL) )
            v23 = -1LL;
          v25 = operator new(v23, 0x4B677844u, PagedPool);
          if ( !v25 )
          {
            v26 = WdLogNewEntry5_WdLowResource(v24);
            *(_QWORD *)(v26 + 24) = v22;
            WdLogEvent5_WdLowResource(v26);
LABEL_33:
            v29 = *((_QWORD *)SessionDataForSpecifiedSession + 2327);
            if ( !v29 )
            {
              v30 = &v87;
              v79 = 1;
              v86 = &v87;
              LODWORD(v31) = 1;
LABEL_35:
              v32 = v94;
              goto LABEL_36;
            }
            *(_QWORD *)(v29 + 8LL * (unsigned __int16)(*((_WORD *)SessionDataForSpecifiedSession + 9305))++) = a1;
            goto LABEL_58;
          }
          v27 = *((_WORD *)SessionDataForSpecifiedSession + 9305);
          if ( v27 )
          {
            memmove(v25, *((const void **)SessionDataForSpecifiedSession + 2327), 8LL * v27);
            operator delete[](*((void **)SessionDataForSpecifiedSession + 2327));
            v27 = *((_WORD *)SessionDataForSpecifiedSession + 9305);
          }
          *((_QWORD *)SessionDataForSpecifiedSession + 2327) = v25;
          LOWORD(v20) = v27;
          *((_WORD *)SessionDataForSpecifiedSession + 9304) = v22;
        }
        *(_QWORD *)(*((_QWORD *)SessionDataForSpecifiedSession + 2327) + 8LL * (unsigned __int16)v20) = a1;
        ++*((_WORD *)SessionDataForSpecifiedSession + 9305);
        return 0LL;
      }
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v6);
      v19 = *((int *)SessionDataForSpecifiedSession + 4651);
      v12[4] = v5;
    }
    else
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v6);
      v19 = *((unsigned int *)SessionDataForSpecifiedSession + 4650);
      v12[4] = v3;
    }
    v12[3] = v19;
    v12[5] = -1073741811LL;
    goto LABEL_6;
  }
  if ( *((_DWORD *)SessionDataForSpecifiedSession + 4650) != (_DWORD)v3 )
  {
    v46 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v46 + 24) = *((unsigned int *)SessionDataForSpecifiedSession + 4650);
    *(_QWORD *)(v46 + 32) = v3;
    WdLogEvent5_WdError(v46);
  }
  if ( *((_DWORD *)SessionDataForSpecifiedSession + 4651) != (_DWORD)v5 )
  {
    v47 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v47 + 24) = *((int *)SessionDataForSpecifiedSession + 4651);
    *(_QWORD *)(v47 + 32) = v5;
    WdLogEvent5_WdError(v47);
    LODWORD(v5) = *((_DWORD *)SessionDataForSpecifiedSession + 4651);
  }
LABEL_58:
  v30 = (__int64 *)*((_QWORD *)SessionDataForSpecifiedSession + 2327);
  v31 = *((unsigned __int16 *)SessionDataForSpecifiedSession + 9305);
  v86 = v30;
  v79 = v31;
  if ( (unsigned int)v31 <= 4 )
    goto LABEL_35;
  v48 = 4 * v31;
  v49 = *((unsigned __int16 *)SessionDataForSpecifiedSession + 9305);
  if ( !is_mul_ok(v31, 4uLL) )
    v48 = -1LL;
  v88 = operator new(v48, 0x4B677844u, PagedPool);
  v32 = v88;
  if ( !v88 )
  {
    v51 = WdLogNewEntry5_WdLowResource(v50);
    *(_QWORD *)(v51 + 24) = v49;
    WdLogEvent5_WdLowResource(v51);
    v32 = v94;
    LODWORD(v31) = v49;
    v88 = v94;
    goto LABEL_63;
  }
  v30 = v86;
  LODWORD(v31) = v49;
  v33 = v49;
  v81 = v49;
LABEL_37:
  v34 = 0LL;
  v80 = 0;
  v83 = 0;
  v35 = 0LL;
  v36 = 0;
  if ( (_DWORD)v31 )
  {
    v37 = v79;
    v84 = v30;
    while ( 1 )
    {
      if ( v36 >= v33 )
      {
        v45 = v80;
LABEL_70:
        if ( !v35 )
          break;
        if ( v45 )
        {
          if ( (v5 & 0xFFFFFFFC) == 0 && (_DWORD)v5 != 1 )
          {
            v52 = LPMSetTTMDisplayPowerState(v5, v34);
            v53 = v52;
            if ( v52 < 0 )
            {
              v54 = WdLogNewEntry5_WdError(v30);
              *(_QWORD *)(v54 + 24) = (int)v5;
              *(_QWORD *)(v54 + 32) = v53;
              WdLogEvent5_WdError(v54);
            }
          }
        }
        if ( (int)v5 < 0 )
          goto LABEL_90;
        if ( (int)v5 <= 1 )
        {
          memset(v93, 0, 0x48uLL);
          EtwActivityIdControl(3u, (LPGUID)&v93[1]);
          v55 = &v90;
          v93[8] = MEMORY[0xFFFFF78000000014];
          v56 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v93;
          LODWORD(v93[3]) = 54;
          LOBYTE(v93[6]) = -1;
          v90 = 4;
LABEL_81:
          v57 = DxgkPowerOnOffMonitor((__int64)v35, v36, v32, v55, 0, v56);
          v59 = v57;
          v82 = v57;
          if ( v57 < 0 )
          {
            v60 = (_QWORD *)WdLogNewEntry5_WdError(v58);
            v60[3] = v35;
            v60[4] = v59;
            goto LABEL_91;
          }
        }
        else if ( (_DWORD)v5 == 2 )
        {
          v61 = 0LL;
          if ( v36 )
          {
            v62 = v88;
            v63 = (unsigned int *)v88;
            v85 = v88;
            while ( 1 )
            {
              v64 = DpiBrightnessNotifyMonitorDimming(v35, *v63, 1u);
              v66 = v64;
              v82 = v64;
              if ( v64 < 0 )
                break;
              v63 = (unsigned int *)(v85 + 4);
              v61 = (unsigned int)(v61 + 1);
              v85 += 4;
              if ( (unsigned int)v61 >= v36 )
                goto LABEL_92;
            }
            v60 = (_QWORD *)WdLogNewEntry5_WdError(v65);
            v60[3] = *(unsigned int *)&v62[4 * v61];
            v60[4] = v35;
            v60[5] = v66;
            goto LABEL_91;
          }
        }
        else
        {
          if ( (_DWORD)v5 == 3 )
          {
            memset(v92, 0, 0x48uLL);
            EtwActivityIdControl(3u, (LPGUID)&v92[1]);
            v55 = &v89;
            v92[8] = MEMORY[0xFFFFF78000000014];
            v56 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v92;
            LODWORD(v92[3]) = 55;
            LOBYTE(v92[6]) = -1;
            v89 = 1;
            goto LABEL_81;
          }
LABEL_90:
          v82 = -1073741811;
          v60 = (_QWORD *)WdLogNewEntry5_WdError(v30);
          v60[3] = (int)v5;
          v60[4] = -1073741811LL;
LABEL_91:
          WdLogEvent5_WdError(v60);
        }
LABEL_92:
        if ( v80 )
        {
          if ( (_DWORD)v5 == 1 )
          {
            v67 = LPMSetTTMDisplayPowerState(1, v34);
            v69 = v67;
            if ( v67 < 0 )
            {
              v70 = WdLogNewEntry5_WdError(v68);
              *(_QWORD *)(v70 + 24) = 1LL;
              *(_QWORD *)(v70 + 32) = v69;
              WdLogEvent5_WdError(v70);
            }
          }
        }
        v71 = (struct _EX_RUNDOWN_REF **)v86;
        v72 = 0;
        v73 = v79;
        do
        {
          if ( !v36 )
            break;
          v74 = *v71;
          if ( *v71 && (struct _DEVICE_OBJECT *)v74[9].Count == v35 )
          {
            v75 = _InterlockedExchangeAdd((volatile signed __int32 *)&v74[78], 1u);
            v76 = (unsigned int)(v75 >> 31);
            LODWORD(v76) = v75 % 32;
            HIDWORD(v74[v76 + 78].Ptr) = v5 | 0x80000000;
            LODWORD(v74[(unsigned int)(v75 % 32) + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
            ExReleaseRundownProtection(*v71 + 6);
            *v71 = 0LL;
            v73 = v79;
          }
          ++v72;
          ++v71;
          --v36;
        }
        while ( v72 < v73 );
        if ( v36 )
        {
          v77 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
          *(_QWORD *)(v77 + 24) = 5094LL;
          WdLogEvent5_WdAssertion(v77);
        }
        ObfDereferenceObject(v35);
        LODWORD(v31) = v79;
        v32 = v88;
LABEL_63:
        v30 = v86;
LABEL_36:
        v33 = v81;
        goto LABEL_37;
      }
      v38 = *v30;
      v87 = v38;
      if ( v38 && (!v35 || *(struct _DEVICE_OBJECT **)(v38 + 72) == v35) )
      {
        v39 = _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 624), 1u);
        v40 = (unsigned int)(v39 >> 31);
        LODWORD(v40) = v39 % 32;
        *(_DWORD *)(v38 + 8 * v40 + 628) = v5;
        v41 = v87 + 888;
        *(_DWORD *)(v38 + 8LL * (unsigned int)(v39 % 32) + 632) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v41, 0LL);
        v42 = 0;
        v43 = v87;
        for ( *(_QWORD *)(v41 + 8) = KeGetCurrentThread(); v42 < v36; ++v42 )
        {
          if ( v32[v42] == *(_DWORD *)(v43 + 80) )
            break;
        }
        if ( !*(_BYTE *)(v43 + 904) && v42 >= v36 )
        {
          if ( !v35 )
          {
            v35 = *(struct _DEVICE_OBJECT **)(v43 + 72);
            ObfReferenceObject(v35);
          }
          *(_DWORD *)(v43 + 908) = v5;
          v32[v36++] = *(_DWORD *)(v43 + 80);
          v44 = (*(_BYTE *)(v43 + 84) & 1) == 0;
          v45 = v80;
          if ( !v44 )
            v45 = 1;
          *(_QWORD *)(v41 + 8) = 0LL;
          v80 = v45;
          ExReleasePushLockExclusiveEx(v41, 0LL);
          KeLeaveCriticalRegion();
          v37 = v79;
          v30 = v84;
          LODWORD(v34) = v83;
          v33 = v81;
          goto LABEL_67;
        }
        *(_QWORD *)(v41 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v41, 0LL);
        KeLeaveCriticalRegion();
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v43 + 48));
        v30 = v84;
        v37 = v79;
        LODWORD(v34) = v83;
        v33 = v81;
        *v84 = 0LL;
      }
      v45 = v80;
LABEL_67:
      v34 = (struct _ERESOURCE *)(unsigned int)((_DWORD)v34 + 1);
      ++v30;
      v83 = (int)v34;
      v84 = v30;
      if ( (unsigned int)v34 >= v37 )
        goto LABEL_70;
    }
  }
  v78 = v91;
  if ( v32 != (_DWORD *)v94 )
    operator delete[](v32);
  result = v82;
  *((_WORD *)v78 + 9305) = 0;
  return result;
}
