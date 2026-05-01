/*
 * XREFs of ?AddRef@CActionCenterExperienceManager@@UEAAKXZ @ 0x1800798E0
 * Callers:
 *     ?AddRef@CActionCenterExperienceManager@@W7EAAKXZ @ 0x1800B3FE0 (-AddRef@CActionCenterExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WBA@EAAKXZ @ 0x1800B3FF0 (-AddRef@CActionCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WBI@EAAKXZ @ 0x1800B4000 (-AddRef@CActionCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WCA@EAAKXZ @ 0x1800B4010 (-AddRef@CActionCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WCI@EAAKXZ @ 0x1800B4020 (-AddRef@CActionCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WDA@EAAKXZ @ 0x1800B4030 (-AddRef@CActionCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WDI@EAAKXZ @ 0x1800B4040 (-AddRef@CActionCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WEA@EAAKXZ @ 0x1800B4050 (-AddRef@CActionCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WEI@EAAKXZ @ 0x1800B4060 (-AddRef@CActionCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WFA@EAAKXZ @ 0x1800B4070 (-AddRef@CActionCenterExperienceManager@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CActionCenterExperienceManager::AddRef(CActionCenterExperienceManager *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 12);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 12, v1 + 1, v1);
    if ( v4 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
