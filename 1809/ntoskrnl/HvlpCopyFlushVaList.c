/*
 * XREFs of HvlpCopyFlushVaList @ 0x1402798E8
 * Callers:
 *     HvlpFastFlushPasidAddressList @ 0x14027658C (HvlpFastFlushPasidAddressList.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1402767D0 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpFastFlushListTb @ 0x140279B10 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushListTbEx @ 0x140279BE8 (HvlpFastFlushListTbEx.c)
 *     HvlpSlowFlushListTb @ 0x14027A09C (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x14027A214 (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     <none>
 */

void __fastcall HvlpCopyFlushVaList(unsigned int a1, unsigned __int64 *a2, char a3, __int64 *a4)
{
  __int64 v4; // r10
  unsigned __int64 *v5; // r11
  signed __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rdx
  unsigned __int64 v12; // rax

  v4 = 0LL;
  v5 = a2;
  if ( a3 )
  {
    if ( a1 )
    {
      v8 = a1;
      do
      {
        v9 = *v5;
        if ( (*v5 & 0xC00) != 0 && (*v5 & 0x3FF) != 0 )
        {
          v10 = 9 * ((v9 >> 10) & 3);
          v11 = (unsigned int)(v9 & 0x3FF) + 1;
          v12 = v9 & 0xFFFFFFFFFFFFF000uLL;
          do
          {
            a4[v4] = v12;
            v12 += 4096LL << v10;
            v4 = (unsigned int)(v4 + 1);
            --v11;
          }
          while ( v11 );
        }
        else
        {
          a4[v4] = v9 & 0xFFFFFFFFFFFFF3FFuLL;
          v4 = (unsigned int)(v4 + 1);
        }
        ++v5;
        --v8;
      }
      while ( v8 );
    }
  }
  else if ( a1 )
  {
    v6 = (char *)a2 - (char *)a4;
    v7 = a1;
    do
    {
      *a4 = *(__int64 *)((char *)a4 + v6) & 0x800 | (*(__int64 *)((char *)a4 + v6)
                                                   + (*(__int64 *)((char *)a4 + v6) & 0xC00));
      ++a4;
      --v7;
    }
    while ( v7 );
  }
}
