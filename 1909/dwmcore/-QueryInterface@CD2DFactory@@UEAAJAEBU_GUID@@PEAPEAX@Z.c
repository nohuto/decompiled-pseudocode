/*
 * XREFs of ?QueryInterface@CD2DFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18021C0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CD2DFactory::QueryInterface(CD2DFactory *this, const struct _GUID *a2, void **a3)
{
  *a3 = 0LL;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80004001, 0x117u, 0LL);
  return 2147500033LL;
}
