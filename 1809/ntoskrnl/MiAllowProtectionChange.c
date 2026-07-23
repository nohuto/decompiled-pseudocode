/*
 * XREFs of MiAllowProtectionChange @ 0x1400F1668
 * Callers:
 *     MiResetVirtualMemory @ 0x140132BA4 (MiResetVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405EEFD0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiArbitraryCodeBlocked @ 0x140677900 (MiArbitraryCodeBlocked.c)
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
  int v16; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+44h] [rbp-34h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-30h] BYREF

  if ( (a4 & 2) != 0 && (*(_BYTE *)(a3 + 48) & 0xC0) == 0xC0 && (*(_DWORD *)(a3 + 48) & 0x38) != 0 )
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
      MiQueryAddressState(v13, a6, v12, a3, 0LL, &v16, (__int64 *)&v18, &v17);
      v14 = v16;
      if ( v16 == -1 )
        v14 = 0;
      v16 = v14;
      if ( (v14 & 2) == 0 && (a4 & 2) != 0 || (v14 & 2) != 0 && (a4 & 4) != 0 )
        break;
      v13 = v18;
      if ( v18 > a6 )
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
