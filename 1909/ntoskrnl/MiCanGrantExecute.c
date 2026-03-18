/*
 * XREFs of MiCanGrantExecute @ 0x1402D204C
 * Callers:
 *     MiValidFault @ 0x1400A7010 (MiValidFault.c)
 *     MiLargePageFault @ 0x1402D2A68 (MiLargePageFault.c)
 * Callees:
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
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
        || (v4 = *(_BYTE *)(a1 + 451), (v4 & 2) != 0)
        || (KeFeatureBits & 0x80000000) == 0 && (v4 & 1) == 0 )
      {
        if ( (a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 && (*(_DWORD *)(a1 + 1788) & 1) == 0 )
          return 1;
        Address = MiLocateAddress(a2);
        if ( Address )
        {
          v6 = *(_DWORD *)(Address + 48);
          if ( (v6 & 0x70) != 0x30 && ((v6 & 0x70) != 0x20 || (v6 & 0xF80) != 0x80) )
            return 1;
        }
      }
    }
  }
  return result;
}
