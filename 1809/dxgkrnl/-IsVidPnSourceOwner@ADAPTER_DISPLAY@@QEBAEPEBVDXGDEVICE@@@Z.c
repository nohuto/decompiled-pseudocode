/*
 * XREFs of ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0010884
 * Callers:
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EE190 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00EF694 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F5F3C (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D60C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C013CF90 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0140300 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C01C4348 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01FE090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::IsVidPnSourceOwner(ADAPTER_DISPLAY *this, const struct DXGDEVICE *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = 0;
  if ( !*((_DWORD *)this + 20) )
    return 0;
  while ( 1 )
  {
    v5 = *((_QWORD *)this + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v5 + 144)) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v8 + 24) = 5549LL;
      WdLogEvent5_WdAssertion(v8);
    }
    v6 = *((_DWORD *)this + 20);
    if ( v2 < v6
      || (v9 = WdLogNewEntry5_WdAssertion(v5),
          *(_QWORD *)(v9 + 24) = 5550LL,
          WdLogEvent5_WdAssertion(v9),
          v6 = *((_DWORD *)this + 20),
          v2 < v6) )
    {
      if ( a2 == *(const struct DXGDEVICE **)(3760LL * v2 + *((_QWORD *)this + 14) + 688) )
        break;
    }
    if ( ++v2 >= v6 )
      return 0;
  }
  return 1;
}
