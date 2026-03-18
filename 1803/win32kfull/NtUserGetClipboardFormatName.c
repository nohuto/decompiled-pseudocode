/*
 * XREFs of NtUserGetClipboardFormatName @ 0x1C0100210
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClipboardFormatName(unsigned __int16 a1, volatile void *a2, unsigned int a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx

  ProbeForWrite(a2, 2LL * a3, 2u);
  if ( a1 < 0xC000u )
  {
    v7 = 0;
    UserSetLastError(87LL, v6);
  }
  else
  {
    return (unsigned int)UserGetAtomName(a1, a2, a3);
  }
  return v7;
}
