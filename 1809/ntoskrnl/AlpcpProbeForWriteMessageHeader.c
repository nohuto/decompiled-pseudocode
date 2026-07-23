/*
 * XREFs of AlpcpProbeForWriteMessageHeader @ 0x1406A5810
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1406146BC (AlpcpProcessConnectionRequest.c)
 *     LpcpRequestWaitReplyPort @ 0x1406A5748 (LpcpRequestWaitReplyPort.c)
 *     LpcpReplyWaitReplyPort @ 0x14084ACA0 (LpcpReplyWaitReplyPort.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

char __fastcall AlpcpProbeForWriteMessageHeader(unsigned __int64 a1, int a2)
{
  __int64 v2; // rdx
  char result; // al
  __int64 v4; // rdx

  if ( (a2 & 0xC0000000) != 0x80000000 )
  {
    if ( (a1 & 3) == 0 )
    {
      v2 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v2 = a1;
      *(_BYTE *)v2 = *(_BYTE *)v2;
      result = *(_BYTE *)(v2 + 39);
      *(_BYTE *)(v2 + 39) = result;
      return result;
    }
LABEL_10:
    ExRaiseDatatypeMisalignment();
  }
  if ( (a1 & 3) != 0 )
    goto LABEL_10;
  v4 = 0x7FFFFFFF0000LL;
  if ( a1 < 0x7FFFFFFF0000LL )
    v4 = a1;
  *(_BYTE *)v4 = *(_BYTE *)v4;
  result = *(_BYTE *)(v4 + 23);
  *(_BYTE *)(v4 + 23) = result;
  return result;
}
