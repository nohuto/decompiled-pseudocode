/*
 * XREFs of ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00C8064
 * Callers:
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00B4EB4 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     DxgkGetPathsModality @ 0x1C00C8E30 (DxgkGetPathsModality.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0239F8C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C00AF410 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C00B5B8C (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1C00C7904 (--0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00C7E1C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00C86D8 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00C99D0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00C99F4 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00C9A3C (-_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C00CABAC (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00CBA90 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00CBE04 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00CC2C0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C00CC630 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C00CC6D8 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00CDA70 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C0134324 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C013AFA0 (DxgkGetGlobalRawmodeFlag.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C028AF34 (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C028B064 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrievePersisted(CCD_TOPOLOGY *this, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // r15
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  struct CCD_BTL *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r14
  struct _STRING *v16; // rax
  struct D3DKMT_GETPATHSMODALITY *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  bool v23; // zf
  struct CCD_BTL *v24; // rax
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r14
  int TopologyClass; // eax
  __int64 v32; // rcx
  __int64 v33; // rdi
  unsigned int v34; // ecx
  int active; // eax
  struct D3DKMT_HASH *v36; // rdi
  struct _STRING *ConnectedSetStr; // rax
  int StringHash; // eax
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  __m128i v48; // xmm0
  unsigned __int16 v49; // ax
  unsigned int v50; // r13d
  _DWORD *v51; // rax
  _DWORD *v52; // rbx
  PCHAR Buffer; // rdx
  _QWORD *v54; // rax
  BTL_TOPOLOGY_CONSTRUCTOR *v55; // rax
  int v56; // eax
  char GlobalRawmodeFlag; // al
  unsigned __int8 v58; // r8
  unsigned int v59; // edx
  int v60; // eax
  _QWORD *v61; // rax
  _QWORD *v62; // rcx
  __int64 v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  unsigned __int16 v68; // [rsp+38h] [rbp-D0h]
  unsigned int v69; // [rsp+40h] [rbp-C8h] BYREF
  struct _STRING v70; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v71[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v72; // [rsp+78h] [rbp-90h]
  __int64 v73; // [rsp+80h] [rbp-88h]
  __int64 v74; // [rsp+88h] [rbp-80h]
  int v75; // [rsp+90h] [rbp-78h] BYREF
  __int64 v76; // [rsp+98h] [rbp-70h]
  __int64 v77; // [rsp+A0h] [rbp-68h]
  __int64 v78; // [rsp+A8h] [rbp-60h]
  __int16 v79; // [rsp+B0h] [rbp-58h]
  __int64 v80; // [rsp+B8h] [rbp-50h]
  __int64 v81; // [rsp+C0h] [rbp-48h]
  _BYTE v82[12]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int16 v83; // [rsp+E4h] [rbp-24h]
  _BYTE v84[64]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v85[112]; // [rsp+128h] [rbp+20h] BYREF
  char v86; // [rsp+1E0h] [rbp+D8h] BYREF

  v3 = a2;
  v86 = 0;
  v5 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v86, 0);
  v9 = v7;
  if ( v7 >= 0 )
  {
    LODWORD(v71[0]) = 0;
    memset(&v71[1], 0, 24);
    v73 = 0LL;
    v74 = 0LL;
    LOWORD(v72) = 0;
    v10 = CCD_BTL::Global();
    v11 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, _QWORD *))v10)(v10, v71);
    v9 = v11;
    if ( v11 < 0 )
      goto LABEL_71;
    if ( (v3 & 0x20) != 0 )
    {
      if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId(this) + 4) )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v41);
        v42[3] = this;
        v42[4] = *((_QWORD *)this + 8);
        v42[5] = *(int *)this;
        WdLogEvent5_WdError(v42);
        LODWORD(v9) = -1073741823;
        goto LABEL_22;
      }
      CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v82, this);
      if ( (v3 & 0x2000) != 0 )
      {
        CCD_TOPOLOGY::GetModalitySetId(this);
        v75 = 0;
        v76 = 0LL;
        v77 = 0LL;
        v80 = 0LL;
        v81 = 0LL;
        v78 = 0LL;
        v79 = 0;
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v75);
        LODWORD(v9) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
                        (CCD_RECENT_TOPOLOGY_RETRIEVER *)v82,
                        (const struct CCD_SET_STRING_ID *)v71,
                        (const struct CCD_SET_STRING_ID *)&v75,
                        v3 & 0xF,
                        (v3 & 0x1000) != 0);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v75);
      }
      else
      {
        LODWORD(v9) = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
                        (CCD_RECENT_TOPOLOGY_RETRIEVER *)v82,
                        this,
                        v3 & 0xF,
                        (v3 & 0x1000) != 0);
      }
      if ( (_DWORD)v9 == -1073741275 )
      {
        v5 = 2;
        v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45);
        v46[3] = this;
        v46[4] = *((_QWORD *)this + 8);
        v46[5] = v3;
        WdLogEvent5_WdWarning(v46);
      }
      else
      {
        if ( (int)v9 >= 0 )
        {
          v5 = 1;
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v85);
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v84);
LABEL_16:
          TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(this, (enum CCD_TOPOLOGY_CLASS *)&v69);
          v33 = TopologyClass;
          if ( TopologyClass < 0 )
          {
            v66 = (_QWORD *)WdLogNewEntry5_WdError(v32);
            v66[3] = v33;
            v66[4] = this;
            v66[5] = *((_QWORD *)this + 8);
            WdLogEvent5_WdError(v66);
            v34 = 0;
          }
          else
          {
            v34 = v69;
          }
          *(_DWORD *)(*((_QWORD *)this + 8) + 32LL) = v34;
          active = CCD_TOPOLOGY::_FillPathsActiveFlags(this);
          if ( active < 0
            || (active = CCD_TOPOLOGY::FillPathsTargetFlags(this), active < 0)
            || (active = CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency(this), active < 0) )
          {
            LODWORD(v9) = active;
            goto LABEL_22;
          }
          v36 = (struct D3DKMT_HASH *)*((_QWORD *)this + 8);
          ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v71);
          StringHash = CCD_SET_STRING_ID::_QueryStringHash(ConnectedSetStr, v36);
          v9 = StringHash;
          if ( StringHash >= 0 )
          {
LABEL_22:
            CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v71);
            goto LABEL_23;
          }
LABEL_71:
          v67 = (_QWORD *)WdLogNewEntry5_WdError(v12);
          v67[3] = v9;
          v67[4] = this;
          v67[5] = *((_QWORD *)this + 8);
          v67[6] = v3;
          WdLogEvent5_WdError(v67);
          goto LABEL_22;
        }
        v47 = (_QWORD *)WdLogNewEntry5_WdError(v44);
        v47[3] = (int)v9;
        v47[4] = this;
        v47[5] = *((_QWORD *)this + 8);
        v47[6] = v3;
        WdLogEvent5_WdError(v47);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v85);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v84);
      goto LABEL_22;
    }
    CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v82, this);
    v69 = v3 & 0xF;
    v13 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v82,
            (const struct CCD_SET_STRING_ID *)v71,
            0LL,
            v69,
            (v3 & 0x1000) != 0);
    v15 = v13;
    LODWORD(v9) = -1073741789;
    if ( v13 == -1073741789 )
    {
      if ( a3 )
        *a3 = v83;
      goto LABEL_30;
    }
    if ( v13 < 0 )
    {
      v48 = *(__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v71);
      v49 = _mm_cvtsi128_si32(v48);
      v70 = (struct _STRING)v48;
      v50 = v49 + 57;
      v68 = v49;
      v51 = operator new(v50, 0x63644356u, PagedPool);
      v52 = v51;
      if ( v51 )
      {
        memset(v51, 0, v50);
        Buffer = v70.Buffer;
        v52[1] = v50;
        v52[10] = 0;
        *((_QWORD *)v52 + 4) = 0LL;
        *v52 = 9;
        *((_QWORD *)v52 + 1) = 0LL;
        *((_QWORD *)v52 + 2) = 0LL;
        *((_QWORD *)v52 + 3) = 0LL;
        v52[12] = v15;
        v52[13] = v3;
        memmove(v52 + 14, Buffer, v68);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v52);
        operator delete[](v52);
      }
      else
      {
        v68 = 0;
        DxgkLogCodePointPacket(0x1Bu, v3, v15, 0, 0LL);
      }
      v5 = 2;
    }
    else
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v14) + 1008) )
      {
        v16 = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v71);
        v17 = (struct D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
        v70 = *v16;
        LogCddDatabaseAccessPacket(1, v15, v17, &v70, v3);
      }
      else
      {
        v68 = 0;
        DxgkLogCodePointPacket(9u, v3, v15, 0, 0LL);
      }
      v5 = 1;
    }
    if ( (int)v15 >= 0 )
      goto LABEL_10;
    if ( (v3 & 0x80u) == 0LL )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
      v54[3] = v15;
      v54[4] = this;
      v54[5] = *((_QWORD *)this + 8);
      v54[6] = v3;
      CCD_BTL::Global();
      v55 = BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)&v75);
      v56 = BTL_TOPOLOGY_CONSTRUCTOR::operator()(v55);
      v15 = v56;
      if ( v56 == -1073741789 )
      {
        if ( a3 )
          *a3 = v68;
        CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        CCD_TOPOLOGY::FillPathsTargetFlags(this);
LABEL_30:
        v5 = 0;
        goto LABEL_31;
      }
      if ( v56 < 0 )
        goto LABEL_59;
      if ( (v3 & 0x4000000) != 0 )
      {
        GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag();
        v59 = 0;
        if ( GlobalRawmodeFlag )
          v59 = 0x20000;
        v60 = CCD_TOPOLOGY::Functionalize(this, v59, v58);
        v15 = v60;
        if ( v60 < 0 )
        {
LABEL_59:
          v5 |= 8u;
          v61 = (_QWORD *)WdLogNewEntry5_WdError(v19);
          v61[3] = v15;
          goto LABEL_63;
        }
      }
      v5 |= 4u;
    }
    if ( (int)v15 >= 0 )
    {
LABEL_10:
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
      v23 = v69 == 15;
      v22[3] = this;
      v22[4] = *((_QWORD *)this + 8);
      v22[5] = v3;
      if ( !v23 )
      {
LABEL_15:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v85);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v84);
        goto LABEL_16;
      }
      v24 = CCD_BTL::Global();
      v26 = CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v24 + 104), this, v25, a3);
      v30 = v26;
      if ( v26 != -1073741789 )
      {
        if ( v26 == -1073741266 )
        {
          v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
          v64[3] = -1073741266LL;
          v64[4] = this;
          v64[5] = *((_QWORD *)this + 8);
          v64[6] = v3;
          WdLogEvent5_WdWarning(v64);
        }
        else if ( v26 < 0 )
        {
          v65 = (_QWORD *)WdLogNewEntry5_WdError(v28);
          v65[3] = v30;
          v65[4] = this;
          v65[5] = *((_QWORD *)this + 8);
          v65[6] = v3;
          WdLogEvent5_WdError(v65);
        }
        goto LABEL_15;
      }
      v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
      if ( a3 )
        v63 = *a3;
      else
        v63 = 0LL;
      v62[3] = v63;
      v62[4] = -1073741789LL;
      v62[5] = this;
      v62[6] = *((_QWORD *)this + 8);
      v62[7] = v3;
      WdLogEvent5_WdWarning(v62);
LABEL_31:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v85);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v84);
      goto LABEL_22;
    }
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v61[3] = (int)v15;
LABEL_63:
    v61[4] = this;
    v61[5] = *((_QWORD *)this + 8);
    v61[6] = v3;
    WdLogEvent5_WdError(v61);
    LODWORD(v9) = v15;
    goto LABEL_31;
  }
  v40 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v40 + 24) = v9;
  WdLogEvent5_WdError(v40);
LABEL_23:
  if ( v86 )
    DxgkReleaseSessionModeChangeLock();
  if ( v5 )
    DisplayScenarioJournalCCDRetrieval(v5);
  return (unsigned int)v9;
}
