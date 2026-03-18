/*
 * XREFs of UsbhInternalValidateContainerIDCapabilityDescriptor @ 0x1C00596CC
 * Callers:
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C0059768 (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     Log @ 0x1C0013360 (Log.c)
 */

char __fastcall UsbhInternalValidateContainerIDCapabilityDescriptor(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r10
  __int64 v3; // r11
  char v4; // dl
  unsigned __int8 v6; // al
  __int64 v7; // rax

  v2 = a2;
  v3 = a1;
  v4 = 1;
  if ( *v2 == 20 )
  {
    v6 = v2[3];
    if ( v6 )
    {
      Log(a1, 256, 1447250226, v6, 0LL);
      v4 = 0;
    }
    v7 = *(_QWORD *)(v2 + 4) - *(_QWORD *)&GUID_NULL.Data1;
    if ( !v7 )
      v7 = *(_QWORD *)(v2 + 12) - *(_QWORD *)GUID_NULL.Data4;
    if ( !v7 )
    {
      Log(v3, 256, 1447250227, 0LL, 0LL);
      return 0;
    }
    return v4;
  }
  else
  {
    Log(a1, 256, 1447250225, *v2, 0LL);
    return 0;
  }
}
