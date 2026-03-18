/*
 * XREFs of AlpcpForceUnlinkSecureView @ 0x1405B569C
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x140652738 (AlpcpCleanupProcessViews.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpUnlockBlob @ 0x1405E4F60 (AlpcpUnlockBlob.c)
 *     MmUnsecureVirtualMemory @ 0x14060C520 (MmUnsecureVirtualMemory.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14065E4F8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14065EDF0 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpForceUnlinkSecureView(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rdi
  _KPROCESS *v3; // rsi
  __int64 result; // rax
  _BYTE v5[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  v3 = *(_KPROCESS **)(BugCheckParameter2 + 32);
  AlpcpLockForCachedReferenceBlob(v2);
  if ( BugCheckParameter2 == *(_QWORD *)(v2 + 72) )
  {
    if ( *(_QWORD *)(BugCheckParameter2 + 64) )
    {
      KiStackAttachProcess(v3, 0, (__int64)v5);
      MmUnsecureVirtualMemory(*(HANDLE *)(BugCheckParameter2 + 64));
      KiUnstackDetachProcess((struct _KTHREAD *)v5, 0);
      *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
    }
    *(_DWORD *)(BugCheckParameter2 + 72) |= 1u;
    *(_QWORD *)(v2 + 72) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 72) |= 4u;
  }
  else
  {
    BugCheckParameter2 = 0LL;
  }
  result = AlpcpUnlockBlob(v2);
  if ( BugCheckParameter2 )
    return AlpcpDereferenceBlobEx(BugCheckParameter2);
  return result;
}
