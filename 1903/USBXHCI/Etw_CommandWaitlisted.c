/*
 * XREFs of Etw_CommandWaitlisted @ 0x1C003E310
 * Callers:
 *     Command_InternalSendCommand @ 0x1C000A23C (Command_InternalSendCommand.c)
 * Callees:
 *     McTemplateK0ppb16u @ 0x1C0006CC8 (McTemplateK0ppb16u.c)
 */

ULONG __fastcall Etw_CommandWaitlisted(struct _MCGEN_TRACE_CONTEXT *a1, __int64 a2, __int64 a3, char a4)
{
  ULONG result; // eax

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
    return McTemplateK0ppb16u(a1, a2, a3, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), a3, a3 + 24, a4);
  return result;
}
