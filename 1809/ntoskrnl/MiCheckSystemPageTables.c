/*
 * XREFs of MiCheckSystemPageTables @ 0x1400E93A0
 * Callers:
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 * Callees:
 *     MiCheckSystemNxFault @ 0x1400E9508 (MiCheckSystemNxFault.c)
 *     KeInvalidAccessAllowed @ 0x140117D7C (KeInvalidAccessAllowed.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiGenerateAccessViolation @ 0x1402BC210 (MiGenerateAccessViolation.c)
 */

__int64 __fastcall MiCheckSystemPageTables(ULONG_PTR *a1)
{
  __int64 v2; // rdx
  ULONG_PTR **i; // r9
  ULONG_PTR *v4; // r8
  ULONG_PTR v5; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  ULONG_PTR v12; // r9
  ULONG_PTR v13; // rdx

  v2 = 3LL;
  for ( i = (ULONG_PTR **)(a1 + 6); ; --i )
  {
    v4 = *i;
    v5 = **i;
    if ( (unsigned __int64)*i >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
    {
      if ( (v5 & 1) == 0 )
LABEL_30:
        KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xDuLL);
      if ( (v5 & 0x20) == 0 || (v5 & 0x42) == 0 )
      {
        v7 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 8 * (((unsigned __int64)v4 >> 3) & 0x1FF));
          v9 = v5 | 0x20;
          if ( (v8 & 0x20) == 0 )
            v9 = **i;
          v5 = v9;
          if ( (v8 & 0x42) != 0 )
            v5 = v9 | 0x42;
        }
      }
    }
    if ( (v5 & 1) == 0 )
      goto LABEL_30;
    if ( (v5 & 0x80u) != 0LL )
      break;
    if ( !--v2 )
      return 0LL;
  }
  if ( (a1[1] & 2) == 0 || (v5 & 0x800) != 0 )
  {
    MiCheckSystemNxFault(a1, v5, 6LL);
    v12 = a1[2];
    if ( (v12 & 1) != 0 )
    {
      if ( ((*(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) == 0 )
        return 1LL;
    }
    else if ( (unsigned __int8)KeInvalidAccessAllowed(a1[2], v10, v11, v12) == 1 )
    {
      return 1LL;
    }
    v13 = *a1;
    if ( *a1 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
      KeBugCheckEx(0x50u, v13, a1[1], v12, 8uLL);
    return 1LL;
  }
  if ( !(unsigned int)MiGenerateAccessViolation(a1) )
    KeBugCheckEx(0xBEu, *a1, v5, a1[2], 0x10uLL);
  return 2LL;
}
