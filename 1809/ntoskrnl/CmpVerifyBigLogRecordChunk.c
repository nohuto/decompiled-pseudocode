/*
 * XREFs of CmpVerifyBigLogRecordChunk @ 0x140581D88
 * Callers:
 *     CmpDoReadTxRBigLogRecord @ 0x1407F9F54 (CmpDoReadTxRBigLogRecord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpVerifyBigLogRecordChunk(int *a1, unsigned int a2)
{
  __int64 result; // rax
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // eax
  bool v6; // cf

  if ( a2 < 0x40 || a1[3] >= 0 || a1[13] >= (unsigned int)a1[12] )
    return 3222863920LL;
  v3 = a1[14];
  v4 = -1;
  v5 = v3 + 64;
  v6 = v5 < 0x40;
  if ( v5 >= 0x40 )
    v4 = v5;
  result = 3222863920LL;
  if ( !v6 )
    return a2 < v4 ? 0xC0190030 : 0;
  return result;
}
