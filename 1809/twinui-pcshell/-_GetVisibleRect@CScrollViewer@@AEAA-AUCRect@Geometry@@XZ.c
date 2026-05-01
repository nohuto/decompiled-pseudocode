/*
 * XREFs of ?_GetVisibleRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x18031D4DC
 * Callers:
 *     ?GetContentLocation@CScrollViewer@@UEAA?AUCRect@Geometry@@XZ @ 0x18031C690 (-GetContentLocation@CScrollViewer@@UEAA-AUCRect@Geometry@@XZ.c)
 *     ?GetViewportPercent@CScrollViewer@@UEAANXZ @ 0x18031C7D0 (-GetViewportPercent@CScrollViewer@@UEAANXZ.c)
 *     ?HitTest@CScrollViewer@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x18031C8B0 (-HitTest@CScrollViewer@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?ScrollIntoView@CScrollViewer@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x18031CD10 (-ScrollIntoView@CScrollViewer@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?_GetMinScrollOffset@CScrollViewer@@AEAAHXZ @ 0x18031D3C0 (-_GetMinScrollOffset@CScrollViewer@@AEAAHXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScrollViewer::_GetVisibleRect(__int64 a1, __int64 a2)
{
  int v3; // ebx
  int v4; // edi
  __int128 v5; // xmm0
  __int64 result; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 56);
  v4 = *(_DWORD *)(a1 + 60);
  v5 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 248) + 32LL))(
                    *(_QWORD *)(a1 + 248),
                    v7);
  result = a2;
  *(_OWORD *)a2 = v5;
  *(_DWORD *)a2 += v3;
  *(_DWORD *)(a2 + 8) += v3;
  *(_DWORD *)(a2 + 12) += v4;
  *(_DWORD *)(a2 + 4) += v4;
  return result;
}
