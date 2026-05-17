/*
 * XREFs of PsspCaptureHandleTrace @ 0x180112254
 * Callers:
 *     PsspCaptureProcessInformation @ 0x1801125A8 (PsspCaptureProcessInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1800A0600 (NtQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x1800A07E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0820 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0C20 (NtCreateSection.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

NTSTATUS __fastcall PsspCaptureHandleTrace(__int64 a1, void *a2)
{
  NTSTATUS result; // eax
  ULONG v5; // eax
  unsigned __int64 v6; // rdx
  unsigned int v7; // ecx
  bool v8; // cf
  unsigned int v9; // edx
  int v10; // edi
  ULONG ReturnLength; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v12; // [rsp+58h] [rbp-A8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h]
  ULONG ProcessInformationLength; // [rsp+68h] [rbp-98h]
  int v15; // [rsp+6Ch] [rbp-94h]
  __int64 v16; // [rsp+70h] [rbp-90h]
  _DWORD ProcessInformation[44]; // [rsp+80h] [rbp-80h] BYREF

  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  result = NtQueryInformationProcess(a2, (PROCESSINFOCLASS)32, ProcessInformation, 0xB0u, &ReturnLength);
  if ( (int)(result + 0x80000000) >= 0 && result != -1073741820 )
    return result;
  v5 = -1;
  v6 = 160LL * ProcessInformation[2];
  if ( v6 > 0xFFFFFFFF )
  {
    v8 = 1;
    return v8 ? 0xC0000095 : 0;
  }
  v7 = 160 * ProcessInformation[2];
  v9 = v6 + 176;
  v8 = v7 + 176 < v7;
  if ( v7 + 176 >= v7 )
    v5 = v7 + 176;
  ProcessInformationLength = v5;
  if ( v9 < v7 )
    return v8 ? 0xC0000095 : 0;
  v15 = 0;
  result = NtCreateSection();
  if ( result >= 0 )
  {
    v12 = 0LL;
    v16 = 0LL;
    v10 = ZwMapViewOfSection();
    if ( v10 >= 0 )
    {
      memset(v12, 0, 0xB0uLL);
      if ( NtQueryInformationProcess(a2, (PROCESSINFOCLASS)32, v12, ProcessInformationLength, &ReturnLength) >= 0 )
      {
        NtUnmapViewOfSection();
        *(_DWORD *)(a1 + 936) = ReturnLength;
        *(_QWORD *)(a1 + 944) = Handle;
        *(_QWORD *)(a1 + 952) = MEMORY[0x7FFE0014];
        return 0;
      }
      else
      {
        NtUnmapViewOfSection();
        return NtClose(Handle);
      }
    }
    else
    {
      NtClose(Handle);
      return v10;
    }
  }
  return result;
}
