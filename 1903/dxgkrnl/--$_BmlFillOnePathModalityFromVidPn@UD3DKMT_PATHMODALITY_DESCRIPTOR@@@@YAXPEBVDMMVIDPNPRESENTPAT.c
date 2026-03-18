/*
 * XREFs of ??$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00DEB64
 * Callers:
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00D1700 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0003A2C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall _BmlFillOnePathModalityFromVidPn<D3DKMT_PATHMODALITY_DESCRIPTOR>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rsi
  DMMVIDPNSOURCEMODE *v8; // rcx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // xmm1_8
  int v19; // ecx
  int v20; // eax
  __int64 result; // rax

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
      if ( *(_DWORD *)(a2 + 96) != GraphicsInfo->PrimSurfSize.cx
        || *(_DWORD *)(a2 + 100) != GraphicsInfo->PrimSurfSize.cy )
      {
        *(_QWORD *)a2 &= ~0x800000uLL;
      }
    }
    else
    {
      *(_QWORD *)a2 &= ~0x800000uLL;
    }
    v10 = DMMVIDPNSOURCEMODE::GetGraphicsInfo(*(DMMVIDPNSOURCEMODE **)(v7 + 144));
    *(_OWORD *)(a2 + 96) = *(_OWORD *)&v10->PrimSurfSize.cx;
    v11 = *(_OWORD *)&v10->Stride;
    *(_QWORD *)a2 |= 0x100uLL;
    *(_OWORD *)(a2 + 112) = v11;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v7 + 88), a2, a3);
  v14 = *(_QWORD *)(a1 + 96);
  v15 = *(_QWORD *)(v14 + 104);
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 96));
    v16 = *(_QWORD *)(v14 + 104);
  }
  else
  {
    v16 = 0LL;
  }
  v17 = *(_QWORD *)(v16 + 144);
  if ( v17 )
  {
    *(_OWORD *)(a2 + 32) = *(_OWORD *)(v17 + 72);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(v17 + 88);
    *(_OWORD *)(a2 + 64) = *(_OWORD *)(v17 + 104);
    v18 = *(_QWORD *)(v17 + 120);
    *(_QWORD *)a2 |= 0x87uLL;
    *(_QWORD *)(a2 + 80) = v18;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v16 + 88), v12, v13);
  v19 = *(_DWORD *)(a1 + 116);
  if ( v19 && (unsigned int)(v19 - 254) > 1 )
  {
    *(_QWORD *)a2 |= 0x200uLL;
    *(_DWORD *)(a2 + 132) = v19;
  }
  v20 = *(_DWORD *)(a1 + 112);
  if ( v20 && v20 != 254 )
  {
    *(_DWORD *)(a2 + 136) = v20;
    *(_QWORD *)a2 |= 0x40000000000uLL;
  }
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 96LL) + 80LL);
  *(_DWORD *)(a2 + 92) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 96LL) + 84LL);
  result = 0x800000000000LL;
  *(_QWORD *)a2 |= 0x800000000000uLL;
  return result;
}
