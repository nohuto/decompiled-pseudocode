/*
 * XREFs of PpmParkUpdateConcurrencyTracking @ 0x1407739C8
 * Callers:
 *     PpmCheckReInit @ 0x14077387C (PpmCheckReInit.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1400B9068 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

unsigned __int64 __fastcall PpmParkUpdateConcurrencyTracking(char a1)
{
  char v1; // r12
  unsigned __int64 result; // rax
  unsigned __int16 i; // di
  __int64 v4; // rbx
  char v5; // al
  char v6; // cl
  unsigned __int16 v7; // cx
  __int64 v8; // rdx
  __int64 v9; // r15
  _BYTE *v10; // r14
  __int64 *v11; // rsi
  unsigned __int16 v12; // cx
  __int64 v13; // rdx
  _QWORD v15[22]; // [rsp+38h] [rbp-89h] BYREF

  v1 = a1;
  result = (unsigned __int64)memset(v15, 0, 0xA8uLL);
  for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
  {
    v4 = PpmParkNodes + 272LL * i;
    v5 = *(_BYTE *)(v4 + 146);
    v6 = v5 & 8;
    if ( v1 )
    {
      if ( !v6 )
      {
        v9 = 2LL;
        v10 = (_BYTE *)(v4 + 128);
        v11 = (__int64 *)(v4 + 152);
        *(_BYTE *)(v4 + 146) = v5 | 8;
        do
        {
          if ( *v10 )
          {
            LODWORD(v15[0]) = 1310721;
            memset((char *)v15 + 4, 0, 0xA4uLL);
            v12 = *(_WORD *)(v4 + 4);
            v13 = *(v11 - 17);
            if ( v12 )
              LOWORD(v15[0]) = v12 + 1;
            v15[v12 + 1] |= v13;
            PopExecuteOnTargetProcessors((__int64)v15, (__int64)PpmIdleInstallConcurrency, *(_QWORD *)(v4 + 72), *v11);
          }
          ++v11;
          ++v10;
          --v9;
        }
        while ( v9 );
        v1 = a1;
      }
    }
    else if ( v6 )
    {
      *(_BYTE *)(v4 + 146) = v5 & 0xF7;
      LODWORD(v15[0]) = 1310721;
      memset((char *)v15 + 4, 0, 0xA4uLL);
      v7 = *(_WORD *)(v4 + 4);
      v8 = *(_QWORD *)(v4 + 8);
      if ( v7 )
        LOWORD(v15[0]) = v7 + 1;
      v15[v7 + 1] |= v8;
      PopExecuteOnTargetProcessors((__int64)v15, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
    }
    ++i;
  }
  return result;
}
