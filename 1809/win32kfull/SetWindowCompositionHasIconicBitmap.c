/*
 * XREFs of SetWindowCompositionHasIconicBitmap @ 0x1C00BA2A4
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0071350 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
 *     SetWindowCompositionInfo @ 0x1C00731FC (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00BA730 (DwmAsyncSetCompositionAttribute.c)
 */

__int64 __fastcall SetWindowCompositionHasIconicBitmap(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // rax
  _DWORD v9[14]; // [rsp+20h] [rbp-38h] BYREF

  v3 = -1073741816;
  v4 = *a2 != 0;
  if ( (unsigned int)GetWindowCompositionInfo(a1, (__int64)v9) )
  {
    if ( -__CFSHR__(v9[0], 6) == v4 )
      return 0;
    v9[0] = v9[0] & 0xFFFFFFDF | (32 * v4);
    if ( !(unsigned int)SetWindowCompositionInfo(a1, (__int64)v9) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v7 = (void *)ReferenceDwmApiPort(v6, v5);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v7);
    }
  }
  return v3;
}
