/*
 * XREFs of MiRaisedIrqlFault @ 0x1401291F8
 * Callers:
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiNoFaultFound @ 0x1400E9414 (MiNoFaultFound.c)
 *     MiCheckSystemNxFault @ 0x1400E9508 (MiCheckSystemNxFault.c)
 *     KeInvalidAccessAllowed @ 0x140117D7C (KeInvalidAccessAllowed.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiGenerateAccessViolation @ 0x1402BC210 (MiGenerateAccessViolation.c)
 *     MiTransientCombineAddress @ 0x1402CC348 (MiTransientCombineAddress.c)
 */

__int64 __fastcall MiRaisedIrqlFault(ULONG_PTR *a1)
{
  _DWORD *MmInternal; // rcx
  ULONG_PTR v3; // rdx
  _BYTE *v5; // rax
  unsigned __int64 *i; // r11
  __int64 v7; // rax
  __int64 v8; // r9
  ULONG_PTR v9; // r10
  __int64 v10; // r11
  volatile signed __int64 *v11; // rsi
  __int64 v12; // rax
  ULONG_PTR v13; // r10
  signed __int64 v14; // rbx
  unsigned __int64 v15; // rax
  ULONG_PTR v16; // rdx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  if ( (a1[10] & 0x20) != 0 )
    KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xEuLL);
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal && MmInternal[3120] )
  {
    v3 = *a1;
    if ( KeGetCurrentIrql() != 2 )
      KeBugCheckEx(0x50u, v3, a1[1], KeGetCurrentIrql(), 0xAuLL);
    if ( v3 < 0xFFFFF6FB40000000uLL || v3 > 0xFFFFF6FB7FFFFFFFuLL )
      KeBugCheckEx(0x50u, v3, a1[1], a1[2], 0xBuLL);
    return 3221225477LL;
  }
  v5 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1[2] & 1) != 0 && *v5 == 1 )
    return 3221225477LL;
  if ( (a1[2] & 1) == 0 )
  {
    if ( !KeInvalidAccessAllowed(a1[2]) )
      goto LABEL_17;
    return 3221225477LL;
  }
  if ( *v5 == 3 )
    return 3221225477LL;
LABEL_17:
  if ( (unsigned int)MiTransientCombineAddress(KeGetCurrentThread(), *a1) == 1 )
    return 3221225477LL;
  if ( *a1 >= 0xFFFF800000000000uLL )
  {
    for ( i = a1 + 6; ; i = (unsigned __int64 *)(v10 - 8) )
    {
      v7 = MI_READ_PTE_LOCK_FREE(*i);
      if ( (v7 & 1) == 0 )
        goto LABEL_29;
      if ( (v7 & 0x80u) != 0LL )
      {
        if ( (a1[1] & 2) != 0 && (v7 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, v9, v7, a1[2], 0xFuLL);
        MiCheckSystemNxFault((__int64)a1, v7, 3u);
        v16 = *a1;
        if ( *a1 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, v16, a1[1], a1[2], 8uLL);
        return 0LL;
      }
      if ( !v8 )
        break;
    }
    v11 = (volatile signed __int64 *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v11);
    v17 = v12;
    v14 = v12;
    if ( (v12 & 1) != 0 )
    {
      if ( (a1[1] & 2) != 0 )
      {
        if ( (v12 & 0x200) != 0 )
          return 3489660934LL;
        if ( (v12 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, v13, v12, a1[2], 0xAuLL);
      }
      MiCheckSystemNxFault((__int64)a1, v12, 0);
      v15 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17);
      if ( *(_WORD *)(48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 32) > 1u
        || (*(_BYTE *)(48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) & 1) == 0
        || (*(_BYTE *)(48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 35) & 8) != 0 )
      {
        MiNoFaultFound((__int64)a1, v11, *a1, a1[2], 1u, v14);
        return 0LL;
      }
    }
LABEL_29:
    if ( (unsigned int)MiGenerateAccessViolation(a1) )
      return 3221225477LL;
  }
  return 3489660934LL;
}
