/*
 * XREFs of ExpCovFreeUnloadedModuleEntry @ 0x1409147EC
 * Callers:
 *     ExpCovCreateUnloadedModuleEntry @ 0x1409144F0 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x140914774 (ExpCovDeleteUnloadedModuleEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 */

__int64 __fastcall ExpCovFreeUnloadedModuleEntry(UNICODE_STRING *P)
{
  wchar_t *Buffer; // rcx

  if ( !P )
    return 3221225485LL;
  if ( P[1].Buffer )
    RtlFreeAnsiString(P + 1);
  if ( P[2].Buffer )
    RtlFreeAnsiString(P + 2);
  Buffer = P[3].Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  ExFreePoolWithTag(P, 0);
  return 0LL;
}
