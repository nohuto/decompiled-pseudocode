/*
 * XREFs of ?AddRef@CStartExperienceManager@@UEAAKXZ @ 0x180075C60
 * Callers:
 *     ?AddRef@CStartExperienceManager@@W7EAAKXZ @ 0x1800B4F20 (-AddRef@CStartExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CStartExperienceManager@@WCA@EAAKXZ @ 0x1800B4F30 (-AddRef@CStartExperienceManager@@WCA@EAAKXZ.c)
 *     ?AddRef@CStartExperienceManager@@WCI@EAAKXZ @ 0x1800B4F40 (-AddRef@CStartExperienceManager@@WCI@EAAKXZ.c)
 *     ?AddRef@CStartExperienceManager@@WDA@EAAKXZ @ 0x1800B4F50 (-AddRef@CStartExperienceManager@@WDA@EAAKXZ.c)
 *     ?AddRef@CStartExperienceManager@@WDI@EAAKXZ @ 0x1800B4F60 (-AddRef@CStartExperienceManager@@WDI@EAAKXZ.c)
 *     ?AddRef@CStartExperienceManager@@WEA@EAAKXZ @ 0x1800B4F70 (-AddRef@CStartExperienceManager@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStartExperienceManager::AddRef(CStartExperienceManager *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 10);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 10, v1 + 1, v1);
    if ( v4 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
