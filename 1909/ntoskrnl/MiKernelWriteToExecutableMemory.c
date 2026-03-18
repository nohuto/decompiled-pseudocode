/*
 * XREFs of MiKernelWriteToExecutableMemory @ 0x1402D296C
 * Callers:
 *     MiValidFault @ 0x1400A7010 (MiValidFault.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14001F910 (MmIsAddressValidEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleaseFaultState @ 0x1400C4718 (MiReleaseFaultState.c)
 *     MiRelockFaultState @ 0x1400CBD60 (MiRelockFaultState.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1406D4F70 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     MiForceCrashForInvalidAccess @ 0x140886BD0 (MiForceCrashForInvalidAccess.c)
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
  v10 = MiReleaseFaultState(a1 + 56, 0x11u, 0LL);
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
