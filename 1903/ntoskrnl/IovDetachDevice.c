/*
 * XREFs of IovDetachDevice @ 0x140963350
 * Callers:
 *     IoDetachDevice @ 0x1400B5890 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x140973840 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
