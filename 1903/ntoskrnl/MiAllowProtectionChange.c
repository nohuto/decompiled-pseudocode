/*
 * XREFs of MiAllowProtectionChange @ 0x1400AEE60
 * Callers:
 *     MiResetVirtualMemory @ 0x14013345C (MiResetVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x140603140 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406040D0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x1400C63D0 (MiQueryAddressState.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiArbitraryCodeBlocked @ 0x1406785AC (MiArbitraryCodeBlocked.c)
 */

__int64 __fastcall MiAllowProtectionChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  int v7; // r15d
  __int64 v9; // r14
  unsigned int v10; // edi
  int v11; // ebx
  __int64 v12; // rdx
  int v13; // r8d
  char v14; // r12
  int v15; // eax
  int v16; // ecx
  int v18; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v19[4]; // [rsp+54h] [rbp-44h] BYREF
  _BYTE v20[8]; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-38h] BYREF

  v7 = a3;
  if ( (a4 & 2) != 0 && (*(_DWORD *)(a3 + 48) & 0xC00) == 3072 && (*(_DWORD *)(a3 + 48) & 0x380) != 0 )
    return 3221225541LL;
  v9 = a1 + 1280;
  v10 = 0;
  v11 = 0;
  v14 = MiLockWorkingSetShared(a1 + 1280);
  v15 = a5;
  if ( a5 <= a6 )
  {
    while ( 1 )
    {
      LOBYTE(v13) = v14;
      MiQueryAddressState(v15, a6, v13, v7, 0LL, (__int64)&v18, (__int64)v20, (__int64)&v21, (__int64)v19);
      v16 = v18;
      if ( v18 == -1 )
        v16 = 0;
      v18 = v16;
      if ( (v16 & 2) == 0 && (a4 & 2) != 0 || (v16 & 2) != 0 && (a4 & 4) != 0 )
        break;
      v15 = v21;
      if ( v21 > a6 )
        goto LABEL_11;
    }
    v11 = 1;
  }
LABEL_11:
  LOBYTE(v12) = v14;
  MiUnlockWorkingSetShared(v9, v12);
  if ( v11 )
    return (unsigned int)MiArbitraryCodeBlocked(a2);
  return v10;
}
