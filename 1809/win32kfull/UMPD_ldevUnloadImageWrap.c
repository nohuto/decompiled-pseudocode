/*
 * XREFs of UMPD_ldevUnloadImageWrap @ 0x1C0132930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UMPD_ldevUnloadImageWrap(void *a1)
{
  if ( a1 )
    EngFreeMem(a1);
}
