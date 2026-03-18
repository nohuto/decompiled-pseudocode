/*
 * XREFs of AlpcpAllocateBlob @ 0x14065F634
 * Callers:
 *     AlpcpCreateSection @ 0x140650B08 (AlpcpCreateSection.c)
 *     AlpcpCreateClientPort @ 0x14065CA48 (AlpcpCreateClientPort.c)
 *     AlpcpCreateRegion @ 0x14065D360 (AlpcpCreateRegion.c)
 *     AlpcpAllocateMessage @ 0x14065E418 (AlpcpAllocateMessage.c)
 *     AlpcpCreateView @ 0x14065EEC8 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14065F1A0 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x1406C67D8 (AlpcpCreateReserve.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406CA460 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateConnectionPort @ 0x1406D9188 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400CA44C (ExAllocateFromNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
