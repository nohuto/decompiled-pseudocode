/*
 * XREFs of ACPIAnsiStringToWideHelper @ 0x1C000C680
 * Callers:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C000C3D0 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C0026E28 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0027490 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0027908 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0027A90 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0027D94 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x1C0053E24 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C0053F18 (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C00542C0 (ACPIDeviceIdMutiStringMatchCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIAnsiStringToWideHelper(_WORD *a1, unsigned __int64 a2)
{
  unsigned __int64 i; // rdx
  __int64 result; // rax

  if ( a1 && a2 > 2 )
  {
    for ( i = a2 >> 1; --i; a1[i] = *((char *)a1 + i) )
      ;
    result = (unsigned int)*(char *)a1;
    *a1 = *(char *)a1;
  }
  return result;
}
