/*
 * XREFs of EtwTraceUserUpdateHandleOwner @ 0x1C0086C50
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C0086880 (HMChangeOwnerThreadWorker.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C0086AC8 (HMChangeOwnerPheProcessWorker.c)
 * Callees:
 *     McTemplateK0pqqq @ 0x1C010DFB4 (McTemplateK0pqqq.c)
 */

ULONG __fastcall EtwTraceUserUpdateHandleOwner(struct _MCGEN_TRACE_CONTEXT *Arg0, unsigned int Arg1, const GUID *Arg3)
{
  ULONG result; // eax
  unsigned int v4; // [rsp+28h] [rbp-20h]

  if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 2) != 0 )
    return McTemplateK0pqqq(Arg0, &UserUpdateHandleOwner, Arg3, Arg0, Arg1, v4, (const unsigned int)Arg3);
  return result;
}
