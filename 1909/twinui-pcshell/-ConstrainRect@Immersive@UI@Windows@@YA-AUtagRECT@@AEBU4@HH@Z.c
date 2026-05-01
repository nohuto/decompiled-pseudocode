/*
 * XREFs of ?ConstrainRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBU4@HH@Z @ 0x180435790
 * Callers:
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18034F580 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall Windows::UI::Immersive::ConstrainRect(
        Windows::UI::Immersive *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagRECT *a3,
        int a4)
{
  int v4; // eax

  v4 = retstr->right - retstr->left;
  *(struct tagRECT *)this = *retstr;
  if ( v4 > (int)a3 )
    *((_DWORD *)this + 2) = *(_DWORD *)this + (_DWORD)a3;
  if ( retstr->bottom - retstr->top > a4 )
    *((_DWORD *)this + 3) = a4 + *((_DWORD *)this + 1);
  return (struct tagRECT *)this;
}
