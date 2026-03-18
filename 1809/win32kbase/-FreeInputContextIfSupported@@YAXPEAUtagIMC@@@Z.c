/*
 * XREFs of ?FreeInputContextIfSupported@@YAXPEAUtagIMC@@@Z @ 0x1C007D3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FreeInputContextIfSupported(struct tagIMC *a1)
{
  if ( (int)IsFreeInputContextSupported() >= 0 )
    FreeInputContext(a1);
}
