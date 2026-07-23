/*
 * XREFs of sub_1800DBEC0 @ 0x1800DBEC0
 * Callers:
 *     RtlReportException @ 0x1800DB920 (RtlReportException.c)
 *     sub_1800E6C88 @ 0x1800E6C88 (sub_1800E6C88.c)
 * Callees:
 *     sub_18006B7F4 @ 0x18006B7F4 (sub_18006B7F4.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x18009CE60 (ZwDuplicateObject.c)
 *     RtlWerpReportException_0 @ 0x1800DB7E4 (RtlWerpReportException_0.c)
 *     sub_1800DC88C @ 0x1800DC88C (sub_1800DC88C.c)
 *     sub_1800DC8F0 @ 0x1800DC8F0 (sub_1800DC8F0.c)
 *     sub_1800DCAE4 @ 0x1800DCAE4 (sub_1800DCAE4.c)
 *     sub_1800DCB20 @ 0x1800DCB20 (sub_1800DCB20.c)
 *     sub_1800DCB54 @ 0x1800DCB54 (sub_1800DCB54.c)
 */

__int64 __fastcall sub_1800DBEC0(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  _OWORD *v5; // rdi
  int v7; // ebx
  NTSTATUS v8; // r14d
  __int64 v9; // rbx
  ULONG v10; // ebx
  int v11; // eax
  _QWORD *v12; // rcx
  char *v13; // rax
  _OWORD *v14; // rdx
  __int64 v15; // rax
  unsigned int CrashVerticalProcessHandle; // [rsp+40h] [rbp-88h]
  HANDLE TargetHandle; // [rsp+48h] [rbp-80h] BYREF
  HANDLE v19; // [rsp+50h] [rbp-78h] BYREF
  HANDLE v20; // [rsp+58h] [rbp-70h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-68h] BYREF
  HANDLE CrashReportSharedMem; // [rsp+68h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-58h] BYREF
  ULONG ProcessId; // [rsp+78h] [rbp-50h]
  __int64 v25; // [rsp+80h] [rbp-48h]
  ULONG Flags[2]; // [rsp+88h] [rbp-40h] BYREF

  v25 = a4;
  v4 = a3;
  v5 = a2;
  Handle = 0LL;
  v20 = 0LL;
  CrashReportSharedMem = 0LL;
  TargetHandle = 0LL;
  v19 = 0LL;
  v7 = 0;
  BaseAddress = 0LL;
  if ( (a3 & 4) == 0 )
    sub_1800DCAE4(-1LL, a2, a3);
  if ( (int)sub_1800DC88C(&v20, a2, a3) < 0 )
  {
    v20 = 0LL;
  }
  else
  {
    *(_QWORD *)Flags = v20;
    v7 = 1;
  }
  v8 = sub_1800DC8F0(&CrashReportSharedMem, &BaseAddress);
  if ( v8 >= 0 )
  {
    *(_QWORD *)&Flags[2 * v7] = CrashReportSharedMem;
    v9 = (unsigned int)(v7 + 1);
    CrashVerticalProcessHandle = v9;
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &TargetHandle,
           0x1FFFFFu,
           2u,
           0) < 0 )
    {
      TargetHandle = 0LL;
    }
    else
    {
      *(_QWORD *)&Flags[2 * v9] = TargetHandle;
      v9 = (unsigned int)(v9 + 1);
      CrashVerticalProcessHandle = v9;
    }
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFELL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &v19,
           0x1FFFFFu,
           2u,
           0) < 0 )
    {
      v19 = 0LL;
    }
    else
    {
      *(_QWORD *)&Flags[2 * v9] = v19;
      CrashVerticalProcessHandle = v9 + 1;
    }
    v10 = sub_18006B7F4((void *)0xFFFFFFFFFFFFFFFFLL);
    ProcessId = v10;
    v11 = sub_1800DCB20(-2LL);
    v12 = BaseAddress;
    *(_DWORD *)BaseAddress = 240;
    v12[21] = 1LL;
    *((_DWORD *)v12 + 1) = v10;
    *((_DWORD *)v12 + 2) = v11;
    v12[23] = TargetHandle;
    v12[24] = v19;
    v12[26] = v20;
    v12[27] = 0LL;
    *((_DWORD *)v12 + 56) = -1073741823;
    *((_DWORD *)v12 + 57) = v4;
    v13 = (char *)BaseAddress;
    *((_DWORD *)BaseAddress + 58) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v14 = v13 + 408;
    *((_QWORD *)v13 + 30) = 1LL;
    *((_QWORD *)v13 + 31) = 1LL;
    *((_OWORD *)v13 + 16) = *(_OWORD *)a1;
    *((_OWORD *)v13 + 17) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)v13 + 18) = *(_OWORD *)(a1 + 32);
    *((_OWORD *)v13 + 19) = *(_OWORD *)(a1 + 48);
    *((_OWORD *)v13 + 20) = *(_OWORD *)(a1 + 64);
    *((_OWORD *)v13 + 21) = *(_OWORD *)(a1 + 80);
    *((_OWORD *)v13 + 22) = *(_OWORD *)(a1 + 96);
    *((_OWORD *)v13 + 23) = *(_OWORD *)(a1 + 112);
    *((_OWORD *)v13 + 24) = *(_OWORD *)(a1 + 128);
    *((_QWORD *)v13 + 50) = *(_QWORD *)(a1 + 144);
    v15 = 9LL;
    do
    {
      *v14 = *v5;
      v14[1] = v5[1];
      v14[2] = v5[2];
      v14[3] = v5[3];
      v14[4] = v5[4];
      v14[5] = v5[5];
      v14[6] = v5[6];
      v14 += 8;
      *(v14 - 1) = v5[7];
      v5 += 8;
      --v15;
    }
    while ( v15 );
    *v14 = *v5;
    v14[1] = v5[1];
    v14[2] = v5[2];
    v14[3] = v5[3];
    v14[4] = v5[4];
    v8 = RtlWerpReportException_0(ProcessId, CrashReportSharedMem, (ULONG)Flags, (PHANDLE)CrashVerticalProcessHandle);
    if ( v8 >= 0 )
    {
      if ( !Handle || (v8 = sub_1800DCB54(0LL, v20, Handle, v25, v4, &Handle), v8 >= 0) )
        v8 = 0;
    }
  }
  if ( BaseAddress )
  {
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( CrashReportSharedMem )
      ZwClose(CrashReportSharedMem);
    if ( Handle )
      ZwClose(Handle);
  }
  if ( TargetHandle )
  {
    ZwClose(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( v19 )
  {
    ZwClose(v19);
    v19 = 0LL;
  }
  if ( v20 )
    ZwClose(v20);
  return (unsigned int)v8;
}
