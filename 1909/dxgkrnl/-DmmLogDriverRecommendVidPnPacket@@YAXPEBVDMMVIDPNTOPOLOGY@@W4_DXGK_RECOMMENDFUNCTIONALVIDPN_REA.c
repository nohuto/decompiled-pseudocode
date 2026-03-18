/*
 * XREFs of ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C02B4B58
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02B61A0 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0002294 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E2C4 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00199C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C02B5744 (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 */

void __fastcall DmmLogDriverRecommendVidPnPacket(const struct DMMVIDPNTOPOLOGY *a1, __int64 a2)
{
  char *v2; // rdi
  int v4; // r12d
  struct _LUID *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // rbx
  unsigned int v17; // esi
  char *v18; // rax
  char *v19; // rdi
  signed int v20; // eax
  __int64 v21; // r8
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v2 = (char *)a1 + 160;
  v4 = a2;
  v6 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160, a2) + 48);
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, v5);
    WdLogEvent5_WdAssertion(v8);
    v7 = *(_QWORD *)(v6 + 8);
  }
  DXGADAPTER::IsAddapterSessionized(*(DXGADAPTER **)(v7 + 16), v5, 0LL, &v23);
  v12 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)v2, v9) + 48);
  v13 = *(_QWORD *)(v12 + 8);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v14);
    v13 = *(_QWORD *)(v12 + 8);
  }
  v15 = *((_DWORD *)a1 + 10);
  v16 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 276LL);
  v17 = 144 * v15 + 56;
  v18 = (char *)operator new[](v17, 0x4E506456u, PagedPool);
  v19 = v18;
  if ( !v18 )
  {
    DxgkLogCodePointPacketForSession(0x38u, v23, 0xC0000017, 0, 0, v16);
    return;
  }
  memset(v18, 0, 144 * v15 + 56);
  *((_DWORD *)v19 + 10) = 0;
  *((_QWORD *)v19 + 4) = 0LL;
  *(_DWORD *)v19 = 34;
  *((_DWORD *)v19 + 1) = v17;
  *((_QWORD *)v19 + 1) = 0LL;
  *((_QWORD *)v19 + 2) = 0LL;
  *((_QWORD *)v19 + 3) = 0LL;
  *((_DWORD *)v19 + 12) = v4;
  *((_DWORD *)v19 + 13) = v15;
  v20 = DmmStoreVidPnPathDataIntoDiagPacket(a1, v15, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v19 + 56));
  v22 = v23;
  if ( v20 < 0 )
    goto LABEL_10;
  v20 = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v19, v23, v21);
  if ( v20 < 0 )
  {
    v22 = v23;
LABEL_10:
    DxgkLogCodePointPacketForSession(0x38u, v22, v20, 0, 0, v16);
  }
  operator delete[](v19);
}
