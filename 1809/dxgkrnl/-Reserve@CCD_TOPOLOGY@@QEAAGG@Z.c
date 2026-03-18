/*
 * XREFs of ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00CA594
 * Callers:
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C00AEF34 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C00AF5D0 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00B4EB4 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1C00C7438 (-_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z.c)
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00C77E0 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00CA51C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CC948 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00CDA70 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00CDD14 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C013EC74 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0239F8C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02881E8 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C028AB44 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Reserve(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // r14
  __int64 v7; // rax
  unsigned __int16 v8; // si
  _OWORD *v9; // rbp
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int64 v12; // r8
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  _QWORD *v24; // rcx
  __int64 v25; // rax
  unsigned __int16 v26; // ax
  __int64 v27; // rax
  unsigned __int16 v28; // dx
  __int64 v29; // rax
  _OWORD *v30; // rax
  _OWORD *v31; // rcx
  __int64 v32; // r8
  __int128 v33; // xmm1
  _BYTE v34[320]; // [rsp+20h] [rbp-158h] BYREF

  v4 = 0;
  v5 = a2;
  if ( *((_BYTE *)this + 72) )
  {
    v7 = *((_QWORD *)this + 8);
    if ( v7 )
      v8 = *(_WORD *)(v7 + 22);
    else
      v8 = 0;
    if ( v8 < (unsigned __int16)a2
      && (v9 = operator new(272 * ((unsigned __int16)a2 - 1LL) + 320, 0x63644356u, PagedPool)) != 0LL )
    {
      if ( v8 )
      {
        v30 = (_OWORD *)*((_QWORD *)this + 8);
        v31 = v9;
        v32 = 2LL;
        do
        {
          *v31 = *v30;
          v31[1] = v30[1];
          v31[2] = v30[2];
          v31[3] = v30[3];
          v31[4] = v30[4];
          v31[5] = v30[5];
          v31[6] = v30[6];
          v31 += 8;
          v33 = v30[7];
          v30 += 8;
          *(v31 - 1) = v33;
          --v32;
        }
        while ( v32 );
        *v31 = *v30;
        v31[1] = v30[1];
        v31[2] = v30[2];
        v31[3] = v30[3];
        memmove(v9 + 20, (const void *)(*((_QWORD *)this + 8) + 320LL), 272LL * v8 - 272);
      }
      else
      {
        memset(v34, 0, sizeof(v34));
        v10 = v34;
        v11 = v9;
        v12 = 2LL;
        do
        {
          v13 = v10[1];
          *v11 = *v10;
          v14 = v10[2];
          v11[1] = v13;
          v15 = v10[3];
          v11[2] = v14;
          v16 = v10[4];
          v11[3] = v15;
          v17 = v10[5];
          v11[4] = v16;
          v18 = v10[6];
          v11[5] = v17;
          v19 = v10[7];
          v10 += 8;
          v11[6] = v18;
          v11 += 8;
          *(v11 - 1) = v19;
          --v12;
        }
        while ( v12 );
        v20 = v10[1];
        *v11 = *v10;
        v21 = v10[2];
        v11[1] = v20;
        v22 = v10[3];
        v11[2] = v21;
        v11[3] = v22;
        *((_DWORD *)v9 + 9) = 0;
        *((_QWORD *)v9 + 5) = 0LL;
      }
      *((_WORD *)v9 + 11) = v5;
      memset(&v9[17 * v8 + 3], 0, 272 * (v5 - (unsigned __int64)v8));
      operator delete[](*((void **)this + 8));
      *((_QWORD *)this + 8) = v9;
      return *((unsigned __int16 *)v9 + 11);
    }
    else
    {
      return v8;
    }
  }
  else
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v24[3] = this;
    v24[4] = *((_QWORD *)this + 8);
    v25 = *((_QWORD *)this + 8);
    if ( v25 )
      v26 = *(_WORD *)(v25 + 20);
    else
      v26 = 0;
    v24[5] = v26;
    v27 = *((_QWORD *)this + 8);
    if ( v27 )
      v28 = *(_WORD *)(v27 + 22);
    else
      v28 = 0;
    v24[6] = v28;
    v24[7] = v5;
    v29 = *((_QWORD *)this + 8);
    if ( v29 )
      return *(unsigned __int16 *)(v29 + 22);
    return v4;
  }
}
