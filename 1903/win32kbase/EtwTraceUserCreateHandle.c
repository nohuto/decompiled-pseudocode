/*
 * XREFs of EtwTraceUserCreateHandle @ 0x1C006F790
 * Callers:
 *     HMAllocObject @ 0x1C0027A70 (HMAllocObject.c)
 *     HMCreateHandleForObject @ 0x1C006F600 (HMCreateHandleForObject.c)
 * Callees:
 *     McTemplateK0pqqq @ 0x1C0110924 (McTemplateK0pqqq.c)
 */

ULONG __fastcall EtwTraceUserCreateHandle(struct _MCGEN_TRACE_CONTEXT *Arg0, unsigned int Arg1, const GUID *Arg3)
{
  ULONG result; // eax
  unsigned int v4; // [rsp+28h] [rbp-20h]

  if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 2) != 0 )
    return McTemplateK0pqqq(Arg0, &UserCreateHandle, Arg3, Arg0, Arg1, v4, (const unsigned int)Arg3);
  return result;
}
