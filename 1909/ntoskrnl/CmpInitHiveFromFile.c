/*
 * XREFs of CmpInitHiveFromFile @ 0x140639858
 * Callers:
 *     CmpCmdHiveOpen @ 0x14068367C (CmpCmdHiveOpen.c)
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401C0E70 (ZwQueryInformationFile.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SetFailureLocation @ 0x14027F4C0 (SetFailureLocation.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 *     CmpOpenHiveFile @ 0x140639E3C (CmpOpenHiveFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14068BD34 (CmpQueryFileSecurityDescriptor.c)
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     CmpLogEvent @ 0x1408268E8 (CmpLogEvent.c)
 */

__int64 __fastcall CmpInitHiveFromFile(
        PCUNICODE_STRING Source,
        int a2,
        ULONG_PTR *a3,
        char *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        void *a10)
{
  __int64 v11; // rdi
  HANDLE v14; // rbx
  unsigned int v15; // ecx
  HANDLE v16; // rsi
  void *v17; // r12
  int v18; // r14d
  int FileSecurityDescriptor; // edi
  HANDLE v20; // r15
  BOOL v22; // edi
  struct _KTHREAD *CurrentThread; // rax
  int Hive; // eax
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
  void *v38; // [rsp+88h] [rbp-78h]
  __int64 v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+98h] [rbp-68h]
  int v41; // [rsp+9Ch] [rbp-64h]
  int v42; // [rsp+A4h] [rbp-5Ch]
  void *v43; // [rsp+A8h] [rbp-58h]
  __int64 v44; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR *v45; // [rsp+B8h] [rbp-48h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  ULONG_PTR v47; // [rsp+D0h] [rbp-30h] BYREF
  char *v48; // [rsp+D8h] [rbp-28h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v50[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD FileInformation[5]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v52[56]; // [rsp+138h] [rbp+38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF
  _DWORD *v54; // [rsp+190h] [rbp+90h]
  __int64 v55; // [rsp+198h] [rbp+98h]
  wchar_t *Buffer; // [rsp+1A0h] [rbp+A0h]
  _DWORD v57[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  EVENT_DATA_DESCRIPTOR v58; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v59; // [rsp+1D0h] [rbp+D0h]
  int v60; // [rsp+1D8h] [rbp+D8h]
  int v61; // [rsp+1DCh] [rbp+DCh]

  v11 = a6;
  v42 = a2;
  v46 = a9;
  v45 = a3;
  v48 = a4;
  v39 = a6;
  v43 = a10;
  memset(FileInformation, 0, sizeof(FileInformation));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(v52, 0, 0x30uLL);
  if ( stru_140425BC0.LevelPlus1 > 4 )
  {
    v55 = 2LL;
    v54 = v57;
    Buffer = Source->Buffer;
    v57[0] = Source->Length;
    v57[1] = 0;
    TlgWrite(&stru_140425BC0, &unk_14038B80C, 0LL, 0LL, 4u, &pData);
  }
  v31 = 0;
  v14 = 0LL;
  v15 = (a5 >> 19) & 0x40;
  v32 = 0;
  FileHandle = 0LL;
  v41 = a2 & 0x8000;
  v16 = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  v36 = 0LL;
  v30 = 1;
  v38 = 0LL;
  if ( (a2 & 0x8000) != 0 )
  {
    v30 = 0;
    v18 = v15 | ((a2 & 0x40000 | 0x10000u) >> 11);
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
    v44 = 0LL;
    *v45 = 0LL;
    FileSecurityDescriptor = CmpOpenHiveFile(Source, v18, v11, (__int64)&v44, 0LL, 0LL);
    if ( FileSecurityDescriptor < 0 )
    {
      v20 = FileHandle;
      goto LABEL_7;
    }
    v35 = v18;
    if ( v40 == 2 )
    {
      v31 = 1;
      v35 = v18 | 0x10;
    }
    v20 = FileHandle;
    if ( !v41 )
    {
      v17 = v38;
      FileSecurityDescriptor = CmpQueryFileSecurityDescriptor(FileHandle);
      if ( FileSecurityDescriptor < 0 )
        goto LABEL_7;
    }
    if ( (a5 & 0x10000000) != 0 )
    {
      v33 = 1;
      FileSecurityDescriptor = CmpOpenHiveFile(Source, v35, v39, 0LL, (__int64)v17, 0LL);
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
      FileSecurityDescriptor = CmpOpenHiveFile(Source, v35, v39, 0LL, (__int64)v17, 0LL);
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
      FileSecurityDescriptor = CmpOpenHiveFile(Source, v35, v39, 0LL, (__int64)v17, 0LL);
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
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v20 = FileHandle;
      v14 = Handle;
      v16 = v36;
      v17 = v38;
      if ( !v32 )
      {
        FileSecurityDescriptor = -1073741431;
        goto LABEL_7;
      }
    }
    v50[3] = 0LL;
    v50[0] = v20;
    v50[1] = v14;
    v50[2] = v16;
    memset(v43, 0, 0x160uLL);
    Hive = CmpCreateHive(
             (unsigned int)&v47,
             v31 == 0 ? 5 : 0,
             v42,
             v22,
             0LL,
             (__int64)v50,
             (__int64)Source,
             a5,
             0LL,
             0LL,
             v46,
             (__int64)v43);
    FileSecurityDescriptor = Hive;
    if ( Hive != -1073741267 )
      break;
    ZwClose(v20);
    FileHandle = 0LL;
    if ( v14 )
    {
      ZwClose(v14);
      v14 = 0LL;
      Handle = 0LL;
    }
    v11 = v39;
    if ( v16 )
    {
      ZwClose(v16);
      v16 = 0LL;
      v36 = 0LL;
    }
  }
  if ( Hive >= 0 )
  {
    v25 = v31;
    v26 = v47;
    if ( !v31 && (*(_DWORD *)(v47 + 4152) & 0x800) != 0 )
    {
      CmpAttachToRegistryProcess((__int64)v52);
      v28 = CmpFlushHive(v26, 0xCu);
      KiUnstackDetachProcess((struct _KTHREAD *)v52, 0);
      if ( v28 < 0 )
        SetFailureLocation((__int64)v43, 1, 1, v28, 230);
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
      *(_QWORD *)(v26 + 4224) = FileInformation[2];
    *(_DWORD *)(v26 + 184) = HIDWORD(v44);
    *v45 = v26;
    FileSecurityDescriptor = 0;
    *v48 = v25;
  }
LABEL_7:
  if ( v32 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v20 = FileHandle;
    v14 = Handle;
    v16 = v36;
    v17 = v38;
  }
  if ( v20 )
    ZwClose(v20);
  if ( v14 )
    ZwClose(v14);
  if ( v16 )
    ZwClose(v16);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( stru_140425BC0.LevelPlus1 > 4 )
  {
    v61 = 0;
    v59 = &v33;
    v33 = FileSecurityDescriptor;
    v60 = 4;
    TlgWrite(&stru_140425BC0, &unk_14038B7E2, 0LL, 0LL, 3u, &v58);
  }
  return (unsigned int)FileSecurityDescriptor;
}
