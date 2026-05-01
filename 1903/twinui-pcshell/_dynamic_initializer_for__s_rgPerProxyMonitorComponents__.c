/*
 * XREFs of _dynamic_initializer_for__s_rgPerProxyMonitorComponents__ @ 0x1800013D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

GUID *dynamic_initializer_for__s_rgPerProxyMonitorComponents__()
{
  GUID *result; // rax

  qword_18058F1AC = 0LL;
  dword_18058F1B4 = 0;
  result = &CLSID_ImmersiveBackstackManager;
  qword_18058F1B8 = (__int64)&CLSID_ImmersiveBackstackManager;
  xmmword_18058F1C0 = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  return result;
}
