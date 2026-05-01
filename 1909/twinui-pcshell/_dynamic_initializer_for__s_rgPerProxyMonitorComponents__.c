/*
 * XREFs of _dynamic_initializer_for__s_rgPerProxyMonitorComponents__ @ 0x180001400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

GUID *dynamic_initializer_for__s_rgPerProxyMonitorComponents__()
{
  GUID *result; // rax

  qword_1805B732C = 0LL;
  dword_1805B7334 = 0;
  result = &CLSID_ImmersiveBackstackManager;
  qword_1805B7338 = (__int64)&CLSID_ImmersiveBackstackManager;
  xmmword_1805B7340 = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  return result;
}
