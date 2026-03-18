/*
 * XREFs of NtOpenSession @ 0x1406DB0F0
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x140864E80 (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     ObOpenObjectByName @ 0x1405B9290 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenSession(_QWORD *a1, int a2, __int64 a3)
{
  char PreviousMode; // cl
  __int64 result; // rax
  __int64 v7; // r8
  _QWORD v8[4]; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObOpenObjectByName(a3, (__int64)MmSessionObjectType, PreviousMode, 0LL, a2, 0LL, (__int64)v8);
  *a1 = v8[0];
  return result;
}
