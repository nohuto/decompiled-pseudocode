/*
 * XREFs of MmSetPageProtection @ 0x140133650
 * Callers:
 *     sub_1401AD920 @ 0x1401AD920 (sub_1401AD920.c)
 *     KeWriteProtectProcessorState @ 0x1405733B8 (KeWriteProtectProcessorState.c)
 *     MmAllocateIsrStack @ 0x14072ABDC (MmAllocateIsrStack.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 *     VslpIumPhase0Initialize @ 0x1409F5600 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiMakeProtectionMask @ 0x140074490 (MiMakeProtectionMask.c)
 *     MiLockPageAndSetDirty @ 0x140086018 (MiLockPageAndSetDirty.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall MmSetPageProtection(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  char v7; // di
  unsigned __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 ValidPte; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edi
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  char v17; // r9
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v22; // [rsp+20h] [rbp-108h] BYREF
  int v23; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v24; // [rsp+34h] [rbp-F4h]
  int v25; // [rsp+38h] [rbp-F0h]
  int v26; // [rsp+3Ch] [rbp-ECh]
  __int64 v27; // [rsp+40h] [rbp-E8h]
  __int64 v28; // [rsp+48h] [rbp-E0h]

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    return 0;
  ProtectionMask = MiMakeProtectionMask(a3);
  v7 = ProtectionMask;
  if ( ProtectionMask > 7 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x10000) != 0 )
    return 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v26 = 0;
  v23 = 0;
  v24 = 0;
  v27 = 0LL;
  v28 = 0LL;
  ValidPte = MiMakeValidPte(v8, 0LL, ProtectionMask | 0xA0000000);
  v25 = 20;
  MiInsertTbFlushEntry((__int64)&v23, a1, v9, 0);
  if ( v9 )
  {
    v14 = v7 & 4;
    do
    {
      v22 = MI_READ_PTE_LOCK_FREE(v8);
      v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFLL;
      v18 = (v15 << 12) | ValidPte & 0xFFFF000000000FFFuLL;
      v19 = v18;
      v20 = 48 * v15;
      if ( v14 )
      {
        v18 |= 0x42uLL;
        if ( (v17 & 0x42) == 0 )
          v18 = v19;
      }
      else if ( ((*(_QWORD *)(v20 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
      {
        MiLockPageAndSetDirty(v20 - 0x58000000000LL, 0LL, v16);
      }
      ValidPte = v18 | 0x20;
      MiWriteValidPteNewProtection(v8, ValidPte);
      v8 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  MiFlushTbList(&v23, v11, v12, v13);
  return 1;
}
