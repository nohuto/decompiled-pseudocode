/*
 * XREFs of MiKernelWriteToExecutableMemory @ 0x1402D2C0C
 * Callers:
 *     MiValidFault @ 0x1400C7190 (MiValidFault.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14001F520 (MmIsAddressValidEx.c)
 *     MiReleaseFaultState @ 0x1400A1624 (MiReleaseFaultState.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRelockFaultState @ 0x1401023B0 (MiRelockFaultState.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1406D5890 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     MiForceCrashForInvalidAccess @ 0x1408873A4 (MiForceCrashForInvalidAccess.c)
 */

__int64 __fastcall MiKernelWriteToExecutableMemory(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbp
  struct _UNICODE_STRING *v11; // rdx
  char *v12; // rcx
  unsigned int v13; // ebx

  v6 = *(_QWORD *)(a3 + 1296);
  v7 = a1 + 56;
  v8 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = *(_QWORD *)(v6 + 616);
  v10 = MiReleaseFaultState(a1 + 56, 17, 0LL);
  if ( (int)ScAnsiToUnicodeString(v12, v11) >= 0 )
  {
    MiRelockFaultState(v7, v10);
    if ( v9 == *(_QWORD *)(v6 + 616) && ((*(_BYTE *)(a1 + 69) & 1) == 0 || MmIsAddressValidEx(v8)) )
      return ((a2 ^ MI_READ_PTE_LOCK_FREE(v8)) & 0xFFFFFFFFFFFFFFDFuLL) != 0 ? 0xC0000434 : 0;
    else
      return (unsigned int)-1073740748;
  }
  else
  {
    MiForceCrashForInvalidAccess(a3);
    v13 = -1073739997;
    MiRelockFaultState(v7, v10);
  }
  return v13;
}
