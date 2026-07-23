/*
 * XREFs of IovDetachDevice @ 0x1409251CC
 * Callers:
 *     IoDetachDevice @ 0x1400DCAD0 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x14093529C (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
