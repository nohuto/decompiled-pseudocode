/*
 * XREFs of FindSystemDpiCursorSize @ 0x1C00160FC
 * Callers:
 *     NtUserGetIconSize @ 0x1C0012860 (NtUserGetIconSize.c)
 *     NtUserDrawIconEx @ 0x1C00134C0 (NtUserDrawIconEx.c)
 *     NtUserGetIconInfo @ 0x1C0015860 (NtUserGetIconInfo.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0130310 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindSystemDpiCursorSize(__int64 a1)
{
  unsigned __int16 v2; // dx
  int v3; // edx
  __int64 result; // rax

  v2 = *(_WORD *)(PsGetCurrentProcessWin32Process(a1) + 284);
  if ( v2 >= 0x90u )
  {
    if ( v2 >= 0xC0u )
    {
      if ( v2 >= 0x120u )
        v3 = v2 < 0x180u ? 96 : 128;
      else
        v3 = 64;
    }
    else
    {
      v3 = 48;
    }
  }
  else
  {
    v3 = 32;
  }
  result = *(_QWORD *)(a1 + 48);
  if ( !result )
    return a1;
  do
  {
    if ( *(_DWORD *)(result + 76) == v3 )
      break;
    result = *(_QWORD *)(result + 40);
  }
  while ( result );
  if ( !result )
    return a1;
  return result;
}
