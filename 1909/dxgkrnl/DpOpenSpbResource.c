/*
 * XREFs of DpOpenSpbResource @ 0x1C02AD760
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000E210 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C0043240 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 *     DpiCreateSpbResourceRecord @ 0x1C02AE034 (DpiCreateSpbResourceRecord.c)
 */

__int64 __fastcall DpOpenSpbResource(
        __int64 a1,
        void *a2,
        const UNICODE_STRING *a3,
        ACCESS_MASK a4,
        ULONG ShareAccess,
        ULONG OpenOptions,
        _QWORD *a7)
{
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rbx
  __int64 v16; // rsi
  _DWORD *v17; // rdx
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  __int64 v20; // rax
  unsigned __int16 Length; // ax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  NTSTATUS v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-99h] BYREF
  void *FileHandle; // [rsp+48h] [rbp-89h] BYREF
  __int64 v41; // [rsp+50h] [rbp-81h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-79h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-69h] BYREF
  wchar_t Dest[20]; // [rsp+98h] [rbp-39h] BYREF

  FileHandle = a2;
  v8 = (unsigned int)a2;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( KeGetCurrentIrql() )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10);
    LODWORD(v14) = -1073741811;
    v13[3] = 275LL;
    v13[4] = 21LL;
    v13[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v13);
    return (unsigned int)v14;
  }
  if ( a1
    && (v16 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v16 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v16 + 20) - 2) <= 1 )
  {
    v17 = *(_DWORD **)(v16 + 1288);
    LOBYTE(v12) = 0;
    if ( v17 )
    {
      v11 = 0LL;
      do
      {
        if ( (unsigned int)v11 >= *v17 )
          break;
        v18 = 0;
        v19 = v17[9 * (unsigned int)v11 + 4];
        if ( v19 )
        {
          v20 = (__int64)&v17[9 * (unsigned int)v11 + 8];
          while ( *(_BYTE *)(v20 - 12) != 0x84 || *(_QWORD *)(v20 - 4) != __PAIR64__(HIDWORD(FileHandle), v8) )
          {
            ++v18;
            v20 += 20LL;
            if ( v18 >= v19 )
              goto LABEL_18;
          }
          LOBYTE(v12) = 1;
        }
LABEL_18:
        v11 = (unsigned int)(v11 + 1);
      }
      while ( !(_BYTE)v12 );
      if ( (_BYTE)v12 )
      {
        Destination.Length = 0;
        if ( a3 )
          Length = a3->Length;
        else
          Length = 0;
        Destination.MaximumLength = Length + 80;
        Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(Length + 80), 0x74727044u);
        if ( !Destination.Buffer )
        {
          v26 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
          LODWORD(v14) = -1073741801;
          *(_QWORD *)(v26 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v26);
          return (unsigned int)v14;
        }
        LODWORD(v14) = RtlStringCbPrintfW(Dest, 0x22uLL, L"%0*I64x");
        if ( (int)v14 >= 0 )
          LODWORD(v14) = RtlUnicodeStringPrintf(&Destination, L"%s%s", L"\\Device\\RESOURCE_HUB\\", Dest);
        if ( (int)v14 >= 0 )
        {
          if ( a3 )
          {
            if ( *a3->Buffer != 92 )
              RtlAppendUnicodeToString(&Destination, L"\\");
            RtlAppendUnicodeStringToString(&Destination, a3);
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &Destination;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v31 = ZwOpenFile(&FileHandle, a4, &ObjectAttributes, &IoStatusBlock, ShareAccess, OpenOptions);
          v14 = v31;
          if ( v31 >= 0 )
          {
            v35 = DpiCreateSpbResourceRecord(v16, FileHandle, &v41);
            v14 = v35;
            if ( v35 >= 0 )
            {
              *a7 = v41;
LABEL_38:
              if ( Destination.Buffer )
                ExFreePoolWithTag(Destination.Buffer, 0);
              return (unsigned int)v14;
            }
          }
          v30 = WdLogNewEntry5_WdError(v33, v32, v34);
          *(_QWORD *)(v30 + 24) = v14;
        }
        else
        {
          v30 = WdLogNewEntry5_WdError(v28, v27, v29);
          *(_QWORD *)(v30 + 24) = (int)v14;
        }
        WdLogEvent5_WdError(v30);
        goto LABEL_38;
      }
    }
    v36 = WdLogNewEntry5_WdWarning(v11, v17, v12);
    *(_QWORD *)(v36 + 24) = SHIDWORD(FileHandle);
    WdLogEvent5_WdWarning(v36);
    return 3221225712LL;
  }
  else
  {
    v37 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v37 + 24) = a1;
    WdLogEvent5_WdWarning(v37);
    return 3221225711LL;
  }
}
