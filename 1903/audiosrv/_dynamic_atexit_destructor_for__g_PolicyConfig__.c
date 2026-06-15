/*
 * XREFs of _dynamic_atexit_destructor_for__g_PolicyConfig__ @ 0x180073990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_PolicyConfig__()
{
  return Microsoft::WRL::ComPtr<CPolicyConfig>::InternalRelease((__int64 *)&g_PolicyConfig);
}
