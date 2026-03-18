/*
 * XREFs of VslFinishStartSecureProcessor @ 0x14027AF38
 * Callers:
 *     KeWriteProtectProcessorState @ 0x1405723B8 (KeWriteProtectProcessorState.c)
 * Callees:
 *     KeGetPrcb @ 0x1400A62A4 (KeGetPrcb.c)
 *     MmGetPhysicalAddress @ 0x1401210B0 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x140129C90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x14027C414 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C5F0 (VslpUnlockPagesForTransfer.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslFinishStartSecureProcessor(ULONG a1)
{
  PHYSICAL_ADDRESS *PoolWithTag; // rbx
  __int64 Prcb; // rax
  NTSTATUS v5; // edi
  _QWORD v6[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v7[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v8; // [rsp+88h] [rbp-80h]
  __int64 v9; // [rsp+90h] [rbp-78h]

  PoolWithTag = (PHYSICAL_ADDRESS *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x54736D56u);
  if ( !PoolWithTag )
    return 3221225626LL;
  Prcb = KeGetPrcb(a1);
  PoolWithTag->LowPart = a1;
  PoolWithTag[1] = MmGetPhysicalAddress(*(PVOID *)(Prcb - 328));
  v5 = VslpLockPagesForTransfer((unsigned int)v6, (_DWORD)PoolWithTag, 16, 0, 0);
  if ( v5 >= 0 )
  {
    v8 = v6[0];
    v9 = v6[7];
    v5 = VslpEnterIumSecureMode(2u, 3LL, 0, (__int64)v7);
    VslpUnlockPagesForTransfer(v6);
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v5;
}
