/*
 * XREFs of UserIsWindowGdiScaled @ 0x1C0071460
 * Callers:
 *     ?DxgkEngGetWindowGdiDpiScalingFactor@@YAGQEAUHWND__@@@Z @ 0x1C00FCF60 (-DxgkEngGetWindowGdiDpiScalingFactor@@YAGQEAUHWND__@@@Z.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0024E60 (ValidateHwndEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall UserIsWindowGdiScaled(void *a1, _WORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 result; // rax

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    return 0LL;
  v4 = ValidateHwndEx(a1, 1, 0);
  if ( !v4 )
    return 0LL;
  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    return 0LL;
  if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
    return 0LL;
  if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) == 0 )
    return 0LL;
  v5 = *(_QWORD *)(v4 + 40);
  if ( (*(_DWORD *)(v5 + 288) & 0x4000000F) != 0x40000000 )
    return 0LL;
  result = 1LL;
  *a2 = *(_WORD *)(v5 + 284);
  return result;
}
