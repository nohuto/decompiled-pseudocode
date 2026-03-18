/*
 * XREFs of ExpTryAcquireResourceShared @ 0x14016BA98
 * Callers:
 *     ExAcquireSharedWaitForExclusive @ 0x14016A810 (ExAcquireSharedWaitForExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14016B740 (ExAcquireFastResourceShared.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpTryAcquireResourceShared(__int64 a1)
{
  int v2; // ecx
  char result; // al

  v2 = *(_DWORD *)(a1 + 64);
  if ( v2 && (*(char *)(a1 + 26) < 0 || *(_DWORD *)(a1 + 76)) )
    return 0;
  result = 1;
  *(_WORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 64) = v2 + 1;
  return result;
}
