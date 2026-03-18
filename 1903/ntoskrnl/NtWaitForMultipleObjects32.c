/*
 * XREFs of NtWaitForMultipleObjects32 @ 0x1406C82A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ObWaitForMultipleObjects @ 0x14060AF40 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __stdcall NtWaitForMultipleObjects32(
        ULONG ObjectCount,
        PLONG Handles,
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER TimeOut)
{
  ULONG v7; // r10d
  char PreviousMode; // r8
  __int64 v9; // rax
  LONG *v10; // rax
  LARGE_INTEGER *v12; // [rsp+48h] [rbp-230h]
  __int64 v13; // [rsp+50h] [rbp-228h] BYREF
  __int64 v14; // [rsp+58h] [rbp-220h]
  unsigned __int64 v15[64]; // [rsp+60h] [rbp-218h] BYREF

  v12 = TimeOut;
  v7 = 0;
  v13 = 0LL;
  if ( ObjectCount - 1 > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__int64)TimeOut;
    if ( TimeOut )
    {
      if ( (unsigned __int64)TimeOut >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      v14 = *(_QWORD *)v9;
      v13 = v14;
      v12 = (LARGE_INTEGER *)&v13;
    }
    if ( 4LL * ObjectCount )
    {
      v10 = &Handles[ObjectCount];
      if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < Handles )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  while ( v7 < ObjectCount )
  {
    v15[v7] = Handles[v7];
    ++v7;
  }
  return ObWaitForMultipleObjects(ObjectCount, v15, PreviousMode, WaitType, PreviousMode, Alertable, v12);
}
