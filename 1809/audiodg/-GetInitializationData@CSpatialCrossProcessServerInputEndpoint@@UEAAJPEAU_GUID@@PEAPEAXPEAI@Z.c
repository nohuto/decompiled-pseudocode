/*
 * XREFs of ?GetInitializationData@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAU_GUID@@PEAPEAXPEAI@Z @ 0x14005A730
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
  *a2 = this[65];
  *a4 = this[66].Data1;
  *a3 = *(void **)this[66].Data4;
  return 0LL;
}
