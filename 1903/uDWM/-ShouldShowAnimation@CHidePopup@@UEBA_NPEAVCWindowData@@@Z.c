/*
 * XREFs of ?ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z @ 0x1800A9540
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18001617C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x180093508 (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 */

char __fastcall CHidePopup::ShouldShowAnimation(CHidePopup *this, struct CWindowData *a2)
{
  char v3; // di
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *i; // rbx
  RECT v6; // xmm1
  unsigned __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  RECT rcSrc2; // [rsp+28h] [rbp-40h] BYREF
  RECT rcSrc1; // [rsp+38h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+48h] [rbp-20h] BYREF

  v3 = 1;
  if ( (unsigned int)GetDesktopID(1LL, &v8) )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                             v8);
    for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
    {
      if ( (HIDWORD(i[38].Flink) & 0xFFF) == 0x18 )
      {
        if ( !CWindowData::WillEndAnimationCloaked((CWindowData *)i) )
        {
          v6 = (RECT)*((_OWORD *)a2 + 3);
          rcSrc1 = (RECT)i[3];
          rcSrc2 = v6;
          if ( IntersectRect(&rcDst, &rcSrc1, &rcSrc2) )
            return 0;
        }
        return v3;
      }
    }
  }
  return v3;
}
