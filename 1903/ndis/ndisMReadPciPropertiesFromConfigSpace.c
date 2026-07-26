/*
 * XREFs of ndisMReadPciPropertiesFromConfigSpace @ 0x1C002ECC4
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisMGetBusData @ 0x1C002EE00 (NdisMGetBusData.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisMReadPciPropertiesFromConfigSpace(char *NdisMiniportHandle)
{
  int v2; // ebx
  unsigned __int8 v3; // bp
  ULONG v4; // r15d
  _BYTE Buffer[64]; // [rsp+30h] [rbp-68h] BYREF

  v2 = 0;
  memset(Buffer, 0, sizeof(Buffer));
  if ( NdisMGetBusData(NdisMiniportHandle, 0, 0, Buffer, 0x40u) == 64 )
  {
    if ( (Buffer[14] & 0x7F) != 0 )
    {
      return (unsigned int)-1073741808;
    }
    else if ( (Buffer[6] & 0x10) != 0 )
    {
      v3 = Buffer[52];
      while ( v3 )
      {
        v4 = v3;
        if ( NdisMGetBusData(NdisMiniportHandle, 0, v3, Buffer, 2u) != 2 )
          return (unsigned int)-1073741823;
        v3 = Buffer[1];
        if ( Buffer[0] == 5 )
        {
          if ( NdisMGetBusData(NdisMiniportHandle, 0, v4, NdisMiniportHandle + 3624, 0x18u) != 24 )
          {
            v2 = -1073741823;
            *((_QWORD *)NdisMiniportHandle + 453) = 0LL;
            *((_QWORD *)NdisMiniportHandle + 454) = 0LL;
            *((_QWORD *)NdisMiniportHandle + 455) = 0LL;
          }
        }
        else if ( Buffer[0] == 17 && NdisMGetBusData(NdisMiniportHandle, 0, v4, NdisMiniportHandle + 3648, 0xCu) != 12 )
        {
          *((_QWORD *)NdisMiniportHandle + 453) = 0LL;
          *((_QWORD *)NdisMiniportHandle + 454) = 0LL;
          *((_QWORD *)NdisMiniportHandle + 455) = 0LL;
          return (unsigned int)-1073741823;
        }
        if ( v2 < 0 )
          return (unsigned int)v2;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v2;
}
