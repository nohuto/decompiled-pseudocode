/*
 * XREFs of PsGetServerSiloActiveConsoleId @ 0x140306654
 * Callers:
 *     IopGetThreadActiveConsoleId @ 0x14085670C (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloActiveConsoleId(__int64 a1)
{
  _QWORD *v1; // rax

  v1 = &PspHostSiloGlobals;
  if ( a1 )
    v1 = *(_QWORD **)(a1 + 1256);
  return *(unsigned int *)(v1[138] + 4LL);
}
