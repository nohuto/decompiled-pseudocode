/*
 * XREFs of ?QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400122F0
 * Callers:
 *     ?QueryInterface@CSystemEffectWrapper@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140018A20 (-QueryInterface@CSystemEffectWrapper@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140018A30 (-QueryInterface@CSystemEffectWrapper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140018A40 (-QueryInterface@CSystemEffectWrapper@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140018A50 (-QueryInterface@CSystemEffectWrapper@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140018A60 (-QueryInterface@CSystemEffectWrapper@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140018A70 (-QueryInterface@CSystemEffectWrapper@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140018A80 (-QueryInterface@CSystemEffectWrapper@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140018A90 (-QueryInterface@CSystemEffectWrapper@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140018AA0 (-QueryInterface@CSystemEffectWrapper@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemEffectWrapper::QueryInterface(CSystemEffectWrapper *this, const struct _GUID *a2, void **a3)
{
  char *v4; // rcx

  v4 = (char *)*((_QWORD *)this + 16);
  if ( !v4 )
    v4 = (char *)this - 8;
  return (**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v4)(v4, a2, a3);
}
