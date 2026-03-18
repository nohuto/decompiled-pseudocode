/*
 * XREFs of SetWindowCompositionFreezeSWR @ 0x1C00B9FFC
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0071350 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
 *     SetWindowCompositionInfo @ 0x1C00731FC (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00BA730 (DwmAsyncSetCompositionAttribute.c)
 *     PostIAMShellHookMessageEx @ 0x1C00DC890 (PostIAMShellHookMessageEx.c)
 */

__int64 __fastcall SetWindowCompositionFreezeSWR(_QWORD *a1, int *a2)
{
  int v2; // ebp
  int v4; // edi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rax
  _DWORD v10[14]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *a2;
  v4 = *a2 != 0;
  v5 = -1073741816;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v10) )
  {
    if ( -__CFSHR__(v10[0], 13) == v4 )
    {
      return 0;
    }
    else
    {
      v10[0] = v10[0] & 0xFFFFEFFF | (v4 << 12);
      if ( (unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v10) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v8 = (void *)ReferenceDwmApiPort(v7, v6);
          v5 = DwmAsyncSetCompositionAttribute(v8);
        }
        else
        {
          v5 = 0;
        }
        if ( !v2 )
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 36LL, *a1);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v5;
}
