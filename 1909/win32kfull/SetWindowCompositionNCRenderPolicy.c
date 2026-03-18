/*
 * XREFs of SetWindowCompositionNCRenderPolicy @ 0x1C023B5D8
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00277B0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     DwmAsyncSetCompositionAttribute @ 0x1C00191E8 (DwmAsyncSetCompositionAttribute.c)
 *     SetWindowCompositionInfo @ 0x1C001A5F4 (SetWindowCompositionInfo.c)
 *     _GetWindowCompositionInfo @ 0x1C0068944 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall SetWindowCompositionNCRenderPolicy(__int64 *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rax
  _DWORD v10[14]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1073741816;
  memset(v10, 0, 0x28uLL);
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v10) )
  {
    if ( v10[1] == *(_DWORD *)a2 )
      return 0;
    v10[1] = *(_DWORD *)a2;
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v10) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v8 = (void *)ReferenceDwmApiPort(v6, v5, v7);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v8, *a1, 2, a2);
    }
  }
  return v4;
}
