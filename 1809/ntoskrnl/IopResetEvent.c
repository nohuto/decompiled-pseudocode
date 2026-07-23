/*
 * XREFs of IopResetEvent @ 0x1400B8AA4
 * Callers:
 *     IopCloseFile @ 0x14063AB30 (IopCloseFile.c)
 * Callees:
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 */

LONG __fastcall IopResetEvent(__int64 a1)
{
  LONG result; // eax

  if ( (*(_DWORD *)(a1 + 80) & 0x4000000) == 0 )
    return KeResetEvent((PRKEVENT)(a1 + 152));
  return result;
}
