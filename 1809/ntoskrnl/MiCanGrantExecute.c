/*
 * XREFs of MiCanGrantExecute @ 0x1402BBD50
 * Callers:
 *     MiValidFault @ 0x1400B6D30 (MiValidFault.c)
 *     MiLargePageFault @ 0x1402BC5C8 (MiLargePageFault.c)
 * Callees:
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 */

_BOOL8 __fastcall MiCanGrantExecute(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  char v4; // dl
  unsigned __int64 Address; // rax
  int v6; // ecx
  _BOOL8 result; // rax

  v2 = *(_QWORD *)(a1 + 1064);
  result = 0;
  if ( v2 )
  {
    if ( *(_WORD *)(v2 + 8) == 332 )
    {
      if ( (KeFeatureBits & 0x40000000) != 0
        || (v4 = *(_BYTE *)(a1 + 447), (v4 & 2) != 0)
        || (KeFeatureBits & 0x80000000) == 0 && (v4 & 1) == 0 )
      {
        if ( (a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 && (*(_DWORD *)(a1 + 1740) & 1) == 0 )
          return 1;
        Address = MiLocateAddress(a2);
        if ( Address )
        {
          v6 = *(_DWORD *)(Address + 48);
          if ( (v6 & 7) != 3 && ((v6 & 7) != 2 || (v6 & 0xF8) != 8) )
            return 1;
        }
      }
    }
  }
  return result;
}
