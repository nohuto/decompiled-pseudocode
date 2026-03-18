/*
 * XREFs of ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C027C1E8
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00B91E4 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000F75C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C027D0A8 (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 */

void __fastcall DmmLogCommitVidPnFailedPacket(__int64 a1, int a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  const struct DMMVIDPNTOPOLOGY *v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // r15d
  __int64 v12; // rbx
  unsigned int v13; // esi
  char *v14; // rax
  char *v15; // rdi
  int v16; // r8d
  int v17; // eax
  int v18; // r8d
  signed int v19; // eax

  v5 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)a1);
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 48);
    v8 = (const struct DMMVIDPNTOPOLOGY *)(v5 + 96);
    v9 = *(_QWORD *)(v7 + 8);
    if ( !v9 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v10);
      v9 = *(_QWORD *)(v7 + 8);
    }
    v11 = *((_DWORD *)v8 + 10);
    v12 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 276LL);
    v13 = 144 * v11 + 80;
    v14 = (char *)operator new(v13, 0x4E506456u, PagedPool);
    v15 = v14;
    if ( v14 )
    {
      memset(v14, 0, 144 * v11 + 80);
      *((_DWORD *)v15 + 10) = 0;
      *((_QWORD *)v15 + 4) = 0LL;
      *(_DWORD *)v15 = 33;
      *((_DWORD *)v15 + 1) = v13;
      *((_QWORD *)v15 + 1) = 0LL;
      *((_QWORD *)v15 + 2) = 0LL;
      *((_QWORD *)v15 + 3) = 0LL;
      v16 = *((_DWORD *)v15 + 17);
      *((_DWORD *)v15 + 12) = a2;
      *(_QWORD *)(v15 + 52) = v12;
      *((_DWORD *)v15 + 15) = *(_DWORD *)(a1 + 8);
      *((_DWORD *)v15 + 16) = *(_DWORD *)(a1 + 12);
      *((_DWORD *)v15 + 17) ^= (*(_DWORD *)(a1 + 24) ^ v16) & 1;
      v17 = *((_DWORD *)v15 + 17);
      v18 = (*(_DWORD *)(a1 + 24) ^ v17) & 2;
      *((_DWORD *)v15 + 18) = a3;
      *((_DWORD *)v15 + 19) = v11;
      *((_DWORD *)v15 + 17) = v17 ^ v18;
      v19 = DmmStoreVidPnPathDataIntoDiagPacket(v8, v11, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v15 + 80));
      if ( v19 < 0 || (v19 = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v15), v19 < 0) )
        DxgkLogCodePointPacket(0x37u, v19, 0, 0, v12);
      operator delete[](v15);
    }
    else
    {
      DxgkLogCodePointPacket(0x37u, 0xC0000017, 0, 0, v12);
    }
  }
  else
  {
    DxgkLogCodePointPacket(0x37u, 0xC000000D, 0, 0, 0LL);
  }
}
