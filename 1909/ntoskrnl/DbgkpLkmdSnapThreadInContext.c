/*
 * XREFs of DbgkpLkmdSnapThreadInContext @ 0x14084B16C
 * Callers:
 *     DbgkpLkmdSnapThreadApc @ 0x14084B0F0 (DbgkpLkmdSnapThreadApc.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1401CC690 (RtlCaptureContext.c)
 *     DbgkpLkmdSnapDataEx @ 0x1402812E4 (DbgkpLkmdSnapDataEx.c)
 *     DbgkpLkmdSnapKernelStack @ 0x1402813F4 (DbgkpLkmdSnapKernelStack.c)
 */

__int64 __fastcall DbgkpLkmdSnapThreadInContext(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  char v7; // di
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp-508h]
  CONTEXT ContextRecord; // [rsp+40h] [rbp-4F8h] BYREF

  result = DbgkpLkmdSnapDataEx((__int64)a1);
  if ( (int)result >= 0 )
  {
    *a3 = 0;
    v7 = 1;
    a3[1] |= 1u;
    v8 = *a1;
    if ( *a1 )
    {
      if ( !*(_QWORD *)(v8 + 8) )
      {
        *(_QWORD *)(v8 + 8) = a2;
        v7 = 0;
        *(_DWORD *)(v9 + 536) = 0;
      }
    }
    RtlCaptureContext(&ContextRecord);
    DbgkpLkmdSnapDataEx((__int64)a1);
    DbgkpLkmdSnapKernelStack((__int64)a1, a2, v9, v7, &ContextRecord, (__int64)a3);
    return 0LL;
  }
  else
  {
    *a3 = result;
  }
  return result;
}
