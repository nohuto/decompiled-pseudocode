/*
 * XREFs of sub_180111038 @ 0x180111038
 * Callers:
 *     sub_18011138C @ 0x18011138C (sub_18011138C.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

int __fastcall sub_180111038(__int64 a1, void *a2)
{
  int result; // eax
  unsigned __int64 v5; // rcx
  NTSTATUS v6; // edi
  ULONG ReturnLength; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR ViewSize[2]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD ProcessInformation[44]; // [rsp+80h] [rbp-80h] BYREF

  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  result = ZwQueryInformationProcess(a2, ProcessHandleTracing, ProcessInformation, 0xB0u, &ReturnLength);
  if ( (int)(result + 0x80000000) < 0 || result == -1073741820 )
  {
    v5 = 160LL * ProcessInformation[2];
    if ( v5 > 0xFFFFFFFF )
      return -1073741675;
    MaximumSize.LowPart = 160 * ProcessInformation[2];
    if ( (int)v5 + 176 < (unsigned int)v5 )
    {
      return -1073741675;
    }
    else
    {
      MaximumSize.QuadPart = (unsigned int)(v5 + 176);
      result = ZwCreateSection(
                 &SectionHandle,
                 0xF0007u,
                 (POBJECT_ATTRIBUTES)&stru_18013A6E8,
                 &MaximumSize,
                 4u,
                 0x8000000u,
                 0LL);
      if ( result >= 0 )
      {
        BaseAddress = 0LL;
        ViewSize[0] = 0LL;
        v6 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &BaseAddress,
               0LL,
               0LL,
               0LL,
               ViewSize,
               ViewShare,
               0,
               4u);
        if ( v6 >= 0 )
        {
          memset(BaseAddress, 0, 0xB0uLL);
          if ( ZwQueryInformationProcess(a2, ProcessHandleTracing, BaseAddress, MaximumSize.LowPart, &ReturnLength) >= 0 )
          {
            ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            *(_DWORD *)(a1 + 936) = ReturnLength;
            *(_QWORD *)(a1 + 944) = SectionHandle;
            *(_QWORD *)(a1 + 952) = MEMORY[0x7FFE0014];
            return 0;
          }
          else
          {
            ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            return ZwClose(SectionHandle);
          }
        }
        else
        {
          ZwClose(SectionHandle);
          return v6;
        }
      }
    }
  }
  return result;
}
