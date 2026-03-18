/*
 * XREFs of ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE4@Z @ 0x1C00DCCF8
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00DC944 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     ??1?$AutoBuffer@G@DMM@@UEAA@XZ @ 0x1C0003C90 (--1-$AutoBuffer@G@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0003CF0 (-Initialize@-$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0003E00 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C00EC934 (MonitorGetCCDMonitorID.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0142E58 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 */

__int64 __fastcall DmmGetTargetIdFromCcdMonitorId(
        DXGADAPTER *this,
        const struct _UNICODE_STRING *a2,
        bool *a3,
        unsigned int *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        bool *a7,
        bool *a8)
{
  const struct _UNICODE_STRING *v9; // r13
  DXGADAPTER *v10; // rsi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v11; // rax
  __int64 Length; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rbx
  unsigned int *v21; // rdx
  __int64 v22; // r8
  bool v23; // r15
  _QWORD *v24; // rbx
  _QWORD *v25; // r14
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r14
  __int64 v27; // r12
  int CCDMonitorID; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdi
  bool v33; // r13
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v34; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r12
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  MONITOR_MGR *v45; // rcx
  int MonitorInstance; // eax
  struct DXGMONITOR *v47; // r14
  bool IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v49; // rcx
  bool v50; // r14
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  unsigned int *v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // [rsp+20h] [rbp-40h] BYREF
  void **v68; // [rsp+28h] [rbp-38h] BYREF
  __int128 v69; // [rsp+30h] [rbp-30h]
  void **v70; // [rsp+40h] [rbp-20h]
  void *Source2; // [rsp+48h] [rbp-18h]
  __int64 v72; // [rsp+50h] [rbp-10h]
  int v73; // [rsp+58h] [rbp-8h]
  struct DXGMONITOR *v74; // [rsp+A8h] [rbp+48h] BYREF
  int v75; // [rsp+B0h] [rbp+50h]
  unsigned int *v76; // [rsp+B8h] [rbp+58h]

  v76 = a4;
  v75 = (int)a3;
  v9 = a2;
  v10 = this;
  if ( !a2
    || !a4
    || (this = (DXGADAPTER *)a5) == 0LL
    || (v11 = a6) == 0LL
    || (a2 = (const struct _UNICODE_STRING *)a7) == 0LL
    || (a3 = a8) == 0LL )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdError(this, a2, a3);
    v66[5] = a5;
    v66[6] = a6;
    v66[3] = v9;
    v66[4] = a4;
    WdLogEvent5_WdError(v66);
    return 3221225485LL;
  }
  *a4 = -1;
  Source2 = 0LL;
  v72 = 0LL;
  *(_DWORD *)this = -2;
  *v11 = D3DKMDT_VOT_UNINITIALIZED;
  LOBYTE(a2->Length) = 0;
  Length = v9->Length;
  v68 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `SetElement'};
  *a3 = 0;
  v70 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `NonReferenceCounted'};
  v69 = 0LL;
  v73 = 3;
  DMM::AutoBuffer<unsigned short>::Initialize((__int64)&v68, Length + 2);
  if ( !Source2 )
  {
    v53 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v53 + 24) = ((unsigned __int64)v9->Length >> 1) + 2;
    *(_QWORD *)(v53 + 32) = v10;
    WdLogEvent5_WdError(v53);
    LODWORD(v32) = -1073741801;
    goto LABEL_42;
  }
  if ( !v10 )
  {
    v54 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v54 + 24) = 0LL;
