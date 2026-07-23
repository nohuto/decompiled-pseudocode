/*
 * XREFs of MmAreMdlPagesLocked @ 0x140925CC8
 * Callers:
 *     VERIFY_BUFFER_LOCKED @ 0x14092A614 (VERIFY_BUFFER_LOCKED.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140945540 (VerifierMmBuildMdlForNonPagedPool.c)
 * Callees:
 *     MiIsPfn @ 0x1400A8820 (MiIsPfn.c)
 *     MiIsPfnLocked @ 0x14013B298 (MiIsPfnLocked.c)
 *     MiLockPage @ 0x1402BF8E0 (MiLockPage.c)
 *     MiUnlockPage @ 0x1402BF8F4 (MiUnlockPage.c)
 */

__int64 __fastcall MmAreMdlPagesLocked(_DWORD *a1)
{
  unsigned __int64 *v1; // rsi
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rbx
  int IsPfnLocked; // ebp
  unsigned __int8 v6; // r11

  v1 = (unsigned __int64 *)(a1 + 12);
  v2 = (((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12;
  while ( 1 )
  {
    if ( (unsigned int)MiIsPfn(*v1) )
    {
      v4 = 48 * v3 - 0x58000000000LL;
      if ( dword_14043B82C != 2 )
        MiLockPage(48 * v3 - 0x58000000000LL);
      IsPfnLocked = MiIsPfnLocked(v4);
      if ( v6 != 17 )
        MiUnlockPage(v4, v6);
      if ( !IsPfnLocked )
        break;
    }
    ++v1;
    if ( !--v2 )
      return 1LL;
  }
  return 0LL;
}
