/*
 * XREFs of AlpcpAllocateBlob @ 0x14064B994
 * Callers:
 *     AlpcpCreateClientPort @ 0x140648DD8 (AlpcpCreateClientPort.c)
 *     AlpcpCreateRegion @ 0x1406496F0 (AlpcpCreateRegion.c)
 *     AlpcpAllocateMessage @ 0x14064A798 (AlpcpAllocateMessage.c)
 *     AlpcpCreateView @ 0x14064B228 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14064B500 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateSection @ 0x14068A9E8 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1406C84A8 (AlpcpCreateReserve.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406CB630 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateConnectionPort @ 0x1406D9518 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14008D57C (ExAllocateFromNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

char *__fastcall AlpcpAllocateBlob(__int64 a1, __int64 a2, int a3)
{
  SIZE_T v3; // rdx
  char *result; // rax
  char v6; // si
  _BYTE *v7; // rbx
  char v8; // al

  v3 = a2 + 48;
  if ( a3 || *(_QWORD *)(a1 + 48) < v3 )
  {
    if ( *(_QWORD *)(a1 + 48) )
      result = (char *)(*((__int64 (__fastcall **)(__int64, SIZE_T, _QWORD))&AlpcpLookasides
                        + 16 * (unsigned __int64)*(unsigned int *)(a1 + 8)
                        + 6))(
                         1LL,
                         v3,
                         *(unsigned int *)(a1 + 4));
    else
      result = (char *)ExAllocatePoolWithTag(PagedPool, v3, *(_DWORD *)(a1 + 4));
    v6 = 0;
  }
  else
  {
    result = (char *)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(a1 + 8));
    v6 = 2;
  }
  v7 = result;
  if ( result )
  {
    memset(result, 0, 0x30uLL);
    v7[17] = *(_BYTE *)a1;
    *((_QWORD *)v7 + 1) = v7;
    *(_QWORD *)v7 = v7;
    v8 = v7[16] & 0xFD;
    *((_QWORD *)v7 + 3) = 1LL;
    v7[16] = v6 | v8;
    return v7 + 48;
  }
  return result;
}
