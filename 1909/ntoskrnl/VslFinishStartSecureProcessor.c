/*
 * XREFs of VslFinishStartSecureProcessor @ 0x14028F284
 * Callers:
 *     KeWriteProtectProcessorState @ 0x14059F378 (KeWriteProtectProcessorState.c)
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     MmGetPhysicalAddress @ 0x140124C70 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     VslpLockPagesForTransfer @ 0x140290AEC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290CC8 (VslpUnlockPagesForTransfer.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslFinishStartSecureProcessor(ULONG a1)
{
  PHYSICAL_ADDRESS *PoolWithTag; // rbx
  __int64 Prcb; // rax
  NTSTATUS v5; // edi
  _QWORD v6[10]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v7[14]; // [rsp+80h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  memset(v6, 0, 0x48uLL);
  PoolWithTag = (PHYSICAL_ADDRESS *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x54736D56u);
  if ( !PoolWithTag )
    return 3221225626LL;
  Prcb = KeGetPrcb(a1);
  PoolWithTag->LowPart = a1;
  PoolWithTag[1] = MmGetPhysicalAddress(*(PVOID *)(Prcb - 328));
  v5 = VslpLockPagesForTransfer((unsigned int)v6, (_DWORD)PoolWithTag, 16, 0, 0);
  if ( v5 >= 0 )
  {
    v7[1] = v6[0];
    v7[2] = v6[7];
    v5 = VslpEnterIumSecureMode(2, 3LL, 0LL, (__int64)v7);
    VslpUnlockPagesForTransfer(v6);
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v5;
}
