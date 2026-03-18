/*
 * XREFs of AlpcpValidateMessage @ 0x140648020
 * Callers:
 *     AlpcpSendMessage @ 0x1405E1660 (AlpcpSendMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140646A90 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpValidateConnectionMessage @ 0x1406472BC (AlpcpValidateConnectionMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140647304 (AlpcpReplyLegacySynchronousRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpValidateMessage(unsigned __int16 *a1, char a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx

  v2 = *a1;
  v4 = *a1 + 40;
  if ( v2 < (unsigned __int16)(v2 + 40) )
  {
    v5 = v2 + 40LL;
    v6 = a1[1];
    if ( a2 )
    {
      if ( v5 <= v6 )
      {
        a1[1] = v4;
        return 0LL;
      }
    }
    else if ( v5 == v6 )
    {
      return 0LL;
    }
  }
  return 3221225485LL;
}
