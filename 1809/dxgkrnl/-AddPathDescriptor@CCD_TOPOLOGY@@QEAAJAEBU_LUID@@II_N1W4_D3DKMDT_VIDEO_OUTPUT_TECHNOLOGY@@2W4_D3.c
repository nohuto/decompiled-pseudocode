/*
 * XREFs of ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00AF2B8
 * Callers:
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N2@Z @ 0x1C00B0CC8 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00B510C (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00BF6E4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C0137CF4 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C028D960 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00C99A4 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddPathDescriptor(
        __int64 a1,
        _QWORD *a2,
        int a3,
        int a4,
        char a5,
        char a6,
        int a7,
        int a8,
        int a9,
        __int64 *a10)
{
  __int64 v14; // r10
  unsigned __int16 v15; // ax
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int128 v18; // xmm1
  __int64 v19; // xmm0_8
  _OWORD v21[3]; // [rsp+20h] [rbp-38h] BYREF

  CCD_TOPOLOGY::ClearModalitySetId((CCD_TOPOLOGY *)a1);
  v14 = *(_QWORD *)(a1 + 64);
  if ( !v14 )
    return 3221225507LL;
  v15 = *(_WORD *)(v14 + 20);
  if ( v15 >= *(_WORD *)(v14 + 22) )
    return 3221225507LL;
  v16 = 272LL * v15 + v14 + 48;
  *(_QWORD *)(v16 + 16) = *a2;
  *(_DWORD *)(v16 + 28) = a4;
  v17 = 0x8700000000000LL;
  *(_BYTE *)(v16 + 129) = a5 | (2 * a6);
  *(_DWORD *)(v16 + 24) = a3;
  *(_QWORD *)v16 = 0x8700000000000LL;
  memset(v21, 0, 0x28uLL);
  v18 = v21[1];
  *(_OWORD *)(v16 + 232) = v21[0];
  v19 = *(_QWORD *)&v21[2];
  *(_OWORD *)(v16 + 248) = v18;
  *(_QWORD *)(v16 + 264) = v19;
  *(_DWORD *)(v16 + 232) = *(_DWORD *)(a1 + 88);
  if ( a7 != -2 && a8 != -2 )
  {
    v17 = 0x8F00000000000LL;
    *(_DWORD *)(v16 + 88) = a7;
    *(_QWORD *)v16 = 0x8F00000000000LL;
    *(_DWORD *)(v16 + 92) = a8;
  }
  *(_DWORD *)(v16 + 212) = a9;
  if ( a9 )
    *(_QWORD *)v16 = v17 | 0x1000000000LL;
  ++*(_WORD *)(*(_QWORD *)(a1 + 64) + 20LL);
  if ( a10 )
    *a10 = v16;
  return 0LL;
}
