/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00C6D88
 * Callers:
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00C6BA0 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00C6D88 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00C72EC (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkGetDisplayModeList @ 0x1C014D5D0 (DxgkGetDisplayModeList.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00036DC (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CE40 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00C6D88 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00C6FE0 (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00D501C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00D72F0 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C00E8160 (MonitorGetMonitorOrientationsFromTarget.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00EAC24 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C016CD78 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C017F040 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C017F738 (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     _CombineModeList @ 0x1C0237268 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C0276EF0 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
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
  __int64 v37; // r8
  int v38; // eax
  char v39; // al
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  int DisplayModeList; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  D3DKMT_DISPLAYMODE **p_pModeList; // r14
  UINT *p_ModeCount; // rsi
  int v52; // eax
  _QWORD *v53; // rax
  D3DKMT_DISPLAYMODE *v54; // rcx
  UINT v55; // edx
  __int64 v56; // rax
  UINT i; // edx
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  unsigned __int8 v63; // [rsp+50h] [rbp-B0h]
  _BYTE v64[15]; // [rsp+51h] [rbp-AFh] BYREF
  BOOL v65; // [rsp+60h] [rbp-A0h]
  int v66; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned __int8 *v67; // [rsp+68h] [rbp-98h]
  int v68; // [rsp+70h] [rbp-90h] BYREF
  DXGADAPTER **v69; // [rsp+78h] [rbp-88h]
  struct _D3DKMT_GETDISPLAYMODELIST v70; // [rsp+80h] [rbp-80h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v72[64]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v73[72]; // [rsp+E8h] [rbp-18h] BYREF

  v6 = a5;
  v67 = a5;
  v8 = a3;
  v63 = a3;
  v9 = a2;
  v69 = a2;
  while ( 1 )
  {
    v11 = 0;
    *(_QWORD *)&v64[7] = 0LL;
    LOBYTE(CachedModeList) = 0;
    *v6 = 0;
    v12 = 3968LL * a4->VidPnSourceId;
    v13 = *((_QWORD *)this + 319);
    v65 = CachedModeList;
    v68 = 0;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(
                this,
                *(unsigned int *)(v12 + *(_QWORD *)(v13 + 112) + 1068),
                &v66) >= 0 )
      v65 = v66 != 0;
    CachedModeList = (int)ADAPTER_DISPLAY::GetCachedModeList(*((ADAPTER_DISPLAY **)this + 319), a4);
    v15 = (unsigned int)CachedModeList + 0x80000000;
    if ( (int)v15 >= 0 && (_DWORD)CachedModeList != -1073741275 )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v61[3] = a4->VidPnSourceId;
      v61[4] = this;
      v61[5] = CachedModeList;
      WdLogEvent5_WdDmmEvent(v61);
      return (unsigned int)CachedModeList;
    }
    if ( (_DWORD)CachedModeList == -1073741275 )
      break;
LABEL_6:
    if ( (_DWORD)CachedModeList != -1071775483 || v8 )
      return (unsigned int)CachedModeList;
    if ( *v6 )
    {
      v60 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v60 + 24) = 5512LL;
      WdLogEvent5_WdAssertion(v60);
    }
    v8 = 1;
    v63 = 1;
  }
  v17 = 3968LL * a4->VidPnSourceId;
  v18 = *((_QWORD *)this + 319);
  v64[0] = 0;
  if ( *(_DWORD *)(v17 + *(_QWORD *)(v18 + 112) + 1068) != -1
    && (int)DxgkQueryMonitorTypeLockHeld(this, 0LL, (__int64)v64, 0LL, 0LL, 0LL) < 0 )
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
    v23 = COREADAPTERACCESS::AcquireExclusive(v69, 1LL, 0LL);
    CachedModeList = v23;
    if ( v23 < 0 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v48[3] = CachedModeList;
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
            v28 = *(void **)&v64[7];
LABEL_23:
            v29 = !v65;
            *v6 = 1;
            if ( !v29 )
            {
              for ( i = 0; i < a4->ModeCount; *((_DWORD *)&a4->pModeList[v58].Flags + 1) &= ~0x80u )
                v58 = i++;
            }
            v30 = ADAPTER_DISPLAY::SetCachedModeList(*((ADAPTER_DISPLAY **)this + 319), a4);
            v31 = v30;
            if ( v30 < 0 )
            {
              v59 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
              v59[3] = a4->VidPnSourceId;
              v59[4] = a4;
              v59[5] = v31;
              WdLogEvent5_WdDmmEvent(v59);
            }
            else
            {
              *v6 = 0;
            }
            LODWORD(CachedModeList) = 0;
            goto LABEL_27;
          }
          p_pModeList = &a4->pModeList;
          v28 = *(void **)&v64[7];
          p_ModeCount = &a4->ModeCount;
          v52 = CombineModeList((int)a4 + 16, (int)a4 + 8, v11, *(_DWORD *)&v64[7], 1);
          CachedModeList = v52;
          if ( v52 >= 0 )
          {
            v55 = 0;
            if ( *p_ModeCount )
            {
              do
              {
                v56 = v55++;
                *((_DWORD *)&(*p_pModeList)[v56].Flags + 1) &= ~0x80u;
              }
              while ( v55 < *p_ModeCount );
              v28 = *(void **)&v64[7];
            }
            v6 = v67;
            goto LABEL_23;
          }
          v53 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
          v53[3] = this;
          v53[4] = a4->VidPnSourceId;
          v53[5] = CachedModeList;
          WdLogEvent5_WdDmmEvent(v53);
          v54 = *p_pModeList;
          *p_ModeCount = 0;
          operator delete[](v54);
          *p_pModeList = 0LL;
          v6 = v67;
LABEL_27:
          if ( v28 )
            operator delete[](v28);
          v9 = v69;
          v8 = v63;
          goto LABEL_6;
        }
        if ( v8 && ModeList == -1071775483 )
        {
          v49 = WdLogNewEntry5_WdAssertion(v27, v26);
          *(_QWORD *)(v49 + 24) = 5430LL;
          WdLogEvent5_WdAssertion(v49);
        }
        v48 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v48[3] = a4->VidPnSourceId;
        v48[4] = CachedModeList;
      }
      else
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v48[3] = a4->VidPnSourceId;
        v48[4] = this;
        v48[5] = CachedModeList;
      }
    }
    WdLogEvent5_WdDmmEvent(v48);
