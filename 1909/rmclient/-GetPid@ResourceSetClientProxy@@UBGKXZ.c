/*
 * XREFs of ?GetPid@ResourceSetClientProxy@@UBGKXZ @ 0x1000BC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall ResourceSetClientProxy::GetPid(ResourceSetClientProxy *this)
{
  return *((_DWORD *)this + 102);
}
