/*
 * XREFs of ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C0144EC4
 * Callers:
 *     _BmlLogDiagnosticsPacket @ 0x1C0144B34 (_BmlLogDiagnosticsPacket.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C02B5744 (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0003B2C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rsi
  DMMVIDPNSOURCEMODE *v8; // rcx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v9; // rax
  __int128 v10; // xmm1
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ecx
  int v17; // eax
  __int64 result; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax

  v3 = *(_QWORD *)(a1 + 88);
  v6 = *(_QWORD *)(v3 + 104);
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 96));
    v7 = *(_QWORD *)(v3 + 104);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = *(DMMVIDPNSOURCEMODE **)(v7 + 144);
  if ( v8 )
  {
    if ( (*(_QWORD *)a2 & 0x100LL) != 0 )
    {
      GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v8);
      if ( *(_DWORD *)(a2 + 88) != GraphicsInfo->PrimSurfSize.cx
        || *(_DWORD *)(a2 + 92) != GraphicsInfo->PrimSurfSize.cy )
      {
        *(_QWORD *)a2 &= ~0x800000uLL;
      }
    }
    else
    {
      *(_QWORD *)a2 &= ~0x800000uLL;
    }
    v9 = DMMVIDPNSOURCEMODE::GetGraphicsInfo(*(DMMVIDPNSOURCEMODE **)(v7 + 144));
    *(_OWORD *)(a2 + 88) = *(_OWORD *)&v9->PrimSurfSize.cx;
    v10 = *(_OWORD *)&v9->Stride;
    *(_QWORD *)a2 |= 0x100uLL;
    *(_OWORD *)(a2 + 104) = v10;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v7 + 88), a2, a3);
  v12 = *(_QWORD *)(a1 + 96);
  v13 = *(_QWORD *)(v12 + 104);
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 96));
    v14 = *(_QWORD *)(v12 + 104);
  }
  else
  {
    v14 = 0LL;
  }
  v15 = *(_QWORD *)(v14 + 144);
  if ( v15 )
  {
    *(_DWORD *)(a2 + 72) = *(_DWORD *)(v15 + 72);
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(v15 + 76);
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(v15 + 84);
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(v15 + 92);
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(v15 + 100);
    *(_QWORD *)(a2 + 32) = *(unsigned int *)(v15 + 112);
    *(_DWORD *)(a2 + 76) = (int)(*(_DWORD *)(v15 + 120) << 29) >> 29;
    *(_QWORD *)a2 |= 0x87uLL;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v14 + 88), v14, v11);
  v16 = *(_DWORD *)(a1 + 116);
  if ( v16 && (unsigned int)(v16 - 254) > 1 )
  {
    *(_QWORD *)a2 |= 0x200uLL;
    *(_DWORD *)(a2 + 120) = v16;
  }
  v17 = *(_DWORD *)(a1 + 112);
  if ( v17 && v17 != 254 )
  {
    *(_DWORD *)(a2 + 124) = v17;
    *(_QWORD *)a2 |= 0x40000000000uLL;
  }
  *(_DWORD *)(a2 + 80) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 96LL) + 80LL);
  *(_DWORD *)(a2 + 84) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 96LL) + 84LL);
  result = 0x800000000000LL;
  *(_QWORD *)a2 |= 0x800000000000uLL;
  return result;
}
