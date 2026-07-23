/*
 * XREFs of EtwpIsStackWalkingEnabled @ 0x140727F70
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x140727650 (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall EtwpIsStackWalkingEnabled(__int64 a1, __int16 a2)
{
  char v2; // r8

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 832) & 0x80u) != 0 )
    return _bittest(*(const signed __int32 **)(a1 + 984), a2 & 0x1FFF);
  return v2;
}
