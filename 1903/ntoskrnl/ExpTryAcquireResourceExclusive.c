/*
 * XREFs of ExpTryAcquireResourceExclusive @ 0x14003DF80
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastResourceExclusive @ 0x14016AEA0 (ExAcquireFastResourceExclusive.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x14033ADE4 (ExpTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpTryAcquireResourceExclusive(__int64 a1)
{
  char result; // al

  if ( *(_DWORD *)(a1 + 64) )
    return 0;
  *(_WORD *)(a1 + 26) |= 0x80u;
  result = 1;
  *(_WORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 64) = 1;
  return result;
}
