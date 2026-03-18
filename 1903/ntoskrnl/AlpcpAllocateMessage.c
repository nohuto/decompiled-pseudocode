/*
 * XREFs of AlpcpAllocateMessage @ 0x14064A798
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x140646A90 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x1406470B4 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x140648DD8 (AlpcpCreateClientPort.c)
 *     AlpcpCreateReserve @ 0x1406C84A8 (AlpcpCreateReserve.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14064A878 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x14064B994 (AlpcpAllocateBlob.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x1408859A4 (AlpcpEnterAllocationEventMessageLog.c)
 */

__int64 __fastcall AlpcpAllocateMessage(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  ULONG_PTR Blob; // rax
  ULONG_PTR v6; // rdi
  __int64 result; // rax
  int v8; // ebx
  signed __int32 v9; // eax

  if ( a2 )
  {
    if ( a2 < 0x28 )
      return 3221225485LL;
    v4 = a2 + 240;
  }
  else
  {
    v4 = 792LL;
  }
  Blob = AlpcpAllocateBlob(&AlpcMessageType, v4, a3);
  v6 = Blob;
  if ( !Blob )
    return 3221225626LL;
  AlpcpLockForCachedReferenceBlob(Blob);
  v8 = *(_DWORD *)(v6 + 264);
  memset((void *)v6, 0, 0x118uLL);
  *(_WORD *)(v6 + 242) = 40;
  --*(_WORD *)(v6 - 30);
  *(_DWORD *)(v6 + 264) = v8 & 0x7FFFFFFF;
  do
    v9 = _InterlockedIncrement(&AlpcpNextCallbackId);
  while ( !v9 );
  *(_DWORD *)(v6 + 272) = v9;
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterAllocationEventMessageLog(v6);
  *(_WORD *)(v6 + 242) = 40;
  result = 0LL;
  *a1 = v6;
  return result;
}
