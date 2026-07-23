/*
 * XREFs of _CmGetDeviceInterfaceRegKeyPath @ 0x14059C86C
 * Callers:
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14059C600 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1406DB1C0 (PiDqGetRelativeObjectRegPath.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408F7CF4 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlStringCchCatExW @ 0x14028B120 (RtlStringCchCatExW.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1405C75E8 (_CmGetDeviceInterfaceSubkeyPath.c)
 */

__int64 __fastcall CmGetDeviceInterfaceRegKeyPath(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        wchar_t *a6,
        size_t cchDest,
        unsigned int *a8)
{
  __int16 v8; // r14
  _WORD *v10; // rsi
  unsigned int v11; // r15d
  char v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned int v16; // ebp
  NTSTATUS DeviceInterfaceSubkeyPath; // ebx
  _WORD *PoolWithTag; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  NTSTRSAFE_PWSTR *v21; // r9
  int v22; // r14d
  __int64 v23; // rax
  int v24; // r8d
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned int v27; // eax
  NTSTATUS v28; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  NTSTRSAFE_PWSTR *v32; // r9
  size_t *dwFlags; // [rsp+20h] [rbp-F8h]
  size_t *dwFlagsa; // [rsp+20h] [rbp-F8h]
  ULONG pszFormat; // [rsp+28h] [rbp-F0h]
  ULONG pszFormata; // [rsp+28h] [rbp-F0h]
  _WORD v38[40]; // [rsp+80h] [rbp-98h] BYREF

  v8 = a3;
  v10 = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    goto LABEL_56;
  v11 = (unsigned __int8)a3;
  if ( (((unsigned __int8)a3 - 48) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned __int8)a3 != 49 )
      return (unsigned int)-1073741811;
    v12 = 0;
  }
  else
  {
    v12 = 1;
  }
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( *(_WORD *)(a2 + 2 * v14) );
  v15 = 2 * v14 + 6;
  v16 = -1;
  if ( v15 <= 0xFFFFFFFF )
    v16 = v15;
  DeviceInterfaceSubkeyPath = v15 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v15 <= 0xFFFFFFFF )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x52504E50u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    LOBYTE(v20) = v12;
    DeviceInterfaceSubkeyPath = CmGetDeviceInterfaceSubkeyPath(v19, a2, v20, v38, PoolWithTag, v16 >> 1);
    if ( DeviceInterfaceSubkeyPath < 0 )
      goto LABEL_31;
    v22 = v8 & 0x200;
    if ( !v22 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( v38[v23] );
      v24 = a4;
      v25 = v23 + 48;
      goto LABEL_16;
    }
    v24 = a4;
    if ( !a4 )
    {
      v30 = -1LL;
      do
        ++v30;
      while ( v38[v30] );
      v25 = v30 + 99;
      goto LABEL_16;
    }
    if ( a4 != -1 )
    {
      v31 = -1LL;
      do
        ++v31;
      while ( v38[v31] );
      v25 = v31 + 96;
      do
LABEL_16:
        ++v13;
      while ( v10[v13] );
      v26 = v25 + v13 + 1;
      if ( v11 < 0x30 )
        goto LABEL_48;
      if ( v11 <= 0x31 )
        goto LABEL_19;
      if ( v11 == 50 )
        v26 += 18LL;
      else
LABEL_48:
        DeviceInterfaceSubkeyPath = -1073741811;
LABEL_19:
      if ( DeviceInterfaceSubkeyPath < 0 )
        goto LABEL_31;
      v27 = -1;
      if ( v26 <= 0xFFFFFFFF )
        v27 = v26;
      DeviceInterfaceSubkeyPath = v26 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v26 > 0xFFFFFFFF )
        goto LABEL_31;
      if ( a8 )
        *a8 = v27;
      if ( v27 <= (unsigned int)cchDest )
      {
        if ( v22 )
        {
          if ( v24 )
          {
            if ( v24 == -1 )
              goto LABEL_29;
            v28 = RtlStringCchPrintfExW(a6, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%04u\\%s\\%s\\%s");
          }
          else
          {
            v28 = RtlStringCchPrintfExW(a6, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%s\\%s\\%s");
          }
        }
        else
        {
          v28 = RtlStringCchPrintfExW(a6, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%s\\%s");
        }
        DeviceInterfaceSubkeyPath = v28;
LABEL_29:
        if ( DeviceInterfaceSubkeyPath >= 0 && v11 == 50 )
        {
          DeviceInterfaceSubkeyPath = RtlStringCchCatExW(a6, (unsigned int)cchDest, L"\\", v21, dwFlags, pszFormat);
          if ( DeviceInterfaceSubkeyPath >= 0 )
            DeviceInterfaceSubkeyPath = RtlStringCchCatExW(
                                          a6,
                                          (unsigned int)cchDest,
                                          L"Device Parameters",
                                          v32,
                                          dwFlagsa,
                                          pszFormata);
        }
        goto LABEL_31;
      }
      DeviceInterfaceSubkeyPath = -1073741789;
LABEL_31:
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      return (unsigned int)DeviceInterfaceSubkeyPath;
    }
LABEL_56:
    DeviceInterfaceSubkeyPath = -1073741811;
    goto LABEL_31;
  }
  return (unsigned int)DeviceInterfaceSubkeyPath;
}
