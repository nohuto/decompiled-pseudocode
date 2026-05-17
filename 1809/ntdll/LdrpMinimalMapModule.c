/*
 * XREFs of LdrpMinimalMapModule @ 0x180021EDC
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180021D1C (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18000A720 (RtlEqualUnicodeString.c)
 *     LdrpCheckForRetryLoading @ 0x18002ADB8 (LdrpCheckForRetryLoading.c)
 *     RtlAcquirePrivilege @ 0x18007C220 (RtlAcquirePrivilege.c)
 *     RtlQueryImageFileKeyOption @ 0x18007ECC0 (RtlQueryImageFileKeyOption.c)
 *     RtlReleasePrivilege @ 0x180084C20 (RtlReleasePrivilege.c)
 *     LdrpProcessMachineMismatch @ 0x18008A46C (LdrpProcessMachineMismatch.c)
 *     ZwMapViewOfSection @ 0x1800A07E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0820 (NtUnmapViewOfSection.c)
 *     ZwMapViewOfSectionEx @ 0x1800A2490 (ZwMapViewOfSectionEx.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpMinimalMapModule(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  bool v4; // r14
  int v5; // esi
  struct _TEB *v6; // r13
  int v7; // edx
  int v8; // r15d
  _QWORD *v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v14; // rdx
  _QWORD v15[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v16[4]; // [rsp+60h] [rbp-20h] BYREF
  void *ArbitraryUserPointer; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+48h]
  __int64 v19; // [rsp+D0h] [rbp+50h] BYREF

  v18 = a2;
  v3 = *(_QWORD *)(a1 + 56);
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      640,
      (unsigned int)"LdrpMinimalMapModule",
      3,
      "DLL name: %wZ\n",
      v3 + 72);
  v4 = RtlEqualUnicodeString((unsigned __int16 *)(v3 + 88), (__int64)&LdrpKernel32DllName, 1)
    && (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) != 0;
  v19 = 0LL;
  v5 = 0x800000;
  if ( !v4 )
  {
    if ( LdrpLargePageDllKeyHandle )
    {
      v14 = *(_QWORD *)(v3 + 96);
      LODWORD(ArbitraryUserPointer) = 0;
      RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, v14, 4LL, &ArbitraryUserPointer, 4, 0LL);
      if ( (_DWORD)ArbitraryUserPointer )
      {
        if ( (int)RtlAcquirePrivilege(&LdrpLockMemoryPrivilege, 1LL, 0LL, &v19) >= 0 )
          v5 = 0x20000000;
      }
    }
  }
  v6 = NtCurrentTeb();
  *(_QWORD *)(a1 + 160) = 0LL;
  ArbitraryUserPointer = v6->NtTib.ArbitraryUserPointer;
  v6->NtTib.ArbitraryUserPointer = *(void **)(v3 + 80);
  v7 = (*(_DWORD *)(a1 + 32) & 0x800000) != 0 ? 2 : 4;
  v8 = v5 | 0x40000;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) == 0 )
    v8 = v5;
  v9 = (_QWORD *)(v3 + 48);
  if ( (*(_DWORD *)(a1 + 32) & 0x800) != 0 )
  {
    v16[0] = 0LL;
    v16[2] = 0LL;
    v16[1] = LdrpMaximumUserModeAddress;
    v15[1] = v16;
    v15[0] = 1LL;
    v10 = ZwMapViewOfSectionEx(v18, -1LL, v3 + 48, 0LL, a1 + 160, v8, v7, v15, 1);
  }
  else
  {
    v10 = ZwMapViewOfSection(v18, -1LL, v3 + 48);
  }
  v12 = v10;
  v6->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  if ( v8 == 0x20000000 )
    RtlReleasePrivilege(v19);
  switch ( v12 )
  {
    case 1073741827:
      goto LABEL_40;
    case 1073741838:
      v12 = LdrpProcessMachineMismatch(a1);
      break;
    case 1073741878:
LABEL_40:
      if ( LdrpMapAndSnapWork && !*(_QWORD *)(a1 + 168) )
      {
        LOBYTE(v11) = 1;
        if ( (unsigned __int8)LdrpCheckForRetryLoading(a1, v11) )
        {
          v12 = -1073741267;
        }
        else if ( v4 )
        {
          v12 = -1073741800;
        }
      }
      break;
  }
  if ( *v9 && (v12 < 0 || v12 == 1073741838) )
  {
    NtUnmapViewOfSection(-1LL);
    *v9 = 0LL;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      825,
      (unsigned int)"LdrpMinimalMapModule",
      4,
      "Status: 0x%08lx\n",
      v12);
  return (unsigned int)v12;
}
