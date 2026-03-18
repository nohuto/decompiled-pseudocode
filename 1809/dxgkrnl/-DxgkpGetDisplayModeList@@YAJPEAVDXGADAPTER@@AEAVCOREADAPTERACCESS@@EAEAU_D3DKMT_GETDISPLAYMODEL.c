/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C0121CCC
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00B1BB0 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0121B30 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C0121CCC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     DxgkGetDisplayModeList @ 0x1C013D490 (DxgkGetDisplayModeList.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00BF2F4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C00E4A4C (MonitorGetMonitorOrientationsFromTarget.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00ED068 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00ED084 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0120954 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C0121CCC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0121EF4 (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01221E8 (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01222F0 (DxgkQueryMonitorTypeLockHeld.c)
 *     _CombineModeList @ 0x1C02058E0 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C0241AA4 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkpGetDisplayModeList(
        struct DXGADAPTER *this,
        DXGADAPTER **a2,
        unsigned __int8 a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4,
        unsigned __int8 *a5)
{
  __int64 v5; // rbx
  unsigned __int8 *v6; // r14
  char v8; // si
  DXGADAPTER **v9; // r15
  int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rax
  int CachedModeList; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  int **SessionViewOwner; // rax
  SESSION_VIEW *v24; // r15
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int ModeList; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  void *v39; // r15
  bool v40; // zf
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rbx
  __int64 v46; // rax
  const struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  struct DISPLAY_SOURCE *NextDisplaySource; // r14
  unsigned __int8 v49; // r12
  struct DXGADAPTER *v50; // rsi
  unsigned int v51; // r11d
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  char v57; // al
  __int64 v58; // rcx
  __int64 v59; // rax
  int DisplayModeList; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  D3DKMT_DISPLAYMODE **p_pModeList; // r14
  UINT *p_ModeCount; // rsi
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  _QWORD *v76; // rax
  D3DKMT_DISPLAYMODE *v77; // rcx
  UINT v78; // edx
  __int64 v79; // rax
  UINT i; // edx
  __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rax
  __int64 v86; // [rsp+50h] [rbp-81h] BYREF
  void *v87; // [rsp+58h] [rbp-79h] BYREF
  BOOL v88; // [rsp+60h] [rbp-71h]
  unsigned int v89; // [rsp+64h] [rbp-6Dh] BYREF
  int v90; // [rsp+68h] [rbp-69h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST v91; // [rsp+70h] [rbp-61h] BYREF
  __int64 v92; // [rsp+90h] [rbp-41h] BYREF
  _BYTE v93[32]; // [rsp+98h] [rbp-39h] BYREF
  _BYTE v94[104]; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v95; // [rsp+130h] [rbp+5Fh] BYREF
  DXGADAPTER **v96; // [rsp+138h] [rbp+67h]
  unsigned __int8 v97; // [rsp+140h] [rbp+6Fh]
  unsigned __int8 v98; // [rsp+148h] [rbp+77h] BYREF

  v97 = a3;
  v96 = a2;
  v6 = a5;
  v8 = a3;
  v9 = a2;
  while ( 1 )
  {
    v11 = 0;
    v87 = 0LL;
    LOBYTE(v5) = 0;
    *v6 = 0;
    v12 = 3760LL * a4->VidPnSourceId;
    v13 = *((_QWORD *)this + 315);
    v88 = v5;
    v90 = 0;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(this, *(_DWORD *)(v12 + *(_QWORD *)(v13 + 112) + 1068), &v89) >= 0 )
      v88 = v89 != 0;
    CachedModeList = ADAPTER_DISPLAY::GetCachedModeList(*((ADAPTER_DISPLAY **)this + 315), a4);
    v5 = CachedModeList;
    v18 = CachedModeList + 0x80000000;
    if ( (int)v18 >= 0 && CachedModeList != -1073741275 )
    {
      v84 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v18, v15, v16, v17);
      v84[3] = a4->VidPnSourceId;
      v84[4] = this;
      v84[5] = v5;
      WdLogEvent5_WdDmmEvent(v84);
      return (unsigned int)v5;
    }
    if ( CachedModeList == -1073741275 )
      break;
LABEL_6:
    if ( (_DWORD)v5 != -1071775483 || v8 )
      return (unsigned int)v5;
    if ( *v6 )
    {
      v83 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v83 + 24) = 5035LL;
      WdLogEvent5_WdAssertion(v83);
    }
    v8 = 1;
    v97 = 1;
  }
  v20 = 3760LL * a4->VidPnSourceId;
  v21 = *((_QWORD *)this + 315);
  LOBYTE(v95) = 0;
  if ( *(_DWORD *)(v20 + *(_QWORD *)(v21 + 112) + 1068) != -1
    && (int)DxgkQueryMonitorTypeLockHeld(this, 0LL, (__int64)&v95, 0LL, 0LL, 0LL) < 0 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v22);
    *(_QWORD *)(v46 + 24) = 4779LL;
    WdLogEvent5_WdAssertion(v46);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v9[3]) )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v9);
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)this + 315), a4->VidPnSourceId);
  v24 = (SESSION_VIEW *)SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || !SESSION_VIEW::IsCrossAdapterView((SESSION_VIEW *)SessionViewOwner) && !v8
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v24),
        PrimaryDisplaySource != (const struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)this + 315) + 112LL)
                                                              + 3760LL * a4->VidPnSourceId)) )
  {
LABEL_17:
    v25 = COREADAPTERACCESS::AcquireExclusive(v96, 1LL);
    v5 = v25;
    if ( v25 < 0 )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v27, v26, v28, v29);
      v67[3] = v5;
    }
    else
    {
      v30 = ADAPTER_DISPLAY::GetCachedModeList(*((ADAPTER_DISPLAY **)this + 315), a4);
      v5 = v30;
      if ( v30 >= 0 )
        goto LABEL_50;
      if ( v30 == -1073741275 )
      {
        ModeList = ADAPTER_DISPLAY::CreateModeList(*((ADAPTER_DISPLAY **)this + 315), v8, a4);
        v5 = ModeList;
        if ( ModeList >= 0 )
        {
          if ( !v11 )
          {
            v39 = v87;
LABEL_23:
            v40 = !v88;
            *v6 = 1;
            if ( !v40 )
            {
              for ( i = 0; i < a4->ModeCount; *((_DWORD *)&a4->pModeList[v81].Flags + 1) &= ~0x80u )
                v81 = i++;
            }
            v41 = ADAPTER_DISPLAY::SetCachedModeList(*((ADAPTER_DISPLAY **)this + 315), a4);
            v45 = v41;
            if ( v41 < 0 )
            {
              v82 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v18, v42, v43, v44);
              v82[3] = a4->VidPnSourceId;
              v82[4] = a4;
              v82[5] = v45;
              WdLogEvent5_WdDmmEvent(v82);
            }
            else
            {
              *v6 = 0;
            }
            LODWORD(v5) = 0;
            goto LABEL_27;
          }
          p_pModeList = &a4->pModeList;
          v39 = v87;
          p_ModeCount = &a4->ModeCount;
          v71 = CombineModeList((int)a4 + 16, (int)a4 + 8, v11, (_DWORD)v87, 1);
          v5 = v71;
          if ( v71 >= 0 )
          {
            v78 = 0;
            if ( *p_ModeCount )
            {
              do
              {
                v79 = v78++;
                *((_DWORD *)&(*p_pModeList)[v79].Flags + 1) &= ~0x80u;
              }
              while ( v78 < *p_ModeCount );
              v39 = v87;
            }
            v6 = a5;
            goto LABEL_23;
          }
          v76 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v73, v72, v74, v75);
          v76[3] = this;
          v76[4] = a4->VidPnSourceId;
          v76[5] = v5;
          WdLogEvent5_WdDmmEvent(v76);
          v77 = *p_pModeList;
          *p_ModeCount = 0;
          operator delete[](v77);
          *p_pModeList = 0LL;
          v6 = a5;
LABEL_27:
          if ( v39 )
            operator delete[](v39);
          v9 = v96;
          v8 = v97;
          goto LABEL_6;
        }
        if ( v8 && ModeList == -1071775483 )
        {
          v68 = WdLogNewEntry5_WdAssertion(v36);
          *(_QWORD *)(v68 + 24) = 4953LL;
          WdLogEvent5_WdAssertion(v68);
        }
        v67 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v36, v35, v37, v38);
        v67[3] = a4->VidPnSourceId;
        v67[4] = v5;
      }
      else
      {
        v67 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v18, v31, v32, v33);
        v67[3] = a4->VidPnSourceId;
        v67[4] = this;
        v67[5] = v5;
      }
    }
    WdLogEvent5_WdDmmEvent(v67);
