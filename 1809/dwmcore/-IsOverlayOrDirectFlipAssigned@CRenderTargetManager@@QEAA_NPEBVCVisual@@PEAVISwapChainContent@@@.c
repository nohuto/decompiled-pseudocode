/*
 * XREFs of ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z @ 0x1800171C0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A100 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180075DB0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_NPEAUtagRECT@@3@Z @ 0x18001727C (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_NPEAUtagRECT@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetManager::IsOverlayOrDirectFlipAssigned(
        CRenderTargetManager *this,
        const struct CVisual *a2,
        struct ISwapChainContent *a3)
{
  char v3; // bl
  unsigned int v7; // edi
  __int64 v8; // rcx
  COverlayContext *v9; // rsi
  __int64 v10; // rax

  v3 = 0;
  v7 = 0;
  if ( *((_DWORD *)this + 12) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v7);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, 76LL) )
      {
        v9 = *(COverlayContext **)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v7) + 848LL);
        if ( v9 )
        {
          if ( COverlayContext::IsOverlayAssigned(v9, a2, a3, 0LL, 0LL, 0LL) )
            break;
          v10 = *((_QWORD *)v9 + 1661);
          if ( v10 )
          {
            if ( *(const struct CVisual **)(v10 + 24) == a2
              && *(_QWORD *)(*((_QWORD *)v9 + 1661) + 32LL) == (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a3 + 208LL))(a3) )
            {
              break;
            }
          }
        }
      }
      if ( ++v7 >= *((_DWORD *)this + 12) )
        return v3;
    }
    return 1;
  }
  return v3;
}
