/*
 * XREFs of ?AddRef@CortanaSharedExperienceManager@@UEAAKXZ @ 0x180083E30
 * Callers:
 *     ?AddRef@CortanaSharedExperienceManager@@W7EAAKXZ @ 0x1800B4730 (-AddRef@CortanaSharedExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CortanaSharedExperienceManager@@WBA@EAAKXZ @ 0x1800B4740 (-AddRef@CortanaSharedExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CortanaSharedExperienceManager@@WBI@EAAKXZ @ 0x1800B4750 (-AddRef@CortanaSharedExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaSharedExperienceManager::AddRef(CortanaSharedExperienceManager *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 5);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v1 + 1, v1);
    if ( v4 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
