/*
 * XREFs of PspCreateSecureThread @ 0x1408C8470
 * Callers:
 *     PspInsertThread @ 0x1405E9524 (PspInsertThread.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1400CBF50 (MmProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MmSizeOfMdl @ 0x1400F75A0 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KeSecureThread @ 0x1402A48E8 (KeSecureThread.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspCreateSecureThread(__int64 Base, __int64 a2)
{
  SIZE_T v4; // rax
  struct _MDL *PoolWithTag; // rbx
  int v6; // edi
  _BYTE v8[48]; // [rsp+30h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  KiStackAttachProcess(*(_KPROCESS **)(Base + 544), 0, (__int64)v8);
  v4 = MmSizeOfMdl((PVOID)Base, 0x820uLL);
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x65537350u);
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * (((unsigned __int16)((Base & 0xFFF) + 6175) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = Base & 0xFFF;
  PoolWithTag->ByteCount = 2080;
  MmProbeAndLockPages(PoolWithTag, 0, IoModifyAccess);
  v6 = KeSecureThread(Base, (int)PoolWithTag, *(_QWORD *)(Base + 1616), *(_QWORD *)(Base + 1696), a2);
  if ( v6 < 0 )
  {
    MmUnlockPages(PoolWithTag);
    ExFreePoolWithTag(PoolWithTag, 0x65537350u);
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v8, 0);
  return (unsigned int)v6;
}
