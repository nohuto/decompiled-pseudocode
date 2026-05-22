/*
 * XREFs of ?ConvertHIDTLCIdToInputType@HIDDeviceCollection@@AEAAJGGPEAW4InputType@@@Z @ 0x180069240
 * Callers:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180069360 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HIDDeviceCollection::ConvertHIDTLCIdToInputType(
        HIDDeviceCollection *this,
        __int16 a2,
        __int16 a3,
        enum InputType *a4)
{
  int v4; // eax

  switch ( a2 )
  {
    case 4:
      if ( a3 == 13 )
      {
        v4 = 8;
        goto LABEL_36;
      }
LABEL_35:
      v4 = 256;
      goto LABEL_36;
    case 5:
      if ( a3 == 13 )
      {
        v4 = 32;
        goto LABEL_36;
      }
      if ( a3 == 1 )
      {
        v4 = 64;
        goto LABEL_36;
      }
      goto LABEL_35;
    case 238:
      if ( a3 != 1 )
        goto LABEL_35;
LABEL_14:
      v4 = 128;
      goto LABEL_36;
    case 1:
      if ( a3 == 12 )
        goto LABEL_14;
      break;
    case 2:
      break;
    default:
      goto LABEL_18;
  }
  if ( a3 == 13 )
  {
    v4 = 16;
    goto LABEL_36;
  }
LABEL_18:
  if ( a2 == -86 )
  {
    if ( a3 == 1 )
    {
      v4 = 1024;
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  if ( a2 == 15 && a3 == 1 )
  {
LABEL_25:
    v4 = 0x2000;
    goto LABEL_36;
  }
  switch ( a2 )
  {
    case 1:
      if ( a3 == -246 )
        goto LABEL_25;
      if ( a3 == 18 )
      {
LABEL_29:
        v4 = 0x4000;
        goto LABEL_36;
      }
      break;
    case 15:
      if ( a3 == 13 )
      {
        v4 = 2048;
        goto LABEL_36;
      }
      goto LABEL_35;
    case 2:
      if ( a3 != 18 )
        goto LABEL_35;
      goto LABEL_29;
  }
  if ( a2 != 120 )
    goto LABEL_35;
  v4 = 128;
  if ( a3 != 12 )
    goto LABEL_35;
LABEL_36:
  *(_DWORD *)a4 = v4;
  return 0LL;
}
