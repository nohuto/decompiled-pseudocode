/*
 * XREFs of PpmParkUpdateConcurrencyTracking @ 0x140750450
 * Callers:
 *     PpmCheckReInit @ 0x140750304 (PpmCheckReInit.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1400A5E08 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

unsigned __int64 __fastcall PpmParkUpdateConcurrencyTracking(char a1)
{
  unsigned __int64 result; // rax
  char v2; // r12
  unsigned __int16 i; // di
  __int64 v4; // rbx
  char v5; // al
  unsigned __int16 v6; // cx
  __int64 v7; // rdx
  __int64 v8; // r15
  _BYTE *v9; // r14
  __int64 *v10; // rsi
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  int v14; // [rsp+38h] [rbp-89h] BYREF
  _DWORD v15[43]; // [rsp+3Ch] [rbp-85h] BYREF
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+5Fh] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = a1;
  for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
  {
    v4 = PpmParkNodes + 264LL * i;
    v5 = *(_BYTE *)(v4 + 138);
    if ( v2 )
    {
      if ( (v5 & 8) == 0 )
      {
        v8 = 2LL;
        v9 = (_BYTE *)(v4 + 120);
        v10 = (__int64 *)(v4 + 144);
        *(_BYTE *)(v4 + 138) = v5 | 8;
        do
        {
          if ( *v9 )
          {
            v14 = 1310721;
            memset(v15, 0, 0xA4uLL);
            v11 = *(_WORD *)(v4 + 4);
            v12 = *(v10 - 16);
            if ( v11 )
              LOWORD(v14) = v11 + 1;
            *(_QWORD *)&v15[2 * v11 + 1] |= v12;
            PopExecuteOnTargetProcessors((__int64)&v14, (__int64)PpmIdleInstallConcurrency, *(_QWORD *)(v4 + 64), *v10);
          }
          ++v10;
          ++v9;
          --v8;
        }
        while ( v8 );
        v2 = a1;
      }
    }
    else if ( (v5 & 8) != 0 )
    {
      *(_BYTE *)(v4 + 138) = v5 & 0xF7;
      v14 = 1310721;
      memset(v15, 0, 0xA4uLL);
      v6 = *(_WORD *)(v4 + 4);
      v7 = *(_QWORD *)(v4 + 8);
      if ( v6 )
        LOWORD(v14) = v6 + 1;
      *(_QWORD *)&v15[2 * v6 + 1] |= v7;
      PopExecuteOnTargetProcessors((__int64)&v14, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
    }
    ++i;
  }
  return result;
}
