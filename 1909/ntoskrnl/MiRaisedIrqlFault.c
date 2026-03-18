/*
 * XREFs of MiRaisedIrqlFault @ 0x140129A60
 * Callers:
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 * Callees:
 *     MiNoFaultFound @ 0x140076010 (MiNoFaultFound.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     KeInvalidAccessAllowed @ 0x140116B60 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x140134AC8 (MiCheckSystemNxFault.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiGenerateAccessViolation @ 0x1402D25BC (MiGenerateAccessViolation.c)
 *     MiTransientCombineAddress @ 0x1402E64A0 (MiTransientCombineAddress.c)
 */

__int64 __fastcall MiRaisedIrqlFault(ULONG_PTR *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *MmInternal; // rcx
  ULONG_PTR v6; // rdx
  __int64 v8; // rdx
  _BYTE *v9; // rax
  unsigned __int64 *i; // r11
  ULONG_PTR v11; // rax
  __int64 v12; // r9
  ULONG_PTR v13; // r10
  __int64 v14; // r11
  volatile signed __int64 *v15; // rsi
  ULONG_PTR v16; // rax
  ULONG_PTR v17; // r10
  signed __int64 v18; // rbx
  unsigned __int64 v19; // rax
  ULONG_PTR v20; // rdx
  ULONG_PTR v21; // [rsp+40h] [rbp+8h] BYREF

  if ( (a1[10] & 0x20) != 0 )
    KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xEuLL);
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal && MmInternal[3120] )
  {
    v6 = *a1;
    if ( KeGetCurrentIrql() != 2 )
      KeBugCheckEx(0x50u, v6, a1[1], KeGetCurrentIrql(), 0xAuLL);
    if ( v6 < 0xFFFFF6FB40000000uLL || v6 > 0xFFFFF6FB7FFFFFFFuLL )
      KeBugCheckEx(0x50u, v6, a1[1], a1[2], 0xBuLL);
    return 3221225477LL;
  }
  v8 = a1[2];
  v9 = (_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v8 & 1) != 0 && *v9 == 1 )
    return 3221225477LL;
  if ( (a1[2] & 1) == 0 )
  {
    if ( KeInvalidAccessAllowed(a1[2], v8, a3, a4) != 1 )
      goto LABEL_17;
    return 3221225477LL;
  }
  if ( *v9 == 3 )
    return 3221225477LL;
LABEL_17:
  if ( (unsigned int)MiTransientCombineAddress(KeGetCurrentThread(), *a1) == 1 )
    return 3221225477LL;
  if ( *a1 >= 0xFFFF800000000000uLL )
  {
    for ( i = a1 + 6; ; i = (unsigned __int64 *)(v14 - 8) )
    {
      v11 = MI_READ_PTE_LOCK_FREE(*i);
      if ( (v11 & 1) == 0 )
        goto LABEL_29;
      if ( (v11 & 0x80u) != 0LL )
      {
        if ( (a1[1] & 2) != 0 && (v11 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, v13, v11, a1[2], 0xFuLL);
        MiCheckSystemNxFault(a1, v11, 3LL);
        v20 = *a1;
        if ( *a1 >= 0xFFFFF68000000000uLL && v20 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, v20, a1[1], a1[2], 8uLL);
        return 0LL;
      }
      if ( !v12 )
        break;
    }
    v15 = (volatile signed __int64 *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v15);
    v21 = v16;
    v18 = v16;
    if ( (v16 & 1) != 0 )
    {
      if ( (a1[1] & 2) != 0 )
      {
        if ( (v16 & 0x200) != 0 )
          return 3489660934LL;
        if ( (v16 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, v17, v16, a1[2], 0xAuLL);
      }
      MiCheckSystemNxFault(a1, v16, 0LL);
      v19 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21);
      if ( *(_WORD *)(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 32) > 1u
        || (*(_BYTE *)(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) & 1) == 0
        || (*(_BYTE *)(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 35) & 8) != 0 )
      {
        MiNoFaultFound((__int64)a1, v15, *a1, a1[2], 1u, v18);
        return 0LL;
      }
    }
LABEL_29:
    if ( (unsigned int)MiGenerateAccessViolation(a1) )
      return 3221225477LL;
  }
  return 3489660934LL;
}
