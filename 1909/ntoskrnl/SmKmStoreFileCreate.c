/*
 * XREFs of SmKmStoreFileCreate @ 0x1408E9EAC
 * Callers:
 *     SmcCacheStart @ 0x1408EB71C (SmcCacheStart.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoSetThreadHardErrorMode @ 0x1400EA080 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1401C0E70 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1401C1130 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1401C1570 (ZwQueryVolumeInformationFile.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IoRegisterPlugPlayNotification @ 0x140722750 (IoRegisterPlugPlayNotification.c)
 *     SmKmFileInfoCleanup @ 0x1408E916C (SmKmFileInfoCleanup.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408EA35C (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x1408EA60C (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1408EA6AC (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x1408EABA8 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x1408EAD40 (SmKmStoreFileWriteHeader.c)
 */

__int64 __fastcall SmKmStoreFileCreate(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        int a6,
        unsigned int *a7,
        _OWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        __int64 a11)
{
  char *v13; // r15
  unsigned int v15; // r14d
  HANDLE *v16; // rdi
  HANDLE v17; // r12
  char *v18; // rsi
  __int64 v19; // rax
  NTSTATUS Status; // ebx
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  unsigned int v23; // r15d
  __int128 v24; // xmm1
  _OWORD *v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  _DWORD *v28; // rcx
  int v30; // [rsp+28h] [rbp-D8h]
  BOOLEAN EnableHardErrors; // [rsp+50h] [rbp-B0h]
  int v32[3]; // [rsp+54h] [rbp-ACh] BYREF
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+64h] [rbp-9Ch]
  int v35; // [rsp+68h] [rbp-98h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-90h] BYREF
  PVOID NotificationEntry; // [rsp+80h] [rbp-80h] BYREF
  __int64 FileInformation; // [rsp+88h] [rbp-78h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h] BYREF
  HANDLE FileHandle[8]; // [rsp+A0h] [rbp-60h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+E0h] [rbp-20h]
  _OWORD *v42; // [rsp+E8h] [rbp-18h]
  _DWORD *v43; // [rsp+F0h] [rbp-10h]
  _DWORD *v44; // [rsp+F8h] [rbp-8h]
  _QWORD *v45; // [rsp+100h] [rbp+0h]
  unsigned int *v46; // [rsp+108h] [rbp+8h]
  __int64 v47; // [rsp+110h] [rbp+10h]
  _QWORD FsInformation[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v49; // [rsp+128h] [rbp+28h]
  __int64 v50; // [rsp+130h] [rbp+30h] BYREF
  __int64 v51; // [rsp+138h] [rbp+38h]
  __int64 v52; // [rsp+140h] [rbp+40h]

  v42 = a8;
  v13 = 0LL;
  v43 = a9;
  v44 = a10;
  v47 = a11;
  DriverObject = PnpDriverObject;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  FsInformation[0] = 0LL;
  FsInformation[1] = 0LL;
  v49 = 0LL;
  v32[0] = a4;
  LODWORD(NotificationEntry) = a3;
  v45 = a5;
  v46 = a7;
  FileInformation = 0LL;
  v39 = 0LL;
  memset(FileHandle, 0, sizeof(FileHandle));
  v15 = *a7;
  v35 = 0;
  v33 = v15;
  v34 = 0;
  EnableHardErrors = IoSetThreadHardErrorMode(0);
  if ( (a2 & 1) != 0 )
  {
    v16 = (HANDLE *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
    v17 = *v16;
    v18 = (char *)v16[1];
    FileHandle[5] = v16[5];
    FileHandle[0] = v17;
    FileHandle[1] = v18;
    memset(v16, 0, 0x40uLL);
    a2 = 0LL;
    v19 = -1LL;
    v13 = v18;
  }
  else
  {
    v19 = *a5;
    v18 = (char *)FileHandle[1];
    v17 = FileHandle[0];
  }
  *(_QWORD *)&v32[1] = v19;
  if ( a4 > a3 )
  {
    Status = -1073741811;
    goto LABEL_40;
  }
  if ( a2 )
  {
    Status = SmKmStoreFileCreateForIoType(FileHandle, a2, &v33);
    if ( Status < 0 )
      goto LABEL_40;
    v17 = FileHandle[0];
    v35 = 1;
    FileInformation = *(_QWORD *)&v32[1];
    v21 = ZwSetInformationFile(FileHandle[0], &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
    v18 = (char *)FileHandle[1];
    Status = v21;
    if ( v21 == 259 )
    {
      KeWaitForSingleObject((char *)FileHandle[1] + 152, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
    {
LABEL_39:
      SmKmStoreFileDelete(FileHandle);
      goto LABEL_40;
    }
    v15 = v33;
    if ( v33 )
    {
      v39 = *(_QWORD *)&v32[1];
      v22 = ZwSetInformationFile(v17, &IoStatusBlock, &v39, 8u, FileValidDataLengthInformation);
      if ( v22 == 259 )
      {
        KeWaitForSingleObject(v18 + 152, Executive, 0, 0, 0LL);
        v22 = IoStatusBlock.Status;
      }
      if ( v22 < 0 )
        v34 = 1;
    }
LABEL_20:
    v23 = (unsigned int)NotificationEntry;
    if ( *(_QWORD *)&v32[1] / (__int64)(unsigned int)NotificationEntry < 0xFFFFFFFFLL )
    {
      Status = ZwQueryVolumeInformationFile(v17, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(v18 + 152, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        if ( !HIDWORD(v49)
          || ((HIDWORD(v49) - 1) & HIDWORD(v49)) != 0
          || HIDWORD(v49) > v32[0]
          || HIDWORD(v49) > v23
          || HIDWORD(v49) > 0x1000 )
        {
          Status = -1070071787;
        }
        else
        {
          Status = SmKmStoreFileGetExtents(
                     v17,
                     v32[0],
                     v30,
                     v15,
                     (__int64)v32,
                     (__int64)&FileHandle[6],
                     (__int64)&FileHandle[7]);
          if ( Status >= 0 )
          {
            if ( v15 || (Status = SmKmStoreFileOpenVolume(FileHandle[1], &FileHandle[2], &FileHandle[3]), Status >= 0) )
            {
              if ( !a2 || (Status = SmKmStoreFileWriteHeader(FileHandle, v15), Status >= 0) )
              {
                Status = IoRegisterPlugPlayNotification(
                           EventCategoryTargetDeviceChange,
                           0,
                           FileHandle[1],
                           DriverObject,
                           SmcVolumePnpNotification,
                           0LL,
                           &NotificationEntry);
                if ( Status >= 0 )
                {
                  v24 = *(_OWORD *)&FileHandle[2];
                  FileHandle[4] = NotificationEntry;
                  v25 = v42;
                  *v42 = *(_OWORD *)FileHandle;
                  v26 = *(_OWORD *)&FileHandle[4];
                  v25[1] = v24;
                  v27 = *(_OWORD *)&FileHandle[6];
                  v25[2] = v26;
                  v25[3] = v27;
                  memset(FileHandle, 0, sizeof(FileHandle));
                  Status = 0;
                  *v43 = HIDWORD(v49);
                  *v44 = v32[0];
                  *v45 = *(_QWORD *)&v32[1];
                  v28 = (_DWORD *)v47;
                  *v46 = v15;
                  *v28 = v34;
                  goto LABEL_40;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      Status = -1073741811;
    }
    if ( !v35 )
      goto LABEL_40;
    goto LABEL_39;
  }
  Status = ZwQueryInformationFile(v17, &IoStatusBlock, &v50, 0x18u, FileStandardInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(v13 + 152, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    *(_QWORD *)&v32[1] = v51;
    goto LABEL_20;
  }
LABEL_40:
  SmKmFileInfoCleanup((__int64)FileHandle);
  IoSetThreadHardErrorMode(EnableHardErrors);
  return (unsigned int)Status;
}
