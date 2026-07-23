/*
 * XREFs of UsifSetBaud @ 0x14032DE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall UsifSetBaud(__int64 a1, int a2)
{
  if ( !a1 || !*(_QWORD *)a1 )
    return 0;
  *(_DWORD *)(a1 + 8) = a2;
  return 1;
}
