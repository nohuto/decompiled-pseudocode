/*
 * XREFs of ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0130420
 * Callers:
 *     DxgkPersistPathsModality @ 0x1C0130350 (DxgkPersistPathsModality.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0130AB0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026EDBC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026FAC4 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002E40 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00CF96C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C00D25CC (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00D5354 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00D5AAC (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00D98F0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00DA6F0 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00DA7A0 (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DDF10 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00DDF64 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C01306C8 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C0130920 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C014AA08 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Persist(CCD_TOPOLOGY *this, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct CCD_BTL *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // edx
  __int64 v20; // rdx
  __int64 v21; // rcx
  DXGSESSIONMGR *v22; // r14
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct CCD_BTL *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // rbx
  struct CCD_BTL *v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v46; // rdx
  _QWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  struct CCD_BTL *v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  struct _STRING *ConnectedSetStr; // rax
  struct D3DKMT_GETPATHSMODALITY *v56; // r8
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  unsigned int v60; // edx
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  struct _STRING v67; // [rsp+30h] [rbp-50h] BYREF
  int v68; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v69[3]; // [rsp+48h] [rbp-38h] BYREF
  __int16 v70; // [rsp+60h] [rbp-20h]
  __int64 v71; // [rsp+68h] [rbp-18h]
  __int64 v72; // [rsp+70h] [rbp-10h]

  v3 = (unsigned int)a2;
  if ( g_bDMgrIsSetupRunning == 1 )
  {
    WdLogNewEntry5_WdTrace(this, a2);
    return 0LL;
  }
  else
  {
    if ( *((_WORD *)CCD_TOPOLOGY::GetModalitySetId(this) + 4) )
    {
      v68 = 0;
      memset(v69, 0, sizeof(v69));
      v71 = 0LL;
      v72 = 0LL;
      v70 = 0;
      v7 = CCD_BTL::Global(v5, v4);
      v8 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v7)(v7, &v68);
      v12 = v8;
      if ( v8 < 0 )
      {
        v58 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
        v58[3] = v12;
        v58[4] = this;
        v58[5] = *((_QWORD *)this + 8);
        WdLogEvent5_WdError(v58);
        v18 = 1;
        goto LABEL_10;
      }
      if ( CCD_SET_STRING_ID::IsSubsetOf(this, (const struct CCD_SET_STRING_ID *)&v68) )
      {
        if ( (v3 & 0x40000000) != 0 )
          goto LABEL_8;
        v16 = CCD_TOPOLOGY::VerifyConnectivityHash(this, (const struct CCD_SET_STRING_ID *)&v68);
        v12 = v16;
        if ( v16 != -1073741266 )
        {
          if ( v16 < 0 )
          {
            v62 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v17);
            v62[3] = v12;
            v62[4] = *((_QWORD *)this + 8);
            v62[5] = v3;
            WdLogEvent5_WdError(v62);
            v18 = 3;
            goto LABEL_10;
          }
LABEL_8:
          if ( (int)v3 < 0 )
          {
            v18 = 4;
LABEL_10:
            DxgkLogCodePointPacket(0x3Fu, v18, v3, v12, 0LL);
LABEL_11:
            CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v68);
            return (unsigned int)v12;
          }
          v22 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v14, v13) + 74);
          if ( v22 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v21, v20);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v22,
                                               CurrentProcessSessionId);
          }
          else
          {
            SessionDataForSpecifiedSession = 0LL;
          }
          if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18489) )
          {
            v42 = 9;
LABEL_26:
            DxgkLogCodePointPacket(0x3Fu, v42, v3, v12, 0LL);
            Global = DXGGLOBAL::GetGlobal(v44, v43);
            LOBYTE(v46) = 1;
            QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 139), v46);
            goto LABEL_11;
          }
          v25 = CCD_BTL::Global(v21, v20);
          if ( *((struct CCD_BTL **)v25 + 16) != (struct CCD_BTL *)((char *)v25 + 128) )
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26);
            v47[3] = v3;
            LODWORD(v3) = v3 | 1;
            v47[4] = this;
            v48 = *((_QWORD *)this + 8);
            v47[5] = v48;
            v50 = CCD_BTL::Global(v48, v49);
            CDS_JOURNAL::Purge((struct CCD_BTL *)((char *)v50 + 104));
          }
          if ( (v3 & 1) == 0 )
          {
            v28 = CCD_STORE::ForTopology(
                    this,
                    (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))anonymous_namespace_::_UpdateTimestampTopologySetCallback,
                    this,
                    0);
            v31 = v28;
            if ( v28 >= 0 )
            {
LABEL_20:
              if ( CCD_SET_STRING_ID::IsSubsetOf(this, (const struct CCD_SET_STRING_ID *)&v68) )
              {
                v34 = CCD_STORE::ForConnectedSet(
                        (const struct CCD_SET_STRING_ID *)&v68,
                        anonymous_namespace_::_UpdateConnectedSetCallback,
                        (__int64)this);
                v36 = v34;
                if ( v34 < 0 )
                {
                  v65 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32, v35);
                  v65[4] = v69;
                  v65[3] = v36;
                  v65[5] = this;
                  v65[6] = *((_QWORD *)this + 8);
                  WdLogEvent5_WdError(v65);
                  DxgkLogCodePointPacket(0x3Fu, 6u, v3, v36, 0LL);
                }
              }
              v37 = CCD_BTL::Global(v33, v32);
              v38 = CCD_TOPOLOGY::CopyInheritScope((struct CCD_BTL *)((char *)v37 + 8), this);
              v12 = v38;
              if ( v38 < 0 )
              {
                v66 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39, v41);
                v66[3] = v12;
                v66[4] = this;
                v66[5] = *((_QWORD *)this + 8);
                WdLogEvent5_WdError(v66);
                DxgkLogCodePointPacket(0x3Fu, 7u, v3, v12, 0LL);
                LODWORD(v12) = 0;
              }
              v42 = 8;
              goto LABEL_26;
            }
            v63 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v29);
            v63[3] = v31;
            v63[4] = this;
            v63[5] = *((_QWORD *)this + 8);
          }
          v51 = CCD_STORE::ForTopology(this, anonymous_namespace_::_SaveTopologySetCallback, this, 1);
          v12 = v51;
          if ( v51 < 0 )
          {
            v64 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52, v54);
            v64[3] = v12;
            v64[4] = this;
            v64[5] = *((_QWORD *)this + 8);
            WdLogEvent5_WdError(v64);
            v18 = 5;
            goto LABEL_10;
          }
          if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v53, v52) + 976) )
          {
            ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v68);
            v56 = (struct D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
            v67 = *ConnectedSetStr;
            LogCddDatabaseAccessPacket(0, v12, v56, &v67, 0);
          }
          goto LABEL_20;
        }
        v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v17);
        v61[3] = -1073741266LL;
        v61[4] = *((_QWORD *)this + 8);
        v61[5] = v3;
        WdLogEvent5_WdWarning(v61);
        v60 = 3;
      }
      else
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
        v59[3] = -1073741266LL;
        v59[4] = *((_QWORD *)this + 8);
        v59[5] = v3;
        WdLogEvent5_WdWarning(v59);
        v60 = 2;
      }
      DxgkLogCodePointPacket(0x3Fu, v60, v3, 0xC000022E, 0LL);
      LODWORD(v12) = -1073741266;
      goto LABEL_11;
    }
    v57 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4, v6);
    v57[3] = this;
    v57[4] = *((_QWORD *)this + 8);
    v57[5] = *(int *)this;
    WdLogEvent5_WdError(v57);
    DxgkLogCodePointPacket(0x3Fu, 0, v3, 0xC0000001, 0LL);
    return 3221225473LL;
  }
}
