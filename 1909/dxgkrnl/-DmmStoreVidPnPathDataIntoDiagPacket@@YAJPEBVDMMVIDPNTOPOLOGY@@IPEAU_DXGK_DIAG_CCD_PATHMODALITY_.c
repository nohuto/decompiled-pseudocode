/*
 * XREFs of ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C02B5744
 * Callers:
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C02B49B0 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C02B4B58 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00199C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C0144EC4 (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNP.c)
 */

__int64 __fastcall DmmStoreVidPnPathDataIntoDiagPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        __int64 a2,
        struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *a3)
{
  char *v3; // rbp
  __int64 v4; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r15
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  char *v18; // rsi
  unsigned int v19; // ebp
  char *v20; // rbx
  char *i; // rbx
  int v22; // ecx
  char *v23; // rax

  v3 = (char *)a1 + 160;
  v4 = (unsigned int)a2;
  v9 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160, a2) + 48);
  v11 = *(_QWORD *)(v9 + 8);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v12);
    v11 = *(_QWORD *)(v9 + 8);
  }
  v13 = *((unsigned int *)a1 + 10);
  v14 = *(_QWORD *)(v11 + 16);
  if ( (unsigned int)v13 <= (unsigned int)v4 )
  {
    v18 = (char *)a1 + 24;
    v19 = 0;
    v20 = (char *)*((_QWORD *)a1 + 3);
    if ( v20 != v18 )
    {
      for ( i = v20 - 8; i; ++v19 )
      {
        if ( v19 >= (unsigned int)v4 )
          break;
        *((_DWORD *)a3 + 6) = *(_DWORD *)(*((_QWORD *)i + 11) + 24LL);
        v22 = *(_DWORD *)(*((_QWORD *)i + 12) + 24LL);
        *(_QWORD *)a3 |= 0x600000000000uLL;
        *((_DWORD *)a3 + 7) = v22;
        *((_QWORD *)a3 + 2) = *(_QWORD *)(v14 + 276);
        *(_QWORD *)a3 |= 0x100000000000uLL;
        _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2>((__int64)i, (__int64)a3, v10);
        v23 = (char *)*((_QWORD *)i + 1);
        i = v23 - 8;
        if ( v23 == v18 )
          i = 0LL;
        a3 = (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)((char *)a3 + 144);
      }
    }
    return 0LL;
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v10);
    v15[3] = ContainedBy<DMMVIDPN>::GetContainer((__int64)v3, v16);
    v15[4] = v13;
    v15[5] = v4;
    WdLogEvent5_WdError(v15);
    return 3221225507LL;
  }
}
