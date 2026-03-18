/*
 * XREFs of MiAllowProtectionChange @ 0x1400E53B0
 * Callers:
 *     MiResetVirtualMemory @ 0x140133F4C (MiResetVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x140604C50 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x140605BE0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x1400A6250 (MiQueryAddressState.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiArbitraryCodeBlocked @ 0x14067DCBC (MiArbitraryCodeBlocked.c)
 */

__int64 __fastcall MiAllowProtectionChange(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v9; // r14
  unsigned int v10; // edi
  int v11; // ebx
  unsigned __int8 v12; // r12
  unsigned __int64 v13; // rax
  int v14; // ecx
  int v16; // [rsp+50h] [rbp-48h] BYREF
  int v17; // [rsp+54h] [rbp-44h] BYREF
  int v18; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-38h] BYREF

  if ( (a4 & 2) != 0 && (*(_DWORD *)(a3 + 48) & 0xC00) == 3072 && (*(_DWORD *)(a3 + 48) & 0x380) != 0 )
    return 3221225541LL;
  v9 = a1 + 1280;
  v10 = 0;
  v11 = 0;
  v12 = MiLockWorkingSetShared(a1 + 1280);
  v13 = a5;
  if ( a5 <= a6 )
  {
    while ( 1 )
    {
      MiQueryAddressState(v13, a6, v12, a3, 0LL, &v16, &v18, &v19, &v17);
      v14 = v16;
      if ( v16 == -1 )
        v14 = 0;
      v16 = v14;
      if ( (v14 & 2) == 0 && (a4 & 2) != 0 || (v14 & 2) != 0 && (a4 & 4) != 0 )
        break;
      v13 = v19;
      if ( v19 > a6 )
        goto LABEL_11;
    }
    v11 = 1;
  }
LABEL_11:
  MiUnlockWorkingSetShared(v9, v12);
  if ( v11 )
    return (unsigned int)MiArbitraryCodeBlocked(a2);
  return v10;
}
