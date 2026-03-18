/*
 * XREFs of _lambda_42f186421c331d4d68df43a01bbfc838_::operator() @ 0x1C0161648
 * Callers:
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C00E87D4 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C015F17C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

void __fastcall lambda_42f186421c331d4d68df43a01bbfc838_::operator()(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  struct PFF *i; // rcx
  __int64 v5; // rax
  unsigned int v6; // r10d
  __int64 v7; // rcx
  struct PFF *v8; // rax
  int v9; // r9d
  __int64 v10; // r11
  struct PFF *v11; // rdx

  v2 = a2;
  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 28) )
    {
      v3 = 0;
      if ( *(_DWORD *)(a2 + 24) )
      {
        do
        {
          for ( i = *(struct PFF **)(v2 + 8LL * v3 + 40); ; i = (struct PFF *)*((_QWORD *)v11 + 1) )
          {
            v8 = SkipInvalidPff(i);
            v11 = v8;
            if ( !v8 )
              break;
            v5 = *((_QWORD *)v8 + 11);
            if ( v5 )
            {
              if ( (*(_DWORD *)(v5 + 40) & 0x8000) == 0 )
              {
                v6 = v10;
                for ( *(_BYTE *)(*((_QWORD *)v11 + 10) + 12LL) = 1;
                      v6 < *((_DWORD *)v11 + 9);
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 25) + 8 * v7) + 16LL) = v10 )
                {
                  v7 = v6++;
                }
              }
            }
          }
          v3 = v9 + 1;
        }
        while ( v3 < *(_DWORD *)(v2 + 24) );
      }
    }
  }
}
