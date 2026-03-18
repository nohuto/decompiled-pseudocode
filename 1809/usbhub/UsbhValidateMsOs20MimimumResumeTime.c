/*
 * XREFs of UsbhValidateMsOs20MimimumResumeTime @ 0x1C0058120
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 */

char __fastcall UsbhValidateMsOs20MimimumResumeTime(__int64 a1, int *a2, unsigned __int16 *a3)
{
  int v3; // eax
  __int64 v4; // r10
  __int64 v5; // r9
  int v6; // r8d
  unsigned __int8 v7; // cl

  v3 = *a2;
  v4 = a1;
  if ( (*a2 & 0x80u) == 0 )
  {
    if ( *a3 == 6 )
    {
      v7 = *((_BYTE *)a3 + 4);
      if ( v7 <= 0xAu )
      {
        LOBYTE(v5) = *((_BYTE *)a3 + 5);
        if ( (unsigned __int8)(v5 - 1) <= 0x13u )
        {
          *((_QWORD *)a2 + 4) = a3;
          *a2 = v3 | 0x80;
          return 1;
        }
        v5 = (unsigned __int8)v5;
        v6 = 1447907891;
      }
      else
      {
        v5 = v7;
        v6 = 1447907890;
      }
    }
    else
    {
      v5 = *a3;
      v6 = 1447907889;
    }
    a1 = v4;
  }
  else
  {
    v5 = 0LL;
    v6 = 1447907888;
  }
  Log(a1, 256, v6, v5, 0LL);
  return 0;
}
