/*
 * XREFs of SmKmStoreFileCreate @ 0x1408AE8B0
 * Callers:
 *     SmcCacheStart @ 0x1408B0034 (SmcCacheStart.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IoSetThreadHardErrorMode @ 0x1400EEDD0 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1401B8510 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1401B87D0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1401B8C10 (ZwQueryVolumeInformationFile.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IoRegisterPlugPlayNotification @ 0x1407043E0 (IoRegisterPlugPlayNotification.c)
 *     SmKmFileInfoCleanup @ 0x1408ADBA4 (SmKmFileInfoCleanup.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408AED3C (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x1408AEFB8 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1408AF048 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x1408AF540 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AF6B0 (SmKmStoreFileWriteHeader.c)
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
  unsigned int v14; // esi
  HANDLE *v15; // r12
  HANDLE v16; // r13
  char *v17; // r14
  char *v18; // rdi
  __int64 v19; // rax
  NTSTATUS Status; // ebx
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  unsigned int v23; // edi
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
  PVOID NotificationEntry; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  HANDLE FileHandle[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 FileInformation; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-28h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+E0h] [rbp-20h]
  _OWORD *v42; // [rsp+E8h] [rbp-18h]
  _DWORD *v43; // [rsp+F0h] [rbp-10h]
  _DWORD *v44; // [rsp+F8h] [rbp-8h]
  _QWORD *v45; // [rsp+100h] [rbp+0h]
  unsigned int *v46; // [rsp+108h] [rbp+8h]
  __int64 v47; // [rsp+110h] [rbp+10h]
  _QWORD FsInformation[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v49; // [rsp+128h] [rbp+28h]
  char v50[8]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v51; // [rsp+138h] [rbp+38h]

  v42 = a8;
  v43 = a9;
  v44 = a10;
  v47 = a11;
  DriverObject = PnpDriverObject;
  v32[0] = a4;
  LODWORD(NotificationEntry) = a3;
  v45 = a5;
  v46 = a7;
  memset(FileHandle, 0, sizeof(FileHandle));
  v14 = *a7;
  v35 = 0;
  v34 = 0;
  v33 = v14;
  EnableHardErrors = IoSetThreadHardErrorMode(0);
  if ( (a2 & 1) != 0 )
  {
    v15 = (HANDLE *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
    v16 = *v15;
    v17 = (char *)v15[1];
    FileHandle[5] = v15[5];
    FileHandle[0] = v16;
    FileHandle[1] = v17;
    memset(v15, 0, 0x40uLL);
    a2 = 0LL;
    v18 = v17;
    v19 = -1LL;
  }
  else
  {
    v19 = *a5;
    v18 = 0LL;
    v17 = (char *)FileHandle[1];
    v16 = FileHandle[0];
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
    v16 = FileHandle[0];
    v35 = 1;
    FileInformation = *(_QWORD *)&v32[1];
    v21 = ZwSetInformationFile(FileHandle[0], &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
    v17 = (char *)FileHandle[1];
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
    v14 = v33;
    if ( v33 )
    {
      v40 = *(_QWORD *)&v32[1];
      v22 = ZwSetInformationFile(v16, &IoStatusBlock, &v40, 8u, FileValidDataLengthInformation);
      if ( v22 == 259 )
      {
        KeWaitForSingleObject(v17 + 152, Executive, 0, 0, 0LL);
        v22 = IoStatusBlock.Status;
      }
      if ( v22 < 0 )
        v34 = 1;
    }
LABEL_20:
    v23 = (unsigned int)NotificationEntry;
    if ( *(_QWORD *)&v32[1] / (__int64)(unsigned int)NotificationEntry < 0xFFFFFFFFLL )
    {
      FsInformation[0] = 0LL;
      FsInformation[1] = 0LL;
      v49 = 0LL;
      Status = ZwQueryVolumeInformationFile(v16, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(v17 + 152, Executive, 0, 0, 0LL);
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
                     v16,
                     v32[0],
                     v30,
                     v14,
                     (__int64)v32,
                     (__int64)&FileHandle[6],
                     (__int64)&FileHandle[7]);
          if ( Status >= 0 )
          {
            if ( v14 || (Status = SmKmStoreFileOpenVolume(FileHandle[1], &FileHandle[2], &FileHandle[3]), Status >= 0) )
            {
              if ( !a2 || (Status = SmKmStoreFileWriteHeader(FileHandle, v14), Status >= 0) )
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
                  *v46 = v14;
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
  Status = ZwQueryInformationFile(v16, &IoStatusBlock, v50, 0x18u, FileStandardInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(v18 + 152, Executive, 0, 0, 0LL);
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
