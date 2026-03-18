/*
 * XREFs of ?DmmGetMostImportantVidPnPathTargetsFromSource@@YAJQEAXPEAUD3DKMDT_HVIDPN__@@IQEAI@Z @ 0x1C02B3848
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C0236C08 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00045B8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00E72EC (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 */

__int64 __fastcall DmmGetMostImportantVidPnPathTargetsFromSource(
        DXGADAPTER *this,
        struct D3DKMDT_HVIDPN__ *a2,
        __int64 a3,
        unsigned int *const a4)
{
  unsigned int v5; // ebp
  __int64 v7; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int MostImportantVidPnPathTargetsFromSource; // ebx
  __int64 v19; // [rsp+48h] [rbp+20h] BYREF

  v5 = a3;
  if ( !a4 || (v9 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a2)) == 0 )
  {
    v7 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  if ( !this )
  {
    v10 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v10 + 24) = 0LL;
LABEL_6:
    WdLogEvent5_WdError(v10);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)this + 319);
  if ( !v15 )
  {
    v10 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v10 + 24) = this;
    goto LABEL_6;
  }
  v16 = *(_QWORD *)(v15 + 88);
  if ( v16 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v19, v16);
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                (const struct DMMVIDPNTOPOLOGY *)(v9 + 96),
                                                v5,
                                                a4);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 40));
    return MostImportantVidPnPathTargetsFromSource;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v12, 0LL, v13);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    return 3223192373LL;
  }
}
