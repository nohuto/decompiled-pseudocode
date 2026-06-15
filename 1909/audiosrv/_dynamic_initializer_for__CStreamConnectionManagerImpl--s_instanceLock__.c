/*
 * XREFs of _dynamic_initializer_for__CStreamConnectionManagerImpl::s_instanceLock__ @ 0x1800012E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_initializer_for__CStreamConnectionManagerImpl::s_instanceLock__()
{
  __int64 result; // rax

  result = 0LL;
  CStreamConnectionManagerImpl::s_instanceLock.Ptr = 0LL;
  return result;
}
