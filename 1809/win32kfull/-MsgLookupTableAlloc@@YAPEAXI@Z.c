/*
 * XREFs of ?MsgLookupTableAlloc@@YAPEAXI@Z @ 0x1C00D0BC8
 * Callers:
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00D0AA0 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall MsgLookupTableAlloc(int a1)
{
  int v1; // ecx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( !v1 )
    {
      v2 = 128LL;
      goto LABEL_5;
    }
    if ( v1 != 1 )
      return 0LL;
  }
  v2 = 64LL;
LABEL_5:
  v4 = Win32AllocPoolZInit(v2, 1819112277LL);
  if ( !v4 )
    UserSetLastError(14LL, v3, v5, v6);
  return v4;
}
