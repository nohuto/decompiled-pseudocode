/*
 * XREFs of RtlSetProcessIsCritical @ 0x18008B520
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     ZwSetInformationProcess @ 0x18009CA60 (ZwSetInformationProcess.c)
 */

__int64 __fastcall RtlSetProcessIsCritical(unsigned __int8 a1, _BYTE *a2, char a3)
{
  __int64 result; // rax
  int v6; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 )
    *a2 = 0;
  if ( a3 && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return 3221225473LL;
  if ( !a2 )
  {
LABEL_8:
    v6 = a1;
    return ZwSetInformationProcess(-1LL, 29LL, &v6, 4LL);
  }
  result = ZwQueryInformationProcess(-1LL, 29LL, &v6);
  if ( (int)result >= 0 )
  {
    *a2 = v6;
    goto LABEL_8;
  }
  return result;
}
