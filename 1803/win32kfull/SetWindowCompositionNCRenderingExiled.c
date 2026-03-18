/*
 * XREFs of SetWindowCompositionNCRenderingExiled @ 0x1C006EAEC
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00703F0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C002DC68 (_GetWindowCompositionInfo.c)
 *     SetWindowCompositionInfo @ 0x1C0070090 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00702C4 (DwmAsyncSetCompositionAttribute.c)
 */

__int64 __fastcall SetWindowCompositionNCRenderingExiled(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  void *v9; // rax
  _DWORD v10[14]; // [rsp+20h] [rbp-38h] BYREF

  v3 = -1073741816;
  v4 = *a2 != 0;
  if ( (unsigned int)GetWindowCompositionInfo(a1, (__int64)v10) )
  {
    if ( -(v10[0] & 1) == v4 )
      return 0;
    v10[0] = v4 | v10[0] & 0xFFFFFFFE;
    if ( !(unsigned int)SetWindowCompositionInfo(a1, v10) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v9 = (void *)ReferenceDwmApiPort(v7, v6, v8);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v9);
    }
  }
  return v3;
}
