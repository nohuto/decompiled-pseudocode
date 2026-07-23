/*
 * XREFs of EtwpGetKmRegHandle @ 0x180068844
 * Callers:
 *     EtwEventWriteEndScenario @ 0x180068760 (EtwEventWriteEndScenario.c)
 *     EtwEventWriteStartScenario @ 0x18008F140 (EtwEventWriteStartScenario.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetKmRegHandle(unsigned __int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx

  if ( !a2 )
    return 87LL;
  *a2 = 0;
  v2 = HIWORD(a1);
  if ( !HIWORD(a1) )
    return 6LL;
  v3 = a1 & 0xFFFFFFFFFFFFLL;
  if ( (v3 & 1) != 0 || (_WORD)v2 != *(_WORD *)(v3 + 96) )
    return 6LL;
  *a2 = *(_DWORD *)(v3 + 88);
  return 0LL;
}
