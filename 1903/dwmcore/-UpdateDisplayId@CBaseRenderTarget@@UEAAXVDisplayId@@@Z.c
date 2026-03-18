/*
 * XREFs of ?UpdateDisplayId@CBaseRenderTarget@@UEAAXVDisplayId@@@Z @ 0x1800D9EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBaseRenderTarget::UpdateDisplayId(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 48) = a2;
}
