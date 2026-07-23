/*
 * XREFs of KiInitializeNxSupportDiscard @ 0x1409B0820
 * Callers:
 *     KiInitializeBootStructures @ 0x140570E10 (KiInitializeBootStructures.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     strstr @ 0x140195000 (strstr.c)
 *     KiIsNXSupported @ 0x1405705E0 (KiIsNXSupported.c)
 *     KiGetCpuVendor @ 0x1405706EC (KiGetCpuVendor.c)
 */

char KiInitializeNxSupportDiscard()
{
  char v0; // al
  char result; // al

  MEMORY[0xFFFFF780000002D5] = MEMORY[0xFFFFF780000002D5] & 0xFC | 1;
  if ( !strstr(*(const char **)(KeLoaderBlock_0 + 216), "NOEXECUTE=ALWAYSON") )
  {
    if ( strstr(*(const char **)(KeLoaderBlock_0 + 216), "NOEXECUTE=OPTOUT") )
    {
      v0 = MEMORY[0xFFFFF780000002D5] | 3;
    }
    else if ( strstr(*(const char **)(KeLoaderBlock_0 + 216), "NOEXECUTE=OPTIN")
           || !strstr(*(const char **)(KeLoaderBlock_0 + 216), "NOEXECUTE=ALWAYSOFF")
           && (strstr(*(const char **)(KeLoaderBlock_0 + 216), "NOEXECUTE")
            || !strstr(*(const char **)(KeLoaderBlock_0 + 216), "EXECUTE")) )
    {
      v0 = MEMORY[0xFFFFF780000002D5] & 0xFC | 2;
    }
    else
    {
      v0 = MEMORY[0xFFFFF780000002D5] & 0xFC;
    }
    MEMORY[0xFFFFF780000002D5] = v0;
  }
  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RDX & 0x4000000) != 0 && (unsigned int)KiGetCpuVendor() == 2 )
    KiNxForceEnable = 1;
  result = KiIsNXSupported();
  if ( result )
  {
    __writemsr(0xC0000080, __readmsr(0xC0000080) | 0x800);
    result = 1;
    MEMORY[0xFFFFF78000000280] = 1;
  }
  return result;
}
