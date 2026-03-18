/*
 * XREFs of _lambda_2b22dbeadb19a6eea2c92cf183f0ad41_::operator() @ 0x1C00BFFC0
 * Callers:
 *     _lambda_bef923f74a514834b01f3b45f93c4ee0_::_lambda_invoker_cdecl_ @ 0x1C0019640 (_lambda_bef923f74a514834b01f3b45f93c4ee0_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0003560 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00040D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00158A0 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00BB858 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     MonitorGetMonitorType @ 0x1C00C2CC0 (MonitorGetMonitorType.c)
 *     MonitorGetCCDMonitorID @ 0x1C00C3268 (MonitorGetCCDMonitorID.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?IsTargetForcable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00E24A4 (-IsTargetForcable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00E4434 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 */

__int64 __fastcall lambda_2b22dbeadb19a6eea2c92cf183f0ad41_::operator()(unsigned int **a1, __int64 a2)
{
  unsigned int **v2; // r15
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rbx
  _QWORD *v7; // rbx
  _QWORD *v8; // r13
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r13
  __int64 v10; // rsi
  bool v11; // di
  char v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rax
  MONITOR_MGR *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int MonitorInstance; // edi
  __int64 v21; // r8
  __int64 v22; // r9
  struct DXGMONITOR *v23; // rsi
  bool IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v25; // rcx
  bool v26; // si
  __int64 v27; // rsi
  __int64 v28; // rdx
  _OWORD *v29; // rax
  _OWORD *v30; // rcx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  int v40; // eax
  unsigned int v41; // eax
  struct HDXGMONITOR__ *v42; // rdi
  __int64 v44; // rax
  __int64 v45; // rcx
  int MonitorFromHandle; // r15d
  struct DXGMONITOR *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  struct _DEVICE_OBJECT *v52; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rbx
  _OWORD *v59; // rax
  _OWORD *v60; // rcx
  __int64 v61; // rdx
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  unsigned int v71; // edx
  unsigned int v72; // r8d
  __int64 v73; // rax
  int v74; // eax
  int v75; // r8d
  unsigned int v76; // eax
  int v77; // ecx
  int v78; // eax
  int v79; // ecx
  int v80; // eax
  int v81; // ecx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rax
  bool v92; // [rsp+20h] [rbp-E0h]
  bool v93; // [rsp+21h] [rbp-DFh]
  bool v94; // [rsp+22h] [rbp-DEh]
  int v96; // [rsp+30h] [rbp-D0h]
  PZZWSTR SymbolicLinkList; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGMONITOR *v98; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGMONITOR *v99; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v100; // [rsp+50h] [rbp-B0h] BYREF
  char v101[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v102[32]; // [rsp+68h] [rbp-98h] BYREF
  char v103[40]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v104[560]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v105[1088]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _DWORD v106[108]; // [rsp+720h] [rbp+620h] BYREF

  v2 = a1;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v101, (struct DXGADAPTER *const)a2, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v101) >= 0 && *(_QWORD *)(a2 + 2520) )
  {
    ++**v2;
    v4 = *(_QWORD *)v2[1];
    v5 = **v2;
    if ( *(_DWORD *)(v4 + 4) >= v5 )
    {
      v58 = *(_QWORD *)(v4 + 8) + 560LL * (v5 - 1);
      memset(v104, 0, sizeof(v104));
      v59 = (_OWORD *)v58;
      v60 = v104;
      v61 = 4LL;
      do
      {
        v62 = v60[1];
        *v59 = *v60;
        v63 = v60[2];
        v59[1] = v62;
        v64 = v60[3];
        v59[2] = v63;
        v65 = v60[4];
        v59[3] = v64;
        v66 = v60[5];
        v59[4] = v65;
        v67 = v60[6];
        v59[5] = v66;
        v68 = v60[7];
        v60 += 8;
        v59[6] = v67;
        v59 += 8;
        *(v59 - 1) = v68;
        --v61;
      }
      while ( v61 );
      v69 = v60[1];
      *v59 = *v60;
      v70 = v60[2];
      v59[1] = v69;
      v59[2] = v70;
      *(_QWORD *)v58 = *(_QWORD *)(a2 + 276);
      RtlStringCbCopyNW(
        (char *)(v58 + 8),
        0LL,
        *(char **)(*(_QWORD *)(a2 + 1392) + 8LL),
        **(unsigned __int16 **)(a2 + 1392));
      v71 = *(_DWORD *)(v58 + 556) & 0xFFFFFFFD | (*(_BYTE *)(*(_QWORD *)(a2 + 2520) + 132LL) != 0 ? 2 : 0);
      *(_DWORD *)(v58 + 556) = v71;
      v72 = v71 & 0xFFFFFFFE | (*(_BYTE *)(*(_QWORD *)(a2 + 2520) + 133LL) != 0);
      *(_DWORD *)(v58 + 556) = v72;
      v73 = *(_QWORD *)(a2 + 2520);
      if ( *(_BYTE *)(v73 + 132) && *(_BYTE *)(v73 + 133)
        || (v74 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 192) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
      {
        v74 = 4;
      }
      *(_DWORD *)(v58 + 556) = v74 | v72 & 0xFFFFFFFB;
      *(_DWORD *)(v58 + 528) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)a2);
      *(_DWORD *)(v58 + 532) = *(_DWORD *)(*(_QWORD *)(a2 + 2520) + 80LL);
      *(_DWORD *)(v58 + 536) = *(_DWORD *)(a2 + 284);
      *(_DWORD *)(v58 + 540) = *(_DWORD *)(a2 + 288);
      *(_DWORD *)(v58 + 544) = *(_DWORD *)(a2 + 292);
      *(_DWORD *)(v58 + 548) = *(_DWORD *)(a2 + 296);
      *(_DWORD *)(v58 + 552) = *(_DWORD *)(a2 + 300);
      v76 = v75 & 0xFFFFFFF7 | (8 * (*(_BYTE *)(a2 + 308) & 1));
      *(_DWORD *)(v58 + 556) = v76;
      v77 = v76 ^ ((unsigned __int8)v76 ^ (unsigned __int8)(8 * *(_DWORD *)(a2 + 308))) & 0x10;
      *(_DWORD *)(v58 + 556) = v77;
      v78 = v77 ^ ((unsigned __int8)v77 ^ (unsigned __int8)(4 * *(_DWORD *)(a2 + 308))) & 0x20;
      *(_DWORD *)(v58 + 556) = v78;
      v79 = v78 ^ ((unsigned __int8)v78 ^ (unsigned __int8)(4 * *(_DWORD *)(a2 + 308))) & 0x40;
      *(_DWORD *)(v58 + 556) = v79;
      v80 = v79 ^ (v79 ^ (4 * *(_DWORD *)(a2 + 308))) & 0x80;
      *(_DWORD *)(v58 + 556) = v80;
      v81 = v80 ^ ((unsigned __int16)v80 ^ (unsigned __int16)*(_DWORD *)(a2 + 308)) & 0x100;
      *(_DWORD *)(v58 + 556) = v81;
      *(_DWORD *)(v58 + 556) = v81 ^ ((unsigned __int16)v81 ^ (unsigned __int16)(*(_DWORD *)(a2 + 308) >> 9)) & 0x200;
    }
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 2520) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v100, v6);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 80) + 72LL));
    v7 = *(_QWORD **)(v6 + 80);
    v8 = (_QWORD *)v7[3];
    if ( v8 != v7 + 3 )
    {
      NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v8 - 1);
      if ( NextTarget )
      {
        v93 = v94;
        while ( 1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v2[1] + 20LL) < ++*v2[2] )
            goto LABEL_26;
          v10 = *((unsigned int *)NextTarget + 6);
          v11 = 0;
          v12 = 0;
          v92 = 0;
          if ( (_DWORD)v10 != -1 )
            break;
