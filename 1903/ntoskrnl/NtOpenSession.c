/*
 * XREFs of NtOpenSession @ 0x1406EC730
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x1406F72D4 (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     ObOpenObjectByName @ 0x1405FDF90 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenSession(_QWORD *a1, ACCESS_MASK a2, __int64 a3)
{
  char PreviousMode; // cl
  __int64 v6; // r8
  __int64 result; // rax
  _QWORD v8[4]; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  result = ObOpenObjectByName(a3, (__int64)MmSessionObjectType, PreviousMode, 0LL, a2, 0LL, v8);
  *a1 = v8[0];
  return result;
}
