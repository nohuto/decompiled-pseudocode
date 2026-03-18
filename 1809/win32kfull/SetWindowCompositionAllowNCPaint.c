/*
 * XREFs of SetWindowCompositionAllowNCPaint @ 0x1C02233C0
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0071350 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
 *     SetWindowCompositionInfo @ 0x1C00731FC (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00BA730 (DwmAsyncSetCompositionAttribute.c)
 */

__int64 __fastcall SetWindowCompositionAllowNCPaint(__int64 *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rax
  _DWORD v10[14]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1073741816;
  v5 = *(_DWORD *)a2 != 0;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v10) )
  {
    if ( -__CFSHR__(v10[0], 2) == v5 )
      return 0;
    v10[0] = v10[0] & 0xFFFFFFFD | (2 * v5);
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v10) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v8 = (void *)ReferenceDwmApiPort(v7, v6);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v8, *a1, 4, a2);
    }
  }
  return v4;
}
