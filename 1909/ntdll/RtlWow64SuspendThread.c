/*
 * XREFs of RtlWow64SuspendThread @ 0x1800023F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWow64OpenThreadProcess @ 0x180002504 (RtlpWow64OpenThreadProcess.c)
 *     RtlpCreateUserThreadEx @ 0x180005760 (RtlpCreateUserThreadEx.c)
 *     RtlWow64GetSharedInfoProcess @ 0x180079850 (RtlWow64GetSharedInfoProcess.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x18009CF10 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwQueryObject @ 0x18009D090 (ZwQueryObject.c)
 *     ZwQueryInformationThread @ 0x18009D330 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x18009D610 (ZwDuplicateObject.c)
 *     NtSuspendThread @ 0x1800A0540 (NtSuspendThread.c)
 */

__int64 __fastcall RtlWow64SuspendThread(__int64 a1, int *a2)
{
  HANDLE v2; // rdi
  int SharedInfoProcess; // ebx
  __int64 v7; // rdx
  _BYTE v8[8]; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE v10; // [rsp+70h] [rbp-90h] BYREF
  __int64 v11; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v12[2]; // [rsp+80h] [rbp-80h] BYREF
  char v13; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v14[40]; // [rsp+98h] [rbp-68h] BYREF
  int v15[12]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v16[56]; // [rsp+F0h] [rbp-10h] BYREF

  Handle = 0LL;
  v11 = 0LL;
  v2 = 0LL;
  v10 = 0LL;
  SharedInfoProcess = RtlpWow64OpenThreadProcess(
                        a1,
                        (_DWORD)a2,
                        (unsigned int)&v13,
                        (unsigned int)&Handle,
                        (__int64)v12);
  if ( SharedInfoProcess >= 0 )
  {
    if ( (void *)v12[0] == NtCurrentTeb()->ClientId.UniqueProcess
      && (void *)v12[1] == NtCurrentTeb()->ClientId.UniqueThread )
    {
      goto LABEL_7;
    }
    SharedInfoProcess = RtlWow64GetSharedInfoProcess(Handle, v8, v14);
    if ( SharedInfoProcess < 0 )
    {
LABEL_8:
      v2 = v10;
      goto LABEL_9;
    }
    if ( !v8[0] || (v14[4] & 2) == 0 )
    {
LABEL_7:
      SharedInfoProcess = NtSuspendThread(a1, a2);
      goto LABEL_8;
    }
    SharedInfoProcess = ZwQueryObject(a1, 0LL, v16, 56LL, 0LL);
    if ( SharedInfoProcess < 0 )
      goto LABEL_8;
    if ( (v16[4] & 2) == 0 )
    {
      SharedInfoProcess = -1073741790;
      goto LABEL_8;
    }
    SharedInfoProcess = ZwDuplicateObject(-1LL, a1, Handle, &v11, 1050634, 0);
    if ( SharedInfoProcess < 0 )
      goto LABEL_8;
    v7 = v11;
    if ( (void *)v12[0] != NtCurrentTeb()->ClientId.UniqueProcess )
      v7 = v11 | 1;
    SharedInfoProcess = RtlpCreateUserThreadEx(
                          (_DWORD)Handle,
                          0,
                          102,
                          0,
                          0LL,
                          0LL,
                          0,
                          (__int64)RtlpWow64SuspendThreadWorker,
                          v7,
                          (__int64)&v10,
                          0LL);
    if ( SharedInfoProcess < 0 )
      goto LABEL_8;
    v2 = v10;
    NtWaitForSingleObject(v10, 0, 0LL);
    ZwQueryInformationThread(v2, 0LL, v15, 48LL, 0LL);
    SharedInfoProcess = v15[0];
    if ( v15[0] >= 0 )
    {
      if ( a2 )
        *a2 = v15[0];
      SharedInfoProcess = 0;
    }
  }
LABEL_9:
  if ( v11 )
    ZwDuplicateObject(Handle, v11, 0LL, 0LL, 0, 0);
  if ( Handle )
    NtClose(Handle);
  if ( v2 )
    NtClose(v2);
  return (unsigned int)SharedInfoProcess;
}
