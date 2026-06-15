/*
 * XREFs of ?Release@CSystemEffectWrapper@@UEAAKXZ @ 0x140018260
 * Callers:
 *     ?Release@CSystemEffectWrapper@@W7EAAKXZ @ 0x14001E6D0 (-Release@CSystemEffectWrapper@@W7EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WBA@EAAKXZ @ 0x14001E6E0 (-Release@CSystemEffectWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WBI@EAAKXZ @ 0x14001E6F0 (-Release@CSystemEffectWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WCA@EAAKXZ @ 0x14001E700 (-Release@CSystemEffectWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WCI@EAAKXZ @ 0x14001E710 (-Release@CSystemEffectWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WDA@EAAKXZ @ 0x14001E720 (-Release@CSystemEffectWrapper@@WDA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WDI@EAAKXZ @ 0x14001E730 (-Release@CSystemEffectWrapper@@WDI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WEA@EAAKXZ @ 0x14001E740 (-Release@CSystemEffectWrapper@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemEffectWrapper::Release(CSystemEffectWrapper *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 15);
  if ( !v2 )
    v2 = (char *)this - 8;
  return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
}
