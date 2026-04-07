/*
 * XREFs of ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800852A0
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800142F0 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnAccentStateUpdated@CAccent@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x1800853B4 (-OnAccentStateUpdated@CAccent@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180028BF0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800870D8 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 */

char __fastcall CAccentBlurBehind::IsBlurBehindDirty(
        CAccentBlurBehind *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        __int64 a4,
        HWND a5)
{
  CTopLevelWindow *v5; // r10
  char v6; // bl
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // edx
  char v14; // al
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *i; // rcx
  HWND Blink; // rdx
  struct tagRECT rcDst; // [rsp+30h] [rbp-38h] BYREF

  v5 = (CTopLevelWindow *)*((_QWORD *)a2 + 49);
  v6 = 0;
  if ( v5 )
  {
    v11 = *((_QWORD *)this + 36);
    v12 = 0LL;
    v13 = *((_DWORD *)this + 78);
    v6 = 1;
    if ( v13 )
    {
      while ( *((_QWORD *)a2 + 5) != *(_QWORD *)(v11 + 8 * v12) )
      {
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= v13 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      CTopLevelWindow::GetActualWindowRect(v5, &rcDst, 0, 1, 1);
      v14 = *((_BYTE *)a2 + 596);
      if ( (v14 & 1) == 0
        || *((char *)a2 + 599) < 0
        || (v14 & 4) != 0
        || (*((_DWORD *)a2 + 25) & 0x20000000) != 0
        || !IntersectRect(&rcDst, &rcDst, a3) )
      {
        return 0;
      }
      else
      {
        WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                                 *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                 a4);
        for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
        {
          Blink = (HWND)i[2].Blink;
          if ( Blink == a5 )
            break;
          if ( Blink == *((HWND *)a2 + 5) )
            return 0;
        }
      }
    }
  }
  return v6;
}
