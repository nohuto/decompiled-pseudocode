/*
 * XREFs of NtUserGetClipboardFormatName @ 0x1C01029F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClipboardFormatName(unsigned __int16 a1, volatile void *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx

  ProbeForWrite(a2, 2LL * a3, 2u);
  if ( a1 < 0xC000u )
  {
    v9 = 0;
    UserSetLastError(87LL, v6, v7, v8);
  }
  else
  {
    return (unsigned int)UserGetAtomName(a1, a2, a3);
  }
  return v9;
}
