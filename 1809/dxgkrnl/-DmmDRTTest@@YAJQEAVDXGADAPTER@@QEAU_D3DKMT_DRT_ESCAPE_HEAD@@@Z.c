/*
 * XREFs of ?DmmDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C027A488
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z @ 0x1C027D558 (-GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z.c)
 */

__int64 __fastcall DmmDRTTest(
        struct DXGADAPTER *const this,
        struct _D3DKMT_DRT_ESCAPE_HEAD *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  VIDPN_MGR *v17; // rsi
  __int64 v18; // rax
  int VidPnPathHwCapabilityInClientVidPn; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  if ( *((_DWORD *)a2 + 1) < 0x18u )
  {
    v9 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)(v9 + 32) = *((unsigned int *)a2 + 1);
LABEL_5:
    WdLogEvent5_WdWarning(v9);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)this + 315);
  if ( v15 )
  {
    v17 = *(VIDPN_MGR **)(v15 + 88);
    if ( v17 )
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        v9 = WdLogNewEntry5_WdWarning(v12, v11, v13);
        *(_QWORD *)(v9 + 24) = *((int *)a2 + 3);
        *(_QWORD *)(v9 + 32) = this;
        goto LABEL_5;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v28, *(_QWORD *)(v15 + 88));
      VidPnPathHwCapabilityInClientVidPn = VIDPN_MGR::GetVidPnPathHwCapabilityInClientVidPn(
                                             v17,
                                             *((_DWORD *)a2 + 4),
                                             (struct _D3DKMDT_VIDPN_HW_CAPABILITY *)a2 + 5);
      v24 = VidPnPathHwCapabilityInClientVidPn;
      if ( VidPnPathHwCapabilityInClientVidPn == -1073741637 )
      {
        v25 = WdLogNewEntry5_WdDmmEvent(v21, v20, v22, v23);
        *(_QWORD *)(v25 + 24) = this;
        WdLogEvent5_WdDmmEvent(v25);
      }
      else if ( VidPnPathHwCapabilityInClientVidPn == -1071774937 )
      {
        v26 = WdLogNewEntry5_WdWarning(v21, v20, v22);
        *(_QWORD *)(v26 + 24) = *((unsigned int *)a2 + 4);
        *(_QWORD *)(v26 + 32) = this;
        WdLogEvent5_WdWarning(v26);
      }
      else if ( VidPnPathHwCapabilityInClientVidPn < 0 )
      {
        v27 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v27 + 24) = this;
        *(_QWORD *)(v27 + 32) = v24;
        WdLogEvent5_WdError(v27);
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28 + 40));
      return (unsigned int)v24;
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v18 + 24) = this;
      WdLogEvent5_WdError(v18);
      return 3223192373LL;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    return 3223191554LL;
  }
}
