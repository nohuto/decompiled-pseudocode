/*
 * XREFs of ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00FC21C
 * Callers:
 *     ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00D8350 (-_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C02C7A74 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005D64 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0024A90 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C00452E0 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00FBB48 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1C01406C4 (-DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInformationForTargets(
        struct _FAST_MUTEX *this,
        int (__high *a2)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8),
        void *a3,
        int a4)
{
  char v4; // r15
  void *const *Owner; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  unsigned int v10; // r12d
  int IsTargetForceable; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rdx
  ULONG *p_Contention; // rcx
  MONITOR_MGR *v18; // rax
  MONITOR_MGR **v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // r14d
  __int64 v28; // rdi
  __int64 v29; // rdi
  DXGFASTMUTEX *v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 v35; // rcx
  __int64 v36; // r8
  int MonitorInstance; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  int v54; // [rsp+20h] [rbp-38h]
  int v55; // [rsp+28h] [rbp-30h]
  __int64 v56; // [rsp+40h] [rbp-18h] BYREF
  __int64 v57; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v58; // [rsp+A0h] [rbp+48h] BYREF
  struct DXGMONITOR *v59; // [rsp+A8h] [rbp+50h] BYREF
  void *v60; // [rsp+B0h] [rbp+58h]
  int v61; // [rsp+B8h] [rbp+60h] BYREF

  v61 = a4;
  v60 = a3;
  v4 = 0;
  if ( !a2 )
  {
    v42 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v42);
  }
  Owner = (void *const *)this->Owner;
  v58 = -1;
  LODWORD(v8) = DmmGetNextVideoPresentTarget(Owner[2], 0xFFFFFFFF, &v58);
  if ( (int)v8 >= 0 )
  {
    while ( 1 )
    {
      v9 = this->Owner;
      v10 = 0;
      LOBYTE(v61) = 0;
      IsTargetForceable = DmmIsTargetForceable(v9[2], v58, (unsigned __int8 *)&v61, 0);
      v8 = IsTargetForceable;
      if ( IsTargetForceable < 0 )
        break;
      v15 = v58;
      if ( v58 == -1 )
      {
        v43 = WdLogNewEntry5_WdAssertion(v13, v12);
        WdLogEvent5_WdAssertion(v43);
      }
      if ( this == (struct _FAST_MUTEX *)-168LL )
      {
        v44 = WdLogNewEntry5_WdAssertion(v13, v12);
        WdLogEvent5_WdAssertion(v44);
      }
      KeAcquireGuardedMutex(this + 3);
      p_Contention = &this[2].Contention;
      v18 = *(MONITOR_MGR **)&this[2].Contention;
      if ( v18 != (MONITOR_MGR *)&this[2].Contention )
      {
        v16 = 0LL;
        do
        {
          v19 = (MONITOR_MGR **)((char *)v18 - 16);
          if ( !v18 )
            v19 = 0LL;
          if ( !v19 )
            break;
          if ( *((_DWORD *)v19 + 11) == (_DWORD)v15 )
          {
            v59 = (struct DXGMONITOR *)v19;
            if ( this == (struct _FAST_MUTEX *)-168LL )
            {
              v45 = WdLogNewEntry5_WdAssertion(p_Contention, 0LL);
              WdLogEvent5_WdAssertion(v45);
            }
            KeReleaseGuardedMutex(this + 3);
            v10 = *((_DWORD *)v19 + 108);
            MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v58, 1, &v59);
            LODWORD(v8) = MonitorInstance;
            if ( MonitorInstance >= 0 )
            {
              v4 = 1;
              goto LABEL_19;
            }
            if ( MonitorInstance != -1073741275 )
            {
              v46 = WdLogNewEntry5_WdError(v39, v38, v40);
              *(_QWORD *)(v46 + 24) = v58;
              *(_QWORD *)(v46 + 32) = this;
              WdLogEvent5_WdError(v46);
              return (unsigned int)v8;
            }
            goto LABEL_19;
          }
          v18 = v19[2];
        }
        while ( v18 != (MONITOR_MGR *)p_Contention );
      }
      v20 = WdLogNewEntry5_WdTrace(p_Contention, v16);
      *(_QWORD *)(v20 + 24) = v15;
      *(_QWORD *)(v20 + 32) = this;
      if ( this == (struct _FAST_MUTEX *)-168LL )
      {
        v47 = WdLogNewEntry5_WdAssertion(v22, v21);
        WdLogEvent5_WdAssertion(v47);
      }
      KeReleaseGuardedMutex(this + 3);
LABEL_19:
      LOBYTE(v55) = v4;
      LOBYTE(v54) = v61;
      v23 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, _QWORD, int, int))a2)(
              *((_QWORD *)this->Owner + 2),
              v60,
              v58,
              v10,
              v54,
              v55);
      v27 = v58;
      LODWORD(v8) = v23;
      if ( v58 == -1 )
        return (unsigned int)v8;
      v4 = 0;
      if ( v23 < 0 )
        return (unsigned int)v8;
      v8 = *((_QWORD *)this->Owner + 2);
      v58 = -1;
      if ( !v8 )
      {
        v52 = WdLogNewEntry5_WdError(v25, v24, v26);
        *(_QWORD *)(v52 + 24) = 0LL;
        goto LABEL_50;
      }
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v8 + 160)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v8 + 144)) )
      {
        v48 = WdLogNewEntry5_WdAssertion(v25, v24);
        WdLogEvent5_WdAssertion(v48);
      }
      v28 = *(_QWORD *)(v8 + 2552);
      if ( !v28 )
      {
        v52 = WdLogNewEntry5_WdError(v25, v24, v26);
        *(_QWORD *)(v52 + 24) = v8;
LABEL_50:
        WdLogEvent5_WdError(v52);
        LODWORD(v8) = -1071775742;
        return (unsigned int)v8;
      }
      v29 = *(_QWORD *)(v28 + 88);
      if ( !v29 )
      {
        v51 = WdLogNewEntry5_WdError(v25, v24, v26);
        *(_QWORD *)(v51 + 24) = v8;
        WdLogEvent5_WdError(v51);
        LODWORD(v8) = -1071774923;
        return (unsigned int)v8;
      }
      v30 = *(DXGFASTMUTEX **)(v29 + 40);
      v57 = v29;
      DXGFASTMUTEX::Acquire(v30);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v29 + 80) + 72LL));
      v31 = *(_QWORD *)(v29 + 80);
      v56 = v31;
      if ( v27 == -1 )
      {
        v32 = v31 + 24;
        v36 = 0LL;
        v49 = *(_QWORD *)(v31 + 24);
        if ( v49 != v31 + 24 )
          v36 = v49 - 8;
      }
      else
      {
        v34 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v31, v27);
        if ( !v34 )
        {
          v50 = WdLogNewEntry5_WdAssertion(v33, v32);
          WdLogEvent5_WdAssertion(v50);
        }
        v35 = *(_QWORD *)(v34 + 8);
        v36 = v35 - 8;
        if ( v35 == v31 + 24 )
          v36 = 0LL;
      }
      if ( !v36 )
      {
        auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v56, v32, 0LL);
        EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v57);
        LODWORD(v8) = -1073741275;
        return (unsigned int)v8;
      }
      v58 = *(_DWORD *)(v36 + 24);
      if ( v31 )
        ReferenceCounted::Release((ReferenceCounted *)(v31 + 64), v32, v36);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29 + 40));
    }
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v53[3] = v58;
    v53[4] = this;
    v53[5] = v8;
    WdLogEvent5_WdError(v53);
    if ( (_DWORD)v8 == -1073741275 )
      LODWORD(v8) = -1073741823;
  }
  return (unsigned int)v8;
}
