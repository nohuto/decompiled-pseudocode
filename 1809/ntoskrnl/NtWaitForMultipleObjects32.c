/*
 * XREFs of NtWaitForMultipleObjects32 @ 0x14058B1A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ObWaitForMultipleObjects @ 0x14058B3E0 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __stdcall NtWaitForMultipleObjects32(
        ULONG ObjectCount,
        PLONG Handles,
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER TimeOut)
{
  WAIT_TYPE v6; // r9d
  ULONG v8; // edx
  __int64 v9; // rax
  LONG *v10; // rax
  PLARGE_INTEGER v12; // [rsp+48h] [rbp-230h]
  __int64 v13; // [rsp+50h] [rbp-228h] BYREF
  _QWORD v14[64]; // [rsp+60h] [rbp-218h] BYREF

  v6 = WaitType;
  v12 = TimeOut;
  if ( ObjectCount - 1 > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  LOBYTE(WaitType) = KeGetCurrentThread()->PreviousMode;
  v8 = 0;
  if ( (_BYTE)WaitType )
  {
    v9 = (__int64)TimeOut;
    if ( TimeOut )
    {
      if ( (unsigned __int64)TimeOut >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      v13 = *(_QWORD *)v9;
      v12 = (PLARGE_INTEGER)&v13;
    }
    if ( 4LL * ObjectCount )
    {
      v10 = &Handles[ObjectCount];
      if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < Handles )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  while ( v8 < ObjectCount )
  {
    v14[v8] = Handles[v8];
    ++v8;
  }
  return ObWaitForMultipleObjects(ObjectCount, (unsigned int)v14, WaitType, v6, WaitType, Alertable, (__int64)v12);
}