LABEL_50:
    v39 = v87;
    goto LABEL_27;
  }
  NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v24, PrimaryDisplaySource);
  if ( !NextDisplaySource )
  {
LABEL_54:
    v6 = a5;
    goto LABEL_17;
  }
  v49 = v97;
  while ( 1 )
  {
    v50 = *(struct DXGADAPTER **)(*((_QWORD *)NextDisplaySource + 1) + 16LL);
    v98 = 0;
    memset(&v91, 0, sizeof(v91));
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v92, v50, 0LL);
    v52 = COREADAPTERACCESS::AcquireExclusive(&v92, v51);
    v5 = v52;
    if ( v52 < 0 )
      break;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(v50, *((_DWORD *)NextDisplaySource + 267), &v89) >= 0 )
    {
      v57 = v88;
      if ( v89 )
        v57 = 1;
      LOBYTE(v88) = v57;
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(v50, 0LL, (__int64)&v86, 0LL, 0LL, 0LL) < 0 )
    {
      v59 = WdLogNewEntry5_WdAssertion(v58);
      *(_QWORD *)(v59 + 24) = 4860LL;
      WdLogEvent5_WdAssertion(v59);
    }
    if ( (_BYTE)v95 == (_BYTE)v86 )
    {
      v91.VidPnSourceId = *((_DWORD *)NextDisplaySource + 4);
      DisplayModeList = DxgkpGetDisplayModeList(v50, (struct COREADAPTERACCESS *)&v92, v49, &v91, &v98);
      v5 = DisplayModeList;
      if ( DisplayModeList < 0 )
      {
        if ( DisplayModeList == -1071775483 )
        {
          v65 = WdLogNewEntry5_WdAssertion(v62);
          *(_QWORD *)(v65 + 24) = 4878LL;
          WdLogEvent5_WdAssertion(v65);
        }
LABEL_49:
        v66 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v62, v61, v63, v64);
        v66[3] = v50;
        v66[4] = v91.VidPnSourceId;
        v66[5] = v5;
        WdLogEvent5_WdDmmEvent(v66);
        COREACCESS::~COREACCESS((COREACCESS *)v94);
        COREACCESS::~COREACCESS((COREACCESS *)v93);
        v6 = a5;
        goto LABEL_50;
      }
      v5 = (int)CombineModeList((unsigned int)&v90, (unsigned int)&v87, v91.ModeCount, v91.pModeList, 1);
      if ( v98 )
        operator delete[](v91.pModeList);
      if ( (int)v5 < 0 )
        goto LABEL_49;
    }
    NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v24, NextDisplaySource);
    COREACCESS::~COREACCESS((COREACCESS *)v94);
    COREACCESS::~COREACCESS((COREACCESS *)v93);
    if ( !NextDisplaySource )
    {
      v11 = v90;
      v8 = v97;
      goto LABEL_54;
    }
  }
  v85 = WdLogNewEntry5_WdDmmEvent(v54, v53, v55, v56);
  *(_QWORD *)(v85 + 24) = v50;
  *(_QWORD *)(v85 + 32) = v5;
  WdLogEvent5_WdDmmEvent(v85);
  COREACCESS::~COREACCESS((COREACCESS *)v94);
  COREACCESS::~COREACCESS((COREACCESS *)v93);
  return (unsigned int)v5;
}