LABEL_23:
          v27 = *(_QWORD *)(*(_QWORD *)v2[1] + 24LL) + 1076LL * (*v2[2] - 1);
          memset(v105, 0, 0x434uLL);
          v28 = 8LL;
          v29 = v105;
          v30 = (_OWORD *)v27;
          do
          {
            v31 = v29[1];
            *v30 = *v29;
            v32 = v29[2];
            v30[1] = v31;
            v33 = v29[3];
            v30[2] = v32;
            v34 = v29[4];
            v30[3] = v33;
            v35 = v29[5];
            v30[4] = v34;
            v36 = v29[6];
            v30[5] = v35;
            v37 = v29[7];
            v29 += 8;
            v30[6] = v36;
            v30 += 8;
            *(v30 - 1) = v37;
            --v28;
          }
          while ( v28 );
          v38 = v29[1];
          *v30 = *v29;
          v39 = v29[2];
          v40 = *((_DWORD *)v29 + 12);
          v30[1] = v38;
          v30[2] = v39;
          *((_DWORD *)v30 + 12) = v40;
          *(_QWORD *)v27 = *(_QWORD *)(a2 + 276);
          *(_DWORD *)(v27 + 8) = *((_DWORD *)NextTarget + 6);
          *(_DWORD *)(v27 + 1052) = *((_DWORD *)NextTarget + 22);
          *(_DWORD *)(v27 + 1072) = (v12 == 0 ? 2 : 0) | (!v11 ? 4 : 0) | *(_DWORD *)(v27 + 1072) & 0xFFFFFFF8 | (*((_QWORD *)NextTarget + 14) != 0LL);
          v41 = (DMMVIDEOPRESENTTARGET::IsTargetForcable(NextTarget) != 0 ? 0x10 : 0) | *(_DWORD *)(v27 + 1072) & 0xFFFFFFEF;
          *(_DWORD *)(v27 + 1056) = 0;
          *(_DWORD *)(v27 + 1072) = v41;
          *(_DWORD *)(v27 + 1060) = *((_DWORD *)NextTarget + 31);
          *(_DWORD *)(v27 + 1064) = *((_DWORD *)NextTarget + 32);
          *(_DWORD *)(v27 + 1068) = *((_DWORD *)NextTarget + 24);
          v42 = (struct HDXGMONITOR__ *)*((_QWORD *)NextTarget + 14);
          if ( !v42 )
            goto LABEL_26;
          memset(v106, 0, 0x1A4uLL);
          v99 = 0LL;
          MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(v42, &v99);
          if ( MonitorFromHandle < 0 )
            goto LABEL_47;
          v47 = v99;
          if ( !v99 )
          {
            v88 = WdLogNewEntry5_WdAssertion(v45);
            WdLogEvent5_WdAssertion(v88);
            v90 = WdLogNewEntry5_WdAssertion(v89);
            WdLogEvent5_WdAssertion(v90);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)((char *)v47 + 296), 1u);
          if ( *((_DWORD *)v47 + 108) != 1 || (*((_DWORD *)v47 + 10) & 0x10) != 0 )
          {
            memset(&v106[41], 0, 0x100uLL);
            v52 = (struct _DEVICE_OBJECT *)*((_QWORD *)v47 + 7);
            if ( !v52 )
              goto LABEL_42;
            SymbolicLinkList = 0LL;
            DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v52, 0, &SymbolicLinkList);
            MonitorFromHandle = DeviceInterfaces;
            if ( DeviceInterfaces < 0 )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v55, v54, v56, v57) + 24) = DeviceInterfaces;
            }
            else
            {
              MonitorFromHandle = RtlStringCchCopyW((unsigned __int16 *)&v106[41], 0x80uLL, SymbolicLinkList);
              ExFreePoolWithTag(SymbolicLinkList, 0);
              if ( MonitorFromHandle >= 0 )
              {
                HIWORD(v106[41]) = 92;
LABEL_42:
                MonitorFromHandle = DXGMONITOR::_FillMonitorDeviceInfo(
                                      v47,
                                      (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)v106);
                if ( MonitorFromHandle == -1071841279 )
                  MonitorFromHandle = 0;
                if ( MonitorFromHandle >= 0 && (v106[5] & 1) == 0 && !LOWORD(v106[9]) )
                  v106[5] |= 2u;
              }
            }
            ExReleaseResourceLite((PERESOURCE)((char *)v47 + 296));
            KeLeaveCriticalRegion();
