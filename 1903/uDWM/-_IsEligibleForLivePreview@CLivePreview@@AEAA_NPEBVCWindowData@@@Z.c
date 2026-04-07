/*
 * XREFs of ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007C864
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001468C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x18007BADC (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x18002A738 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x18008D620 (-GetLivePreviewWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 */

char __fastcall CLivePreview::_IsEligibleForLivePreview(CLivePreview *this, CTopLevelWindow **a2)
{
  char v2; // bl
  __int64 v4; // rdx
  HWND v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // xmm0_8
  int v8; // eax
  int v9; // eax
  RECT rcSrc1; // [rsp+20h] [rbp-40h] BYREF
  RECT rcSrc2; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  if ( (*((_BYTE *)a2 + 606) & 0x20) == 0 )
  {
    if ( a2[50] )
    {
      if ( CWindowData::IsWindowVisibleAndUncloaked((CWindowData *)a2)
        && (*(_BYTE *)(v4 + 604) & 4) == 0
        && (*(_DWORD *)(v4 + 100) & 0x20000000) == 0 )
      {
        if ( *(_QWORD *)(v4 + 40) )
        {
          v5 = *(HWND *)(v4 + 40);
          if ( v5 != GetDesktopWindow() && v5 != *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 84) )
          {
            CTopLevelWindow::GetLivePreviewWindowRect(a2[50], &rcSrc1, 1);
            v6 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 444);
            v7 = _mm_srli_si128(*(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 444), 8).m128i_u64[0];
            rcSrc2.left = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 444);
            rcSrc2.top = HIDWORD(v6);
            rcSrc2.bottom = HIDWORD(v6) + HIDWORD(v7);
            rcSrc2.right = v7 + v6;
            if ( IntersectRect(&rcDst, &rcSrc1, &rcSrc2) )
            {
              v8 = 0;
              if ( rcSrc1.right - rcSrc1.left >= 0 )
                v8 = rcSrc1.right - rcSrc1.left;
              if ( v8 > 0 )
              {
                v9 = 0;
                if ( rcSrc1.bottom - rcSrc1.top >= 0 )
                  v9 = rcSrc1.bottom - rcSrc1.top;
                if ( v9 > 0 )
                  return 1;
              }
            }
          }
        }
      }
    }
  }
  return v2;
}
