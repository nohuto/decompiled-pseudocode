/*
 * XREFs of ndisReferenceFilterByHandle @ 0x1C005C744
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C011A9B4 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001C808 (ndisReferenceRefEx.c)
 */

bool __fastcall ndisReferenceFilterByHandle(KSPIN_LOCK *a1, char a2)
{
  bool v3; // bl
  KIRQL v4; // si
  KSPIN_LOCK *i; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v7) = a2;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
  for ( i = (KSPIN_LOCK *)ndisGlobalFilterList; i; i = (KSPIN_LOCK *)i[13] )
  {
    if ( i == a1 )
    {
      v3 = ndisReferenceRefEx(a1 + 9, 0, &v7);
      break;
    }
  }
  KeReleaseSpinLock(&ndisGlobalFilterListLock, v4);
  return v3;
}
