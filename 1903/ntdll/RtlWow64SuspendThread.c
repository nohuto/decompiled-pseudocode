/*
 * XREFs of RtlWow64SuspendThread @ 0x1800023F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002504 @ 0x180002504 (sub_180002504.c)
 *     sub_180005760 @ 0x180005760 (sub_180005760.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800793D0 (RtlWow64GetSharedInfoProcess.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryObject @ 0x18009C8E0 (ZwQueryObject.c)
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x18009CE60 (ZwDuplicateObject.c)
 *     ZwSuspendThread @ 0x18009FD90 (ZwSuspendThread.c)
 */

__int64 __fastcall RtlWow64SuspendThread(__int64 a1, int *a2)
{
  __int64 v2; // rdi
  int SharedInfoProcess; // ebx
  __int64 v7; // rdx
  _BYTE v8[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v9; // [rsp+68h] [rbp-98h] BYREF
  __int64 v10; // [rsp+70h] [rbp-90h] BYREF
  __int64 v11; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v12[2]; // [rsp+80h] [rbp-80h] BYREF
  char v13; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v14[40]; // [rsp+98h] [rbp-68h] BYREF
  int v15[12]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v16[56]; // [rsp+F0h] [rbp-10h] BYREF

  v9 = 0LL;
  v11 = 0LL;
  v2 = 0LL;
  v10 = 0LL;
  SharedInfoProcess = sub_180002504(a1, (_DWORD)a2, (unsigned int)&v13, (unsigned int)&v9, (__int64)v12);
  if ( SharedInfoProcess >= 0 )
  {
    if ( (HANDLE)v12[0] == NtCurrentTeb()->ClientId.UniqueProcess
      && (HANDLE)v12[1] == NtCurrentTeb()->ClientId.UniqueThread )
    {
      goto LABEL_7;
    }
    SharedInfoProcess = RtlWow64GetSharedInfoProcess(v9, v8, v14);
    if ( SharedInfoProcess < 0 )
    {
LABEL_8:
      v2 = v10;
      goto LABEL_9;
    }
    if ( !v8[0] || (v14[4] & 2) == 0 )
    {
LABEL_7:
      SharedInfoProcess = ZwSuspendThread(a1, a2);
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
    SharedInfoProcess = ZwDuplicateObject(-1LL, a1, v9, &v11, 1050634, 0);
    if ( SharedInfoProcess < 0 )
      goto LABEL_8;
    v7 = v11;
    if ( (HANDLE)v12[0] != NtCurrentTeb()->ClientId.UniqueProcess )
      v7 = v11 | 1;
    SharedInfoProcess = sub_180005760(v9, 0, 102, 0, 0LL, 0LL, 0, (__int64)sub_1800DB6E0, v7, (__int64)&v10, 0LL);
    if ( SharedInfoProcess < 0 )
      goto LABEL_8;
    v2 = v10;
    ZwWaitForSingleObject(v10, 0LL, 0LL);
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
    ZwDuplicateObject(v9, v11, 0LL, 0LL, 0, 0);
  if ( v9 )
    ZwClose(v9);
  if ( v2 )
    ZwClose(v2);
  return (unsigned int)SharedInfoProcess;
}
