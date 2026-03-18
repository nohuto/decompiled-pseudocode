/*
 * XREFs of ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C00DEC74
 * Callers:
 *     ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C00DE8A4 (-SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C0249A20 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x1C024D2A8 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 * Callees:
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C013666C (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 */

void __fastcall DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        DISPLAY_SOURCE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        unsigned __int8 a4,
        unsigned int a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        const struct tagRECT *a8,
        enum _D3DDDI_ROTATION a9,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a10,
        enum D3DDDI_COLOR_SPACE_TYPE a11,
        unsigned int a12,
        enum _D3DDDIFORMAT a13,
        unsigned __int8 a14)
{
  __int64 v16; // rsi
  __int64 v18; // rbx
  char *v19; // rbx
  __int64 v20; // rcx
  unsigned int v21; // ecx
  enum _D3DDDIFORMAT v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  v16 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != KeGetCurrentThread() )
  {
    v23 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v23 + 24) = 8665LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( a4 && !a3 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v24 + 24) = 8666LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( (unsigned int)v16 >= *((_DWORD *)this + 934)
    || (v18 = 168 * v16, *((_DWORD *)this + 42 * v16 + 280) == -1)
    && (*(_DWORD *)((char *)this + v18 + 1124) == -1
     || (v25 = WdLogNewEntry5_WdAssertion(this),
         *(_QWORD *)(v25 + 24) = 8417LL,
         WdLogEvent5_WdAssertion(v25),
         *(_DWORD *)((char *)this + v18 + 1120) == -1)) )
  {
    v19 = 0LL;
  }
  else
  {
    _mm_lfence();
    v19 = (char *)this + 80 * *(int *)((char *)this + v18 + 1120) + v18 + 1128;
  }
  if ( v19 )
  {
    v20 = *((unsigned int *)v19 + 2);
    if ( a4 )
    {
      if ( (((unsigned __int8)a5 ^ (unsigned __int8)((unsigned int)v20 >> 4)) & 1) == 0
        && (((unsigned __int8)a5 ^ (unsigned __int8)((unsigned int)v20 >> 4)) & 2) == 0
        && *((_DWORD *)v19 + 3) == a6->left
        && *((_DWORD *)v19 + 5) == a6->right
        && *((_DWORD *)v19 + 4) == a6->top
        && *((_DWORD *)v19 + 6) == a6->bottom
        && *((_DWORD *)v19 + 7) == a7->left
        && *((_DWORD *)v19 + 9) == a7->right
        && *((_DWORD *)v19 + 8) == a7->top
        && *((_DWORD *)v19 + 10) == a7->bottom
        && *((_DWORD *)v19 + 11) == a8->left
        && *((_DWORD *)v19 + 13) == a8->right
        && *((_DWORD *)v19 + 12) == a8->top
        && *((_DWORD *)v19 + 14) == a8->bottom
        && *((_DWORD *)v19 + 15) == a9 )
      {
        v20 = ((unsigned int)v20 >> 2) & 1;
        if ( (_DWORD)v20 == (a10 == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND)
          && *((_DWORD *)v19 + 16) == a11
          && *((_DWORD *)v19 + 17) == a12 )
        {
LABEL_29:
          if ( *((_DWORD *)this + 934) <= (unsigned int)v16 )
          {
            v26 = WdLogNewEntry5_WdAssertion(v20);
            *(_QWORD *)(v26 + 24) = 8674LL;
            WdLogEvent5_WdAssertion(v26);
          }
          v21 = *((_DWORD *)v19 + 2) & 0xFFFFFFFE;
          *(_QWORD *)v19 = a3;
          *((_DWORD *)v19 + 2) = (2 * (a4 & 1)) | a4 & 1 | v21 & 0xFFFFFFFD;
          return;
        }
      }
      LOBYTE(v20) = 0;
    }
    else
    {
      LOBYTE(v20) = (v20 & 1) == 0;
    }
    if ( (_BYTE)v20 )
      goto LABEL_29;
  }
  v22 = a13;
  if ( a13 == (D3DDDIFMT_FORCE_UINT|0x80000000) && v19 )
    v22 = *((_DWORD *)v19 + 18);
  DISPLAY_SOURCE::CreateNewPlaneConfig(this, v16, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, v22, a14);
  if ( (unsigned int)v16 >= *((_DWORD *)this + 934) )
    *((_DWORD *)this + 934) = v16 + 1;
  if ( (_DWORD)v16 && a4 )
    *((_BYTE *)this + 3744) = 1;
}
