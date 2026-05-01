/*
 * XREFs of ?AddRef@CJumpViewExperienceManager@@UEAAKXZ @ 0x180083C20
 * Callers:
 *     ?AddRef@CJumpViewExperienceManager@@W7EAAKXZ @ 0x1800B5110 (-AddRef@CJumpViewExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CJumpViewExperienceManager@@WBA@EAAKXZ @ 0x1800B5120 (-AddRef@CJumpViewExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CJumpViewExperienceManager@@WBI@EAAKXZ @ 0x1800B5130 (-AddRef@CJumpViewExperienceManager@@WBI@EAAKXZ.c)
 *     ?AddRef@CJumpViewExperienceManager@@WCA@EAAKXZ @ 0x1800B5140 (-AddRef@CJumpViewExperienceManager@@WCA@EAAKXZ.c)
 *     ?AddRef@CJumpViewExperienceManager@@WCI@EAAKXZ @ 0x1800B5150 (-AddRef@CJumpViewExperienceManager@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CJumpViewExperienceManager::AddRef(CJumpViewExperienceManager *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 7);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v1 + 1, v1);
    if ( v4 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
