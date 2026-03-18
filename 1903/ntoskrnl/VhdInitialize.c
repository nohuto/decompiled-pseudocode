/*
 * XREFs of VhdInitialize @ 0x140A0F6E8
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A10470 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400040E8 (RtlStringCbPrintfW.c)
 *     RtlStringCbCatW @ 0x140099E20 (RtlStringCbCatW.c)
 *     PnpBootDeviceWait @ 0x14018D970 (PnpBootDeviceWait.c)
 *     strstr @ 0x14019F610 (strstr.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlStringFromGUID @ 0x1406A11D0 (RtlStringFromGUID.c)
 *     VhdiGetDiskParameters @ 0x140A3ECC0 (VhdiGetDiskParameters.c)
 *     VhdiMountVhdFile @ 0x140A3F35C (VhdiMountVhdFile.c)
 */

__int64 __fastcall VhdInitialize(__int64 a1)
{
  const char *v2; // rcx
  int DiskParameters; // ebx
  char *v4; // rax
  _QWORD *v6; // rcx
  _QWORD *i; // rax
  __int64 v8; // r10
  ULONG_PTR v9; // rdi
  char v10; // r12
  const wchar_t *v11; // r15
  int v12; // ecx
  __int64 v13; // r14
  __int64 v14; // rax
  SIZE_T v15; // r13
  wchar_t *PoolWithTag; // rax
  wchar_t *v17; // rsi
  __int64 v18; // rdi
  unsigned int v19; // edi
  unsigned int v20; // r13d
  _DWORD *v21; // rax
  _DWORD *v22; // r12
  __int64 v23; // rcx
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-A9h] BYREF
  _QWORD v25[4]; // [rsp+40h] [rbp-99h] BYREF
  _BYTE v26[208]; // [rsp+60h] [rbp-79h] BYREF
  char v27; // [rsp+140h] [rbp+67h] BYREF
  unsigned int v28; // [rsp+148h] [rbp+6Fh] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+150h] [rbp+77h] BYREF
  __int64 v30; // [rsp+158h] [rbp+7Fh] BYREF

  memset(v25, 0, sizeof(v25));
  memset(v26, 0, 0x90uLL);
  v2 = *(const char **)(a1 + 184);
  *(_QWORD *)&GuidString.Length = 0LL;
  DiskParameters = 0;
  GuidString.Buffer = 0LL;
  v28 = 0;
  v4 = strstr(v2, "vdisk(");
  if ( !v4 || !strstr(v4 + 1, "partition(") )
    return (unsigned int)DiskParameters;
  v6 = *(_QWORD **)(a1 + 232);
  for ( i = (_QWORD *)*v6; ; i = (_QWORD *)*i )
  {
    if ( i == v6 )
      return (unsigned int)DiskParameters;
    v8 = i[7];
    if ( v8 )
      break;
  }
  if ( !i )
    return (unsigned int)DiskParameters;
  DiskParameters = VhdiGetDiskParameters(v8, v26, &v30, &v27, &pszSrc);
  if ( DiskParameters < 0 )
  {
    v9 = 1LL;
    goto LABEL_36;
  }
  v10 = v27;
  v11 = pszSrc;
  if ( v27 )
  {
    v12 = 110;
  }
  else
  {
    v25[2] = pszSrc;
    v25[0] = v26;
    v25[1] = v30;
    v9 = 2LL;
    v25[3] = &v28;
    DiskParameters = PnpBootDeviceWait(
                       a1,
                       2,
                       (__int64 (__fastcall *)(__int64, __int64, UNICODE_STRING *))&VhdiInitializeBootDisk,
                       (__int64)v25);
    if ( DiskParameters < 0 )
      goto LABEL_37;
    v12 = 74;
  }
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( v11[v14] );
  v15 = (unsigned int)(v12 + 2 * v14);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x42646856u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_21;
  if ( !v10 )
  {
    DiskParameters = RtlStringCbPrintfW(PoolWithTag, 0x4AuLL, L"\\\\Device\\HarddiskVolume%lu", v28);
    goto LABEL_26;
  }
  if ( RtlStringFromGUID(&RamdiskBootDiskGuid, &GuidString) < 0 )
  {
LABEL_21:
    v9 = 3LL;
LABEL_23:
    DiskParameters = -1073741801;
    goto LABEL_37;
  }
  DiskParameters = RtlStringCbPrintfW(v17, 0x6EuLL, L"\\\\Device\\Ramdisk%wZ", &GuidString);
  RtlFreeAnsiString(&GuidString);
LABEL_26:
  if ( DiskParameters < 0 )
  {
    v9 = 4LL;
    goto LABEL_36;
  }
  v18 = -1LL;
  do
    ++v18;
  while ( v17[v18] );
  RtlStringCbCatW(v17, v15, v11);
  DiskParameters = VhdiMountVhdFile(v17);
  if ( DiskParameters < 0 )
  {
    v9 = 5LL;
    goto LABEL_36;
  }
  NtVhdBootFile = (__int64)v17;
  v19 = v18 - 1;
  do
    ++v13;
  while ( v11[v13] );
  v20 = 2 * (v13 + v19) + 14;
  v21 = ExAllocatePoolWithTag(NonPagedPoolNx, v20, 0x42646856u);
  v22 = v21;
  if ( !v21 )
  {
    v9 = 7LL;
    goto LABEL_23;
  }
  memset(v21, 0, v20);
  memmove(v22 + 2, v17 + 1, 2LL * v19);
  v23 = 2 * v19 + 10;
  v22[1] = v23;
  memmove((char *)v22 + v23, v11, 2LL * (unsigned int)(v13 + 1));
  off_140427A40 = v22;
  *(_BYTE *)v22 = 1;
  v9 = 0LL;
  LODWORD(dword_14042B360) = v20;
LABEL_36:
  if ( DiskParameters < 0 )
LABEL_37:
    KeBugCheckEx(0x12Fu, v9, DiskParameters, 0LL, 0LL);
  return (unsigned int)DiskParameters;
}
