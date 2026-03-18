/*
 * XREFs of UsbhInternalValidateBillboardCapabilityDescriptor @ 0x1C0057168
 * Callers:
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C0057404 (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 */

char __fastcall UsbhInternalValidateBillboardCapabilityDescriptor(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // r11
  char v4; // di
  int v5; // r10d
  __int64 v6; // r9
  int v7; // r8d
  __int64 v9; // rcx
  unsigned __int8 v10; // al

  v2 = a1;
  v4 = 1;
  v5 = 256;
  v6 = *a2;
  if ( ((*a2 - 40) & 0xFB) != 0 )
  {
    if ( *a2 < 0x30u )
    {
      v7 = 1111704625;
LABEL_4:
      Log(v2, 256, v7, v6, 0LL);
      return 0;
    }
    v9 = a2[4];
    if ( v6 != 4 * v9 + 44 )
    {
      v7 = 1111704626;
      goto LABEL_4;
    }
  }
  else
  {
    Log(a1, 256, 1111704631, v6, 0LL);
    LOBYTE(v9) = a2[4];
  }
  if ( !(_BYTE)v9 )
  {
    Log(v2, v5, 1111704627, 0LL, 0LL);
    LOBYTE(v9) = a2[4];
    v4 = 0;
  }
  if ( (unsigned __int8)v9 > 0x80u )
  {
    Log(v2, v5, 1111704628, (unsigned __int8)v9, 0LL);
    LOBYTE(v9) = a2[4];
    v4 = 0;
  }
  v10 = a2[5];
  if ( v10 > (unsigned __int8)v9 )
  {
    Log(v2, v5, 1111704630, v10, 0LL);
    return 0;
  }
  return v4;
}
