/*
 * XREFs of AlpcpExposeViewAttribute @ 0x1406CADE0
 * Callers:
 *     AlpcpExposeViewAttribute32 @ 0x1406CAD6C (AlpcpExposeViewAttribute32.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AlpcpUnlockBlob @ 0x1405E4790 (AlpcpUnlockBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14064A878 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14064B150 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x14064B920 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpExposeViewAttribute(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rdi
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rbx
  int v11; // esi
  __int64 v12; // rbx

  v4 = *(_QWORD *)(a2 + 144);
  if ( v4 )
  {
    v9 = *(_QWORD *)(v4 + 16);
    AlpcpReferenceBlob(v9);
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 144) + 16LL);
    AlpcpLockForCachedReferenceBlob(v10);
    v11 = *(_DWORD *)(v10 + 48);
    AlpcpUnlockBlob(v10);
    AlpcpDereferenceBlobEx(v9, 1);
    v12 = *(_QWORD *)(a2 + 144);
    memset(a3, 0, 0x20uLL);
    a3[2] = *(_QWORD *)(v12 + 40);
    a3[3] = *(_QWORD *)(v12 + 48);
    if ( (v11 & 1) != 0 )
      *(_DWORD *)a3 = 0x40000;
    *a4 |= 0x40000000u;
  }
  return 0LL;
}
