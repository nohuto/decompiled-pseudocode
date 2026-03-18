/*
 * XREFs of MiClearVadCellBits @ 0x1400AC7F0
 * Callers:
 *     MiClearVadBits @ 0x1400AC6E8 (MiClearVadBits.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1400ACE50 (RtlClearBitsEx.c)
 */

void __fastcall MiClearVadCellBits(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r14
  BOOL v12; // r15d
  __int64 v13; // r8
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  int v18; // edx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9

  v7 = a3;
  if ( !a2 )
    a2 = a1[1] == qword_140465ED8;
  if ( a2 <= a3 )
  {
    v9 = 8 * (a1[1] - qword_140465ED8);
    if ( a3 >= v9 )
    {
      v10 = v9 + *a1;
      if ( a2 < v10 )
      {
        v11 = v9;
        if ( a2 >= v9 )
          v11 = a2;
        v12 = a2 < v9;
        if ( a3 >= v10 )
        {
          v7 = v10 - 1;
          v12 = 1;
        }
        v13 = v7 - v11 + 1;
        v14 = v11 - v9;
        v15 = v7 - v9;
        v16 = a1[8] - v9;
        if ( !*a6 )
        {
          RtlClearBitsEx(a1, v14, v13);
          if ( !v12 )
            *a6 = 1;
        }
        v17 = a1[2];
        v18 = 1;
        if ( v17 < v16 || a1[4] < v16 )
          v18 = 0;
        if ( v17 > v14 )
        {
          if ( v14 < v16 && v18 )
          {
            if ( v15 >= v16 )
              a1[2] = v16;
          }
          else
          {
            a1[2] = v14;
          }
        }
        v19 = 0LL;
        if ( (!a4
           || (v19 = ((((((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) << 12) | 0xFFF)
                      + 0xFFFF) >> 16)
                    - v9) & -(__int64)(v9 < ((((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) << 12) | 0xFFF)
                                           + 0xFFFF) >> 16)) == 0)
          && !v9 )
        {
          v19 = 1LL;
        }
        if ( v18 && v19 < v16 )
          v19 = v16;
        if ( v19 <= v15 )
        {
          v20 = *a1;
          if ( a5
            && (((unsigned __int64)*(unsigned int *)(a5 + 24) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a5 + 32) << 28)) <= v20 + v9 )
          {
            v20 = (((unsigned __int64)*(unsigned int *)(a5 + 24) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a5 + 32) << 28))
                - v9;
          }
          if ( v19 < a1[4] && v20 - v19 >= a1[3] )
            a1[4] = v19;
        }
      }
    }
  }
}
