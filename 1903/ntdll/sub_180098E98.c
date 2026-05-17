/*
 * XREFs of sub_180098E98 @ 0x180098E98
 * Callers:
 *     _vsnprintf_s @ 0x180096FB0 (_vsnprintf_s.c)
 *     vsprintf_s @ 0x180097AA0 (vsprintf_s.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180092D20 @ 0x180092D20 (sub_180092D20.c)
 *     sub_180098540 @ 0x180098540 (sub_180098540.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180098E98(_BYTE *a1, unsigned __int64 a2, _BYTE *a3, int *a4)
{
  int v8; // eax
  unsigned int v9; // esi
  _QWORD v11[6]; // [rsp+30h] [rbp-30h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( a2 )
  {
    if ( a2 == -1LL )
    {
      LODWORD(v11[1]) = 0x7FFFFFFF;
      goto LABEL_6;
    }
    if ( a2 <= 0x7FFFFFFF )
    {
      LODWORD(v11[1]) = a2;
LABEL_6:
      v11[2] = a1;
      v11[0] = a1;
      LODWORD(v11[3]) = 66;
      v8 = sub_180098540((__int64)v11, a3, a4);
      a1[a2 - 1] = 0;
      v9 = v8;
      if ( v8 < 0 )
      {
        if ( SLODWORD(v11[1]) >= 0 )
        {
          if ( a1 )
            *a1 = 0;
          return v9;
        }
        return 4294967294LL;
      }
      --LODWORD(v11[1]);
      if ( SLODWORD(v11[1]) < 0 )
      {
        if ( (unsigned int)sub_180092D20(0LL, (__int64)v11) == -1 )
          return 4294967294LL;
      }
      else
      {
        *(_BYTE *)v11[0] = 0;
      }
      return v9;
    }
  }
  sub_18008C6D8();
  return 0xFFFFFFFFLL;
}
