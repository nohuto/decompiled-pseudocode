/*
 * XREFs of SetWindowCompositionDisallowPeek @ 0x1C023BA50
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C008A530 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     SetWindowCompositionInfo @ 0x1C008BDD4 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C008BE98 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C00C7274 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall SetWindowCompositionDisallowPeek(__int64 *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void *v10; // rax
  _DWORD v12[14]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1073741816;
  memset(v12, 0, 0x28uLL);
  v5 = *(_DWORD *)a2 != 0;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v12, v6) )
  {
    if ( -__CFSHR__(v12[0], 10) == v5 )
      return 0;
    v12[0] = v12[0] & 0xFFFFFDFF | (v5 << 9);
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v12) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v10 = (void *)ReferenceDwmApiPort(v8, v7, v9);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v10, *a1, 16, a2);
    }
  }
  return v4;
}
