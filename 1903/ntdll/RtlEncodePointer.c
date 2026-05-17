/*
 * XREFs of RtlEncodePointer @ 0x18006FBD0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlEncodePointer(__int64 a1)
{
  __int64 v1; // rax
  int v4; // eax
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF

  v1 = (unsigned int)dword_180166018;
  if ( !dword_180166018 )
  {
    v4 = ZwQueryInformationProcess(-1LL, 36LL, &v5);
    if ( v4 < 0 )
      RtlRaiseStatus((unsigned int)v4);
    v1 = v5;
    dword_180166018 = v5;
  }
  return __ROR8__(a1 ^ v1, v1 & 0x3F);
}
