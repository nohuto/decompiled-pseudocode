/*
 * XREFs of RtlMarkExceptionHandlingPages @ 0x140683F30
 * Callers:
 *     MiCaptureImageExceptionValues @ 0x140683E84 (MiCaptureImageExceptionValues.c)
 * Callees:
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     RtlpSearchFunctionTable @ 0x14016A444 (RtlpSearchFunctionTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlMarkExceptionHandlingPages(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        PRTL_BITMAP BitMapHeader)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v8; // r12
  unsigned int v9; // r14d
  __int64 v10; // r13
  unsigned int *v11; // rsi
  unsigned int i; // eax
  int v13; // r12d
  _BYTE *v14; // rbx
  int v15; // eax
  bool v16; // zf
  unsigned int v17; // ecx
  __int64 v18; // rax
  char v19; // cl
  unsigned int *v20; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // [rsp+60h] [rbp+8h]

  v6 = a1 + a2;
  if ( a3 >= a1 )
  {
    v8 = a4 + a3;
    v24 = v8;
    if ( v8 <= v6 )
    {
      v9 = a4 / 0xC;
      if ( a4 == 12 * (a4 / 0xCuLL) )
      {
        RtlSetBits(BitMapHeader, (a3 - a1) >> 12, ((a3 - a1 + a4 + 4095LL) >> 12) - ((a3 - a1) >> 12));
        v10 = 0LL;
        if ( !v9 )
          return 0LL;
LABEL_5:
        v11 = (unsigned int *)(a3 + 12 * v10);
        for ( i = v11[2]; (i & 1) != 0; i = *(_DWORD *)(v23 + 8) )
        {
          v22 = v11[2];
          v23 = (unsigned __int64)v11;
          if ( (v22 & 1) != 0 )
          {
            v23 = v22 + a1 - 1;
            if ( a1 <= 0x7FFFFFFEFFFFLL && (v23 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
          }
          v11 = (unsigned int *)v23;
          if ( v23 >= a3 && v23 + 12 <= v8 )
            break;
          if ( v23 < a1 || v23 > v6 - 12 )
            return 3221225727LL;
          RtlSetBits(
            BitMapHeader,
            (v23 - a1) >> 12,
            ((unsigned __int64)(((_WORD)v23 - (_WORD)a1) & 0xFFF) + 12 > 0x1000) + 1);
        }
        v13 = 0;
        while ( 1 )
        {
          v14 = (_BYTE *)(a1 + v11[2]);
          if ( (unsigned __int64)v14 < a1 || (unsigned __int64)(v14 + 6) > v6 )
            break;
          v15 = (unsigned __int8)v14[2];
          v16 = (v15 & 1) == 0;
          v17 = 2 * v15 + 6;
          v18 = (unsigned int)(2 * v15 + 8);
          if ( v16 )
            v18 = v17;
          v19 = *v14 >> 3;
          if ( (v19 & 4) != 0 )
          {
            v18 = (unsigned int)(v18 + 12);
          }
          else if ( (v19 & 3) != 0 )
          {
            v18 = (unsigned int)(v18 + 8);
          }
          if ( (unsigned __int64)&v14[v18] > v6 )
            break;
          RtlSetBits(
            BitMapHeader,
            v11[2] >> 12,
            (((unsigned int)v18 + (unsigned __int64)v11[2] + 4095) >> 12) - (v11[2] >> 12));
          if ( (*v14 & 0x20) != 0 )
          {
            if ( (unsigned int)++v13 > 0x20 )
              return 3221225727LL;
            v11 = (unsigned int *)&v14[2 * (((unsigned __int8)v14[2] + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) + 4];
            v20 = RtlpSearchFunctionTable(a3, v9, a1 + *v11, a1);
            if ( !v20 || v20[2] != v11[2] )
              continue;
          }
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= v9 )
            return 0LL;
          v8 = v24;
          goto LABEL_5;
        }
      }
    }
  }
  return 3221225727LL;
}
