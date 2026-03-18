/*
 * XREFs of ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180186740
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateSwapChains@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180186960 (-UpdateSwapChains@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?FromMilCompositingMode@BlendMode@@YA?AW4Enum@1@W42MilCompositingMode@@@Z @ 0x1801878B8 (-FromMilCompositingMode@BlendMode@@YA-AW4Enum@1@W42MilCompositingMode@@@Z.c)
 *     ?AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1801FDC60 (-AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVCli.c)
 */

__int64 __fastcall CWARPDrawListEntry::Render(__int64 a1, __int64 a2, __int64 a3, float a4, unsigned int a5)
{
  __int64 v5; // r14
  int updated; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  CD2DContext *v15; // rax
  int appended; // eax
  __int64 v17; // rcx
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a2 + 384);
  if ( (*(_BYTE *)(a1 + 124) & 0x10) != 0 )
  {
    v19 = *(_OWORD *)(a1 + 152);
    updated = CWARPDrawListEntry::UpdateSwapChains(a1 + 136, a2, &v19);
    v11 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, updated, 0x99u);
      return v11;
    }
  }
  v12 = *(_DWORD *)(a1 + 124);
  if ( (v12 & 4) != 0 )
  {
    *(_BYTE *)(a2 + 6355) = 1;
    v12 = *(_DWORD *)(a1 + 124);
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
    *(_DWORD *)(a1 + 264) = v14;
    *(_DWORD *)(a1 + 344) = v14;
  }
  *(_OWORD *)(a1 + 56) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a3 + 48);
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a3 + 64);
  *(_DWORD *)(a1 + 48) = BlendMode::FromMilCompositingMode(a5);
  *(float *)(a1 + 52) = a4;
  v15 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 160LL))(v5);
  appended = CD2DContext::AppendDrawListEntry(v15, (struct CDrawListEntry *)a1, 0LL, 0LL);
  v11 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, appended, 0xAFu);
  return v11;
}
