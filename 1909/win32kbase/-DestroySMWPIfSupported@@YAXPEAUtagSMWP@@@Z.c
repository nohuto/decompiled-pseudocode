/*
 * XREFs of ?DestroySMWPIfSupported@@YAXPEAUtagSMWP@@@Z @ 0x1C0094040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DestroySMWPIfSupported(struct tagSMWP *a1)
{
  if ( (int)IsDestroySMWPSupported() >= 0 )
    DestroySMWP(a1);
}
