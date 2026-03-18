/*
 * XREFs of ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DD334
 * Callers:
 *     DxgkGetPathsModality @ 0x1C00D6780 (DxgkGetPathsModality.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C012CF08 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026E72C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002D34 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003868 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C00D08CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00D1FE0 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C00D2230 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C00D3CA4 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C00D3D78 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00D525C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D6BA8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00D7C54 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00D7C9C (-_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00D92B0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C00D9320 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00DA0B0 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00DA500 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DD8D0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1C00DEAF8 (--0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7BD0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C012CDAC (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C0147E28 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C014B7F0 (DxgkGetGlobalRawmodeFlag.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C02C3320 (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C02C3434 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrievePersisted(CCD_TOPOLOGY *this, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // r14
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  struct CCD_BTL *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r15
  struct _STRING *v21; // rax
  struct D3DKMT_GETPATHSMODALITY *v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 v27; // rdx
  bool v28; // zf
  __int64 v29; // rcx
  struct CCD_BTL *v30; // rax
  bool v31; // r8
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r15
  int TopologyClass; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdi
  int v42; // ecx
  int active; // eax
  __int64 v44; // rdx
  struct D3DKMT_HASH *v45; // rdi
  struct _STRING *ConnectedSetStr; // rax
  int StringHash; // eax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  _QWORD *v53; // rax
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __m128i v60; // xmm0
  unsigned __int16 v61; // ax
  unsigned int v62; // r13d
  _DWORD *v63; // rax
  _DWORD *v64; // rbx
  PCHAR Buffer; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v69; // r8
  _QWORD *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rdx
  BTL_TOPOLOGY_CONSTRUCTOR *v73; // rax
  int v74; // eax
  __int64 v75; // rdx
  char GlobalRawmodeFlag; // al
  unsigned int v77; // edx
  int v78; // eax
  _QWORD *v79; // rax
  _QWORD *v80; // rcx
  __int64 v81; // rax
  _QWORD *v82; // rax
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  unsigned __int16 v86; // [rsp+38h] [rbp-D0h]
  int v87; // [rsp+40h] [rbp-C8h] BYREF
  struct _STRING v88; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v89[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v90; // [rsp+78h] [rbp-90h]
  __int64 v91; // [rsp+80h] [rbp-88h]
  __int64 v92; // [rsp+88h] [rbp-80h]
  int v93; // [rsp+90h] [rbp-78h] BYREF
  __int64 v94; // [rsp+98h] [rbp-70h]
  __int64 v95; // [rsp+A0h] [rbp-68h]
  __int64 v96; // [rsp+A8h] [rbp-60h]
  __int16 v97; // [rsp+B0h] [rbp-58h]
  __int64 v98; // [rsp+B8h] [rbp-50h]
  __int64 v99; // [rsp+C0h] [rbp-48h]
  _BYTE v100[12]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int16 v101; // [rsp+E4h] [rbp-24h]
  _BYTE v102[64]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v103[112]; // [rsp+128h] [rbp+20h] BYREF
  char v104; // [rsp+1E0h] [rbp+D8h] BYREF

  v3 = a2;
  v104 = 0;
  v5 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v104, 0);
  v11 = v7;
  if ( v7 >= 0 )
  {
    LODWORD(v89[0]) = 0;
    memset(&v89[1], 0, 24);
    v91 = 0LL;
    v92 = 0LL;
    LOWORD(v90) = 0;
    v12 = CCD_BTL::Global(v9, v8);
    v13 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, _QWORD *))v12)(v12, v89);
    v11 = v13;
    if ( v13 < 0 )
      goto LABEL_71;
    if ( (v3 & 0x20) != 0 )
    {
      if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId(this) + 4) )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50, v52);
        v53[3] = this;
        v53[4] = *((_QWORD *)this + 8);
        v53[5] = *(int *)this;
        WdLogEvent5_WdError(v53);
        LODWORD(v11) = -1073741823;
        goto LABEL_22;
      }
      CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v100, this);
      if ( (v3 & 0x2000) != 0 )
      {
        ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(this);
        v93 = 0;
        v94 = 0LL;
        v95 = 0LL;
        v98 = 0LL;
        v99 = 0LL;
        v96 = 0LL;
        v97 = 0;
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v93, (__int64)ModalitySetId);
        LODWORD(v11) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
                         (CCD_RECENT_TOPOLOGY_RETRIEVER *)v100,
                         (const struct CCD_SET_STRING_ID *)v89,
                         (const struct CCD_SET_STRING_ID *)&v93,
                         v3 & 0xF,
                         (v3 & 0x1000) != 0);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v93);
      }
      else
      {
        LODWORD(v11) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
                         (CCD_RECENT_TOPOLOGY_RETRIEVER *)v100,
                         this,
                         v3 & 0xF,
                         (v3 & 0x1000) != 0);
      }
      if ( (_DWORD)v11 == -1073741275 )
      {
        v5 = 2;
        v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55, v57);
        v58[3] = this;
        v58[4] = *((_QWORD *)this + 8);
        v58[5] = v3;
        WdLogEvent5_WdWarning(v58);
      }
      else
      {
        if ( (int)v11 >= 0 )
        {
          v5 = 1;
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v103);
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v102);
LABEL_16:
          TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(this, (enum CCD_TOPOLOGY_CLASS *)&v87);
          v41 = TopologyClass;
          if ( TopologyClass < 0 )
          {
            v84 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38, v40);
            v84[3] = v41;
            v84[4] = this;
            v84[5] = *((_QWORD *)this + 8);
            WdLogEvent5_WdError(v84);
            v42 = 0;
          }
          else
          {
            v42 = v87;
          }
          *(_DWORD *)(*((_QWORD *)this + 8) + 32LL) = v42;
          active = CCD_TOPOLOGY::_FillPathsActiveFlags(this);
          if ( active < 0
            || (active = CCD_TOPOLOGY::FillPathsTargetFlags(this, v44), active < 0)
            || (active = CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency(this), active < 0) )
          {
            LODWORD(v11) = active;
            goto LABEL_22;
          }
          v45 = (struct D3DKMT_HASH *)*((_QWORD *)this + 8);
          ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v89);
          StringHash = CCD_SET_STRING_ID::_QueryStringHash(ConnectedSetStr, v45);
          v11 = StringHash;
          if ( StringHash >= 0 )
          {
LABEL_22:
            CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v89);
            goto LABEL_23;
          }
LABEL_71:
          v85 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
          v85[3] = v11;
          v85[4] = this;
          v85[5] = *((_QWORD *)this + 8);
          v85[6] = v3;
          WdLogEvent5_WdError(v85);
          goto LABEL_22;
        }
        v59 = (_QWORD *)WdLogNewEntry5_WdError(v56, v55, v57);
        v59[3] = (int)v11;
        v59[4] = this;
        v59[5] = *((_QWORD *)this + 8);
        v59[6] = v3;
        WdLogEvent5_WdError(v59);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v103);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v102);
      goto LABEL_22;
    }
    CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v100, this);
    v87 = v3 & 0xF;
    v17 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v100,
            (const struct CCD_SET_STRING_ID *)v89,
            0LL,
            v87,
            (v3 & 0x1000) != 0);
    v20 = v17;
    LODWORD(v11) = -1073741789;
    if ( v17 == -1073741789 )
    {
      if ( a3 )
        *a3 = v101;
      goto LABEL_30;
    }
    if ( v17 < 0 )
    {
      v60 = *(__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v89);
      v61 = _mm_cvtsi128_si32(v60);
      v88 = (struct _STRING)v60;
      v62 = v61 + 57;
      v86 = v61;
      v63 = operator new[](v62, 0x63644356u, PagedPool);
      v64 = v63;
      if ( v63 )
      {
        memset(v63, 0, v62);
        Buffer = v88.Buffer;
        v64[1] = v62;
        v64[10] = 0;
        *((_QWORD *)v64 + 4) = 0LL;
        *v64 = 9;
        *((_QWORD *)v64 + 1) = 0LL;
        *((_QWORD *)v64 + 2) = 0LL;
        *((_QWORD *)v64 + 3) = 0LL;
        v64[12] = v20;
        v64[13] = v3;
        memmove(v64 + 14, Buffer, v86);
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v67, v66);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v64, CurrentProcessSessionId, v69);
        operator delete[](v64);
      }
      else
      {
        v86 = 0;
        DxgkLogCodePointPacket(0x1Bu, v3, v20, 0, 0LL);
      }
      v5 = 2;
    }
    else
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v19, v18) + 976) )
      {
        v21 = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v89);
        v22 = (struct D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
        v88 = *v21;
        LogCddDatabaseAccessPacket(1, v20, v22, &v88, v3);
      }
      else
      {
        v86 = 0;
        DxgkLogCodePointPacket(9u, v3, v20, 0, 0LL);
      }
      v5 = 1;
    }
    if ( (int)v20 >= 0 )
      goto LABEL_10;
    if ( (v3 & 0x80u) == 0LL )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23);
      v70[3] = v20;
      v70[4] = this;
      v71 = *((_QWORD *)this + 8);
      v70[5] = v71;
      v70[6] = v3;
      CCD_BTL::Global(v71, v72);
      v73 = BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)&v93);
      v74 = BTL_TOPOLOGY_CONSTRUCTOR::operator()(v73);
      v20 = v74;
      if ( v74 == -1073741789 )
      {
        if ( a3 )
          *a3 = v86;
        CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        CCD_TOPOLOGY::FillPathsTargetFlags(this, v75);
LABEL_30:
        v5 = 0;
        goto LABEL_31;
      }
      if ( v74 < 0 )
        goto LABEL_59;
      if ( (v3 & 0x4000000) != 0 )
      {
        GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag();
        v77 = 0;
        if ( GlobalRawmodeFlag )
          v77 = 0x20000;
        v78 = CCD_TOPOLOGY::Functionalize(this, v77, 1);
        v20 = v78;
        if ( v78 < 0 )
        {
LABEL_59:
          v5 |= 8u;
          v79 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23, v25);
          v79[3] = v20;
          goto LABEL_63;
        }
      }
      v5 |= 4u;
    }
    if ( (int)v20 >= 0 )
    {
LABEL_10:
      v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23);
      v28 = v87 == 15;
      v26[3] = this;
      v29 = *((_QWORD *)this + 8);
      v26[4] = v29;
      v26[5] = v3;
      if ( !v28 )
      {
LABEL_15:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v103);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v102);
        goto LABEL_16;
      }
      v30 = CCD_BTL::Global(v29, v27);
      v32 = CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v30 + 104), this, v31, a3);
      v36 = v32;
      if ( v32 != -1073741789 )
      {
        if ( v32 == -1073741266 )
        {
          v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35);
          v82[3] = -1073741266LL;
          v82[4] = this;
          v82[5] = *((_QWORD *)this + 8);
          v82[6] = v3;
          WdLogEvent5_WdWarning(v82);
        }
        else if ( v32 < 0 )
        {
          v83 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33, v35);
          v83[3] = v36;
          v83[4] = this;
          v83[5] = *((_QWORD *)this + 8);
          v83[6] = v3;
          WdLogEvent5_WdError(v83);
        }
        goto LABEL_15;
      }
      v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35);
      if ( a3 )
        v81 = *a3;
      else
        v81 = 0LL;
      v80[3] = v81;
      v80[4] = -1073741789LL;
      v80[5] = this;
      v80[6] = *((_QWORD *)this + 8);
      v80[7] = v3;
      WdLogEvent5_WdWarning(v80);
LABEL_31:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v103);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v102);
      goto LABEL_22;
    }
    v79 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23, v25);
    v79[3] = (int)v20;
LABEL_63:
    v79[4] = this;
    v79[5] = *((_QWORD *)this + 8);
    v79[6] = v3;
    WdLogEvent5_WdError(v79);
    LODWORD(v11) = v20;
    goto LABEL_31;
  }
  v49 = WdLogNewEntry5_WdError(v9, v8, v10);
  *(_QWORD *)(v49 + 24) = v11;
  WdLogEvent5_WdError(v49);
LABEL_23:
  if ( v104 )
    DxgkReleaseSessionModeChangeLock();
  if ( v5 )
    DisplayScenarioJournalCCDRetrieval(v5);
  return (unsigned int)v11;
}