LABEL_47:
            if ( MonitorFromHandle >= 0 )
              RtlStringCchCopyW((unsigned __int16 *)(v27 + 532), 0x104uLL, (const unsigned __int16 *)&v106[41]);
            goto LABEL_49;
          }
          v91 = WdLogNewEntry5_WdDmmEvent(v49, v48, v50, v51);
          *(_QWORD *)(v91 + 24) = v47;
          WdLogEvent5_WdDmmEvent(v91);
          ExReleaseResourceLite((PERESOURCE)((char *)v47 + 296));
          KeLeaveCriticalRegion();
LABEL_49:
          MonitorGetCCDMonitorID(*((_QWORD *)NextTarget + 14), 260LL, v27 + 12);
          *(_DWORD *)(v27 + 1072) ^= (*(_DWORD *)(v27 + 1072) ^ (*((_DWORD *)NextTarget + 137) >> 3)) & 8;
          if ( (int)MonitorGetMonitorType(*((struct HDXGMONITOR__ **)NextTarget + 14)) >= 0 )
          {
            switch ( v96 )
            {
              case 2:
                *(_DWORD *)(v27 + 1056) = 2;
                break;
              case 3:
                *(_DWORD *)(v27 + 1056) = 3;
                break;
              case 4:
                *(_DWORD *)(v27 + 1056) = 4;
                break;
              default:
                v2 = a1;
                if ( v96 == 5 )
                  *(_DWORD *)(v27 + 1056) = 5;
                else
                  *(_DWORD *)(v27 + 1056) = 1;
                goto LABEL_26;
            }
          }
          v2 = a1;
