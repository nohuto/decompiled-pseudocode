/*
 * XREFs of CmpInitializePreloadedHive @ 0x140A0D63C
 * Callers:
 *     CmpInitializePreloadedHives @ 0x140A0D3D4 (CmpInitializePreloadedHives.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpCreateHive @ 0x14065E124 (CmpCreateHive.c)
 *     CmpLinkHiveToMaster @ 0x1406622B0 (CmpLinkHiveToMaster.c)
 *     CmpSetupLoggingState @ 0x14075DCFC (CmpSetupLoggingState.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A38E04 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 */

__int64 __fastcall CmpInitializePreloadedHive(__int64 a1, __int64 a2)
{
  int v4; // edi
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // r12
  int v7; // ecx
  unsigned __int16 Length; // r15
  unsigned __int64 v9; // rbx
  wchar_t *v10; // rax
  wchar_t *v11; // r14
  int v12; // r8d
  int v13; // eax
  ULONG_PTR v14; // rbx
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int64 result; // rax
  int v21; // eax
  const WCHAR *SystemRelativeRegistryHiveFilePath; // rbx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  _BYTE v24[8]; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v26; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR v27; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter3[44]; // [rsp+90h] [rbp-70h] BYREF
  char v29; // [rsp+1F0h] [rbp+F0h] BYREF

  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v4 = 4096;
  *(_QWORD *)&v26.Length = 0LL;
  v26.Buffer = 0LL;
  v27 = 0LL;
  v24[0] = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_31;
  v7 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)&Destination.Length = 0x10000000LL;
  Destination.Buffer = PoolWithTag;
  if ( (v7 & 0x36) != 0 )
  {
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v21 = *(_DWORD *)(a1 + 24);
    if ( (v21 & 2) == 0 )
    {
      if ( (v21 & 4) != 0 )
        v4 = 0x2000;
      else
        v4 = (v21 & 0x20) != 0 ? 0x200000 : 1;
    }
  }
  else if ( (v7 & 0x80) != 0 )
  {
    SystemRelativeRegistryHiveFilePath = (const WCHAR *)CmpGetSystemRelativeRegistryHiveFilePath(*(_QWORD *)(a1 + 16));
    RtlAppendUnicodeToString(&Destination, L"\\DriverStores\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 48));
    RtlAppendUnicodeToString(&Destination, SystemRelativeRegistryHiveFilePath);
    v4 = 0x400000;
    if ( CmStateSeparationEnabled && !CmStateSeparationDevMode )
      v4 = 4194305;
  }
  else
  {
    RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\System32\\Config\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v4 = 0x4000;
  }
  Length = Destination.Length;
  v9 = Destination.Length;
  v10 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.Length + 2LL, 0x20204D43u);
  v11 = v10;
  if ( !v10 )
LABEL_31:
    KeBugCheckEx(0x74u, 3uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  memmove(v10, Destination.Buffer, (unsigned int)v9);
  ExFreePoolWithTag(v6, 0);
  Destination.Buffer = v11;
  v11[v9 >> 1] = 0;
  v12 = (32 * (*(_DWORD *)(a1 + 24) & 8)) | 0x12;
  BugCheckParameter4 = *(_QWORD *)(a1 + 32);
  Destination.MaximumLength = Length + 2;
  v13 = CmpCreateHive(
          &v27,
          1u,
          v12,
          2u,
          BugCheckParameter4,
          0LL,
          (__int64)&Destination,
          589832,
          0LL,
          0LL,
          (__int64)v24,
          (__int64)BugCheckParameter3);
  if ( v13 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 5uLL, (ULONG_PTR)BugCheckParameter3, v13);
  v14 = v27;
  CmpSetupLoggingState(v27, (unsigned int *)(a1 + 64));
  RtlInitUnicodeString((PUNICODE_STRING)(v14 + 1816), v11);
  *(_DWORD *)(v14 + 160) |= v4 | 0x400;
  v15 = *(_DWORD *)(v14 + 160);
  if ( v24[0] == 1 )
  {
    v15 |= 0x800u;
    *(_DWORD *)(v14 + 160) = v15;
  }
  if ( CmpShareSystemHives )
  {
    v15 |= 0x8000u;
    *(_DWORD *)(v14 + 160) = v15;
  }
  if ( CmStateSeparationEnabled && !CmStateSeparationDevMode && (*(_DWORD *)(a1 + 24) & 0x20) == 0 )
    *(_DWORD *)(v14 + 160) = v15 | 0x8000;
  v16 = *(_DWORD *)(*(_QWORD *)(v14 + 64) + 4088LL);
  CmpBootType = v16;
  if ( !CmSelfHeal )
  {
    BYTE2(NlsMbCodePageTag) = 0;
    if ( (v16 & 4) != 0 )
      KeBugCheckEx(0x74u, 3uLL, 6uLL, v14, 0LL);
  }
  v26.MaximumLength = 128;
  v26.Buffer = (wchar_t *)&v29;
  RtlAppendUnicodeToString(&v26, L"\\REGISTRY\\");
  RtlAppendUnicodeToString(&v26, *(PCWSTR *)(a1 + 56));
  RtlAppendUnicodeToString(&v26, L"\\");
  RtlAppendUnicodeToString(&v26, *(PCWSTR *)(a1 + 48));
  v17 = CmpLinkHiveToMaster((__int64)&v26, 0LL, v14, 0, 0x200u, 0, 0LL, a2, 0LL, 0LL, 1);
  if ( v17 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 7uLL, v14, v17);
  v18 = (_QWORD *)qword_140463C88;
  v19 = (_QWORD *)(v14 + 1616);
  if ( *(__int64 **)qword_140463C88 != &CmpPreloadedHivesList )
    __fastfail(3u);
  v19[1] = qword_140463C88;
  *v19 = &CmpPreloadedHivesList;
  *v18 = v19;
  result = 0LL;
  qword_140463C88 = (__int64)v19;
  return result;
}
