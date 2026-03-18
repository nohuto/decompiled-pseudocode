/*
 * XREFs of _lambda_3a429c02e21bb855f1ec386a1cface2b_::operator() @ 0x1C00C3508
 * Callers:
 *     _lambda_3dc479c6339d8ea3367aebfddfa054a6_::_lambda_invoker_cdecl_ @ 0x1C0024A70 (_lambda_3dc479c6339d8ea3367aebfddfa054a6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0002180 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0003D00 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006314 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00064E0 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000BE0C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000BF84 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00CFD78 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     MonitorGetMonitorType @ 0x1C00DF994 (MonitorGetMonitorType.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C00E7EE8 (MonitorIsMonitorVirtualModeDisabled.c)
 *     MonitorGetCCDMonitorID @ 0x1C00E84A4 (MonitorGetCCDMonitorID.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00FC190 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall lambda_3a429c02e21bb855f1ec386a1cface2b_::operator()(unsigned int **a1, __int64 a2)
{
  unsigned int **v2; // rdi
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rbx
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  __int64 v9; // rdx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  unsigned int v19; // edx
  unsigned int v20; // r8d
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // r8d
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  _QWORD *v33; // rbx
  _QWORD *v34; // r13
  const struct DMMVIDEOPRESENTTARGET *v35; // r13
  unsigned int v36; // esi
  bool v37; // r12
  char v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rdx
  int IsMonitorVirtualModeDisabled; // esi
  char v46; // al
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdx
  _OWORD *v50; // rax
  _OWORD *v51; // rcx
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  int v61; // eax
  unsigned int v62; // eax
  struct HDXGMONITOR__ *v63; // r15
  __int64 v64; // rdx
  __int64 v65; // rcx
  int MonitorFromHandle; // r15d
  struct DXGMONITOR *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  struct _DEVICE_OBJECT *v73; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  bool v79; // [rsp+20h] [rbp-E0h]
  _BYTE v80[7]; // [rsp+21h] [rbp-DFh] BYREF
  unsigned int **v81; // [rsp+28h] [rbp-D8h]
  int v82; // [rsp+30h] [rbp-D0h]
  PZZWSTR SymbolicLinkList; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGMONITOR *v84; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v85; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v86[32]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v87[560]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v88[1088]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _DWORD v89[108]; // [rsp+6E0h] [rbp+5E0h] BYREF

  v2 = a1;
  v81 = a1;
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v86,
    (struct DXGADAPTER *)a2,
    1);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
  if ( *(_DWORD *)(a2 + 176) == 1 && *(_QWORD *)(a2 + 2552) )
  {
    ++**v2;
    v4 = *(_QWORD *)v2[1];
    v5 = **v2;
    if ( *(_DWORD *)(v4 + 4) >= v5 )
    {
      v6 = *(_QWORD *)(v4 + 8) + 560LL * (v5 - 1);
      memset(v87, 0, sizeof(v87));
      v7 = (_OWORD *)v6;
      v8 = v87;
      v9 = 4LL;
      do
      {
        v10 = v8[1];
        *v7 = *v8;
        v11 = v8[2];
        v7[1] = v10;
        v12 = v8[3];
        v7[2] = v11;
        v13 = v8[4];
        v7[3] = v12;
        v14 = v8[5];
        v7[4] = v13;
        v15 = v8[6];
        v7[5] = v14;
        v16 = v8[7];
        v8 += 8;
        v7[6] = v15;
        v7 += 8;
        *(v7 - 1) = v16;
        --v9;
      }
      while ( v9 );
      v17 = v8[1];
      *v7 = *v8;
      v18 = v8[2];
      v7[1] = v17;
      v7[2] = v18;
      *(_QWORD *)v6 = *(_QWORD *)(a2 + 276);
      RtlStringCbCopyNW(
        (char *)(v6 + 8),
        0LL,
        *(char **)(*(_QWORD *)(a2 + 1408) + 8LL),
        **(unsigned __int16 **)(a2 + 1408));
      v19 = *(_DWORD *)(v6 + 556) & 0xFFFFFFFD | (*(_BYTE *)(*(_QWORD *)(a2 + 2552) + 233LL) != 0 ? 2 : 0);
      *(_DWORD *)(v6 + 556) = v19;
      v20 = v19 & 0xFFFFFFFE | (*(_BYTE *)(*(_QWORD *)(a2 + 2552) + 234LL) != 0);
      *(_DWORD *)(v6 + 556) = v20;
      v21 = *(_QWORD *)(a2 + 2552);
      if ( *(_BYTE *)(v21 + 233) && *(_BYTE *)(v21 + 234)
        || (v22 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 192) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
      {
        v22 = 4;
      }
      v23 = v22 | v20 & 0xFFFFFFFB;
      *(_DWORD *)(v6 + 556) = v23;
      *(_DWORD *)(v6 + 528) = *(_DWORD *)(a2 + 2452);
      *(_DWORD *)(v6 + 532) = *(_DWORD *)(*(_QWORD *)(a2 + 2552) + 80LL);
      *(_DWORD *)(v6 + 536) = *(_DWORD *)(a2 + 284);
      *(_DWORD *)(v6 + 540) = *(_DWORD *)(a2 + 288);
      *(_DWORD *)(v6 + 544) = *(_DWORD *)(a2 + 292);
      *(_DWORD *)(v6 + 548) = *(_DWORD *)(a2 + 296);
      *(_DWORD *)(v6 + 552) = *(_DWORD *)(a2 + 300);
      v24 = v23 ^ ((unsigned __int8)v23 ^ (unsigned __int8)(8 * *(_DWORD *)(a2 + 308))) & 8;
      *(_DWORD *)(v6 + 556) = v24;
      v25 = v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)(8 * *(_DWORD *)(a2 + 308))) & 0x10;
      *(_DWORD *)(v6 + 556) = v25;
      v26 = v25 ^ ((unsigned __int8)v25 ^ (unsigned __int8)(4 * *(_DWORD *)(a2 + 308))) & 0x20;
      *(_DWORD *)(v6 + 556) = v26;
      v27 = v26 ^ ((unsigned __int8)v26 ^ (unsigned __int8)(4 * *(_DWORD *)(a2 + 308))) & 0x40;
      *(_DWORD *)(v6 + 556) = v27;
      v28 = v27 ^ (v27 ^ (4 * *(_DWORD *)(a2 + 308))) & 0x80;
      *(_DWORD *)(v6 + 556) = v28;
      v29 = v28 ^ (*(_DWORD *)(a2 + 308) ^ v28) & 0x100;
      *(_DWORD *)(v6 + 556) = v29;
      *(_DWORD *)(v6 + 556) = v29 ^ ((unsigned __int16)v29 ^ (unsigned __int16)(*(_DWORD *)(a2 + 308) >> 9)) & 0x200;
    }
    v30 = *(_QWORD *)(*(_QWORD *)(a2 + 2552) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v85, v30);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v30 + 80) + 72LL));
    v33 = *(_QWORD **)(v30 + 80);
    v34 = (_QWORD *)v33[3];
    if ( v34 != v33 + 3 )
    {
      v32 = 0LL;
      v35 = (const struct DMMVIDEOPRESENTTARGET *)(v34 - 1);
      if ( v35 )
      {
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)v2[1] + 20LL) < ++*v2[2] )
            goto LABEL_61;
          v36 = *((_DWORD *)v35 + 6);
          v37 = 0;
          v79 = 0;
          v38 = 0;
          if ( v36 != -1 )
          {
            DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2);
            v42 = *(_QWORD *)(a2 + 2552);
            if ( !v42 )
            {
              v43 = WdLogNewEntry5_WdError(v40, v39, v41);
              *(_QWORD *)(v43 + 24) = 8960LL;
              WdLogEvent5_WdError(v43);
LABEL_25:
              v38 = v79;
              goto LABEL_26;
            }
            IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled(a2, v36, v80);
            if ( IsMonitorVirtualModeDisabled == -1073741632 )
            {
              v46 = 0;
              v80[0] = 0;
              IsMonitorVirtualModeDisabled = 0;
            }
            else
            {
              v46 = v80[0];
            }
            if ( IsMonitorVirtualModeDisabled < 0 )
            {
              v47 = WdLogNewEntry5_WdAssertion(0LL, v44);
              *(_QWORD *)(v47 + 24) = IsMonitorVirtualModeDisabled;
              WdLogEvent5_WdAssertion(v47);
              goto LABEL_25;
            }
            if ( !v46 )
            {
              v79 = *(_BYTE *)(v42 + 234) == 0;
              v37 = *(_BYTE *)(v42 + 233) == 0;
              goto LABEL_25;
            }
            v38 = 1;
            v37 = 1;
          }
LABEL_26:
          v48 = *(_QWORD *)(*(_QWORD *)v2[1] + 24LL) + 1076LL * (*v2[2] - 1);
          memset(v88, 0, 0x434uLL);
          v49 = 8LL;
          v50 = v88;
          v51 = (_OWORD *)v48;
          do
          {
            v52 = v50[1];
            *v51 = *v50;
            v53 = v50[2];
            v51[1] = v52;
            v54 = v50[3];
            v51[2] = v53;
            v55 = v50[4];
            v51[3] = v54;
            v56 = v50[5];
            v51[4] = v55;
            v57 = v50[6];
            v51[5] = v56;
            v58 = v50[7];
            v50 += 8;
            v51[6] = v57;
            v51 += 8;
            *(v51 - 1) = v58;
            --v49;
          }
          while ( v49 );
          v59 = v50[1];
          *v51 = *v50;
          v60 = v50[2];
          v61 = *((_DWORD *)v50 + 12);
          v51[1] = v59;
          v51[2] = v60;
          *((_DWORD *)v51 + 12) = v61;
          *(_QWORD *)v48 = *(_QWORD *)(a2 + 276);
          *(_DWORD *)(v48 + 8) = *((_DWORD *)v35 + 6);
          *(_DWORD *)(v48 + 1052) = *((_DWORD *)v35 + 22);
          *(_DWORD *)(v48 + 1072) = (v38 == 0 ? 2 : 0) | (!v37 ? 4 : 0) | *(_DWORD *)(v48 + 1072) & 0xFFFFFFF8 | (*((_QWORD *)v35 + 14) != 0LL);
          v62 = (DMMVIDEOPRESENTTARGET::IsTargetForceable(v35) != 0 ? 0x10 : 0) | *(_DWORD *)(v48 + 1072) & 0xFFFFFFEF;
          *(_DWORD *)(v48 + 1056) = 0;
          *(_DWORD *)(v48 + 1072) = v62;
          *(_DWORD *)(v48 + 1060) = *((_DWORD *)v35 + 31);
          *(_DWORD *)(v48 + 1064) = *((_DWORD *)v35 + 32);
          *(_DWORD *)(v48 + 1068) = *((_DWORD *)v35 + 24);
          v63 = (struct HDXGMONITOR__ *)*((_QWORD *)v35 + 14);
          if ( !v63 )
            goto LABEL_61;
          memset(v89, 0, 0x1A4uLL);
          v84 = 0LL;
          MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(v63, &v84);
          if ( MonitorFromHandle < 0 )
            goto LABEL_48;
          v67 = v84;
          if ( !v84 )
          {
            v68 = WdLogNewEntry5_WdAssertion(v65, v64);
            WdLogEvent5_WdAssertion(v68);
            v71 = WdLogNewEntry5_WdAssertion(v70, v69);
            WdLogEvent5_WdAssertion(v71);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)((char *)v67 + 296), 1u);
          if ( *((_DWORD *)v67 + 108) != 1 || (*((_DWORD *)v67 + 10) & 0x10) != 0 )
          {
            memset(&v89[41], 0, 0x100uLL);
            v73 = (struct _DEVICE_OBJECT *)*((_QWORD *)v67 + 7);
            if ( v73 && *((_QWORD *)v67 + 12) )
            {
              SymbolicLinkList = 0LL;
              DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v73, 0, &SymbolicLinkList);
              MonitorFromHandle = DeviceInterfaces;
              if ( DeviceInterfaces < 0 )
              {
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v76, v75) + 24) = DeviceInterfaces;
LABEL_47:
                ExReleaseResourceLite((PERESOURCE)((char *)v67 + 296));
                KeLeaveCriticalRegion();
LABEL_48:
                if ( MonitorFromHandle >= 0 )
                  RtlStringCchCopyW((unsigned __int16 *)(v48 + 532), 0x104uLL, (const unsigned __int16 *)&v89[41]);
                goto LABEL_50;
              }
              MonitorFromHandle = RtlStringCchCopyW((unsigned __int16 *)&v89[41], 0x80uLL, SymbolicLinkList);
              ExFreePoolWithTag(SymbolicLinkList, 0);
              if ( MonitorFromHandle < 0 )
                goto LABEL_47;
              HIWORD(v89[41]) = 92;
            }
            MonitorFromHandle = DXGMONITOR::_FillMonitorDeviceInfo(v67, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)v89);
            if ( MonitorFromHandle == -1071841279 )
              MonitorFromHandle = 0;
            if ( MonitorFromHandle >= 0 && (v89[5] & 1) == 0 && !LOWORD(v89[9]) )
              v89[5] |= 2u;
            goto LABEL_47;
          }
          v72 = WdLogNewEntry5_WdDmmEvent();
          *(_QWORD *)(v72 + 24) = v67;
          WdLogEvent5_WdDmmEvent(v72);
          ExReleaseResourceLite((PERESOURCE)((char *)v67 + 296));
          KeLeaveCriticalRegion();
LABEL_50:
          MonitorGetCCDMonitorID(*((_QWORD *)v35 + 14), 260LL, v48 + 12);
          *(_DWORD *)(v48 + 1072) ^= (*(_DWORD *)(v48 + 1072) ^ (*((_DWORD *)v35 + 139) >> 3)) & 8;
          if ( (int)MonitorGetMonitorType(*((struct HDXGMONITOR__ **)v35 + 14)) >= 0 )
          {
            switch ( v82 )
            {
              case 2:
                *(_DWORD *)(v48 + 1056) = 2;
                break;
              case 3:
                *(_DWORD *)(v48 + 1056) = 3;
                break;
              case 4:
                *(_DWORD *)(v48 + 1056) = 4;
                break;
              default:
                v2 = v81;
                if ( v82 == 5 )
                  *(_DWORD *)(v48 + 1056) = 5;
                else
                  *(_DWORD *)(v48 + 1056) = 1;
                goto LABEL_61;
            }
          }
          v2 = v81;
LABEL_61:
          NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v33, v35);
          v32 = 0LL;
          v35 = NextTarget;
        }
        while ( NextTarget );
      }
    }
    ReferenceCounted::Release((ReferenceCounted *)(v33 + 8), v31, v32);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v85 + 40));
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
  return 0LL;
}
