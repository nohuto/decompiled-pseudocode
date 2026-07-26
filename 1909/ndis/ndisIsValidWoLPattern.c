/*
 * XREFs of ndisIsValidWoLPattern @ 0x1C001CE4C
 * Callers:
 *     ndisOidPrePMAddWOLPattern @ 0x1C001CCF0 (ndisOidPrePMAddWOLPattern.c)
 * Callees:
 *     ndisIsValidPmCountedString @ 0x1C001CF04 (ndisIsValidPmCountedString.c)
 */

char __fastcall ndisIsValidWoLPattern(__int64 a1, __int64 a2)
{
  char v2; // al
  _DWORD *v3; // r8
  unsigned int v4; // r9d
  unsigned int v5; // r11d
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edx

  if ( *(_BYTE *)a1 == 0x80 )
  {
    v2 = *(_BYTE *)(a1 + 1);
    if ( (v2 == 1 || v2 == 2)
      && *(_WORD *)(a1 + 2) >= 0xC4u
      && (unsigned __int8)ndisIsValidPmCountedString(a1 + 16, a2, a1)
      && !v3[38] )
    {
      v6 = v3[3];
      if ( v6 == 1 )
      {
        v7 = v3[41];
        if ( v7 )
        {
          v8 = v3[43];
          if ( v8 )
          {
            if ( v7 >= v8 >> 3 )
            {
              v9 = v3[40];
              if ( v9 >= v4 && v9 + v7 >= v9 && v9 + v7 <= v5 )
              {
                v10 = v3[42];
                if ( v10 >= v4 )
                {
                  v11 = v10 + v8;
                  if ( v11 >= v10 && v11 <= v5 )
                    return 1;
                }
              }
            }
          }
        }
      }
      else if ( v6 > 1 && v6 <= 5 )
      {
        return 1;
      }
    }
  }
  return 0;
}
