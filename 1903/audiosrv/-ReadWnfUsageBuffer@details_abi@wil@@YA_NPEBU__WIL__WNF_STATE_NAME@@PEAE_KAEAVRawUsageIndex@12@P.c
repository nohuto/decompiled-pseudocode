/*
 * XREFs of ?ReadWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@PEAE_KAEAVRawUsageIndex@12@PEAK@Z @ 0x180047FD0
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180047950 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180048080 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180048188 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18004E5CC (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall wil::details_abi::ReadWnfUsageBuffer(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        unsigned __int8 *a3,
        wil::details_abi::RawUsageIndex *a4,
        struct wil::details_abi::RawUsageIndex *a5)
{
  struct wil::details_abi::RawUsageIndex *v5; // rdi
  FARPROC ProcAddress; // rax
  int v10; // edx
  unsigned int v11; // ebx
  unsigned int v12; // eax
  HMODULE NtDllModuleHandle; // rax
  int v15; // [rsp+60h] [rbp+18h] BYREF
  int v16; // [rsp+64h] [rbp+1Ch]

  v16 = HIDWORD(a3);
  v5 = a5;
  v15 = 4096;
  ProcAddress = (FARPROC)g_wil_details_pfnNtQueryWnfStateData;
  if ( g_wil_details_pfnNtQueryWnfStateData
    || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
        ProcAddress = GetProcAddress(NtDllModuleHandle, "NtQueryWnfStateData"),
        (g_wil_details_pfnNtQueryWnfStateData = (int (*)(const struct __WIL__WNF_STATE_NAME *, const struct __WIL__WNF_TYPE_ID *, const void *, unsigned int *, void *, unsigned int *))ProcAddress) != 0LL) )
  {
    v11 = ((__int64 (__fastcall *)(wil::details_abi *, _QWORD, _QWORD, struct wil::details_abi::RawUsageIndex *, const struct __WIL__WNF_STATE_NAME *, int *))ProcAddress)(
            this,
            0LL,
            0LL,
            v5,
            a2,
            &v15);
  }
  else
  {
    v11 = -1073741511;
  }
  wil::details::NtStatusToHr((wil::details *)v11, v10);
  if ( v11 )
  {
    v12 = 0;
    *(_DWORD *)v5 = 0;
    v15 = 0;
  }
  else
  {
    v12 = v15;
  }
  wil::details_abi::RawUsageIndex::SetBuffer(a4, a2, v12, 0x1000uLL);
  return *((_BYTE *)a4 + 57) == 0;
}
