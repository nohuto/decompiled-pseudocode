/*
 * XREFs of AlpcpPrepareViewForDelivery @ 0x140618954
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x140618818 (AlpcpCaptureViewAttributeInternal.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1405F4430 (MmUnsecureVirtualMemory.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140617E4C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReferenceBlob @ 0x140619428 (AlpcpReferenceBlob.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140619664 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpDereferenceBlobEx @ 0x140619C70 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x140638060 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpPrepareViewForDelivery(ULONG_PTR BugCheckParameter2, char a2, unsigned __int8 a3)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v7; // rbp
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  _QWORD *v12; // rsi
  int v13; // eax
  __int64 v14; // rax
  _BYTE v15[48]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  v7 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  v8 = *(_DWORD *)(v3 + 48);
  if ( (v8 & 1) == 0 )
  {
    if ( !a2 )
      goto LABEL_7;
    if ( *(_DWORD *)(BugCheckParameter2 + 76) )
      goto LABEL_7;
    v9 = *(_DWORD *)(v3 + 52);
    if ( v9 > 2 )
      goto LABEL_7;
    if ( v9 != 1 )
    {
      v12 = *(_QWORD **)(v3 + 56);
      if ( v12 == (_QWORD *)BugCheckParameter2 )
        v12 = (_QWORD *)*v12;
      v13 = *(_DWORD *)(BugCheckParameter2 + 72);
      if ( (v13 & 8) == 0 )
      {
        v14 = MmSecureVirtualMemoryAgainstWrites(
                *(_QWORD *)(BugCheckParameter2 + 32),
                *(_QWORD *)(BugCheckParameter2 + 40),
                *(_QWORD *)(BugCheckParameter2 + 48));
        if ( !v14 )
          goto LABEL_7;
        *(_QWORD *)(BugCheckParameter2 + 64) = v14;
        v13 = *(_DWORD *)(BugCheckParameter2 + 72);
      }
      *(_DWORD *)(BugCheckParameter2 + 72) = v13 & 0xFFFFFFFE;
      AlpcpReferenceBlob(BugCheckParameter2);
      *(_DWORD *)(v3 + 48) |= 1u;
      *(_QWORD *)(v3 + 72) = BugCheckParameter2;
      *(_QWORD *)(v3 + 80) = v12;
      goto LABEL_7;
    }
    *(_QWORD *)(v3 + 80) = BugCheckParameter2;
    *(_DWORD *)(v3 + 48) = v8 | 1;
LABEL_7:
    ++*(_DWORD *)(BugCheckParameter2 + 76);
    v10 = 0;
    goto LABEL_8;
  }
  if ( BugCheckParameter2 == *(_QWORD *)(v3 + 80) )
  {
    if ( !a2 )
    {
      v7 = *(_QWORD *)(v3 + 72);
      if ( v7 )
      {
        if ( *(_QWORD *)(v7 + 64) )
        {
          KiStackAttachProcess(*(_KPROCESS **)(v7 + 32), 0LL, (__int64)v15);
          MmUnsecureVirtualMemory(*(HANDLE *)(v7 + 64));
          KiUnstackDetachProcess((__int64)v15, 0LL);
          *(_QWORD *)(v7 + 64) = 0LL;
        }
        *(_DWORD *)(v7 + 72) |= 1u;
        *(_QWORD *)(v3 + 72) = 0LL;
      }
      *(_QWORD *)(v3 + 80) = 0LL;
      *(_DWORD *)(v3 + 48) &= ~1u;
      goto LABEL_7;
    }
    if ( !*(_DWORD *)(BugCheckParameter2 + 76) )
      goto LABEL_7;
  }
  v10 = -1073741790;
LABEL_8:
  *(_DWORD *)(BugCheckParameter2 + 72) ^= (*(_DWORD *)(BugCheckParameter2 + 72) ^ (2 * a3)) & 2;
  AlpcpUnlockBlob(v3);
  if ( v7 )
    AlpcpDereferenceBlobEx(v7);
  return v10;
}
