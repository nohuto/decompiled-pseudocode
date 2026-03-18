/*
 * XREFs of MiPfnDatabaseVaIsUnique @ 0x1402BE178
 * Callers:
 *     MiGetNextNonGapPfnPage @ 0x140186558 (MiGetNextNonGapPfnPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MiPfnDatabaseVaIsUnique(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r9
  _BOOL8 result; // rax
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(a1);
  result = 0;
  if ( (v4 & 1) != 0 )
  {
    if ( qword_1404665A8 == (PVOID)qword_1404665B0 )
      return 1;
    v1 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v4);
    if ( ((v1 >> 12) & 0xFFFFFFFFFLL) != v2 )
      return 1;
  }
  return result;
}
