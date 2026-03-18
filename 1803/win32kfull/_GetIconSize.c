/*
 * XREFs of _GetIconSize @ 0x1C0016068
 * Callers:
 *     NtUserGetIconSize @ 0x1C0012860 (NtUserGetIconSize.c)
 *     _DrawIconEx @ 0x1C0012DE0 (_DrawIconEx.c)
 *     NtUserDrawIconEx @ 0x1C00134C0 (NtUserDrawIconEx.c)
 *     _InternalGetIconInfo @ 0x1C0015C34 (_InternalGetIconInfo.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetIconSize(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  *a2 = *(_DWORD *)(a1 + 140);
  *a3 = *(_DWORD *)(a1 + 144);
  result = W32GetCurrentThreadDpiAwarenessContext();
  if ( (result & 0xF) == 0 )
  {
    result = atomUSER32;
    if ( *(_WORD *)(a1 + 72) == atomUSER32 )
    {
      result = *(unsigned int *)(gpsi + 2304LL);
      if ( *a2 == (_DWORD)result )
      {
        result = (unsigned int)(2 * *(_DWORD *)(gpsi + 2308LL));
        if ( *a3 == (_DWORD)result )
        {
          *a2 = *(_DWORD *)(gpsi + 2424LL);
          result = gpsi;
          *a3 = 2 * *(_DWORD *)(gpsi + 2428LL);
        }
      }
    }
  }
  return result;
}
