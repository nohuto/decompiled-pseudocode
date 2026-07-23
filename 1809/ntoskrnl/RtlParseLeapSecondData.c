/*
 * XREFs of RtlParseLeapSecondData @ 0x1409077CC
 * Callers:
 *     ExpParseAndUpdateLeapSecondData @ 0x140736790 (ExpParseAndUpdateLeapSecondData.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140127228 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 */

__int64 __fastcall RtlParseLeapSecondData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v7; // rbx
  unsigned int v8; // r15d
  unsigned __int64 *v9; // r12
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  bool v12; // zf
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+28h] [rbp-28h]
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]
  int v22; // [rsp+A8h] [rbp+58h]

  v4 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  v22 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( a2 )
  {
    v9 = (unsigned __int64 *)(a4 + 8);
    v10 = a1 + 4;
    v17 = a3 - a4;
    while ( 1 )
    {
      v18 = v10;
      v19 = 0LL;
      v20 = 0LL;
      v19 = *(_QWORD *)(v10 - 4);
      LODWORD(v20) = 3866683;
      if ( !RtlpTimeFieldsToTimeNoLeapSeconds((__int16 *)&v19, &v16) )
        break;
      if ( (__int64)v16 <= v7 )
        return 5;
      v7 = v16;
      v11 = 10000000LL * v22 + v16;
      if ( v16 >> 63 == (unsigned int)((unsigned __int64)(10000000LL * v22) >> 32) >> 31 && v16 >> 63 != v11 >> 63 )
        return 7;
      v12 = (*(_BYTE *)(v10 + 4) & 1) == 0;
      v13 = 10000000LL * v22 + v16;
      v16 = v13;
      if ( !v12 )
      {
        v11 |= 0x8000000000000000uLL;
        v16 = v11;
        v13 = v11;
      }
      if ( a3 && v8 < *(_DWORD *)(a3 + 4) && v13 != *(unsigned __int64 *)((char *)v9 + v17) )
        return 6;
      *v9 = v11;
      ++v8;
      v14 = v18;
      ++v9;
      ++*(_DWORD *)(a4 + 4);
      v10 += 12LL;
      v22 = v22 + 2 * ((*(_WORD *)(v14 + 4) & 1) == 0) - 1;
      if ( v8 >= a2 )
        return v4;
    }
    return 4;
  }
  return v4;
}
