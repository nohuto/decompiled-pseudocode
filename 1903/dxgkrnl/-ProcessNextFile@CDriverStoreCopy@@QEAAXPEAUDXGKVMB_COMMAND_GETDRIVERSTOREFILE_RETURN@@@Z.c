/*
 * XREFs of ?ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C023BB4C
 * Callers:
 *     ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C023B28C (-EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0017C3C (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C0034444 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
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
  signed int v18; // ecx
  __int64 v19; // rax
  char *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  signed __int64 v23; // rax
  __int16 v24; // r9
  char *v25; // rax
  NTSTATUS v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  NTSTATUS v29; // eax
  NTSTATUS v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  NTSTATUS v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  char v38; // dl
  int v39; // r8d
  char *PoolWithTag; // rax
  unsigned __int16 *v41; // rcx
  char *v42; // rsi
  _QWORD *v43; // rax
  __int64 v44; // rdx
  int v45; // eax
  void *FileHandle; // [rsp+60h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-51h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-41h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-9h]
  __int64 v52; // [rsp+C8h] [rbp-1h]
  _QWORD v53[5]; // [rsp+D0h] [rbp+7h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
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
      goto LABEL_50;
    v15 = 260LL;
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
    v18 = v17 == 0 ? 0xC000000D : 0;
    if ( v17 )
      v19 = 260 - v17;
    else
      v19 = 0LL;
    if ( v17 )
    {
      v20 = (char *)a2 + 2 * v19 + 60;
      v21 = 260 - v19;
      if ( 260 != v19 )
      {
        v22 = 2147483646LL;
        v23 = (char *)L"\\" - v20;
        do
        {
          if ( !v22 )
            break;
          v24 = *(_WORD *)&v20[v23];
          if ( !v24 )
            break;
          *(_WORD *)v20 = v24;
          --v22;
          v20 += 2;
          --v21;
        }
        while ( v21 );
      }
      v25 = v20 - 2;
      if ( v21 )
        v25 = v20;
      v15 = -v21;
      v18 = v15 == 0 ? 0x80000005 : 0;
      *(_WORD *)v25 = 0;
    }
    *((_DWORD *)a2 + 4) = v18;
    if ( v18 >= 0 )
    {
LABEL_50:
      v26 = RtlStringCbCatW((unsigned __int16 *)a2 + 30, v15, (size_t *)this + 133);
      *((_DWORD *)a2 + 4) = v26;
      if ( v26 >= 0 )
      {
        v27 = RtlStringCbCopyW((unsigned __int16 *)this + 532, 0x208uLL, (size_t *)this + 3);
        *((_DWORD *)a2 + 4) = v27;
        if ( v27 >= 0 )
        {
          v29 = RtlStringCbCatW((unsigned __int16 *)this + 532, v28, (size_t *)((char *)a2 + 60));
          *((_DWORD *)a2 + 4) = v29;
          if ( v29 >= 0 )
          {
            FileHandle = 0LL;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)this + 532);
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v30 = ZwOpenFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
            *((_DWORD *)a2 + 4) = v30;
            if ( v30 < 0 )
            {
              v12 = WdLogNewEntry5_WdWarning(v32, v31, v33);
              v13 = *((int *)a2 + 4);
              *(_QWORD *)(v12 + 32) = 591LL;
              goto LABEL_9;
            }
            memset(v53, 0, sizeof(v53));
            v50 = 0LL;
            v51 = 0LL;
            v52 = 0LL;
            v34 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &v50, 0x18u, FileStandardInformation);
            *((_DWORD *)a2 + 4) = v34;
            if ( v34 >= 0 && !BYTE5(v52) )
              *((_DWORD *)a2 + 4) = ZwQueryInformationFile(FileHandle, &IoStatusBlock, v53, 0x28u, FileBasicInformation);
            ZwClose(FileHandle);
            if ( *((int *)a2 + 4) < 0 )
            {
              v12 = WdLogNewEntry5_WdWarning(v36, v35, v37);
              v13 = *((int *)a2 + 4);
              *(_QWORD *)(v12 + 32) = 618LL;
              goto LABEL_9;
            }
            v38 = BYTE5(v52);
            v39 = v51;
            *((_QWORD *)a2 + 1) = v51;
            *(_BYTE *)a2 = v38;
            if ( !v38 )
            {
              *((_QWORD *)a2 + 3) = v53[0];
              *((_QWORD *)a2 + 6) = v53[3];
              *((_QWORD *)a2 + 4) = v53[1];
              *((_QWORD *)a2 + 5) = v53[2];
              *((_DWORD *)a2 + 14) = v53[4];
            }
            *((_DWORD *)this + 396) = v39;
            if ( !v38 )
              goto LABEL_47;
            PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x218uLL, 0x4B677844u);
            v41 = (unsigned __int16 *)PoolWithTag;
            if ( !PoolWithTag )
            {
              *((_DWORD *)a2 + 4) = -1073741801;
              return;
            }
            v42 = (char *)this + 1592;
            v43 = PoolWithTag + 520;
            v44 = *(_QWORD *)v42;
            if ( *(char **)(*(_QWORD *)v42 + 8LL) != v42 )
              __fastfail(3u);
            *v43 = v44;
            v43[1] = v42;
            *(_QWORD *)(v44 + 8) = v43;
            *(_QWORD *)v42 = v43;
            v45 = RtlStringCbCopyW(v41, 0x208uLL, (size_t *)((char *)a2 + 60));
            *((_DWORD *)a2 + 4) = v45;
            if ( v45 >= 0 )
LABEL_47:
              *((_DWORD *)a2 + 4) = 0;
          }
        }
      }
    }
  }
}
