/*
 * XREFs of CmpLogTransactionAbortedByName @ 0x1407F9900
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x1406D0908 (CmpLogTransactionAbortedWithChildName.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall CmpLogTransactionAbortedByName(unsigned __int16 *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rbx
  int v7; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v9; // [rsp+60h] [rbp+17h]
  int v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+6Ch] [rbp+23h]
  __int64 v12; // [rsp+70h] [rbp+27h]
  _DWORD v13[2]; // [rsp+78h] [rbp+2Fh] BYREF
  int *v14; // [rsp+80h] [rbp+37h]
  int v15; // [rsp+88h] [rbp+3Fh]
  int v16; // [rsp+8Ch] [rbp+43h]

  if ( a4 )
  {
    v5 = a4;
    do
    {
      if ( stru_140400AA0.LevelPlus1 > 4 )
      {
        if ( TlgKeywordOn(&stru_140400AA0, 1uLL) )
        {
          v11 = 0;
          v13[1] = 0;
          v16 = 0;
          v9 = v13;
          v12 = *((_QWORD *)a1 + 1);
          v13[0] = *a1;
          v14 = &v7;
          v7 = a2;
          v10 = 2;
          v15 = 4;
          TlgWrite(&stru_140400AA0, &unk_14036D45B, 0LL, 0LL, 5u, &pData);
        }
      }
      --v5;
    }
    while ( v5 );
  }
}
