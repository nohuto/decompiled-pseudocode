/*
 * XREFs of ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C0006570
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0001230 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C00C7A78 (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     NdisFreeRefCount @ 0x1C00C7CE0 (NdisFreeRefCount.c)
 *     NdisGetRefCount @ 0x1C00C7D40 (NdisGetRefCount.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 */

struct _NDIS_REFCOUNT_BLOCK *__fastcall ndisRefCountBlockFromRefCountHandle(ULONG_PTR BugCheckParameter3)
{
  if ( BugCheckParameter3 - 2 <= 1 )
    return 0LL;
  if ( BugCheckParameter3 < 2 )
    ndisBugCheckEx(0x1EuLL, 3uLL, BugCheckParameter3, 0LL);
  return (struct _NDIS_REFCOUNT_BLOCK *)BugCheckParameter3;
}
