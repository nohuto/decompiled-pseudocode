/*
 * XREFs of _dynamic_initializer_for__MPCManagerClientFactory::m_spThreadReference__ @ 0x180001550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_initializer_for__MPCManagerClientFactory::m_spThreadReference__()
{
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 312LL) = 0LL;
  return _tlregdtor(dynamic_atexit_destructor_for__MPCManagerClientFactory::m_spThreadReference__);
}
