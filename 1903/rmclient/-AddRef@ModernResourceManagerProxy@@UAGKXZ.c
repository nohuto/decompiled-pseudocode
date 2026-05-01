/*
 * XREFs of ?AddRef@ModernResourceManagerProxy@@UAGKXZ @ 0x1000BBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int32 __stdcall ModernResourceManagerProxy::AddRef(ModernResourceManagerProxy *this)
{
  return _InterlockedIncrement((volatile signed __int32 *)this + 1);
}
