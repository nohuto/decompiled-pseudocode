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

NTSTATUS sub_18005C988()
{
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rbx
  PVOID v1; // rbp
  size_t v2; // rdi
  void *v3; // rax
  PVOID v4; // rsi
  NTSTATUS result; // eax
  PVOID Environment; // [rsp+30h] [rbp+8h] BYREF

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v1 = ProcessParameters->Environment;
  if ( v1 )
  {
    v2 = sub_18005D7A8(ProcessParameters->Environment, 1LL);
    v3 = (void *)sub_18005D77C(v2);
    v4 = v3;
    if ( !v3 )
      return -1073741670;
    memmove(v3, v1, v2);
    goto LABEL_4;
  }
  v2 = 4LL;
  result = RtlCreateEnvironmentEx(0LL, &Environment, 4u);
  if ( result >= 0 )
  {
    v4 = Environment;
LABEL_4:
    ++ProcessParameters->EnvironmentVersion;
    ProcessParameters->Environment = v4;
    ProcessParameters->EnvironmentSize = v2;
    memset(&unk_180165B80, 0, 0x468uLL);
    sub_18005CA3C();
    return 0;
  }
  return result;
}
