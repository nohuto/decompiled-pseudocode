/*
 * XREFs of UsbhValidateBOSDescriptorSet @ 0x1C0059D4C
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0048CD0 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     Log @ 0x1C0013360 (Log.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhInternalValidateBOSDescriptor @ 0x1C0059380 (UsbhInternalValidateBOSDescriptor.c)
 *     UsbhInternalValidateCommonDescriptorHeader @ 0x1C00595CC (UsbhInternalValidateCommonDescriptorHeader.c)
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C0059768 (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 */

char __fastcall UsbhValidateBOSDescriptorSet(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _BYTE *a5)
{
  __int64 v6; // r14
  _BYTE *v9; // rbx
  char v10; // cl
  unsigned __int8 *i; // rbx
  __int64 v13; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-19h]
  int v15; // [rsp+48h] [rbp-11h]
  int v16; // [rsp+4Ch] [rbp-Dh]
  _BYTE *v17; // [rsp+50h] [rbp-9h]
  __int64 v18; // [rsp+58h] [rbp-1h]
  _BYTE v19[56]; // [rsp+60h] [rbp+7h] BYREF
  unsigned int v20; // [rsp+D0h] [rbp+77h] BYREF

  v16 = 0;
  v6 = a4;
  memset(v19, 0, sizeof(v19));
  v18 = a3;
  v14 = v6 + a2;
  v9 = v19;
  v15 = v6;
  v13 = a2;
  if ( a5 )
    v9 = a5;
  memset(v9, 0, 0x38uLL);
  v17 = v9;
  if ( (unsigned int)v6 < 5 )
    return 0;
  v10 = UsbhInternalValidateBOSDescriptor(a1, (unsigned __int8 *)a2, (__int64)&v13);
  if ( !v10 )
    return 0;
  if ( (_DWORD)v6 != *(unsigned __int16 *)(a2 + 2) )
  {
    Log(a1, 256, 1447186259, (unsigned int)v6, *(unsigned __int16 *)(a2 + 2));
    v10 = 0;
  }
  for ( i = (unsigned __int8 *)(a2 + 5); (unsigned __int64)i < v14; i += v20 )
  {
    v10 = UsbhInternalValidateCommonDescriptorHeader(a1, i, &v13, &v20);
    if ( !v10 )
      return 0;
    if ( i[1] == 16 )
    {
      v10 = UsbhInternalValidateDeviceCapabilityDescriptor(a1, i, (__int64)&v13);
      if ( !v10 )
        return 0;
    }
  }
  return v10;
}
