/*
 * XREFs of MmSetPageProtection @ 0x14012E5D0
 * Callers:
 *     sub_1401B8660 @ 0x1401B8660 (sub_1401B8660.c)
 *     KeWriteProtectProcessorState @ 0x14059F398 (KeWriteProtectProcessorState.c)
 *     MmAllocateIsrStack @ 0x14074D918 (MmAllocateIsrStack.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 *     VslpIumPhase0Initialize @ 0x140A39B20 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiMakeProtectionMask @ 0x140050400 (MiMakeProtectionMask.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiLockPageAndSetDirty @ 0x14005D264 (MiLockPageAndSetDirty.c)
 *     MiWriteValidPteNewProtection @ 0x14005E7F0 (MiWriteValidPteNewProtection.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

char __fastcall MmSetPageProtection(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  char v7; // di
  unsigned __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 ValidPte; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  unsigned __int64 v16; // rax
  char v17; // r9
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v22; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v23[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v23, 0, 0xB8uLL);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    return 0;
  ProtectionMask = MiMakeProtectionMask(a3);
  v7 = ProtectionMask;
  if ( ProtectionMask > 7 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x10000) != 0 )
    return 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  ValidPte = MiMakeValidPte(v8, 0LL, ProtectionMask | 0xA0000000);
  v23[3] = 0LL;
  LODWORD(v23[1]) = 20;
  v11 = ValidPte;
  MiInsertTbFlushEntry((__int64)v23, a1, v9, 0);
  if ( v9 )
  {
    v15 = v7 & 4;
    do
    {
      v22 = MI_READ_PTE_LOCK_FREE(v8);
      v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFLL;
      v18 = (v16 << 12) | v11 & 0xFFFF000000000FFFuLL;
      v19 = v18;
      v20 = 48 * v16;
      if ( v15 )
      {
        v18 |= 0x42uLL;
        if ( (v17 & 0x42) == 0 )
          v18 = v19;
      }
      else if ( ((*(_QWORD *)(v20 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
      {
        MiLockPageAndSetDirty(v20 - 0x58000000000LL, 0);
      }
      v11 = v18 | 0x20;
      MiWriteValidPteNewProtection(v8);
      v8 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  MiFlushTbList((int *)v23, v12, v13, v14);
  return 1;
}
