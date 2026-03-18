/*
 * XREFs of ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C022F2BC
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0238D4C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0286D14 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0286E60 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::GetContexts(DXGDEVICE *this, unsigned int *a2, unsigned int *const a3)
{
  __int64 v3; // r9
  DXGDEVICE *i; // r10
  DXGDEVICE *v5; // rax

  v3 = 0LL;
  for ( i = (DXGDEVICE *)*((_QWORD *)this + 45); ; i = *(DXGDEVICE **)i )
  {
    v5 = 0LL;
    if ( i != (DXGDEVICE *)((char *)this + 360) )
      v5 = i;
    if ( !v5 )
      break;
    a3[v3] = *((_DWORD *)v5 + 6);
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x40 )
      break;
  }
  *a2 = v3;
}
