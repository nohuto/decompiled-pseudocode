/*
 * XREFs of VslObtainHotPatchUndoTable @ 0x140819D74
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408552E0 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140859374 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x140040380 (MmProbeAndLockPages.c)
 *     MmSizeOfMdl @ 0x14011A7B0 (MmSizeOfMdl.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslObtainHotPatchUndoTable(void *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  ULONG v6; // r15d
  struct _MDL *PoolWithTag; // rax
  __int64 v8; // rbx
  int v10; // edi
  _QWORD v11[10]; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v12[8]; // [rsp+90h] [rbp-A8h] BYREF
  void *v13; // [rsp+98h] [rbp-A0h]
  __int64 v14; // [rsp+A0h] [rbp-98h]
  __int64 v15; // [rsp+A8h] [rbp-90h]

  v3 = a3;
  v6 = MmSizeOfMdl(a1, a3);
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x54736D56u);
  v8 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * ((((unsigned __int64)(a2 & 0xFFF) + v3 + 4095) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = a2 & 0xFFF;
  PoolWithTag->ByteCount = v3;
  MmProbeAndLockPages(PoolWithTag, 0, IoWriteAccess);
  v10 = VslpLockPagesForTransfer((__int64)v11, v8, v6, 1, 0);
  if ( v10 >= 0 )
  {
    v13 = a1;
    v14 = v11[0];
    v15 = v11[7];
    v10 = VslpEnterIumSecureMode(2u, 64LL, 0, (__int64)v12);
    VslpUnlockPagesForTransfer((__int64)v11);
  }
  if ( (*(_BYTE *)(v8 + 10) & 2) != 0 )
    MmUnlockPages((PMDL)v8);
  ExFreePoolWithTag((PVOID)v8, 0);
  return (unsigned int)v10;
}
