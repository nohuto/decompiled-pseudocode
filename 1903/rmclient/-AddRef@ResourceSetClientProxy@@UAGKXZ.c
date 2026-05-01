/*
 * XREFs of ?AddRef@ResourceSetClientProxy@@UAGKXZ @ 0x1000BC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int32 __stdcall ResourceSetClientProxy::AddRef(ResourceSetClientProxy *this)
{
  return _InterlockedIncrement((volatile signed __int32 *)this + 103);
}
