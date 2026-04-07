/*
 * XREFs of ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18008D1E4
 * Callers:
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18008BE60 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18008C054 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x18008D620 (-GetLivePreviewWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180090F60 (-GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?SetOverlayRenderTarget@CWindowList@@AEAAJPEAUHWND__@@NH@Z @ 0x180092AA8 (-SetOverlayRenderTarget@CWindowList@@AEAAJPEAUHWND__@@NH@Z.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CTopLevelWindow::GetActualWindowRect(
        CTopLevelWindow *this,
        struct tagRECT *__return_ptr retstr,
        char a3,
        char a4,
        bool a5)
{
  int v5; // esi
  __int64 v9; // r9
  LONG v10; // r14d
  LONG right; // r10d
  LONG bottom; // r11d
  LONG v13; // r10d
  LONG v14; // r11d
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rbp
  int v18; // edx
  int v19; // r8d
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // eax

  v5 = 0;
  *retstr = *(struct tagRECT *)(*((_QWORD *)this + 90) + 48LL);
  if ( a3 )
    OffsetRect(retstr, -retstr->left, -retstr->top);
  if ( (*((_BYTE *)this + 240) & 4) == 0 || (v9 = 636LL, !a4) )
    v9 = 620LL;
  v10 = *(_DWORD *)((char *)this + v9) + retstr->left;
  right = retstr->right;
  bottom = retstr->bottom;
  retstr->left = v10;
  v13 = right - *(_DWORD *)((char *)this + v9 + 4);
  retstr->right = v13;
  retstr->top += *(_DWORD *)((char *)this + v9 + 8);
  v14 = bottom - *(_DWORD *)((char *)this + v9 + 12);
  retstr->bottom = v14;
  if ( a5 )
  {
    v15 = *((_QWORD *)this + 40);
    if ( v15 )
    {
      v16 = *((_QWORD *)this + 41);
      if ( v16 )
      {
        v17 = *((_QWORD *)this + 43);
        if ( v17 )
        {
          v18 = *((_DWORD *)this + 152) - *(_DWORD *)(v16 + 24) - *(_DWORD *)((char *)this + v9 + 4);
          v19 = *((_DWORD *)this + 154) - *(_DWORD *)(v17 + 28) - *(_DWORD *)((char *)this + v9 + 12);
          v20 = *((_DWORD *)this + 151) - *(_DWORD *)(v15 + 24);
          v21 = 0;
          v22 = v20 - *(_DWORD *)((char *)this + v9);
          if ( v22 >= 0 )
            v21 = v22;
          retstr->left = v10 + v21;
          v23 = 0;
          if ( v18 >= 0 )
            v23 = v18;
          retstr->right = v13 - v23;
          if ( v19 >= 0 )
            v5 = v19;
          retstr->bottom = v14 - v5;
        }
      }
    }
  }
  return retstr;
}
