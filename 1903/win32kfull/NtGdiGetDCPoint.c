/*
 * XREFs of NtGdiGetDCPoint @ 0x1C01147C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiGetDCPoint(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  result = GreGetDCPoint(a1, a2, &v5);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_QWORD *)MmUserProbeAddress;
    *a3 = v5;
  }
  return result;
}