LABEL_26:
          NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v7, NextTarget);
          if ( !NextTarget )
            goto LABEL_27;
        }
        DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2);
        v14 = *(_QWORD *)(a2 + 2520);
        if ( !v14 )
        {
          v82 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v82 + 24) = 8248LL;
          WdLogEvent5_WdError(v82);
LABEL_22:
          v12 = v92;
          goto LABEL_23;
        }
        DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2);
        v16 = *(_QWORD *)(a2 + 2520);
        if ( !v16 )
        {
          v83 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v83);
          v16 = *(_QWORD *)(a2 + 2520);
        }
        v17 = *(MONITOR_MGR **)(v16 + 96);
        if ( !v17 )
        {
          v84 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v84 + 24) = a2;
          WdLogEvent5_WdError(v84);
          MonitorInstance = -1073741811;
LABEL_69:
          v85 = WdLogNewEntry5_WdAssertion(v19);
          *(_QWORD *)(v85 + 24) = MonitorInstance;
          WdLogEvent5_WdAssertion(v85);
          v11 = 0;
          goto LABEL_22;
        }
        v98 = 0LL;
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v17, v10, 1u, &v98);
        if ( MonitorInstance == -1073741275 )
        {
          v44 = WdLogNewEntry5_WdDmmEvent(v19, v18, v21, v22);
          *(_QWORD *)(v44 + 24) = v10;
          *(_QWORD *)(v44 + 32) = a2;
          WdLogEvent5_WdDmmEvent(v44);
        }
        else
        {
          if ( MonitorInstance >= 0 )
          {
            v23 = v98;
            if ( !v98 || *((_DWORD *)v98 + 108) != 1 )
            {
              v86 = WdLogNewEntry5_WdAssertion(v19);
              WdLogEvent5_WdAssertion(v86);
            }
            if ( !v23 )
            {
              v87 = WdLogNewEntry5_WdAssertion(v19);
              WdLogEvent5_WdAssertion(v87);
            }
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)((char *)v23 + 296), 1u);
            IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v23);
            v25 = (struct _ERESOURCE *)((char *)v23 + 296);
            v93 = IsVirtualModeSuportDisabled;
            v26 = IsVirtualModeSuportDisabled;
            ExReleaseResourceLite(v25);
            KeLeaveCriticalRegion();
            goto LABEL_20;
          }
          if ( MonitorInstance != -1073741632 )
          {
            v26 = v93;
LABEL_31:
            if ( MonitorInstance >= 0 )
            {
LABEL_20:
              if ( v26 )
              {
                v12 = 1;
                v11 = 1;
                goto LABEL_23;
              }
              v92 = *(_BYTE *)(v14 + 133) == 0;
              v11 = *(_BYTE *)(v14 + 132) == 0;
              goto LABEL_22;
            }
            goto LABEL_69;
          }
        }
        v26 = 0;
        v93 = 0;
        MonitorInstance = 0;
        goto LABEL_31;
      }
    }
LABEL_27:
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 8));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v100 + 40));
  }
  COREACCESS::~COREACCESS((COREACCESS *)v103);
  COREACCESS::~COREACCESS((COREACCESS *)v102);
  return 0LL;
}
