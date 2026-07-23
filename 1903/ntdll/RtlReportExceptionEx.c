/*
 * XREFs of RtlReportExceptionEx @ 0x1800DB9F0
 * Callers:
 *     WerReportExceptionWorker @ 0x1800DC6A0 (WerReportExceptionWorker.c)
 * Callees:
 *     sub_18006B7F4 @ 0x18006B7F4 (sub_18006B7F4.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     ZwDuplicateObject @ 0x18009CE60 (ZwDuplicateObject.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     RtlWerpReportException_0 @ 0x1800DB7E4 (RtlWerpReportException_0.c)
 *     RtlReportException @ 0x1800DB920 (RtlReportException.c)
 *     sub_1800DC838 @ 0x1800DC838 (sub_1800DC838.c)
 *     sub_1800DC88C @ 0x1800DC88C (sub_1800DC88C.c)
 *     sub_1800DC8F0 @ 0x1800DC8F0 (sub_1800DC8F0.c)
 *     sub_1800DCAE4 @ 0x1800DCAE4 (sub_1800DCAE4.c)
 *     sub_1800DCB20 @ 0x1800DCB20 (sub_1800DCB20.c)
 *     sub_1800DCB54 @ 0x1800DCB54 (sub_1800DCB54.c)
 */

NTSTATUS __cdecl RtlReportExceptionEx(
        PEXCEPTION_RECORD ExceptionRecord,
        PCONTEXT ContextRecord,
        ULONG Flags,
        PLARGE_INTEGER Timeout)
{
  ULONG v7; // r13d
  int v8; // eax
  __int64 v9; // rdx
  struct _TEB *v10; // r8
  int v12; // ebx
  _QWORD *v13; // rcx
  char *v14; // rdx
  _OWORD *v15; // r9
  __int64 v16; // rax
  HANDLE v17; // [rsp+40h] [rbp-A8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-A0h] BYREF
  HANDLE v19; // [rsp+50h] [rbp-98h] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-90h] BYREF
  HANDLE SourceHandle; // [rsp+60h] [rbp-88h]
  HANDLE Handle; // [rsp+68h] [rbp-80h] BYREF
  HANDLE CrashReportSharedMem; // [rsp+70h] [rbp-78h] BYREF
  int v24; // [rsp+78h] [rbp-70h]
  HANDLE v25; // [rsp+80h] [rbp-68h]
  ULONG Flagsa[2]; // [rsp+88h] [rbp-60h] BYREF
  HANDLE v27; // [rsp+90h] [rbp-58h]
  HANDLE v28; // [rsp+98h] [rbp-50h]
  HANDLE v29; // [rsp+A0h] [rbp-48h]
  void *v30; // [rsp+110h] [rbp+28h]

  SourceHandle = Timeout;
  v25 = v30;
  TargetHandle = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  Handle = 0LL;
  CrashReportSharedMem = 0LL;
  BaseAddress = 0LL;
  v7 = sub_18006B7F4(Timeout);
  v8 = sub_1800DCB20(v30);
  v24 = v8;
  v10 = NtCurrentTeb();
  if ( v7 == LODWORD(v10->ClientId.UniqueProcess) && v8 == LODWORD(v10->ClientId.UniqueThread) )
    return RtlReportException(ExceptionRecord, ContextRecord, Flags);
  if ( v7 == LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) )
    sub_1800DC838(ExceptionRecord, ContextRecord);
  if ( (Flags & 4) != 0 || (v12 = sub_1800DCAE4(SourceHandle, v9, v10), v12 >= 0) )
  {
    v12 = sub_1800DC88C(&v17, v9, v10);
    if ( v12 >= 0 )
    {
      v12 = sub_1800DC8F0(&CrashReportSharedMem, &BaseAddress);
      if ( v12 >= 0 )
      {
        v12 = ZwDuplicateObject(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                SourceHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &TargetHandle,
                0x1FFFFFu,
                2u,
                0);
        if ( v12 >= 0 )
        {
          v12 = ZwDuplicateObject(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  v25,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &v19,
                  0x1FFFFFu,
                  2u,
                  0);
          if ( v12 >= 0 )
          {
            v13 = BaseAddress;
            *(_DWORD *)BaseAddress = 240;
            v13[21] = 1LL;
            *((_DWORD *)v13 + 1) = v7;
            *((_DWORD *)v13 + 2) = v24;
            v13[23] = TargetHandle;
            v13[24] = v19;
            v13[26] = v17;
            v13[27] = 0LL;
            *((_DWORD *)v13 + 56) = -1073741823;
            *((_DWORD *)v13 + 57) = Flags;
            v14 = (char *)BaseAddress;
            *((_DWORD *)BaseAddress + 58) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
            v15 = v14 + 408;
            *((_QWORD *)v14 + 30) = 1LL;
            *((_OWORD *)v14 + 16) = *(_OWORD *)&ExceptionRecord->ExceptionCode;
            *((_OWORD *)v14 + 17) = *(_OWORD *)&ExceptionRecord->ExceptionAddress;
            *((_OWORD *)v14 + 18) = *(_OWORD *)ExceptionRecord->ExceptionInformation;
            *((_OWORD *)v14 + 19) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[2];
            *((_OWORD *)v14 + 20) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[4];
            *((_OWORD *)v14 + 21) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[6];
            *((_OWORD *)v14 + 22) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[8];
            *((_OWORD *)v14 + 23) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[10];
            *((_OWORD *)v14 + 24) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[12];
            *((_QWORD *)v14 + 50) = ExceptionRecord->ExceptionInformation[14];
            if ( ((unsigned __int64)ContextRecord & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
            {
              *((_QWORD *)v14 + 31) = 1LL;
              v16 = 9LL;
              do
              {
                *v15 = *(_OWORD *)&ContextRecord->P1Home;
                v15[1] = *(_OWORD *)&ContextRecord->P3Home;
                v15[2] = *(_OWORD *)&ContextRecord->P5Home;
                v15[3] = *(_OWORD *)&ContextRecord->ContextFlags;
                v15[4] = *(_OWORD *)&ContextRecord->SegGs;
                v15[5] = *(_OWORD *)&ContextRecord->Dr1;
                v15[6] = *(_OWORD *)&ContextRecord->Dr3;
                v15 += 8;
                *(v15 - 1) = *(_OWORD *)&ContextRecord->Dr7;
                ContextRecord = (PCONTEXT)((char *)ContextRecord + 128);
                --v16;
              }
              while ( v16 );
              *v15 = *(_OWORD *)&ContextRecord->P1Home;
              v15[1] = *(_OWORD *)&ContextRecord->P3Home;
              v15[2] = *(_OWORD *)&ContextRecord->P5Home;
              v15[3] = *(_OWORD *)&ContextRecord->ContextFlags;
              v15[4] = *(_OWORD *)&ContextRecord->SegGs;
            }
            else
            {
              *((_QWORD *)v14 + 31) = 2LL;
              memset(v15, 0, 0x4D0uLL);
            }
            *(_QWORD *)Flagsa = v17;
            v27 = CrashReportSharedMem;
            v28 = TargetHandle;
            v29 = v19;
            v12 = RtlWerpReportException_0(v7, CrashReportSharedMem, (ULONG)Flagsa, (PHANDLE)4);
            if ( v12 >= 0 )
            {
              v12 = sub_1800DCB54(SourceHandle, v17, Handle, 0LL, Flags, &Handle);
              if ( v12 >= 0 )
              {
                if ( (Flags & 4) != 0
                  || (v12 = ZwTerminateProcess(SourceHandle, ExceptionRecord->ExceptionCode), v12 >= 0) )
                {
                  v12 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( CrashReportSharedMem )
    ZwClose(CrashReportSharedMem);
  if ( v17 )
  {
    ZwClose(v17);
    v17 = 0LL;
  }
  if ( v19 )
    ZwClose(v19);
  if ( TargetHandle )
    ZwClose(TargetHandle);
  return v12;
}
