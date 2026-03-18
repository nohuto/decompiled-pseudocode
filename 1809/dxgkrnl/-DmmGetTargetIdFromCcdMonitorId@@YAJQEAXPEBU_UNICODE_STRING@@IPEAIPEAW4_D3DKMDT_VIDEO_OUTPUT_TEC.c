/*
 * XREFs of ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE4@Z @ 0x1C00BE898
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00BE2F0 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0003F5C (-Initialize@-$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ??1?$AutoBuffer@G@DMM@@UEAA@XZ @ 0x1C0003FD4 (--1-$AutoBuffer@G@DMM@@UEAA@XZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00040D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     MonitorGetCCDMonitorID @ 0x1C00C3268 (MonitorGetCCDMonitorID.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00E4434 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 */

__int64 __fastcall DmmGetTargetIdFromCcdMonitorId(
        DXGADAPTER *this,
        const struct _UNICODE_STRING *a2,
        BOOL a3,
        unsigned int *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        bool *a7,
        bool *a8)
{
  DXGADAPTER *v10; // rsi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v11; // rax
  bool *v12; // rdx
  bool *v13; // r8
  __int64 Length; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rbx
  bool v19; // r15
  _QWORD *v20; // rbx
  _QWORD *v21; // r14
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r14
  __int64 v23; // r12
  int CCDMonitorID; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdi
  bool v29; // r13
  unsigned int *v30; // rdx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v31; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v32; // rcx
  __int64 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // r12
  __int64 v36; // rcx
  __int64 v37; // rax
  MONITOR_MGR *v38; // rcx
  int MonitorInstance; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  struct DXGMONITOR *v43; // r14
  bool IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v45; // rcx
  bool v46; // r14
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  unsigned int *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // [rsp+20h] [rbp-40h] BYREF
  void **v64; // [rsp+28h] [rbp-38h] BYREF
  __int128 v65; // [rsp+30h] [rbp-30h]
  void **v66; // [rsp+40h] [rbp-20h]
  void *Source2; // [rsp+48h] [rbp-18h]
  __int64 v68; // [rsp+50h] [rbp-10h]
  int v69; // [rsp+58h] [rbp-8h]
  struct DXGMONITOR *v70; // [rsp+A8h] [rbp+48h] BYREF
  BOOL v71; // [rsp+B0h] [rbp+50h]
  unsigned int *v72; // [rsp+B8h] [rbp+58h]

  v72 = a4;
  v71 = a3;
  v10 = this;
  if ( !a2 || !a4 || (this = (DXGADAPTER *)a5) == 0LL || (v11 = a6) == 0LL || (v12 = a7) == 0LL || (v13 = a8) == 0LL )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v62[5] = a5;
    v62[6] = a6;
    v62[3] = a2;
    v62[4] = a4;
    WdLogEvent5_WdError(v62);
    return 3221225485LL;
  }
  *a4 = -1;
  Source2 = 0LL;
  v68 = 0LL;
  *(_DWORD *)this = -2;
  *v11 = D3DKMDT_VOT_UNINITIALIZED;
  *v12 = 0;
  Length = a2->Length;
  v64 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `SetElement'};
  *v13 = 0;
  v66 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `NonReferenceCounted'};
  v65 = 0LL;
  v69 = 3;
  DMM::AutoBuffer<unsigned short>::Initialize((__int64)&v64, Length + 2);
  if ( !Source2 )
  {
    v49 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v49 + 24) = ((unsigned __int64)a2->Length >> 1) + 2;
    *(_QWORD *)(v49 + 32) = v10;
    WdLogEvent5_WdError(v49);
    LODWORD(v28) = -1073741801;
    goto LABEL_39;
  }
  if ( !v10 )
  {
    v50 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v50 + 24) = 0LL;
