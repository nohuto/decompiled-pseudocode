/*
 * XREFs of ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C0072014
 * Callers:
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C0071F48 (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     NdisFreeRefCount @ 0x1C00721F0 (NdisFreeRefCount.c)
 *     NdisGetRefCount @ 0x1C0072250 (NdisGetRefCount.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 */

struct _NDIS_REFCOUNT_BLOCK *__fastcall ndisRefCountBlockFromRefCountHandle(ULONG_PTR BugCheckParameter3)
{
  if ( BugCheckParameter3 - 2 <= 1 )
    return 0LL;
  if ( BugCheckParameter3 < 2 )
    ndisBugCheckEx(0x1EuLL, 3uLL, BugCheckParameter3, 0LL);
  return (struct _NDIS_REFCOUNT_BLOCK *)BugCheckParameter3;
}
