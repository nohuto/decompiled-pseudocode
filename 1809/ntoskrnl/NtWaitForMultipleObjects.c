/*
 * XREFs of NtWaitForMultipleObjects @ 0x14058B2B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ObWaitForMultipleObjects @ 0x14058B3E0 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __stdcall NtWaitForMultipleObjects(
        ULONG Count,
        HANDLE Object[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Time)
{
  unsigned __int8 v8; // di
  __int64 v9; // rbx
  HANDLE *v10; // rax
  __int64 v12; // [rsp+48h] [rbp-230h] BYREF
  _BYTE v13[512]; // [rsp+50h] [rbp-228h] BYREF

  if ( Count - 1 > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  v8 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  v9 = (__int64)Time;
  if ( v8 )
  {
    if ( Time )
    {
      if ( (unsigned __int64)Time >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      v12 = *(_QWORD *)v9;
      v9 = (__int64)&v12;
    }
    if ( 8LL * Count )
    {
      v10 = &Object[Count];
      if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < Object )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  memmove(v13, Object, 8LL * Count);
  return ObWaitForMultipleObjects(Count, (unsigned int)v13, v8, WaitType, v8, Alertable, v9);
}
