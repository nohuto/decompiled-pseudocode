/*
 * XREFs of KdpReportLoadSymbolsStateChange @ 0x1409553C0
 * Callers:
 *     KdpSymbol @ 0x140956F70 (KdpSymbol.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KdpSetCommonState @ 0x1402A260C (KdpSetCommonState.c)
 *     KdpSendWaitContinue @ 0x140955ADC (KdpSendWaitContinue.c)
 *     KdpCopyMemoryChunks @ 0x140957144 (KdpCopyMemoryChunks.c)
 *     KdpSetContextState @ 0x140957430 (KdpSetContextState.c)
 */

__int64 __fastcall KdpReportLoadSymbolsStateChange(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 *v9; // r8
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v12; // [rsp+38h] [rbp-C8h]
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v14; // [rsp+48h] [rbp-B8h]
  __int64 v15[30]; // [rsp+50h] [rbp-B0h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  memset(v15, 0, sizeof(v15));
  do
  {
    KdpSetCommonState(12337, a4, (__int64)v15);
    KdpSetContextState(v15, a4);
    v15[5] = *(_QWORD *)a2;
    v15[6] = *(unsigned int *)(a2 + 8);
    v15[7] = *(_QWORD *)(a2 + 16);
    LOBYTE(v15[8]) = a3;
    if ( a1 )
    {
      KdpCopyMemoryChunks(*(PVOID *)(a1 + 8), 4, (__int64)&v15[4]);
      ++LODWORD(v15[4]);
      v9 = &v11;
      v12 = KdpPathBuffer;
      LOWORD(v11) = v15[4];
      KdpPathBuffer[LOWORD(v15[4]) - 1] = 0;
    }
    else
    {
      LODWORD(v15[4]) = 0;
      v9 = 0LL;
    }
    LOWORD(v13) = 240;
    v14 = v15;
    result = KdpSendWaitContinue(v8, &v13, v9, a4);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
