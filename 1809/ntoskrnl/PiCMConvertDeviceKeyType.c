/*
 * XREFs of PiCMConvertDeviceKeyType @ 0x1406A87F0
 * Callers:
 *     PiCMOpenDeviceKey @ 0x1406A8158 (PiCMOpenDeviceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408387EC (PiCMDeleteDeviceKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiCMConvertDeviceKeyType(__int16 a1, int *a2)
{
  unsigned int v2; // r9d
  int v4; // ecx
  int v5; // eax
  int v6; // r10d

  v2 = 0;
  *a2 = 0;
  switch ( (unsigned __int8)a1 )
  {
    case 0x11u:
      *a2 = 17;
      v4 = 529;
      v5 = 273;
      break;
    case 0x12u:
      *a2 = 18;
      v4 = 530;
      v5 = 274;
      break;
    case 0x13u:
      *a2 = 19;
      v4 = 531;
      v5 = 275;
      break;
    case 0x14u:
      *a2 = 20;
      v4 = 532;
      v5 = 276;
      break;
    default:
      return (unsigned int)-1073741811;
  }
  v6 = a1 & 0xFF00;
  if ( v6 )
  {
    if ( v6 == 256 )
    {
      *a2 = v5;
      return v2;
    }
    if ( v6 == 512 )
    {
      *a2 = v4;
      return v2;
    }
    return (unsigned int)-1073741811;
  }
  return v2;
}
