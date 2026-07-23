/*
 * XREFs of CmpInitializePreloadedHive @ 0x1409C4CAC
 * Callers:
 *     CmpInitializePreloadedHives @ 0x1409C4A28 (CmpInitializePreloadedHives.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     CmpLinkHiveToMaster @ 0x1405B9C48 (CmpLinkHiveToMaster.c)
 *     CmpSetupLoggingState @ 0x14073374C (CmpSetupLoggingState.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x1409F49C0 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 */

__int64 __fastcall CmpInitializePreloadedHive(__int64 a1, __int64 a2)
{
  int v4; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // r12
  int v7; // ecx
  unsigned int Length; // r15d
  unsigned __int64 v9; // rdi
  wchar_t *v10; // rax
  wchar_t *v11; // r14
  unsigned int v12; // r8d
  int v13; // eax
  ULONG_PTR v14; // rdi
  int v15; // ebx
  bool v16; // zf
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  __int64 result; // rax
  int v23; // eax
  const WCHAR *SystemRelativeRegistryHiveFilePath; // rbx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  _BYTE v26[8]; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v28; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR v29; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter3[44]; // [rsp+90h] [rbp-70h] BYREF
  char v31; // [rsp+1F0h] [rbp+F0h] BYREF

  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v4 = 4096;
  v29 = 0LL;
  v26[0] = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_31;
  v7 = *(_DWORD *)(a1 + 24);
  Destination.Buffer = PoolWithTag;
  *(_QWORD *)&Destination.Length = 0x10000000LL;
  if ( (v7 & 0x36) != 0 )
  {
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v23 = *(_DWORD *)(a1 + 24);
    if ( (v23 & 2) == 0 )
    {
      if ( (v23 & 4) != 0 )
        v4 = 0x2000;
      else
        v4 = (v23 & 0x20) != 0 ? 0x200000 : 1;
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
  memmove(v10, Destination.Buffer, Length);
  ExFreePoolWithTag(v6, 0);
  Destination.Buffer = v11;
  v11[v9 >> 1] = 0;
  v12 = (32 * (*(_DWORD *)(a1 + 24) & 8)) | 0x12;
  BugCheckParameter4 = *(_QWORD *)(a1 + 32);
  Destination.MaximumLength = Length + 2;
  v13 = CmpCreateHive(
          &v29,
          1u,
          v12,
          2u,
          BugCheckParameter4,
          0LL,
          (__int64)&Destination,
          1638408,
          0LL,
          0LL,
          v26,
          (__int64)BugCheckParameter3);
  if ( v13 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 5uLL, (ULONG_PTR)BugCheckParameter3, v13);
  v14 = v29;
  CmpSetupLoggingState(v29, (unsigned int *)(a1 + 64));
  RtlInitUnicodeString((PUNICODE_STRING)(v14 + 1816), v11);
  v15 = *(_DWORD *)(v14 + 160) | v4 | 0x400;
  v16 = v26[0] == 1;
  v17 = v15;
  *(_DWORD *)(v14 + 160) = v15;
  if ( v16 )
  {
    v17 = v15 | 0x800;
    *(_DWORD *)(v14 + 160) = v15 | 0x800;
    v15 |= 0x800u;
  }
  if ( CmpShareSystemHives )
  {
    v17 = v15 | 0x8000;
    *(_DWORD *)(v14 + 160) = v15 | 0x8000;
  }
  if ( CmStateSeparationEnabled && !CmStateSeparationDevMode && (*(_DWORD *)(a1 + 24) & 0x20) == 0 )
    *(_DWORD *)(v14 + 160) = v17 | 0x8000;
  v18 = *(_DWORD *)(*(_QWORD *)(v14 + 64) + 4088LL);
  CmpBootType = v18;
  if ( !CmSelfHeal )
  {
    CmpSelfHeal = 0;
    if ( (v18 & 4) != 0 )
      KeBugCheckEx(0x74u, 3uLL, 6uLL, v14, 0LL);
  }
  *(_QWORD *)&v28.Length = 0x800000LL;
  v28.Buffer = (wchar_t *)&v31;
  RtlAppendUnicodeToString(&v28, L"\\REGISTRY\\");
  RtlAppendUnicodeToString(&v28, *(PCWSTR *)(a1 + 56));
  RtlAppendUnicodeToString(&v28, L"\\");
  RtlAppendUnicodeToString(&v28, *(PCWSTR *)(a1 + 48));
  v19 = CmpLinkHiveToMaster((__int64)&v28, 0LL, v14, 0, 0x200u, 0, 0LL, a2, 0LL, 0LL, 1);
  if ( v19 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 7uLL, v14, v19);
  v20 = (_QWORD *)qword_140439288;
  v21 = (_QWORD *)(v14 + 1616);
  if ( *(__int64 **)qword_140439288 != &CmpPreloadedHivesList )
    __fastfail(3u);
  v21[1] = qword_140439288;
  *v21 = &CmpPreloadedHivesList;
  *v20 = v21;
  result = 0LL;
  qword_140439288 = (__int64)v21;
  return result;
}
