/*
 * XREFs of ?s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@CAXPEAUHWND__@@I_K_J@Z @ 0x1803F71F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTrayBitmapResult@VirtualDesktopGestureWindow@@AEAAJAEBUTrayBitmapForVDThumbnailData@@HAEBUCRect@Geometry@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@@Z @ 0x1803F5010 (-GetTrayBitmapResult@VirtualDesktopGestureWindow@@AEAAJAEBUTrayBitmapForVDThumbnailData@@HAEBUCR.c)
 */

void __fastcall VirtualDesktopGestureWindow::s_GetTrayBitmapResult(HWND a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(v5) = *(_DWORD *)(a3 + 24);
  DWORD1(v5) = *(_DWORD *)(a3 + 28);
  v4 = *(_QWORD *)(a3 + 40);
  *((_QWORD *)&v5 + 1) = *(_QWORD *)(a3 + 32);
  VirtualDesktopGestureWindow::GetTrayBitmapResult(v4, a3, *(_DWORD *)(a3 + 48), &v5, *(_QWORD **)(a3 + 56));
  VirtualDesktopGestureWindow::GetTrayBitmapCallbackData::`scalar deleting destructor'((VirtualDesktopGestureWindow::GetTrayBitmapCallbackData *)a3);
}