LABEL_47:
    WdLogEvent5_WdError(v50);
    LODWORD(v28) = -1071775742;
    goto LABEL_39;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
  {
    v51 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v51);
  }
  v17 = *((_QWORD *)v10 + 315);
  if ( !v17 )
  {
    v50 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v50 + 24) = v10;
    goto LABEL_47;
  }
  v18 = *(_QWORD *)(v17 + 88);
  if ( !v18 )
  {
    v52 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v52 + 24) = v10;
    WdLogEvent5_WdError(v52);
    LODWORD(v28) = -1071774923;
    goto LABEL_39;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v63, v18);
  v19 = 1;
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v18 + 80) + 72LL), 1u);
  v20 = *(_QWORD **)(v18 + 80);
  LODWORD(v70) = 0;
  v21 = (_QWORD *)v20[3];
  if ( v21 == v20 + 3 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v21 - 1)) == 0LL )
  {
LABEL_51:
    LODWORD(v28) = -1073741275;
    goto LABEL_38;
  }
  while ( 1 )
  {
    if ( *((_DWORD *)NextTarget + 22) )
      goto LABEL_50;
    v23 = *((_QWORD *)NextTarget + 14);
    if ( !v23 )
      goto LABEL_50;
    CCDMonitorID = MonitorGetCCDMonitorID(*((_QWORD *)NextTarget + 14), (unsigned int)v68 >> 1, Source2);
    v28 = CCDMonitorID;
    if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
      goto LABEL_50;
    if ( CCDMonitorID < 0 )
      break;
    if ( RtlCompareMemory(a2->Buffer, Source2, a2->Length) == a2->Length )
    {
      if ( !(_DWORD)v70 )
      {
        v29 = 1;
        v30 = v72;
        v31 = a5;
        *v72 = *((_DWORD *)NextTarget + 6);
        *v31 = *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20);
        v32 = a6;
        *a6 = *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 21);
        v33 = *v30;
        if ( (_DWORD)v33 == -1 )
        {
          LODWORD(v28) = -1073741811;
          goto LABEL_36;
        }
        DXGADAPTER::IsCoreResourceSharedOwner(v10);
        v35 = *((_QWORD *)v10 + 315);
        if ( !v35 )
        {
          v53 = WdLogNewEntry5_WdError(v34);
          *(_QWORD *)(v53 + 24) = 8248LL;
          WdLogEvent5_WdError(v53);
          LODWORD(v28) = -1073741811;
          goto LABEL_53;
        }
        DXGADAPTER::IsCoreResourceSharedOwner(v10);
        v37 = *((_QWORD *)v10 + 315);
        if ( !v37 )
        {
          v56 = WdLogNewEntry5_WdAssertion(v36);
          WdLogEvent5_WdAssertion(v56);
          v37 = *((_QWORD *)v10 + 315);
        }
        v38 = *(MONITOR_MGR **)(v37 + 96);
        if ( v38 )
        {
          v70 = 0LL;
          MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v38, v33, 1u, &v70);
          LODWORD(v28) = MonitorInstance;
          if ( MonitorInstance == -1073741275 )
          {
            v48 = WdLogNewEntry5_WdDmmEvent(v32, v40, v41, v42);
            *(_QWORD *)(v48 + 24) = v33;
            *(_QWORD *)(v48 + 32) = v10;
            WdLogEvent5_WdDmmEvent(v48);
          }
          else
          {
            if ( MonitorInstance >= 0 )
            {
              v43 = v70;
              if ( !v70 || *((_DWORD *)v70 + 108) != 1 )
              {
                v59 = WdLogNewEntry5_WdAssertion(v32);
                WdLogEvent5_WdAssertion(v59);
              }
              if ( !v43 )
              {
                v60 = WdLogNewEntry5_WdAssertion(v32);
                WdLogEvent5_WdAssertion(v60);
              }
              KeEnterCriticalRegion();
              ExAcquireResourceSharedLite((PERESOURCE)((char *)v43 + 296), 1u);
              IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v43);
              v45 = (struct _ERESOURCE *)((char *)v43 + 296);
              v46 = IsVirtualModeSuportDisabled;
              ExReleaseResourceLite(v45);
              KeLeaveCriticalRegion();
              LODWORD(v28) = 0;
LABEL_34:
              if ( v46 )
              {
                v29 = 1;
              }
              else
              {
                v29 = *(_BYTE *)(v35 + 133) == 0;
                v19 = *(_BYTE *)(v35 + 132) == 0;
              }
LABEL_36:
              if ( (int)v28 >= 0 )
              {
                *a7 = !v19;
                *a8 = !v29;
                goto LABEL_38;
              }
LABEL_53:
              v54 = (_QWORD *)WdLogNewEntry5_WdError(v32);
              v55 = v72;
              v54[3] = v10;
              v54[4] = *v55;
              v54[5] = (int)v28;
              WdLogEvent5_WdError(v54);
              goto LABEL_38;
            }
            if ( MonitorInstance != -1073741632 )
            {
              v46 = v71;
              goto LABEL_42;
            }
          }
          v46 = 0;
          LODWORD(v28) = 0;
LABEL_42:
          if ( (int)v28 >= 0 )
            goto LABEL_34;
        }
        else
        {
          v57 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v57 + 24) = v10;
          WdLogEvent5_WdError(v57);
          LODWORD(v28) = -1073741811;
        }
        v58 = WdLogNewEntry5_WdAssertion(v32);
        *(_QWORD *)(v58 + 24) = (int)v28;
        WdLogEvent5_WdAssertion(v58);
        goto LABEL_36;
      }
      LODWORD(v70) = (_DWORD)v70 - 1;
    }
LABEL_50:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v20, NextTarget);
    if ( !NextTarget )
      goto LABEL_51;
  }
  v61 = WdLogNewEntry5_WdWarning(v26, v25, v27);
  *(_QWORD *)(v61 + 24) = v23;
  *(_QWORD *)(v61 + 32) = v28;
  WdLogEvent5_WdWarning(v61);
LABEL_38:
  ReferenceCounted::Release((ReferenceCounted *)(v20 + 8));
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v63 + 40));
LABEL_39:
  DMM::AutoBuffer<unsigned short>::~AutoBuffer<unsigned short>(&v64);
  return (unsigned int)v28;
}
