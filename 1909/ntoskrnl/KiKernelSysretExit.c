/*
 * XREFs of KiKernelSysretExit @ 0x140351D80
 * Callers:
 *     KiCallUserMode @ 0x1401C7C70 (KiCallUserMode.c)
 *     KiSystemCall64 @ 0x1401D5A80 (KiSystemCall64.c)
 *     KiUmsFastReturnToUser @ 0x1401D6B80 (KiUmsFastReturnToUser.c)
 * Callees:
 *     <none>
 */

void KiKernelSysretExit()
{
  unsigned int ShadowFlags; // esp
  unsigned __int64 UserDirectoryTableBase; // rbp
  char v2; // sp
  char v3; // sp

  ShadowFlags = KeGetPcr()->Prcb.ShadowFlags;
  if ( (ShadowFlags & 2) == 0 )
  {
    UserDirectoryTableBase = KeGetCurrentThread()->Process->UserDirectoryTableBase;
    if ( (UserDirectoryTableBase & 1) != 0 )
    {
      if ( (v2 & 1) != 0 )
        __writegsdword(0x7018u, KeGetPcr()->Prcb.ShadowFlags & 0xFFFFFFFE);
      else
        UserDirectoryTableBase |= 0x8000000000000000uLL;
    }
    __writecr3(UserDirectoryTableBase);
  }
  if ( (v3 & 2) == 0 )
    __asm { verw    word ptr gs:702Ah }
  __asm
  {
    swapgs
    sysret
  }
}
