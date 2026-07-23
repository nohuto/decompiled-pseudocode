/*
 * XREFs of AlpcpForceUnlinkSecureView @ 0x14084C3E8
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x14060905C (AlpcpCleanupProcessViews.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1405F4430 (MmUnsecureVirtualMemory.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140617E4C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140619C70 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x140638060 (AlpcpUnlockBlob.c)
 */

void __fastcall AlpcpForceUnlinkSecureView(ULONG_PTR a1)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v2; // rbx
  _KPROCESS *v3; // rsi
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = a1;
  v3 = *(_KPROCESS **)(a1 + 32);
  AlpcpLockForCachedReferenceBlob(v1);
  if ( v2 == *(_QWORD *)(v1 + 72) )
  {
    if ( *(_QWORD *)(v2 + 64) )
    {
      KiStackAttachProcess(v3, 0LL, (__int64)v4);
      MmUnsecureVirtualMemory(*(HANDLE *)(v2 + 64));
      KiUnstackDetachProcess((__int64)v4, 0LL);
      *(_QWORD *)(v2 + 64) = 0LL;
    }
    *(_DWORD *)(v2 + 72) |= 1u;
    *(_QWORD *)(v1 + 72) = 0LL;
    *(_DWORD *)(v2 + 72) |= 4u;
  }
  else
  {
    v2 = 0LL;
  }
  AlpcpUnlockBlob(v1);
  if ( v2 )
    AlpcpDereferenceBlobEx(v2, 1);
}
