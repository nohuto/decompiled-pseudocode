/*
 * XREFs of ?QueryInterface@CD2DFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E3DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DFactory::QueryInterface(CD2DFactory *this, const struct _GUID *a2, void **a3)
{
  *a3 = 0LL;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467263, 0x117u);
  return 2147500033LL;
}
