/*
 * XREFs of MiTryLockProtoPoolPageAtDpc @ 0x1400956A8
 * Callers:
 *     MiCopyHeaderIfResident @ 0x14008FF40 (MiCopyHeaderIfResident.c)
 *     MiCopyDataPageToImagePage @ 0x14009423C (MiCopyDataPageToImagePage.c)
 *     MiGetPageProtection @ 0x1400A5DD0 (MiGetPageProtection.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CABE0 (MiCopyFileOnlyGlobalSubsectionPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTryLockLeafPage @ 0x1400BC62C (MiTryLockLeafPage.c)
 *     MiAddLockedPageCharge @ 0x1400CBA88 (MiAddLockedPageCharge.c)
 *     MiWriteValidPteVolatile @ 0x1400FA460 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiTryLockProtoPoolPageAtDpc(unsigned __int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 *v7; // r10
  unsigned __int64 v8; // r11
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  char v17; // cl
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v19 = *(_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (v19 & 1) == 0 )
    return 3221435187LL;
  v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v19) >> 12) & 0xFFFFFFFFFLL;
  if ( ((*(_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL) >> 53) & 1) == 0 )
    return 3221225557LL;
  v9 = 0;
  v10 = 48 * v8 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    return 3221225557LL;
  if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0
    || (v11 = *v7, v19 = v11, (v11 & 1) == 0)
    || (v11 & 0x200) != 0
    || (v12 = MI_READ_PTE_LOCK_FREE(&v19), v16 != ((v12 >> 12) & 0xFFFFFFFFFLL))
    || (*(_BYTE *)(v10 + 34) & 0x20) != 0 )
  {
    v9 = -1073741739;
  }
  else
  {
    if ( (v14 & 0x20) == 0 )
      MiWriteValidPteVolatile(v15, 1LL, 0LL);
    if ( !a4 || (v9 = MiTryLockLeafPage(a1, v13, a4), v9 >= 0) )
    {
      MiAddLockedPageCharge(v10, 1LL);
      v17 = *(_BYTE *)(v10 + 34) | 0x20;
      *a3 = v10;
      *(_BYTE *)(v10 + 34) = v17;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return (unsigned int)v9;
}
