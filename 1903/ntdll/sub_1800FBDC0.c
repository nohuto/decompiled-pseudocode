/*
 * XREFs of sub_1800FBDC0 @ 0x1800FBDC0
 * Callers:
 *     sub_18004A7A0 @ 0x18004A7A0 (sub_18004A7A0.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

__int64 sub_1800FBDC0()
{
  int InformationProcess; // eax
  __int32 *v1; // r9
  unsigned __int64 v2; // r8
  __int64 v3; // r10
  __int64 result; // rax
  int v5; // [rsp+58h] [rbp+20h]

  InformationProcess = ZwQueryInformationProcess();
  if ( InformationProcess < 0 )
    RtlRaiseStatus(InformationProcess);
  v1 = dword_180163920;
  LODWORD(v2) = dword_18017A368 ^ v5;
  v3 = 128LL;
  do
  {
    v2 = (2147483629 * (unsigned __int64)(unsigned int)v2 + 2147483587) % 0x7FFFFFFF;
    *v1++ = v2;
    --v3;
  }
  while ( v3 );
  result = 1LL;
  dword_180163B20 = (2147483629 * (unsigned __int64)(unsigned int)v2 + 2147483587) % 0x7FFFFFFF;
  return result;
}
