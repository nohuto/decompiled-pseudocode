/*
 * XREFs of _stricmp @ 0x18008E1F0
 * Callers:
 *     LdrpGetDelayloadDescriptor @ 0x1800CF294 (LdrpGetDelayloadDescriptor.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800D9EEC (AVrfpFindClosestThunkDuplicate.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800DF5FC (ImportTablepInsertFunctionSorted.c)
 * Callees:
 *     __ascii_stricmp @ 0x18008E1A0 (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *String1, const char *String2)
{
  return _ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
