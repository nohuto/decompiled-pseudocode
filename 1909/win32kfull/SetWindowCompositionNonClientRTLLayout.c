/*
 * XREFs of SetWindowCompositionNonClientRTLLayout @ 0x1C023B688
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00277B0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     DwmAsyncSetCompositionAttribute @ 0x1C00191E8 (DwmAsyncSetCompositionAttribute.c)
 *     SetWindowCompositionInfo @ 0x1C001A5F4 (SetWindowCompositionInfo.c)
 *     _GetWindowCompositionInfo @ 0x1C0068944 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall SetWindowCompositionNonClientRTLLayout(__int64 *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  void *v9; // rax
  _DWORD v11[14]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1073741816;
  memset(v11, 0, 0x28uLL);
  v5 = *(_DWORD *)a2 != 0;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v11) )
  {
    if ( -__CFSHR__(v11[0], 3) == v5 )
      return 0;
    v11[0] = v11[0] & 0xFFFFFFFB | (4 * v5);
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v11) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v9 = (void *)ReferenceDwmApiPort(v7, v6, v8);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v9, *a1, 6, a2);
    }
  }
  return v4;
}
