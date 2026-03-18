/*
 * XREFs of ?AddRef@CFrictionAccelerator@@UEAAKXZ @ 0x1800DA7F0
 * Callers:
 *     ?AddRef@CSpringAccelerator@@W7EAAKXZ @ 0x1800ED3F0 (-AddRef@CSpringAccelerator@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFrictionAccelerator::AddRef(CFrictionAccelerator *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
