/*
 * XREFs of LdrpMinimalMapModule @ 0x180021EDC
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180021D1C (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18000A720 (RtlEqualUnicodeString.c)
 *     LdrpCheckForRetryLoading @ 0x18002ADB8 (LdrpCheckForRetryLoading.c)
 *     RtlAcquirePrivilege @ 0x18007C230 (RtlAcquirePrivilege.c)
 *     RtlQueryImageFileKeyOption @ 0x18007ECD0 (RtlQueryImageFileKeyOption.c)
 *     RtlReleasePrivilege @ 0x180084C30 (RtlReleasePrivilege.c)
 *     LdrpProcessMachineMismatch @ 0x18008A47C (LdrpProcessMachineMismatch.c)
 *     ZwMapViewOfSection @ 0x1800A0800 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0840 (NtUnmapViewOfSection.c)
 *     ZwMapViewOfSectionEx @ 0x1800A24B0 (ZwMapViewOfSectionEx.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpMinimalMapModule(__int64 a1, void *a2)
{
  __int64 v3; // rbx
  bool v4; // r14
  struct _TEB *v5; // r13
  ULONG Win32Protect; // edx
  ULONG AllocationType; // r15d
  PVOID *v8; // rsi
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  int v11; // ebx
  MEM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v14[4]; // [rsp+60h] [rbp-20h] BYREF
  void *ArbitraryUserPointer; // [rsp+C0h] [rbp+40h]

  v3 = *(_QWORD *)(a1 + 56);
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      640,
      (unsigned int)"LdrpMinimalMapModule",
      3,
      "DLL name: %wZ\n",
      v3 + 72);
  v4 = RtlEqualUnicodeString((PUNICODE_STRING)(v3 + 88), (PUNICODE_STRING)&LdrpKernel32DllName, 1u)
    && (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) != 0;
  if ( !v4 && LdrpLargePageDllKeyHandle )
    RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, 4, 0LL);
  v5 = NtCurrentTeb();
  *(_QWORD *)(a1 + 160) = 0LL;
  ArbitraryUserPointer = v5->NtTib.ArbitraryUserPointer;
  v5->NtTib.ArbitraryUserPointer = *(void **)(v3 + 80);
  Win32Protect = (*(_DWORD *)(a1 + 32) & 0x800000) != 0 ? 2 : 4;
  AllocationType = 8650752;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) == 0 )
    AllocationType = 0x800000;
  v8 = (PVOID *)(v3 + 48);
  if ( (*(_DWORD *)(a1 + 32) & 0x800) != 0 )
  {
    v14[0] = 0LL;
    v14[2] = 0LL;
    v14[1] = LdrpMaximumUserModeAddress;
    ExtendedParameters.ULong64 = (DWORD64)v14;
    ExtendedParameters.0 = (MEM_EXTENDED_PARAMETER::$373F0C482CA2C07D4A7B2B94C5EA8081)1LL;
    v9 = ZwMapViewOfSectionEx(
           a2,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PVOID *)(v3 + 48),
           0LL,
           (PSIZE_T)(a1 + 160),
           AllocationType,
           Win32Protect,
           &ExtendedParameters,
           1u);
  }
  else
  {
    v9 = ZwMapViewOfSection(
           a2,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PVOID *)(v3 + 48),
           0LL,
           0LL,
           0LL,
           (PSIZE_T)(a1 + 160),
           ViewShare,
           AllocationType,
           Win32Protect);
  }
  v11 = v9;
  v5->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  switch ( v9 )
  {
    case 1073741827:
      goto LABEL_35;
    case 1073741838:
      v11 = LdrpProcessMachineMismatch(a1);
      break;
    case 1073741878:
LABEL_35:
      if ( LdrpMapAndSnapWork && !*(_QWORD *)(a1 + 168) )
      {
        LOBYTE(v10) = 1;
        if ( (unsigned __int8)LdrpCheckForRetryLoading(a1, v10) )
        {
          v11 = -1073741267;
        }
        else if ( v4 )
        {
          v11 = -1073741800;
        }
      }
      break;
  }
  if ( *v8 && (v11 < 0 || v11 == 1073741838) )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v8);
    *v8 = 0LL;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      825,
      (unsigned int)"LdrpMinimalMapModule",
      4,
      "Status: 0x%08lx\n",
      v11);
  return (unsigned int)v11;
}
