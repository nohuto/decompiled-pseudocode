/*
 * XREFs of PfSnHashUnsafeUnicodeString @ 0x1406C1660
 * Callers:
 *     PfSnScanCommandLine @ 0x140668BB4 (PfSnScanCommandLine.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfSnHashUnsafeUnicodeString(__int64 a1, __int64 *a2)
{
  __int64 v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int8 *v6; // r8
  __int64 v7; // rdx
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d

  LOWORD(v3) = *(_WORD *)a1;
  if ( *(_WORD *)a1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( (v4 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = v4 + (unsigned __int16)v3;
    if ( v5 > 0x7FFFFFFF0000LL || v5 < v4 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v6 = *(unsigned __int8 **)(a1 + 8);
  v3 = (unsigned __int16)v3;
  v7 = 314159LL;
  while ( v3 >= 8 )
  {
    v7 = 37 * (37 * (37 * (37 * (37 * (37 * (37 * (*v6 + 37 * v7) + v6[1]) + v6[2]) + v6[3]) + v6[4]) + v6[5]) + v6[6])
       + v6[7];
    v6 += 8;
    v3 -= 8LL;
  }
  if ( v3 >= 1 )
  {
    v8 = v3 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                if ( v13 != 1 )
                  goto LABEL_25;
                v7 = *v6++ + 37 * v7;
              }
              v7 = *v6++ + 37 * v7;
            }
            v7 = *v6++ + 37 * v7;
          }
          v7 = *v6++ + 37 * v7;
        }
        v7 = *v6++ + 37 * v7;
      }
      v7 = *v6++ + 37 * v7;
    }
    v7 = *v6 + 37 * v7;
  }
LABEL_25:
  *a2 = v7;
  return 0LL;
}
