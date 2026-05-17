/*
 * XREFs of RtlpGetEntireXStateAreaLength @ 0x1800087A4
 * Callers:
 *     RtlGetExtendedContextLength2 @ 0x180003420 (RtlGetExtendedContextLength2.c)
 *     RtlDispatchException @ 0x1800048E0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 *     RtlInitializeExtendedContext2 @ 0x180008450 (RtlInitializeExtendedContext2.c)
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetEntireXStateAreaLength(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 result; // rax
  __int64 v4; // rdx

  v2 = 2;
  if ( (MEMORY[0x7FFE03EC] & 2) == 0 )
    return MEMORY[0x7FFE03E8];
  result = 576LL;
  v4 = 2147354124LL;
  do
  {
    if ( ((1LL << v2) & a1) != 0 )
    {
      if ( ((1LL << v2) & MEMORY[0x7FFE05F8]) != 0 )
        LODWORD(result) = (result + 63) & 0xFFFFFFC0;
      result = (unsigned int)(*(_DWORD *)v4 + result);
    }
    ++v2;
    v4 += 4LL;
  }
  while ( v2 < 0x40 );
  return result;
}
