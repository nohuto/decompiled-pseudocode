/*
 * XREFs of ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1C012F62C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C012DC88 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall GetCurrentContentResolution(
        DXGADAPTER *a1,
        unsigned int a2,
        const struct tagRECT **a3,
        struct tagRECT *a4,
        unsigned int *a5)
{
  __int64 v6; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rcx
  struct tagRECT v14; // xmm0
  const struct tagRECT *v15; // rax
  unsigned int v16; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  v6 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v18 + 24) = 1010LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v12 = *(_QWORD *)(*((_QWORD *)a1 + 319) + 112LL) + 3968 * v6;
  if ( !v12 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v19 + 24) = 1013LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v13 = *(_QWORD *)(v12 + 48);
  if ( v13 )
  {
    v14 = *(struct tagRECT *)(v12 + 652);
    v15 = (const struct tagRECT *)(v13 + 24);
    v16 = *(_DWORD *)(v13 + 40);
    *a3 = v15;
    *a4 = v14;
    *a5 = v16;
    return 0LL;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(0LL, v9, v11);
    *(_QWORD *)(v20 + 24) = v12;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
}
