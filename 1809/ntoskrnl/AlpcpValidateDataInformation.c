/*
 * XREFs of AlpcpValidateDataInformation @ 0x14084BDF8
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x140616538 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x140635910 (AlpcpSendMessage.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
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
