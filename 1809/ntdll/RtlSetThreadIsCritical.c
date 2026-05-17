/*
 * XREFs of RtlSetThreadIsCritical @ 0x18008E000
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x1800A0480 (NtSetInformationThread.c)
 *     ZwQueryInformationThread @ 0x1800A0780 (ZwQueryInformationThread.c)
 */

__int64 __fastcall RtlSetThreadIsCritical(unsigned __int8 a1, _BYTE *a2, char a3)
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
    return NtSetInformationThread(-2LL, 18LL, &v6, 4LL);
  }
  result = ZwQueryInformationThread(-2LL, 18LL, &v6);
  if ( (int)result >= 0 )
  {
    *a2 = v6;
    goto LABEL_8;
  }
  return result;
}
