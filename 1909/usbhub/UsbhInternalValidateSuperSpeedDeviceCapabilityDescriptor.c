/*
 * XREFs of UsbhInternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C0059BB8
 * Callers:
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C0059768 (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     Log @ 0x1C0013360 (Log.c)
 */

char __fastcall UsbhInternalValidateSuperSpeedDeviceCapabilityDescriptor(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r11
  __int64 v3; // r10
  char v5; // dl
  unsigned __int8 v7; // al
  unsigned __int8 v8; // r8
  int v9; // eax
  unsigned __int8 v10; // al
  unsigned __int16 v11; // ax
  char v12; // r10

  v2 = a2;
  v3 = 0LL;
  v5 = 1;
  if ( *v2 == 10 )
  {
    v7 = v2[3];
    if ( (v7 & 0xFD) != 0 )
    {
      Log(a1, 256, 1448301362, v7, 0LL);
      v5 = v3;
    }
    if ( *((_WORD *)v2 + 2) == (_WORD)v3 )
    {
      Log(a1, 256, 1448301363, 0LL, v3);
      v5 = v3;
    }
    v8 = v2[6];
    if ( (v8 & 0xF0) != 0 )
    {
      Log(a1, 256, 1448301364, v8, v3);
      v8 = v2[6];
      v5 = v3;
    }
    v9 = *((unsigned __int16 *)v2 + 2);
    if ( !_bittest(&v9, v8) )
    {
      Log(a1, 256, 1448301365, v8, v3);
      v5 = v3;
    }
    v10 = v2[7];
    if ( v10 >= 0xBu )
    {
      Log(a1, 256, 1448301366, v10, v3);
      v5 = v3;
    }
    v11 = *((_WORD *)v2 + 4);
    if ( v11 >= 0x800u )
    {
      Log(a1, 256, 1448301367, v11, v3);
      return v12;
    }
    return v5;
  }
  else
  {
    Log(a1, 256, 1448301361, *v2, 0LL);
    return 0;
  }
}
