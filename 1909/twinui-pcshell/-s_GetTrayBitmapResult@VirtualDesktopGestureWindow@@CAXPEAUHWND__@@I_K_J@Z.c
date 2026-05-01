/*
 * XREFs of ?s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@CAXPEAUHWND__@@I_K_J@Z @ 0x180416900
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTrayBitmapResult@VirtualDesktopGestureWindow@@AEAAJAEBUTrayBitmapForVDThumbnailData@@HAEBUCRect@Geometry@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@@Z @ 0x180414780 (-GetTrayBitmapResult@VirtualDesktopGestureWindow@@AEAAJAEBUTrayBitmapForVDThumbnailData@@HAEBUCR.c)
 */

void __fastcall VirtualDesktopGestureWindow::s_GetTrayBitmapResult(HWND a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  volatile int *v5; // rdx
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(v6) = *(_DWORD *)(a3 + 24);
  DWORD1(v6) = *(_DWORD *)(a3 + 28);
  v4 = *(_QWORD *)(a3 + 40);
  *((_QWORD *)&v6 + 1) = *(_QWORD *)(a3 + 32);
  VirtualDesktopGestureWindow::GetTrayBitmapResult(v4, a3, *(_DWORD *)(a3 + 48), &v6, *(_QWORD **)(a3 + 56));
  VirtualDesktopGestureWindow::GetTrayBitmapCallbackData::`scalar deleting destructor'(
    (VirtualDesktopGestureWindow::GetTrayBitmapCallbackData *)a3,
    v5);
}
