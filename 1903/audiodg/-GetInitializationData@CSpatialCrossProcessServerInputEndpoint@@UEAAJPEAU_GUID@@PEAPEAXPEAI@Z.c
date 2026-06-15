/*
 * XREFs of ?GetInitializationData@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAU_GUID@@PEAPEAXPEAI@Z @ 0x1400588C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetInitializationData(
        struct _GUID *this,
        struct _GUID *a2,
        void **a3,
        unsigned int *a4)
{
  if ( !a2 || !a4 || !a3 )
    return 2147942487LL;
  *a2 = this[63];
  *a4 = this[64].Data1;
  *a3 = *(void **)this[64].Data4;
  return 0LL;
}
