/*
 * XREFs of InbvPortTerminate @ 0x14032C6A4
 * Callers:
 *     HdlspEnableTerminal @ 0x14094D4BC (HdlspEnableTerminal.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

char __fastcall InbvPortTerminate(unsigned int a1)
{
  __int64 v1; // rbx
  char result; // al
  __int128 v3; // xmm1
  __int64 v4; // xmm0_8
  _OWORD v5[3]; // [rsp+20h] [rbp-38h] BYREF

  if ( a1 >= 4 )
    return 0;
  v1 = 5LL * a1;
  if ( !*((_QWORD *)&Ports + 5 * a1) )
    return 0;
  memset(v5, 0, 0x28uLL);
  result = 1;
  v3 = v5[1];
  *(_OWORD *)((char *)&Ports + 8 * v1) = v5[0];
  v4 = *(_QWORD *)&v5[2];
  *(_OWORD *)((char *)&Ports + 8 * v1 + 16) = v3;
  *((_QWORD *)&Ports + v1 + 4) = v4;
  return result;
}
