/*
 * XREFs of MiPageMightBeZero @ 0x140142BF8
 * Callers:
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140024CF0 (MiGetPagePrivilege.c)
 */

__int64 __fastcall MiPageMightBeZero(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  __int64 result; // rax

  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
  {
    if ( *(__int64 *)(a2 + 8) >= 0 || (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
      return 0LL;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 )
      return 0LL;
    if ( (MiGetPagePrivilege(a2, 0, 0LL) & 0xFFFFFFFD) != 0 )
      return 0LL;
    if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) == 0 )
    {
      v5 = a3 << 25 >> 16;
      if ( v5 >= 0xFFFFF68000000000uLL && v5 <= 0xFFFFF6FFFFFFFFFFuLL )
        return 0LL;
    }
  }
  result = 1LL;
  if ( *(_WORD *)(a2 + 32) != 1 || (*(_BYTE *)(a2 + 34) & 0xC0) != 0x40 || (*(_BYTE *)(a2 + 35) & 0x40) != 0 )
    return 0LL;
  return result;
}
