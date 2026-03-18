/*
 * XREFs of ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000C7F8
 * Callers:
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C000B954 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014C20 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0015340 (-DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C0104980 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C011CE60 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C0121A28 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C01374C0 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C01439EC (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(DXGVALIDATION *this, struct DXGADAPTER *a2)
{
  char v2; // bl
  int v5; // eax
  struct DXGPROCESS *Current; // rax

  v2 = 0;
  if ( *(_DWORD *)this )
  {
    v5 = *((_DWORD *)a2 + 77);
    if ( (v5 & 0x20) == 0 && (v5 & 4) == 0 )
    {
      Current = DXGPROCESS::GetCurrent();
      if ( Current )
      {
        if ( !*((_BYTE *)Current + 296) && !*((_BYTE *)Current + 297) )
        {
          if ( *(_DWORD *)this == 2 )
          {
            return 1;
          }
          else if ( *(_DWORD *)this == 1 )
          {
            return *((_BYTE *)Current + 413);
          }
        }
      }
    }
  }
  return v2;
}
