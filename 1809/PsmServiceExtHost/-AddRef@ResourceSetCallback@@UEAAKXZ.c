/*
 * XREFs of ?AddRef@ResourceSetCallback@@UEAAKXZ @ 0x18003E7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetCallback::AddRef(ResourceSetCallback *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
