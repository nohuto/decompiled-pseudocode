/*
 * XREFs of KiKernelSysretExit @ 0x140330D80
 * Callers:
 *     KiCallUserMode @ 0x1401C0000 (KiCallUserMode.c)
 *     KiSystemCall64 @ 0x1401CF200 (KiSystemCall64.c)
 *     KiUmsFastReturnToUser @ 0x1401D0800 (KiUmsFastReturnToUser.c)
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
    __asm { verw    word ptr gs:701Ch }
  __asm
  {
    swapgs
    sysret
  }
}
