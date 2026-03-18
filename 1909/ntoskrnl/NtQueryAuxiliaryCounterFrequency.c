/*
 * XREFs of NtQueryAuxiliaryCounterFrequency @ 0x140917B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 */

__int64 __fastcall NtQueryAuxiliaryCounterFrequency(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  if ( !KeGetCurrentThread()->PreviousMode )
    return off_140424670[0]();
  ProbeForWrite(a1, 8uLL, 4u);
  result = ((__int64 (__fastcall *)(__int64 *))off_140424670[0])(&v3);
  if ( (int)result >= 0 )
    *a1 = v3;
  return result;
}
