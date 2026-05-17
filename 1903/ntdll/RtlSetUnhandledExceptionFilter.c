/*
 * XREFs of RtlSetUnhandledExceptionFilter @ 0x18007E970
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

void __fastcall RtlSetUnhandledExceptionFilter(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // eax
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v1 = (unsigned int)dword_180166018;
  if ( !dword_180166018 )
  {
    v3 = ZwQueryInformationProcess(-1LL, 36LL, &v4);
    if ( v3 < 0 )
      RtlRaiseStatus((unsigned int)v3);
    v1 = v4;
    dword_180166018 = v4;
  }
  qword_180165350 = __ROR8__(a1 ^ v1, v1 & 0x3F);
}
