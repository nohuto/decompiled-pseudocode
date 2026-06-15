/*
 * XREFs of memcpy_s_0 @ 0x18006B710
 * Callers:
 *     ?RegisterForShellWnfNotifications@AtmosCheck@@AEAAJXZ @ 0x180140038 (-RegisterForShellWnfNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180064CCA (_invalid_parameter_noinfo.c)
 */

errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t result; // eax

  if ( Destination )
  {
    if ( Source )
    {
      result = 0;
      *(_QWORD *)Destination = *(_QWORD *)Source;
      return result;
    }
    *(_QWORD *)Destination = 0LL;
  }
  *(_DWORD *)_o__errno(Destination) = 22;
  invalid_parameter_noinfo();
  return 22;
}