LABEL_48:
    WdLogEvent5_WdError(v54);
    LODWORD(v32) = -1071775742;
    goto LABEL_42;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
  {
    v55 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v55);
  }
  v19 = *((_QWORD *)v10 + 319);
  if ( !v19 )
  {
    v54 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v54 + 24) = v10;
    goto LABEL_48;
  }
  v20 = *(_QWORD *)(v19 + 88);
  if ( !v20 )
  {
    v56 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v56 + 24) = v10;
    WdLogEvent5_WdError(v56);
    LODWORD(v32) = -1071774923;
    goto LABEL_42;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v67, v20);
  v23 = 1;
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v20 + 80) + 72LL), 1u);
  v24 = *(_QWORD **)(v20 + 80);
  LODWORD(v74) = 0;
  v25 = (_QWORD *)v24[3];
  if ( v25 == v24 + 3 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v25 - 1)) == 0LL )
  {
LABEL_44:
    LODWORD(v32) = -1073741275;
    goto LABEL_41;
  }
  while ( 1 )
  {
    if ( *((_DWORD *)NextTarget + 22) )
      goto LABEL_51;
    v27 = *((_QWORD *)NextTarget + 14);
    if ( !v27 )
      goto LABEL_51;
    CCDMonitorID = MonitorGetCCDMonitorID(*((_QWORD *)NextTarget + 14), (unsigned int)v72 >> 1, Source2);
    v32 = CCDMonitorID;
    if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
      goto LABEL_51;
    if ( CCDMonitorID < 0 )
      break;
    if ( RtlCompareMemory(v9->Buffer, Source2, v9->Length) == v9->Length )
    {
      if ( !(_DWORD)v74 )
      {
        v33 = 1;
        v21 = v76;
        v34 = a5;
        *v76 = *((_DWORD *)NextTarget + 6);
        *v34 = *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20);
        v35 = a6;
        *a6 = *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 21);
        v36 = *v21;
        if ( (_DWORD)v36 == -1 )
        {
          LODWORD(v32) = -1073741811;
          goto LABEL_39;
        }
        DXGADAPTER::IsCoreResourceSharedOwner(v10);
        v40 = *((_QWORD *)v10 + 319);
        if ( !v40 )
        {
          v57 = WdLogNewEntry5_WdError(v38, v37, v39);
          *(_QWORD *)(v57 + 24) = 8960LL;
          WdLogEvent5_WdError(v57);
          LODWORD(v32) = -1073741811;
          goto LABEL_54;
        }
        DXGADAPTER::IsCoreResourceSharedOwner(v10);
        v44 = *((_QWORD *)v10 + 319);
        if ( !v44 )
        {
          v60 = WdLogNewEntry5_WdAssertion(v42, v41);
          WdLogEvent5_WdAssertion(v60);
          v44 = *((_QWORD *)v10 + 319);
        }
        v45 = *(MONITOR_MGR **)(v44 + 96);
        if ( v45 )
        {
          v74 = 0LL;
          MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v45, v36, 1u, &v74);
          LODWORD(v32) = MonitorInstance;
          if ( MonitorInstance == -1073741275 )
          {
            v52 = WdLogNewEntry5_WdDmmEvent();
            *(_QWORD *)(v52 + 24) = v36;
            *(_QWORD *)(v52 + 32) = v10;
            WdLogEvent5_WdDmmEvent(v52);
            goto LABEL_35;
          }
          if ( MonitorInstance >= 0 )
          {
            v47 = v74;
            if ( !v74 || *((_DWORD *)v74 + 108) != 1 )
            {
              v63 = WdLogNewEntry5_WdAssertion(v35, v21);
              WdLogEvent5_WdAssertion(v63);
            }
            if ( !v47 )
            {
              v64 = WdLogNewEntry5_WdAssertion(v35, v21);
              WdLogEvent5_WdAssertion(v64);
            }
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)((char *)v47 + 296), 1u);
            IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v47);
            v49 = (struct _ERESOURCE *)((char *)v47 + 296);
            v50 = IsVirtualModeSuportDisabled;
            ExReleaseResourceLite(v49);
            KeLeaveCriticalRegion();
            LODWORD(v32) = 0;
LABEL_37:
            if ( v50 )
            {
              v33 = 1;
            }
            else
            {
              v33 = *(_BYTE *)(v40 + 234) == 0;
              v23 = *(_BYTE *)(v40 + 233) == 0;
            }
LABEL_39:
            if ( (int)v32 >= 0 )
            {
              *a7 = !v23;
              *a8 = !v33;
              goto LABEL_41;
            }
LABEL_54:
            v58 = (_QWORD *)WdLogNewEntry5_WdError(v35, v21, v22);
            v59 = v76;
            v58[3] = v10;
            v58[4] = *v59;
            v58[5] = (int)v32;
            WdLogEvent5_WdError(v58);
            goto LABEL_41;
          }
          if ( MonitorInstance == -1073741632 )
          {
LABEL_35:
            v50 = 0;
            LODWORD(v32) = 0;
          }
          else
          {
            v50 = v75;
          }
          if ( (int)v32 >= 0 )
            goto LABEL_37;
        }
        else
        {
          v61 = WdLogNewEntry5_WdError(0LL, v41, v43);
          *(_QWORD *)(v61 + 24) = v10;
          WdLogEvent5_WdError(v61);
          LODWORD(v32) = -1073741811;
        }
        v62 = WdLogNewEntry5_WdAssertion(v35, v21);
        *(_QWORD *)(v62 + 24) = (int)v32;
        WdLogEvent5_WdAssertion(v62);
        goto LABEL_39;
      }
      LODWORD(v74) = (_DWORD)v74 - 1;
    }
LABEL_51:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v24, NextTarget);
    if ( !NextTarget )
      goto LABEL_44;
  }
  v65 = WdLogNewEntry5_WdWarning(v30, v29, v31);
  *(_QWORD *)(v65 + 24) = v27;
  *(_QWORD *)(v65 + 32) = v32;
  WdLogEvent5_WdWarning(v65);
LABEL_41:
  ReferenceCounted::Release((ReferenceCounted *)(v24 + 8), (__int64)v21, v22);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v67 + 40));
LABEL_42:
  DMM::AutoBuffer<unsigned short>::~AutoBuffer<unsigned short>(&v68);
  return (unsigned int)v32;
}
