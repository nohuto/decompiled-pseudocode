/*
 * XREFs of MiMakePrototypePteDirect @ 0x140027BA0
 * Callers:
 *     MiAddMappedPtes @ 0x1405E0500 (MiAddMappedPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 << 16) | 0x400;
  if ( !qword_14043B180 )
    return v1;
  if ( (qword_14043B180 & v1) != 0 )
    return v1 | 0x10;
  return v1 | qword_14043B180;
}
