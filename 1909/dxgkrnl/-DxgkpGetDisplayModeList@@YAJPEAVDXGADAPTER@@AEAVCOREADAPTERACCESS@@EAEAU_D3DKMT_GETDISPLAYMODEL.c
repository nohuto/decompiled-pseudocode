/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00C7B08
 * Callers:
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00C7920 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00C7B08 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00C806C (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkGetDisplayModeList @ 0x1C0151490 (DxgkGetDisplayModeList.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00037E8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00C7B08 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00C7D60 (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00D586C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00D7B40 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E90B4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C00EC548 (MonitorGetMonitorOrientationsFromTarget.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0170B68 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0182E30 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0183528 (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     _CombineModeList @ 0x1C02378D8 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C0277650 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkpGetDisplayModeList(
        struct DXGADAPTER *this,
        DXGADAPTER **a2,
        unsigned __int8 a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4,
        unsigned __int8 *a5)
{
  __int64 CachedModeList; // rbx
  unsigned __int8 *v6; // r14
  unsigned __int8 v8; // si
  DXGADAPTER **v9; // r15
  int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct SESSION_VIEW *SessionViewOwner; // rax
  SESSION_VIEW *v22; // r15
  int v23; // eax
  int v24; // eax
  int ModeList; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  void *v28; // r15
  bool v29; // zf
  int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // rax
  const struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  struct DISPLAY_SOURCE *NextDisplaySource; // r14
  struct DXGADAPTER *v35; // rsi
  unsigned int v36; // r11d
  int v37; // eax
  char v38; // al
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  int DisplayModeList; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  D3DKMT_DISPLAYMODE **p_pModeList; // r14
  UINT *p_ModeCount; // rsi
  int v51; // eax
  _QWORD *v52; // rax
  D3DKMT_DISPLAYMODE *v53; // rcx
  UINT v54; // edx
  __int64 v55; // rax
  UINT i; // edx
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  unsigned __int8 v62; // [rsp+50h] [rbp-B0h]
  _BYTE v63[15]; // [rsp+51h] [rbp-AFh] BYREF
  BOOL v64; // [rsp+60h] [rbp-A0h]
  int v65; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned __int8 *v66; // [rsp+68h] [rbp-98h]
  int v67; // [rsp+70h] [rbp-90h] BYREF
  DXGADAPTER **v68; // [rsp+78h] [rbp-88h]
  struct _D3DKMT_GETDISPLAYMODELIST v69; // [rsp+80h] [rbp-80h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v71[64]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v72[72]; // [rsp+E8h] [rbp-18h] BYREF

  v6 = a5;
  v66 = a5;
  v8 = a3;
  v62 = a3;
  v9 = a2;
  v68 = a2;
  while ( 1 )
  {
    v11 = 0;
    *(_QWORD *)&v63[7] = 0LL;
    LOBYTE(CachedModeList) = 0;
    *v6 = 0;
    v12 = 3968LL * a4->VidPnSourceId;
    v13 = *((_QWORD *)this + 319);
    v64 = CachedModeList;
    v67 = 0;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(
                this,
                *(unsigned int *)(v12 + *(_QWORD *)(v13 + 112) + 1068),
                &v65) >= 0 )
      v64 = v65 != 0;
    CachedModeList = (int)ADAPTER_DISPLAY::GetCachedModeList(*((ADAPTER_DISPLAY **)this + 319), a4);
    v15 = (unsigned int)CachedModeList + 0x80000000;
    if ( (int)v15 >= 0 && (_DWORD)CachedModeList != -1073741275 )
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v60[3] = a4->VidPnSourceId;
      v60[4] = this;
      v60[5] = CachedModeList;
      WdLogEvent5_WdDmmEvent(v60);
      return (unsigned int)CachedModeList;
    }
    if ( (_DWORD)CachedModeList == -1073741275 )
      break;
LABEL_6:
    if ( (_DWORD)CachedModeList != -1071775483 || v8 )
      return (unsigned int)CachedModeList;
    if ( *v6 )
    {
      v59 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v59 + 24) = 5512LL;
      WdLogEvent5_WdAssertion(v59);
    }
    v8 = 1;
    v62 = 1;
  }
  v17 = 3968LL * a4->VidPnSourceId;
  v18 = *((_QWORD *)this + 319);
  v63[0] = 0;
  if ( *(_DWORD *)(v17 + *(_QWORD *)(v18 + 112) + 1068) != -1
    && (int)DxgkQueryMonitorTypeLockHeld(this, 0LL, (__int64)v63, 0LL, 0LL, 0LL) < 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v32 + 24) = 5256LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v9[3]) )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v9);
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)this + 319), a4->VidPnSourceId);
  v22 = SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || !SESSION_VIEW::IsCrossAdapterView(SessionViewOwner) && !v8
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v22),
        PrimaryDisplaySource != (const struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)this + 319) + 112LL)
                                                              + 3968LL * a4->VidPnSourceId)) )
  {
LABEL_17:
    v23 = COREADAPTERACCESS::AcquireExclusive(v68, 1LL);
    CachedModeList = v23;
    if ( v23 < 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v47[3] = CachedModeList;
    }
    else
    {
      v24 = ADAPTER_DISPLAY::GetCachedModeList(*((ADAPTER_DISPLAY **)this + 319), a4);
      CachedModeList = v24;
      if ( v24 >= 0 )
        goto LABEL_49;
      if ( v24 == -1073741275 )
      {
        ModeList = ADAPTER_DISPLAY::CreateModeList(*((ADAPTER_DISPLAY **)this + 319), v8, a4);
        CachedModeList = ModeList;
        if ( ModeList >= 0 )
        {
          if ( !v11 )
          {
            v28 = *(void **)&v63[7];
LABEL_23:
            v29 = !v64;
            *v6 = 1;
            if ( !v29 )
            {
              for ( i = 0; i < a4->ModeCount; *((_DWORD *)&a4->pModeList[v57].Flags + 1) &= ~0x80u )
                v57 = i++;
            }
            v30 = ADAPTER_DISPLAY::SetCachedModeList(*((ADAPTER_DISPLAY **)this + 319), a4);
            v31 = v30;
            if ( v30 < 0 )
            {
              v58 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
              v58[3] = a4->VidPnSourceId;
              v58[4] = a4;
              v58[5] = v31;
              WdLogEvent5_WdDmmEvent(v58);
            }
            else
            {
              *v6 = 0;
            }
            LODWORD(CachedModeList) = 0;
            goto LABEL_27;
          }
          p_pModeList = &a4->pModeList;
          v28 = *(void **)&v63[7];
          p_ModeCount = &a4->ModeCount;
          v51 = CombineModeList((int)a4 + 16, (int)a4 + 8, v11, *(_DWORD *)&v63[7], 1);
          CachedModeList = v51;
          if ( v51 >= 0 )
          {
            v54 = 0;
            if ( *p_ModeCount )
            {
              do
              {
                v55 = v54++;
                *((_DWORD *)&(*p_pModeList)[v55].Flags + 1) &= ~0x80u;
              }
              while ( v54 < *p_ModeCount );
              v28 = *(void **)&v63[7];
            }
            v6 = v66;
            goto LABEL_23;
          }
          v52 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
          v52[3] = this;
          v52[4] = a4->VidPnSourceId;
          v52[5] = CachedModeList;
          WdLogEvent5_WdDmmEvent(v52);
          v53 = *p_pModeList;
          *p_ModeCount = 0;
          operator delete[](v53);
          *p_pModeList = 0LL;
          v6 = v66;
LABEL_27:
          if ( v28 )
            operator delete[](v28);
          v9 = v68;
          v8 = v62;
          goto LABEL_6;
        }
        if ( v8 && ModeList == -1071775483 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v27, v26);
          *(_QWORD *)(v48 + 24) = 5430LL;
          WdLogEvent5_WdAssertion(v48);
        }
        v47 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v47[3] = a4->VidPnSourceId;
        v47[4] = CachedModeList;
      }
      else
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v47[3] = a4->VidPnSourceId;
        v47[4] = this;
        v47[5] = CachedModeList;
      }
    }
    WdLogEvent5_WdDmmEvent(v47);
