/*
 * XREFs of sub_18005C988 @ 0x18005C988
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_18005CA3C @ 0x18005CA3C (sub_18005CA3C.c)
 *     RtlCreateEnvironmentEx @ 0x18005CB80 (RtlCreateEnvironmentEx.c)
 *     sub_18005D77C @ 0x18005D77C (sub_18005D77C.c)
 *     sub_18005D7A8 @ 0x18005D7A8 (sub_18005D7A8.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 sub_18005C988()
{
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rbp
  size_t v2; // rdi
  void *v3; // rax
  void *v4; // rsi
  __int64 result; // rax
  void *v6; // [rsp+30h] [rbp+8h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  Environment = ProcessParameters->Environment;
  if ( Environment )
  {
    v2 = sub_18005D7A8(ProcessParameters->Environment, 1LL);
    v3 = (void *)sub_18005D77C(v2);
    v4 = v3;
    if ( !v3 )
      return 3221225626LL;
    memmove(v3, Environment, v2);
    goto LABEL_4;
  }
  v2 = 4LL;
  result = RtlCreateEnvironmentEx(0LL);
  if ( (int)result >= 0 )
  {
    v4 = v6;
LABEL_4:
    ++ProcessParameters->EnvironmentVersion;
    ProcessParameters->Environment = v4;
    ProcessParameters->EnvironmentSize = v2;
    memset(&unk_180165B80, 0, 0x468uLL);
    sub_18005CA3C();
    return 0LL;
  }
  return result;
}
