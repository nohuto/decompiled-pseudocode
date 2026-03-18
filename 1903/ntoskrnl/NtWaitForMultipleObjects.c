/*
 * XREFs of NtWaitForMultipleObjects @ 0x14060AE00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ObWaitForMultipleObjects @ 0x14060AF40 (ObWaitForMultipleObjects.c)
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
  __int64 v12; // [rsp+48h] [rbp-240h] BYREF
  __int64 v13; // [rsp+50h] [rbp-238h]
  _BYTE v14[512]; // [rsp+60h] [rbp-228h] BYREF

  v12 = 0LL;
  if ( Count - 1 > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  v8 = KeGetCurrentThread()->$42514DC6747B59BF81E16C40547B231E::gap0[10];
  v9 = (__int64)Time;
  if ( v8 )
  {
    if ( Time )
    {
      if ( (unsigned __int64)Time >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      v13 = *(_QWORD *)v9;
      v12 = v13;
      v9 = (__int64)&v12;
    }
    if ( 8LL * Count )
    {
      v10 = &Object[Count];
      if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < Object )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  memmove(v14, Object, 8LL * Count);
  return ObWaitForMultipleObjects(Count, (unsigned int)v14, v8, WaitType, v8, Alertable, v9);
}