LABEL_49:
    v28 = *(void **)&v63[7];
    goto LABEL_27;
  }
  NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v22, PrimaryDisplaySource);
  if ( !NextDisplaySource )
  {
LABEL_53:
    v6 = v66;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v35 = *(struct DXGADAPTER **)(*((_QWORD *)NextDisplaySource + 1) + 16LL);
    v63[1] = 0;
    memset(&v69, 0, sizeof(v69));
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v70, v35, 0LL);
    v37 = COREADAPTERACCESS::AcquireExclusive(&v70, v36);
    CachedModeList = v37;
    if ( v37 < 0 )
      break;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(v35, *((unsigned int *)NextDisplaySource + 267), &v65) >= 0 )
    {
      v38 = v64;
      if ( v65 )
        v38 = 1;
      LOBYTE(v64) = v38;
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(v35, 0LL, (__int64)&v63[2], 0LL, 0LL, 0LL) < 0 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v40, v39);
      *(_QWORD *)(v41 + 24) = 5337LL;
      WdLogEvent5_WdAssertion(v41);
    }
    if ( v63[0] == v63[2] )
    {
      v69.VidPnSourceId = *((_DWORD *)NextDisplaySource + 4);
      DisplayModeList = DxgkpGetDisplayModeList(v35, (struct COREADAPTERACCESS *)&v70, v62, &v69, &v63[1]);
      CachedModeList = DisplayModeList;
      if ( DisplayModeList < 0 )
      {
        if ( DisplayModeList == -1071775483 )
        {
          v45 = WdLogNewEntry5_WdAssertion(v44, v43);
          *(_QWORD *)(v45 + 24) = 5355LL;
          WdLogEvent5_WdAssertion(v45);
        }
LABEL_48:
        v46 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v46[3] = v35;
        v46[4] = v69.VidPnSourceId;
        v46[5] = CachedModeList;
        WdLogEvent5_WdDmmEvent(v46);
        COREACCESS::~COREACCESS((COREACCESS *)v72);
        COREACCESS::~COREACCESS((COREACCESS *)v71);
        v6 = v66;
        goto LABEL_49;
      }
      CachedModeList = (int)CombineModeList((unsigned int)&v67, (unsigned int)&v63[7], v69.ModeCount, v69.pModeList, 1);
      if ( v63[1] )
        operator delete[](v69.pModeList);
      if ( (int)CachedModeList < 0 )
        goto LABEL_48;
    }
    NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v22, NextDisplaySource);
    COREACCESS::~COREACCESS((COREACCESS *)v72);
    COREACCESS::~COREACCESS((COREACCESS *)v71);
    if ( !NextDisplaySource )
    {
      v11 = v67;
      v8 = v62;
      goto LABEL_53;
    }
  }
  v61 = WdLogNewEntry5_WdDmmEvent();
  *(_QWORD *)(v61 + 24) = v35;
  *(_QWORD *)(v61 + 32) = CachedModeList;
  WdLogEvent5_WdDmmEvent(v61);
  COREACCESS::~COREACCESS((COREACCESS *)v72);
  COREACCESS::~COREACCESS((COREACCESS *)v71);
  return (unsigned int)CachedModeList;
}
