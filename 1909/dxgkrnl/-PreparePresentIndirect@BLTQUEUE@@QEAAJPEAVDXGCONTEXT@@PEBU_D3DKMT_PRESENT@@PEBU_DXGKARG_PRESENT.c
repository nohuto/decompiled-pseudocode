/*
 * XREFs of ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C027C514
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027CE80 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C027B738 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C02884F8 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall BLTQUEUE::PreparePresentIndirect(
        BLTQUEUE *this,
        struct DXGCONTEXT *a2,
        const struct _D3DKMT_PRESENT *a3,
        const struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5,
        struct BLTENTRY *a6)
{
  struct DXGSWAPCHAIN **v6; // rax
  struct DXGSWAPCHAIN *v9; // rcx
  UINT DirtyRectCount; // r14d
  UINT MoveRectCount; // esi
  bool v13; // zf
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rax
  int SetMetaDataInternal; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  __int64 v20; // rax
  D3DKMT_PRESENT_RGNS *v21; // rax
  UINT v22; // ecx
  RECT *pDirtyRects; // rax
  struct DXGSWAPCHAIN **v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r15
  __int64 v30; // rax
  UINT PresentCount; // eax
  struct DXGSWAPCHAIN **v32; // rcx
  struct DXGSWAPCHAIN *v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v41; // [rsp+20h] [rbp-50h] BYREF
  __int64 v42; // [rsp+48h] [rbp-28h]
  _DWORD v43[3]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v44; // [rsp+5Ch] [rbp-14h]

  v6 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( v6 )
  {
    v9 = *v6;
    if ( *((_DWORD *)*v6 + 58) )
      return 0LL;
    v41.hNtSwapChain = 0LL;
    *(_QWORD *)&v41.DataCopied = 0LL;
    DirtyRectCount = 0;
    v41.bGlobalMetaData = 0;
    MoveRectCount = 0;
    v13 = (a3->Flags.Value & 0x400000) == 0;
    v41.bProducer = 1;
    v41.bSetMetaData = 1;
    if ( !v13 )
    {
      pPresentRegions = a3->pPresentRegions;
      if ( pPresentRegions )
      {
        MoveRectCount = pPresentRegions->MoveRectCount;
        DirtyRectCount = pPresentRegions->DirtyRectCount;
        if ( MoveRectCount )
        {
          v41.pBuffer = (PVOID)pPresentRegions->pMoveRects;
          v41.BufferSize = 24 * MoveRectCount;
          SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v9, &v41, 16 * DirtyRectCount + 28, 0);
          v19 = SetMetaDataInternal;
          if ( SetMetaDataInternal < 0 )
          {
            v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
            *(_QWORD *)(v20 + 24) = v19;
            WdLogEvent5_WdWarning(v20);
          }
        }
        v21 = a3->pPresentRegions;
        v22 = v21->DirtyRectCount;
        if ( v21->DirtyRectCount )
        {
          pDirtyRects = (RECT *)v21->pDirtyRects;
          v41.BufferSize = 16 * v22;
          v24 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
          v41.pBuffer = pDirtyRects;
          v25 = SwapChainGetSetMetaDataInternal(*v24, &v41, 0x1Cu, 0);
          v29 = v25;
          if ( v25 < 0 )
          {
            v30 = WdLogNewEntry5_WdWarning(v27, v26, v28);
            *(_QWORD *)(v30 + 24) = v29;
            WdLogEvent5_WdWarning(v30);
          }
        }
      }
    }
    PresentCount = a3->PresentCount;
    v32 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
    v42 = 0LL;
    v44 = 0LL;
    v43[0] = PresentCount;
    v43[1] = DirtyRectCount;
    v43[2] = MoveRectCount;
    v33 = *v32;
    v41.pBuffer = v43;
    v41.BufferSize = 20;
    v34 = SwapChainGetSetMetaDataInternal(v33, &v41, 8u, 0);
    v38 = v34;
    if ( v34 < 0 )
    {
      v39 = WdLogNewEntry5_WdWarning(v36, v35, v37);
      *(_QWORD *)(v39 + 24) = v38;
      WdLogEvent5_WdWarning(v39);
      LODWORD(v38) = 0;
    }
    if ( *((_DWORD *)this + 656) )
      LODWORD(v38) = BLTQUEUE::CompletePresentIndirectInternal(this, a6, 0LL);
  }
  else
  {
    v40 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v40 + 24) = 1341LL;
    WdLogEvent5_WdError(v40);
    LODWORD(v38) = -1073741823;
  }
  return (unsigned int)v38;
}
