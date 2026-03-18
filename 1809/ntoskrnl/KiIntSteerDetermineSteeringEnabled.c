/*
 * XREFs of KiIntSteerDetermineSteeringEnabled @ 0x1409C5B68
 * Callers:
 *     KiIntSteerInit @ 0x1409C5AB0 (KiIntSteerInit.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400A7900 (KeQueryActiveProcessorCountEx.c)
 *     HviIsAnyHypervisorPresent @ 0x140176B90 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 */

bool KiIntSteerDetermineSteeringEnabled()
{
  char v0; // r8

  if ( KiInterruptSteeringDisabled
    || (unsigned __int16)KiActiveGroups > 1u
    || KeQueryActiveProcessorCountEx(0) < 2
    || (_BYTE)dword_14054019C )
  {
    return 0;
  }
  v0 = byte_1404039C8;
  if ( byte_1404039C8 == -1 )
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
    byte_1404039C8 = v0;
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
