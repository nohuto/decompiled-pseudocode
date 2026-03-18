/*
 * XREFs of SetWindowCompositionHolographic @ 0x1C01FA40C
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00703F0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C002DC68 (_GetWindowCompositionInfo.c)
 *     SetWindowCompositionInfo @ 0x1C0070090 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00702C4 (DwmAsyncSetCompositionAttribute.c)
 */

__int64 __fastcall SetWindowCompositionHolographic(__int64 *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  void *v9; // rax
  _DWORD v11[14]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1073741816;
  v5 = *(_DWORD *)a2 != 0;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v11) )
  {
    if ( -__CFSHR__(v11[0], 14) == v5 )
      return 0;
    v11[0] = (v5 << 13) | v11[0] & 0xFFFFDFFF;
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v11) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v9 = (void *)ReferenceDwmApiPort(v7, v6, v8);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v9, *a1, 23, a2);
    }
  }
  return v4;
}
