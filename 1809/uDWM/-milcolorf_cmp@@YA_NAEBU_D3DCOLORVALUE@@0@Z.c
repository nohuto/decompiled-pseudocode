/*
 * XREFs of ?milcolorf_cmp@@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x180037628
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180018E30 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall milcolorf_cmp(const struct _D3DCOLORVALUE *a1, const struct _D3DCOLORVALUE *a2)
{
  return a1->a != a2->a || a1->r != a2->r || a1->g != a2->g || a1->b != a2->b;
}