LABEL_49:
    v28 = *(void **)&v64[7];
    goto LABEL_27;
  }
  NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v22, PrimaryDisplaySource);
  if ( !NextDisplaySource )
  {
LABEL_53:
    v6 = v67;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v35 = *(struct DXGADAPTER **)(*((_QWORD *)NextDisplaySource + 1) + 16LL);
    v64[1] = 0;
    memset(&v70, 0, sizeof(v70));
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v71, v35, 0LL);
    v38 = COREADAPTERACCESS::AcquireExclusive(&v71, v36, v37);
    CachedModeList = v38;
    if ( v38 < 0 )
      break;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(v35, *((unsigned int *)NextDisplaySource + 267), &v66) >= 0 )
    {
      v39 = v65;
      if ( v66 )
        v39 = 1;
      LOBYTE(v65) = v39;
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(v35, 0LL, (__int64)&v64[2], 0LL, 0LL, 0LL) < 0 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v41, v40);
      *(_QWORD *)(v42 + 24) = 5337LL;
      WdLogEvent5_WdAssertion(v42);
    }
    if ( v64[0] == v64[2] )
    {
      v70.VidPnSourceId = *((_DWORD *)NextDisplaySource + 4);
      DisplayModeList = DxgkpGetDisplayModeList(v35, (struct COREADAPTERACCESS *)&v71, v63, &v70, &v64[1]);
      CachedModeList = DisplayModeList;
      if ( DisplayModeList < 0 )
      {
        if ( DisplayModeList == -1071775483 )
        {
          v46 = WdLogNewEntry5_WdAssertion(v45, v44);
          *(_QWORD *)(v46 + 24) = 5355LL;
          WdLogEvent5_WdAssertion(v46);
        }
LABEL_48:
        v47 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v47[3] = v35;
        v47[4] = v70.VidPnSourceId;
        v47[5] = CachedModeList;
        WdLogEvent5_WdDmmEvent(v47);
        COREACCESS::~COREACCESS((COREACCESS *)v73);
        COREACCESS::~COREACCESS((COREACCESS *)v72);
        v6 = v67;
        goto LABEL_49;
      }
      CachedModeList = (int)CombineModeList((unsigned int)&v68, (unsigned int)&v64[7], v70.ModeCount, v70.pModeList, 1);
      if ( v64[1] )
        operator delete[](v70.pModeList);
      if ( (int)CachedModeList < 0 )
        goto LABEL_48;
    }
    NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v22, NextDisplaySource);
    COREACCESS::~COREACCESS((COREACCESS *)v73);
    COREACCESS::~COREACCESS((COREACCESS *)v72);
    if ( !NextDisplaySource )
    {
      v11 = v68;
      v8 = v63;
      goto LABEL_53;
    }
  }
  v62 = WdLogNewEntry5_WdDmmEvent();
  *(_QWORD *)(v62 + 24) = v35;
  *(_QWORD *)(v62 + 32) = CachedModeList;
  WdLogEvent5_WdDmmEvent(v62);
  COREACCESS::~COREACCESS((COREACCESS *)v73);
  COREACCESS::~COREACCESS((COREACCESS *)v72);
  return (unsigned int)CachedModeList;
}
