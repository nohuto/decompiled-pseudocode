/*
 * XREFs of RtlpInitRandomExVector @ 0x1800FBEA0
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x18004A840 (RtlpHeapGenerateRandomValue32.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x18009D1B0 (NtQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

__int64 RtlpInitRandomExVector()
{
  NTSTATUS v0; // eax
  __int32 *v1; // r9
  unsigned __int64 v2; // r8
  __int64 v3; // r10
  __int64 result; // rax
  int ProcessInformation; // [rsp+58h] [rbp+20h] BYREF

  v0 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
  if ( v0 < 0 )
    RtlRaiseStatus(v0);
  v1 = RtlpRandomExConstantVector;
  LODWORD(v2) = dword_18017A388 ^ ProcessInformation;
  v3 = 128LL;
  do
  {
    v2 = (2147483629 * (unsigned __int64)(unsigned int)v2 + 2147483587) % 0x7FFFFFFF;
    *v1++ = v2;
    --v3;
  }
  while ( v3 );
  result = 1LL;
  RtlpRandomExAuxVarY = (2147483629 * (unsigned __int64)(unsigned int)v2 + 2147483587) % 0x7FFFFFFF;
  return result;
}
