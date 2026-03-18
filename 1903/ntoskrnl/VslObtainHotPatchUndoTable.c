/*
 * XREFs of VslObtainHotPatchUndoTable @ 0x140852B58
 * Callers:
 *     MiApplyDriverHotPatch @ 0x14088D4B4 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140891D78 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x14008E960 (MmProbeAndLockPages.c)
 *     MmSizeOfMdl @ 0x140119480 (MmSizeOfMdl.c)
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     VslpLockPagesForTransfer @ 0x140290D8C (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290F68 (VslpUnlockPagesForTransfer.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslObtainHotPatchUndoTable(PVOID Base, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  ULONG v6; // r15d
  struct _MDL *PoolWithTag; // rax
  __int64 v8; // rbx
  int v10; // edi
  _QWORD v11[10]; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD v12[14]; // [rsp+90h] [rbp-A8h] BYREF

  v3 = a3;
  memset(v12, 0, 0x68uLL);
  memset(v11, 0, 0x48uLL);
  v6 = MmSizeOfMdl(Base, (unsigned int)v3);
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
    v12[1] = Base;
    v12[2] = v11[0];
    v12[3] = v11[7];
    v10 = VslpEnterIumSecureMode(2, 68LL, 0LL, (__int64)v12);
    VslpUnlockPagesForTransfer((__int64)v11);
  }
  if ( (*(_BYTE *)(v8 + 10) & 2) != 0 )
    MmUnlockPages((PMDL)v8);
  ExFreePoolWithTag((PVOID)v8, 0);
  return (unsigned int)v10;
}
