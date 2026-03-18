/*
 * XREFs of ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1801BB240
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18015FDE8 (-AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVCli.c)
 *     ?FromMilCompositingMode@BlendMode@@YA?AW4Enum@1@W42MilCompositingMode@@@Z @ 0x1801AD428 (-FromMilCompositingMode@BlendMode@@YA-AW4Enum@1@W42MilCompositingMode@@@Z.c)
 *     ?UpdateSwapChains@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BB470 (-UpdateSwapChains@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMil.c)
 */

__int64 __fastcall CWARPDrawListEntry::Render(__int64 a1, __int64 a2, __int64 a3, float a4, int a5)
{
  __int64 v5; // r14
  signed int updated; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  CDrawListEntryBatch **v15; // rax
  signed int appended; // eax
  __int64 v17; // rcx
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a2 + 384);
  if ( (*(_BYTE *)(a1 + 132) & 0x10) != 0 )
  {
    v19 = *(_OWORD *)(a1 + 160);
    updated = CWARPDrawListEntry::UpdateSwapChains(a1 + 144, a2, &v19);
    v11 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, updated, 0x97u, 0LL);
      return v11;
    }
  }
  v12 = *(_DWORD *)(a1 + 132);
  if ( (v12 & 4) != 0 )
  {
    *(_BYTE *)(a2 + 6355) = 1;
    v12 = *(_DWORD *)(a1 + 132);
  }
  if ( (v12 & 0x200) != 0 )
  {
    v13 = *(_DWORD *)(a2 + 248);
    v14 = 0;
    if ( v13 == 1 )
    {
      v14 = 1;
      goto LABEL_17;
    }
    if ( v13 > 1 )
    {
      if ( v13 <= 3 )
      {
        v14 = 2;
        goto LABEL_17;
      }
      switch ( v13 )
      {
        case 4:
          goto LABEL_13;
        case 5:
          v14 = 4;
          break;
        case 6:
LABEL_13:
          v14 = 3;
          break;
      }
    }
LABEL_17:
    *(_DWORD *)(a1 + 272) = v14;
    *(_DWORD *)(a1 + 352) = v14;
  }
  *(_OWORD *)(a1 + 64) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 48);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a3 + 64);
  *(_DWORD *)(a1 + 56) = BlendMode::FromMilCompositingMode(a5);
  *(float *)(a1 + 60) = a4;
  v15 = (CDrawListEntryBatch **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 160LL))(v5);
  appended = CD2DContext::AppendDrawListEntry(v15, (struct CDrawListEntry *)a1, 0LL, 0LL);
  v11 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, appended, 0xADu, 0LL);
  return v11;
}
