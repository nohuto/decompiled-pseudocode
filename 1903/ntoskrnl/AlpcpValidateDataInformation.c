/*
 * XREFs of AlpcpValidateDataInformation @ 0x140886110
 * Callers:
 *     AlpcpSendMessage @ 0x1405E1660 (AlpcpSendMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140647304 (AlpcpReplyLegacySynchronousRequest.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpValidateDataInformation(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r8
  unsigned __int16 v3; // r9
  _DWORD *v4; // rdx

  v2 = *(_WORD *)(a2 + 6);
  v3 = *(_WORD *)(a2 + 2);
  if ( v2 < 0x28u || v2 > (unsigned __int64)v3 - 24 )
    return 3221225485LL;
  v4 = (_DWORD *)(a1 + v2);
  if ( ((unsigned __int8)v4 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( *v4 > (unsigned int)(((unsigned __int64)(unsigned __int16)(v3 - v2) - 8) >> 4) )
    return 3221225485LL;
  else
    return 0LL;
}
