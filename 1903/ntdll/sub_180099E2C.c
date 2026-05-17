/*
 * XREFs of sub_180099E2C @ 0x180099E2C
 * Callers:
 *     _vsnwprintf_s @ 0x1800970C0 (_vsnwprintf_s.c)
 *     vswprintf_s @ 0x180098020 (vswprintf_s.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180092D20 @ 0x180092D20 (sub_180092D20.c)
 *     sub_180099F5C @ 0x180099F5C (sub_180099F5C.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180099E2C(_WORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // esi
  _BYTE *v10; // rax
  _QWORD v12[6]; // [rsp+30h] [rbp-30h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( a2 )
  {
    if ( a2 == -1LL )
    {
      LODWORD(v12[1]) = 0x7FFFFFFF;
      goto LABEL_6;
    }
    if ( a2 <= 0x3FFFFFFF )
    {
      LODWORD(v12[1]) = 2 * a2;
LABEL_6:
      v12[2] = a1;
      v12[0] = a1;
      LODWORD(v12[3]) = 66;
      v8 = sub_180099F5C(v12, a3, a4);
      a1[a2 - 1] = 0;
      v9 = v8;
      if ( v8 < 0 )
      {
        if ( SLODWORD(v12[1]) >= 0 )
        {
          if ( a1 )
            *a1 = 0;
          return v9;
        }
        return 4294967294LL;
      }
      --LODWORD(v12[1]);
      if ( SLODWORD(v12[1]) < 0 )
      {
        if ( (unsigned int)sub_180092D20(0LL, (__int64)v12) == -1 )
          return 4294967294LL;
        v10 = (_BYTE *)v12[0];
      }
      else
      {
        *(_BYTE *)v12[0] = 0;
        v10 = (_BYTE *)++v12[0];
      }
      --LODWORD(v12[1]);
      if ( SLODWORD(v12[1]) >= 0 )
      {
        *v10 = 0;
        return v9;
      }
      if ( (unsigned int)sub_180092D20(0LL, (__int64)v12) != -1 )
        return v9;
      return 4294967294LL;
    }
  }
  sub_18008C6D8();
  return 0xFFFFFFFFLL;
}
