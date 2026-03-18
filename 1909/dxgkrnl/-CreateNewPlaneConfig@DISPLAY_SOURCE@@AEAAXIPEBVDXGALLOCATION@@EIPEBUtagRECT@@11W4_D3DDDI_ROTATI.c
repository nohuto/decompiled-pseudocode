/*
 * XREFs of ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C014AC4C
 * Callers:
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C00FCD58 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C00FCE60 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 * Callees:
 *     McTemplateK0pqqtqqqqqqqqqqqqqqqq @ 0x1C0036734 (McTemplateK0pqqtqqqqqqqqqqqqqqqq.c)
 *     ?SetPlaneConfigState@@YAXEPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@EPEAU_DISPLAY_PLANE_CONFIG_STATE@@@Z @ 0x1C014ADC8 (-SetPlaneConfigState@@YAXEPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIP.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1C014AE6C (-GetNextConfigIndex@@YAHH@Z.c)
 */

void __fastcall DISPLAY_SOURCE::CreateNewPlaneConfig(
        DISPLAY_SOURCE *this,
        __int64 a2,
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
        char a14)
{
  __int64 v16; // rdi
  int NextConfigIndex; // eax
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  const GUID *v24; // r8
  __int64 v25; // rax

  v16 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 520LL) != KeGetCurrentThread() )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v25 + 24) = 9569LL;
    WdLogEvent5_WdAssertion(v25);
  }
  NextConfigIndex = GetNextConfigIndex(*((_DWORD *)this + 42 * v16 + 280));
  v20 = *(_DWORD *)(v19 + 1124);
  v21 = NextConfigIndex;
  *(_DWORD *)(v19 + 1120) = NextConfigIndex;
  if ( NextConfigIndex == v20 || v20 == -1 )
  {
    v22 = GetNextConfigIndex(v20);
    *(_DWORD *)(v19 + 1124) = v22;
  }
  SetPlaneConfigState(
    a4,
    a3,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    (struct _DISPLAY_PLANE_CONFIG_STATE *)(80 * v21 + v19 + 1128));
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqtqqqqqqqqqqqqqqqq(
      a4,
      v23,
      v24,
      *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
      *((_DWORD *)this + 4),
      v16,
      a4,
      (char)v24,
      a6->left,
      a6->top,
      a6->right,
      a6->bottom,
      a7->left,
      a7->top,
      a7->right,
      a7->bottom,
      a8->left,
      a8->top,
      a8->right,
      a8->bottom,
      a10,
      a11,
      a12);
}
