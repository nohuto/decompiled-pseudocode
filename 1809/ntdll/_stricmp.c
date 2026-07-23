/*
 * XREFs of _stricmp @ 0x180091270
 * Callers:
 *     LdrpGetDelayloadDescriptor @ 0x1800D09C4 (LdrpGetDelayloadDescriptor.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800DBFD8 (AVrfpFindClosestThunkDuplicate.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800E1978 (ImportTablepInsertFunctionSorted.c)
 * Callees:
 *     __ascii_stricmp @ 0x180091220 (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *String1, const char *String2)
{
  return _ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
