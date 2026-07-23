/*
 * XREFs of CmpInitHiveFromFile @ 0x1405B4D68
 * Callers:
 *     CmpCmdHiveOpen @ 0x1405B594C (CmpCmdHiveOpen.c)
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401B8510 (ZwQueryInformationFile.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1405B5B70 (CmpQueryFileSecurityDescriptor.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpLogEvent @ 0x1407ED8DC (CmpLogEvent.c)
 */

__int64 __fastcall CmpInitHiveFromFile(
        PCUNICODE_STRING Source,
        unsigned int a2,
        ULONG_PTR *a3,
        char *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8,
        _BYTE *a9,
        void *a10)
{
  ULONG_PTR *v11; // r10
  __int64 v13; // rdx
  HANDLE v14; // rbx
  unsigned int v15; // ecx
  HANDLE v16; // rsi
  void *v17; // r12
  int v18; // r14d
  int FileSecurityDescriptor; // edi
  HANDLE v20; // r15
  unsigned int v22; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v24; // eax
  char v25; // r14
  ULONG_PTR v26; // rdi
  PVOID PoolWithTag; // rax
  int v28; // r14d
  bool v29; // zf
  char v30; // [rsp+60h] [rbp-A0h]
  char v31; // [rsp+61h] [rbp-9Fh]
  BOOLEAN v32; // [rsp+62h] [rbp-9Eh]
  int v33; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h]
  int v35; // [rsp+70h] [rbp-90h]
  HANDLE v36; // [rsp+78h] [rbp-88h]
  HANDLE FileHandle; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  void *v39; // [rsp+90h] [rbp-70h]
  ULONG_PTR *v40; // [rsp+98h] [rbp-68h]
  int v41; // [rsp+A0h] [rbp-60h]
  int v42; // [rsp+A4h] [rbp-5Ch]
  unsigned int v43; // [rsp+ACh] [rbp-54h]
  void *v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h] BYREF
  char *v46; // [rsp+C0h] [rbp-40h]
  _BYTE *v47; // [rsp+D0h] [rbp-30h]
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v49[4]; // [rsp+E0h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  char FileInformation[16]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v52; // [rsp+120h] [rbp+20h]
  _BYTE v53[56]; // [rsp+138h] [rbp+38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF
  _DWORD *v55; // [rsp+190h] [rbp+90h]
  __int64 v56; // [rsp+198h] [rbp+98h]
  wchar_t *Buffer; // [rsp+1A0h] [rbp+A0h]
  _DWORD v58[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  EVENT_DATA_DESCRIPTOR v59; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v60; // [rsp+1D0h] [rbp+D0h]
  int v61; // [rsp+1D8h] [rbp+D8h]
  int v62; // [rsp+1DCh] [rbp+DCh]

  v47 = a9;
  v11 = a3;
  v43 = a2;
  v13 = a6;
  v44 = a10;
  v46 = a4;
  v40 = a3;
  v38 = a6;
  if ( stru_140400AA0.LevelPlus1 > 4 )
  {
    v56 = 2LL;
    v55 = v58;
    Buffer = Source->Buffer;
    v58[0] = Source->Length;
    v58[1] = 0;
    TlgWrite(&stru_140400AA0, &unk_14036CA7C, 0LL, 0LL, 4u, &pData);
    v13 = v38;
    a4 = v46;
    v11 = v40;
  }
  v31 = 0;
  v14 = 0LL;
  v15 = (a5 >> 19) & 0x40;
  v32 = 0;
  FileHandle = 0LL;
  v42 = a2 & 0x8000;
  v16 = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  v36 = 0LL;
  v30 = 1;
  v39 = 0LL;
  if ( (a2 & 0x8000) != 0 )
  {
    v30 = 0;
    v18 = v15 | ((a2 & 0x40000 | 0x10000) >> 11);
  }
  else
  {
    v18 = v15 | 2;
    if ( (a5 & 0x40000000) == 0 )
      v18 = (a5 >> 19) & 0x40;
    if ( *a4 )
      v18 |= 1u;
  }
  while ( 1 )
  {
    v45 = 0LL;
    *v11 = 0LL;
    FileSecurityDescriptor = CmpOpenHiveFile(Source, v18, v13, (__int64)&v45, 0LL, 0LL);
    if ( FileSecurityDescriptor < 0 )
    {
      v20 = FileHandle;
      goto LABEL_7;
    }
    v35 = v18;
    if ( v41 == 2 )
    {
      v31 = 1;
      v35 = v18 | 0x10;
    }
    v20 = FileHandle;
    if ( !v42 )
    {
      v17 = v39;
      FileSecurityDescriptor = CmpQueryFileSecurityDescriptor(FileHandle);
      if ( FileSecurityDescriptor < 0 )
        goto LABEL_7;
    }
    if ( (a5 & 0x10000000) != 0 )
    {
      v33 = 1;
      FileSecurityDescriptor = CmpOpenHiveFile(Source, v35, v38, 0LL, (__int64)v17, 0LL);
      if ( FileSecurityDescriptor >= 0 )
      {
        v14 = Handle;
        goto LABEL_28;
      }
      v14 = 0LL;
      v29 = v30 == 0;
      Handle = 0LL;
    }
    else
    {
      v33 = 2;
      FileSecurityDescriptor = CmpOpenHiveFile(Source, v35, v38, 0LL, (__int64)v17, 0LL);
      if ( FileSecurityDescriptor < 0 )
      {
        v14 = 0LL;
        Handle = 0LL;
        if ( v30 )
          goto LABEL_7;
      }
      else
      {
        v14 = Handle;
      }
      FileSecurityDescriptor = CmpOpenHiveFile(Source, v35, v38, 0LL, (__int64)v17, 0LL);
      if ( FileSecurityDescriptor >= 0 )
      {
        v16 = v36;
        goto LABEL_28;
      }
      v16 = 0LL;
      v29 = v30 == 0;
      v36 = 0LL;
    }
    if ( !v29 )
      goto LABEL_7;
LABEL_28:
    v22 = v33;
    if ( !v30 )
    {
      if ( v33 != 2 )
      {
        v22 = v14 != 0LL;
        goto LABEL_32;
      }
      if ( v14 )
      {
        if ( v16 )
          goto LABEL_32;
        ZwClose(v14);
        v14 = 0LL;
        Handle = 0LL;
      }
      if ( v16 )
      {
        ZwClose(v16);
        v16 = 0LL;
        v36 = 0LL;
      }
      v22 = 0;
    }
LABEL_32:
    if ( !v32 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v32 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      if ( !v32 )
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v20 = FileHandle;
      v14 = Handle;
      v16 = v36;
      v17 = v39;
      if ( !v32 )
      {
        FileSecurityDescriptor = -1073741431;
        goto LABEL_7;
      }
    }
    v49[3] = 0LL;
    v49[0] = v20;
    v49[1] = v14;
    v49[2] = v16;
    memset(v44, 0, 0x160uLL);
    v24 = CmpCreateHive(
            &BugCheckParameter2,
            v31 == 0 ? 5 : 0,
            v43,
            v22,
            0LL,
            v49,
            (__int64)Source,
            a5,
            0LL,
            0LL,
            v47,
            (__int64)v44);
    FileSecurityDescriptor = v24;
    if ( v24 != -1073741267 )
      break;
    ZwClose(v20);
    FileHandle = 0LL;
    if ( v14 )
    {
      ZwClose(v14);
      v14 = 0LL;
      Handle = 0LL;
    }
    v13 = v38;
    v11 = v40;
    if ( v16 )
    {
      ZwClose(v16);
      v13 = v38;
      v16 = 0LL;
      v11 = v40;
      v36 = 0LL;
    }
  }
  if ( v24 >= 0 )
  {
    v25 = v31;
    v26 = BugCheckParameter2;
    if ( !v31 && (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x800) != 0 )
    {
      CmpAttachToRegistryProcess(v53);
      v28 = CmpFlushHive(v26, 0xCu);
      KiUnstackDetachProcess((__int64)v53, 0LL);
      if ( v28 < 0 )
        SetFailureLocation((__int64)v44, 1, 1, v28, 230);
      v25 = 0;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Source->Length, 0x624E4D43u);
    *(_QWORD *)(v26 + 1840) = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_WORD *)(v26 + 1832) = Source->Length;
      *(_WORD *)(v26 + 1834) = Source->Length;
      memmove(*(void **)(v26 + 1840), Source->Buffer, Source->Length);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v26 + 64) + 4088LL) & 4) != 0 )
      CmpLogEvent(&REG_EVENT_SELFHEAL);
    if ( ZwQueryInformationFile(v20, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation) >= 0 )
      *(_QWORD *)(v26 + 4224) = v52;
    *(_DWORD *)(v26 + 184) = HIDWORD(v45);
    *v40 = v26;
    FileSecurityDescriptor = 0;
    *v46 = v25;
  }
LABEL_7:
  if ( v32 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v20 = FileHandle;
    v14 = Handle;
    v16 = v36;
    v17 = v39;
  }
  if ( v20 )
    ZwClose(v20);
  if ( v14 )
    ZwClose(v14);
  if ( v16 )
    ZwClose(v16);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( stru_140400AA0.LevelPlus1 > 4 )
  {
    v62 = 0;
    v60 = &v33;
    v33 = FileSecurityDescriptor;
    v61 = 4;
    TlgWrite(&stru_140400AA0, &unk_14036CA52, 0LL, 0LL, 3u, &v59);
  }
  return (unsigned int)FileSecurityDescriptor;
}
