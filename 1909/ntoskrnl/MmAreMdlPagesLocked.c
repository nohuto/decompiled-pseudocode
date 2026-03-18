/*
 * XREFs of MmAreMdlPagesLocked @ 0x140963E58
 * Callers:
 *     VERIFY_BUFFER_LOCKED @ 0x140967C94 (VERIFY_BUFFER_LOCKED.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140983F10 (VerifierMmBuildMdlForNonPagedPool.c)
 * Callees:
 *     MiIsPfn @ 0x140005F30 (MiIsPfn.c)
 *     MiIsPfnLocked @ 0x14015B204 (MiIsPfnLocked.c)
 *     MiLockPage @ 0x1402D8D04 (MiLockPage.c)
 *     MiUnlockPage @ 0x1402D8D58 (MiUnlockPage.c)
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
      if ( dword_140465F0C != 2 )
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
