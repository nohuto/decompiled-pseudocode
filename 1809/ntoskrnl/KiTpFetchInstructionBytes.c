/*
 * XREFs of KiTpFetchInstructionBytes @ 0x14029F408
 * Callers:
 *     KiTpDecodeModRm @ 0x14029E3B4 (KiTpDecodeModRm.c)
 *     KiTpEmulateInstruction @ 0x14029EAEC (KiTpEmulateInstruction.c)
 *     KiTpFetchImmediateOperand @ 0x14029F398 (KiTpFetchImmediateOperand.c)
 *     KiTpParseInstructionPrefix @ 0x14029F49C (KiTpParseInstructionPrefix.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiTpFetchInstructionBytes(__int64 a1, _BYTE *a2, int a3, _DWORD *a4)
{
  __int64 v4; // r10
  __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = (unsigned int)*a4;
  if ( (int)v4 + a3 > (unsigned int)*(unsigned __int8 *)(a1 + 5) )
    return 3221225990LL;
  *a4 = v4 + a3;
  v6 = v4 + a1 + 6;
  if ( a3 )
  {
    v7 = v6 - (_QWORD)a2;
    do
    {
      *a2 = a2[v7];
      ++a2;
      --a3;
    }
    while ( a3 );
  }
  return 0LL;
}
