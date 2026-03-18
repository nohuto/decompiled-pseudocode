/*
 * XREFs of MiMakePrototypePteDirect @ 0x140096000
 * Callers:
 *     MiAddMappedPtes @ 0x140647FA0 (MiAddMappedPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 << 16) | 0x400;
  if ( qword_140465800 )
  {
    if ( (qword_140465800 & v1) == 0 )
      return v1 | qword_140465800;
    return v1 | 0x10;
  }
  return v1;
}
