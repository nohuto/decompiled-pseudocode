/*
 * XREFs of SetWindowCompositionHasIconicBitmap @ 0x1C00867AC
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C008A530 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     SetWindowCompositionInfo @ 0x1C008BDD4 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C008BE98 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C00C7274 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall SetWindowCompositionHasIconicBitmap(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  void *v9; // rax
  _DWORD v11[14]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1073741816;
  memset(v11, 0, 0x28uLL);
  v5 = *a2 != 0;
  if ( (unsigned int)GetWindowCompositionInfo(a1, v11) )
  {
    if ( -__CFSHR__(v11[0], 6) == v5 )
      return 0;
    v11[0] = v11[0] & 0xFFFFFFDF | (32 * v5);
    if ( !(unsigned int)SetWindowCompositionInfo(a1, v11) )
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
  return v4;
}
