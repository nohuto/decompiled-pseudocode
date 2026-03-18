/*
 * XREFs of KiIntSteerDetermineSteeringEnabled @ 0x1409FE918
 * Callers:
 *     KiIntSteerInit @ 0x1409FE860 (KiIntSteerInit.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
 *     HviIsAnyHypervisorPresent @ 0x140180DE0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

bool KiIntSteerDetermineSteeringEnabled()
{
  char v0; // r8

  if ( KiInterruptSteeringDisabled
    || (unsigned __int16)KiActiveGroups > 1u
    || KeQueryActiveProcessorCountEx(0) < 2
    || (_BYTE)dword_1405711AC )
  {
    return 0;
  }
  v0 = byte_140429E30;
  if ( byte_140429E30 == -1 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    v0 = 0;
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX == 1986945624;
    }
    byte_140429E30 = v0;
  }
  if ( v0 )
    return 0;
  if ( HvlHypervisorConnected )
  {
    if ( (HvlpFlags & 2) == 0 )
      return 0;
  }
  else if ( HviIsAnyHypervisorPresent() )
  {
    return 0;
  }
  return KeQueryActiveProcessorCountEx(0) <= 0x10;
}
