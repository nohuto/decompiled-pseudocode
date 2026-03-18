/*
 * XREFs of _SetProcessDefaultLayout @ 0x1C01C3C70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall SetProcessDefaultLayout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (a1 & 0xFFFFFFF8) != 0 )
  {
    UserSetLastError(87LL, a2, a3, a4);
    return 0LL;
  }
  else
  {
    *(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 824) = a1;
    return 1LL;
  }
}
