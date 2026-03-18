/*
 * XREFs of SdbpGetDeviceDWORD @ 0x140923A3C
 * Callers:
 *     SdbpMatchDeviceDWORD @ 0x140923FD0 (SdbpMatchDeviceDWORD.c)
 * Callees:
 *     SdbReadDWORDTag @ 0x14070BD7C (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14070C2E0 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpGetDeviceDWORD(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v5; // ebx
  unsigned int FirstTag; // eax

  v5 = -1;
  FirstTag = SdbFindFirstTag(a1, a2, a3);
  if ( FirstTag )
    return (unsigned int)SdbReadDWORDTag(a1, FirstTag, a3);
  return v5;
}
