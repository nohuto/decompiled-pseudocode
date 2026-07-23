/*
 * XREFs of SdbpCheckOSKind @ 0x1408E81B0
 * Callers:
 *     <none>
 * Callees:
 *     SdbReadDWORDTag @ 0x14067DF58 (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbpCheckOSKind(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  *a1 = ((unsigned int)SdbReadDWORDTag(a3, a5, 0) & *(_DWORD *)(a2 + 560)) != 0;
  return 1LL;
}
