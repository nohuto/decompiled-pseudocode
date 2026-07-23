/*
 * XREFs of MiTryLockProtoPoolPageAtDpc @ 0x14011B8F0
 * Callers:
 *     MiGetPageProtection @ 0x14003FFE0 (MiGetPageProtection.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x14011B894 (MiTryLockLeafAndContainingPagesAtDpc.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteVolatile @ 0x140085F90 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiTryLockProtoPoolPageAtDpc(unsigned __int64 a1)
{
  volatile signed __int64 *v1; // rsi
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  volatile signed __int32 *v4; // r14
  volatile signed __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // r9
  volatile signed __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v1 = (volatile signed __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = *v1;
  if ( (v10 & 1) == 0 )
    return 0LL;
  v2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v10) >> 12) & 0xFFFFFFFFFLL);
  if ( ((*(_QWORD *)(v2 - 0x57FFFFFFFD8LL) >> 53) & 1) == 0 )
    return 0LL;
  v3 = v2 - 0x58000000000LL;
  v4 = (volatile signed __int32 *)(v2 - 0x58000000000LL + 24);
  if ( _interlockedbittestandset64(v4, 0x3FuLL) )
    return 0LL;
  if ( (*(_QWORD *)v4 & 0x4000000000000000LL) != 0
    || (v5 = *v1, v10 = v5, (v5 & 1) == 0)
    || (v5 & 0x200) != 0
    || (v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v10), v8 != (v7 & (v6 >> 12)))
    || (*(_BYTE *)(v3 + 34) & 0x20) != 0 )
  {
    v3 = 0LL;
  }
  else
  {
    MiAddLockedPageCharge(v3, 1);
    *(_BYTE *)(v3 + 34) |= 0x20u;
    if ( (v5 & 0x20) == 0 )
      MiWriteValidPteVolatile(v1, 1, 0);
  }
  _InterlockedAnd64((volatile signed __int64 *)v4, 0x7FFFFFFFFFFFFFFFuLL);
  return v3;
}
