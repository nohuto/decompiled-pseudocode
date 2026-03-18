/*
 * XREFs of ?ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0209310
 * Callers:
 *     ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0208B5C (-EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C002EC00 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002EC68 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall CDriverStoreCopy::ProcessNextFile(
        CDriverStoreCopy *this,
        struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // eax
  unsigned __int64 v9; // rbx
  wchar_t *v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  _WORD *v16; // rax
  __int64 v17; // r8
  char *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  signed __int64 v21; // r8
  __int16 v22; // r9
  char *v23; // rax
  NTSTATUS v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  NTSTATUS v27; // eax
  NTSTATUS v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  NTSTATUS v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  char v36; // dl
  int v37; // r8d
  char *PoolWithTag; // rax
  unsigned __int16 *v39; // rcx
  char *v40; // rsi
  _QWORD *v41; // rax
  __int64 v42; // rdx
  int v43; // eax
  void *FileHandle; // [rsp+60h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-51h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-41h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-9h]
  __int64 v50; // [rsp+C8h] [rbp-1h]
  _QWORD v51[5]; // [rsp+D0h] [rbp+7h] BYREF

  v4 = ZwQueryDirectoryFile(
         *((HANDLE *)this + 2),
         0LL,
         0LL,
         0LL,
         &IoStatusBlock,
         *(PVOID *)this,
         *((_DWORD *)this + 2),
         FileNamesInformation,
         1u,
         0LL,
         0);
  *((_DWORD *)a2 + 4) = v4;
  if ( v4 < 0 )
  {
LABEL_8:
    v12 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    v13 = *((int *)a2 + 4);
LABEL_9:
    *(_QWORD *)(v12 + 24) = v13;
    WdLogEvent5_WdWarning(v12);
    return;
  }
  while ( 1 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)this + 8LL);
    if ( v8 > 0x206 )
      v8 = 518;
    v9 = v8;
    memmove((char *)this + 1064, (const void *)(*(_QWORD *)this + 12LL), v8);
    *((_WORD *)this + (v9 >> 1) + 532) = 0;
    _wcslwr((wchar_t *)this + 532);
    if ( *((_WORD *)this + 532) != 46 )
    {
      v10 = wcsstr((const wchar_t *)this + 532, L".sys");
      if ( !v10 || v10[4] )
        break;
    }
    v11 = ZwQueryDirectoryFile(
            *((HANDLE *)this + 2),
            0LL,
            0LL,
            0LL,
            &IoStatusBlock,
            *(PVOID *)this,
            *((_DWORD *)this + 2),
            FileNamesInformation,
            1u,
            0LL,
            0);
    *((_DWORD *)a2 + 4) = v11;
    if ( v11 < 0 )
      goto LABEL_8;
  }
  v14 = RtlStringCbCopyW((unsigned __int16 *)a2 + 30, 0x208uLL, (size_t *)this + 68);
  *((_DWORD *)a2 + 4) = v14;
  if ( v14 >= 0 )
  {
    if ( !*((_WORD *)this + 272) )
      goto LABEL_48;
    v16 = (_WORD *)((char *)a2 + 60);
    v17 = 260LL;
    do
    {
      if ( !*v16 )
        break;
      ++v16;
      --v17;
    }
    while ( v17 );
    v15 = 3221225485LL;
    if ( v17 )
    {
      v18 = (char *)a2 + 2 * (260 - v17) + 60;
      v19 = v17;
      v20 = 2147483646LL;
      v21 = (char *)L"\\" - v18;
      do
      {
        if ( !v20 )
          break;
        v22 = *(_WORD *)&v18[v21];
        if ( !v22 )
          break;
        *(_WORD *)v18 = v22;
        --v20;
        v18 += 2;
        --v19;
      }
      while ( v19 );
      v23 = v18 - 2;
      if ( v19 )
        v23 = v18;
      v15 = 2147483653LL;
      if ( v19 )
        v15 = 0LL;
      *(_WORD *)v23 = 0;
    }
    *((_DWORD *)a2 + 4) = v15;
    if ( (int)v15 >= 0 )
    {
LABEL_48:
      v24 = RtlStringCbCatW((unsigned __int16 *)a2 + 30, v15, (size_t *)this + 133);
      *((_DWORD *)a2 + 4) = v24;
      if ( v24 >= 0 )
      {
        v25 = RtlStringCbCopyW((unsigned __int16 *)this + 532, 0x208uLL, (size_t *)this + 3);
        *((_DWORD *)a2 + 4) = v25;
        if ( v25 >= 0 )
        {
          v27 = RtlStringCbCatW((unsigned __int16 *)this + 532, v26, (size_t *)((char *)a2 + 60));
          *((_DWORD *)a2 + 4) = v27;
          if ( v27 >= 0 )
          {
            FileHandle = 0LL;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)this + 532);
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v28 = ZwOpenFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
            *((_DWORD *)a2 + 4) = v28;
            if ( v28 < 0 )
            {
              v12 = WdLogNewEntry5_WdWarning(v30, v29, v31);
              v13 = *((int *)a2 + 4);
              *(_QWORD *)(v12 + 32) = 578LL;
              goto LABEL_9;
            }
            memset(v51, 0, sizeof(v51));
            v48 = 0LL;
            v49 = 0LL;
            v50 = 0LL;
            v32 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &v48, 0x18u, FileStandardInformation);
            *((_DWORD *)a2 + 4) = v32;
            if ( v32 >= 0 && !BYTE5(v50) )
              *((_DWORD *)a2 + 4) = ZwQueryInformationFile(FileHandle, &IoStatusBlock, v51, 0x28u, FileBasicInformation);
            ZwClose(FileHandle);
            if ( *((int *)a2 + 4) < 0 )
            {
              v12 = WdLogNewEntry5_WdWarning(v34, v33, v35);
              v13 = *((int *)a2 + 4);
              *(_QWORD *)(v12 + 32) = 605LL;
              goto LABEL_9;
            }
            v36 = BYTE5(v50);
            v37 = v49;
            *((_QWORD *)a2 + 1) = v49;
            *(_BYTE *)a2 = v36;
            if ( !v36 )
            {
              *((_QWORD *)a2 + 3) = v51[0];
              *((_QWORD *)a2 + 6) = v51[3];
              *((_QWORD *)a2 + 4) = v51[1];
              *((_QWORD *)a2 + 5) = v51[2];
              *((_DWORD *)a2 + 14) = v51[4];
            }
            *((_DWORD *)this + 396) = v37;
            if ( !v36 )
              goto LABEL_45;
            PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x218uLL, 0x4B677844u);
            v39 = (unsigned __int16 *)PoolWithTag;
            if ( !PoolWithTag )
            {
              *((_DWORD *)a2 + 4) = -1073741801;
              return;
            }
            v40 = (char *)this + 1592;
            v41 = PoolWithTag + 520;
            v42 = *(_QWORD *)v40;
            if ( *(char **)(*(_QWORD *)v40 + 8LL) != v40 )
              __fastfail(3u);
            *v41 = v42;
            v41[1] = v40;
            *(_QWORD *)(v42 + 8) = v41;
            *(_QWORD *)v40 = v41;
            v43 = RtlStringCbCopyW(v39, 0x208uLL, (size_t *)((char *)a2 + 60));
            *((_DWORD *)a2 + 4) = v43;
            if ( v43 >= 0 )
LABEL_45:
              *((_DWORD *)a2 + 4) = 0;
          }
        }
      }
    }
  }
}
