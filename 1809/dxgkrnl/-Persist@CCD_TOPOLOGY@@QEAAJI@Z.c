/*
 * XREFs of ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00C6574
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00B4CB0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     DxgkPersistPathsModality @ 0x1C0137910 (DxgkPersistPathsModality.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0239F8C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C023AC8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00C86D8 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00C99D0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00CB86C (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00CBA90 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00CC2C0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00CC56C (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00CC5FC (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00CDD14 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00CDDF4 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C0134324 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C013AF50 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Persist(struct D3DKMT_GETPATHSMODALITY **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  struct CCD_BTL *v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct CCD_BTL *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  bool v29; // r9
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rbx
  struct CCD_BTL *v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  struct CCD_BTL *v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  struct _STRING *ConnectedSetStr; // rax
  struct D3DKMT_GETPATHSMODALITY *v41; // r8
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  unsigned int v45; // edx
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  struct _STRING v52; // [rsp+30h] [rbp-50h] BYREF
  int v53; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v54[3]; // [rsp+48h] [rbp-38h] BYREF
  __int16 v55; // [rsp+60h] [rbp-20h]
  __int64 v56; // [rsp+68h] [rbp-18h]
  __int64 v57; // [rsp+70h] [rbp-10h]

  v5 = (unsigned int)a2;
  if ( g_bDMgrIsSetupRunning == 1 )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    return 0LL;
  }
  else
  {
    if ( *((_WORD *)CCD_TOPOLOGY::GetModalitySetId((CCD_TOPOLOGY *)this) + 4) )
    {
      v53 = 0;
      memset(v54, 0, sizeof(v54));
      v56 = 0LL;
      v57 = 0LL;
      v55 = 0;
      v7 = CCD_BTL::Global();
      v8 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v7)(v7, &v53);
      v10 = v8;
      if ( v8 < 0 )
      {
        v43 = (_QWORD *)WdLogNewEntry5_WdError(v9);
        v43[3] = v10;
        v43[4] = this;
        v43[5] = this[8];
        WdLogEvent5_WdError(v43);
        DxgkLogCodePointPacket(0x3Fu, 1u, v5, v10, 0LL);
        goto LABEL_10;
      }
      if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v53) )
      {
        if ( (v5 & 0x40000000) != 0 )
          goto LABEL_8;
        v14 = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)this, (const struct CCD_SET_STRING_ID *)&v53);
        v10 = v14;
        if ( v14 != -1073741266 )
        {
          if ( v14 < 0 )
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdError(v12);
            v47[3] = v10;
            v47[4] = this[8];
            v47[5] = v5;
            WdLogEvent5_WdError(v47);
            DxgkLogCodePointPacket(0x3Fu, 3u, v5, v10, 0LL);
            goto LABEL_10;
          }
LABEL_8:
          if ( (int)v5 < 0 )
          {
            DxgkLogCodePointPacket(0x3Fu, 4u, v5, v10, 0LL);
LABEL_10:
            CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v53);
            return (unsigned int)v10;
          }
          if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v12) + 20312) )
          {
            DxgkLogCodePointPacket(0x3Fu, 9u, v5, v10, 0LL);
            goto LABEL_10;
          }
          v18 = CCD_BTL::Global();
          if ( *((struct CCD_BTL **)v18 + 16) != (struct CCD_BTL *)((char *)v18 + 128) )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
            v36[3] = v5;
            LODWORD(v5) = v5 | 1;
            v36[4] = this;
            v36[5] = this[8];
            v37 = CCD_BTL::Global();
            CDS_JOURNAL::Purge((struct CCD_BTL *)((char *)v37 + 104));
          }
          if ( (v5 & 1) == 0 )
          {
            v23 = CCD_STORE::ForTopology(
                    (const struct CCD_SET_STRING_ID *)this,
                    anonymous_namespace_::_UpdateTimestampTopologySetCallback,
                    this,
                    0);
            v28 = v23;
            if ( v23 >= 0 )
              goto LABEL_16;
            v48 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
            v48[3] = v28;
            v48[4] = this;
            v48[5] = this[8];
          }
          v38 = CCD_STORE::ForTopology(
                  (const struct CCD_SET_STRING_ID *)this,
                  anonymous_namespace_::_SaveTopologySetCallback,
                  this,
                  1);
          v10 = v38;
          if ( v38 < 0 )
          {
            v49 = (_QWORD *)WdLogNewEntry5_WdError(v39);
            v49[3] = v10;
            v49[4] = this;
            v49[5] = this[8];
            WdLogEvent5_WdError(v49);
            DxgkLogCodePointPacket(0x3Fu, 5u, v5, v10, 0LL);
            goto LABEL_10;
          }
          if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v39) + 1008) )
          {
            ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v53);
            v41 = this[8];
            v52 = *ConnectedSetStr;
            LogCddDatabaseAccessPacket(0, v10, v41, &v52, 0);
          }
LABEL_16:
          if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v53) )
          {
            v30 = CCD_STORE::ForConnectedSet(
                    (const struct CCD_SET_STRING_ID *)&v53,
                    anonymous_namespace_::_UpdateConnectedSetCallback,
                    this,
                    v29);
            v32 = v30;
            if ( v30 < 0 )
            {
              v50 = (_QWORD *)WdLogNewEntry5_WdError(v31);
              v50[4] = v54;
              v50[3] = v32;
              v50[5] = this;
              v50[6] = this[8];
              WdLogEvent5_WdError(v50);
              DxgkLogCodePointPacket(0x3Fu, 6u, v5, v32, 0LL);
            }
          }
          v33 = CCD_BTL::Global();
          v34 = CCD_TOPOLOGY::CopyInheritScope((struct CCD_BTL *)((char *)v33 + 8), (const struct CCD_TOPOLOGY *)this);
          v10 = v34;
          if ( v34 < 0 )
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdError(v35);
            v51[3] = v10;
            v51[4] = this;
            v51[5] = this[8];
            WdLogEvent5_WdError(v51);
            DxgkLogCodePointPacket(0x3Fu, 7u, v5, v10, 0LL);
            LODWORD(v10) = 0;
          }
          DxgkLogCodePointPacket(0x3Fu, 8u, v5, v10, 0LL);
          goto LABEL_10;
        }
        v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v15, v16);
        v46[3] = -1073741266LL;
        v46[4] = this[8];
        v46[5] = v5;
        WdLogEvent5_WdWarning(v46);
        v45 = 3;
      }
      else
      {
        v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
        v44[3] = -1073741266LL;
        v44[4] = this[8];
        v44[5] = v5;
        WdLogEvent5_WdWarning(v44);
        v45 = 2;
      }
      DxgkLogCodePointPacket(0x3Fu, v45, v5, 0xC000022E, 0LL);
      LODWORD(v10) = -1073741266;
      goto LABEL_10;
    }
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    v42[3] = this;
    v42[4] = this[8];
    v42[5] = *(int *)this;
    WdLogEvent5_WdError(v42);
    DxgkLogCodePointPacket(0x3Fu, 0, v5, 0xC0000001, 0LL);
    return 3221225473LL;
  }
}
