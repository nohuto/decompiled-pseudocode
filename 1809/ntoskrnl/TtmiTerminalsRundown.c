/*
 * XREFs of TtmiTerminalsRundown @ 0x1408801A4
 * Callers:
 *     TtmiSessionsRundown @ 0x1408814B4 (TtmiSessionsRundown.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     TtmiLogTerminalRundown @ 0x1408873A8 (TtmiLogTerminalRundown.c)
 */

_UNKNOWN **__fastcall TtmiTerminalsRundown(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 *v2; // rdi
  __int64 *v4; // rbx
  unsigned __int64 v5; // kr00_8
  _QWORD v6[12]; // [rsp+20h] [rbp-60h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h] BYREF

  result = &retaddr;
  v2 = (__int64 *)(a1 + 40);
  v4 = *(__int64 **)(a1 + 40);
  if ( v4 != (__int64 *)(a1 + 40) )
  {
    do
    {
      memset(v6, 0, 0x58uLL);
      LODWORD(v6[0]) = *(_DWORD *)a1;
      HIDWORD(v6[0]) = *((_DWORD *)v4 + 7);
      v6[1] = *(__int64 *)((char *)v4 + 36);
      v6[2] = *(__int64 *)((char *)v4 + 44);
      v6[3] = *(__int64 *)((char *)v4 + 52);
      v6[4] = v4[8] / 0x989680uLL;
      v5 = v4[9];
      v6[6] = v4[10];
      v6[7] = v4[32];
      v6[8] = v4[33];
      v6[9] = v4[34];
      LODWORD(v6[10]) = *((_DWORD *)v4 + 70);
      v6[5] = v5 / 0x989680;
      result = (_UNKNOWN **)TtmiLogTerminalRundown(v6);
      v4 = (__int64 *)*v4;
    }
    while ( v4 != v2 );
  }
  return result;
}
