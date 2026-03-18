/*
 * XREFs of UsbhValidateBOSDescriptorSet @ 0x1C00579E8
 * Callers:
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0047418 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     UsbhInternalValidateBOSDescriptor @ 0x1C005701C (UsbhInternalValidateBOSDescriptor.c)
 *     UsbhInternalValidateCommonDescriptorHeader @ 0x1C0057268 (UsbhInternalValidateCommonDescriptorHeader.c)
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C0057404 (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 */

char __fastcall UsbhValidateBOSDescriptorSet(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  char *v6; // rbx
  char v9; // cl
  unsigned __int8 *i; // rbx
  __int64 v12; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-19h]
  unsigned int v14; // [rsp+48h] [rbp-11h]
  char *v15; // [rsp+50h] [rbp-9h]
  __int64 v16; // [rsp+58h] [rbp-1h]
  char v17; // [rsp+60h] [rbp+7h] BYREF
  unsigned int v18; // [rsp+D0h] [rbp+77h] BYREF

  v6 = &v17;
  v12 = a2;
  v16 = a3;
  v14 = a4;
  v13 = a4 + a2;
  if ( a5 )
    v6 = a5;
  memset(v6, 0, 0x38uLL);
  v15 = v6;
  if ( a4 < 5 )
    return 0;
  v9 = UsbhInternalValidateBOSDescriptor(a1, (unsigned __int8 *)a2, (__int64)&v12);
  if ( !v9 )
    return 0;
  if ( a4 != *(unsigned __int16 *)(a2 + 2) )
  {
    Log(a1, 256, 1447186259, a4, *(unsigned __int16 *)(a2 + 2));
    v9 = 0;
  }
  for ( i = (unsigned __int8 *)(a2 + 5); (unsigned __int64)i < v13; i += v18 )
  {
    v9 = UsbhInternalValidateCommonDescriptorHeader(a1, i, &v12, &v18);
    if ( !v9 )
      return 0;
    if ( i[1] == 16 )
    {
      v9 = UsbhInternalValidateDeviceCapabilityDescriptor(a1, i, (__int64)&v12);
      if ( !v9 )
        return 0;
    }
  }
  return v9;
}
