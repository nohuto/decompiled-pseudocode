/*
 * XREFs of DpOpenSpbResource @ 0x1C0270DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0002B74 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C003C888 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 *     DpiCreateSpbResourceRecord @ 0x1C0271674 (DpiCreateSpbResourceRecord.c)
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
  const UNICODE_STRING *v7; // r14
  unsigned int v8; // ebx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v13; // rsi
  _DWORD *v14; // rdx
  unsigned int v15; // r10d
  unsigned int v16; // r11d
  __int64 v17; // rax
  unsigned __int16 Length; // ax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  NTSTATUS v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-99h] BYREF
  void *FileHandle; // [rsp+48h] [rbp-89h] BYREF
  __int64 v31; // [rsp+50h] [rbp-81h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-79h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-49h] BYREF
  wchar_t Dest[20]; // [rsp+98h] [rbp-39h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  v7 = a3;
  Destination.Buffer = 0LL;
  v8 = (unsigned int)a2;
  v9 = a1;
  FileHandle = a2;
  if ( KeGetCurrentIrql() )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1);
    LODWORD(v11) = -1073741811;
    v10[3] = 275LL;
    v10[4] = 21LL;
    v10[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v10);
    return (unsigned int)v11;
  }
  if ( a1
    && (v13 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v13 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v13 + 20) - 2) <= 1 )
  {
    v14 = *(_DWORD **)(v13 + 1216);
    LOBYTE(a3) = 0;
    if ( v14 )
    {
      a1 = 0LL;
      do
      {
        if ( (unsigned int)a1 >= *v14 )
          break;
        v15 = 0;
        v16 = v14[9 * (unsigned int)a1 + 4];
        if ( v16 )
        {
          v17 = (__int64)&v14[9 * (unsigned int)a1 + 8];
          while ( *(_BYTE *)(v17 - 12) != 0x84 || *(_QWORD *)(v17 - 4) != __PAIR64__(HIDWORD(FileHandle), v8) )
          {
            ++v15;
            v17 += 20LL;
            if ( v15 >= v16 )
              goto LABEL_18;
          }
          LOBYTE(a3) = 1;
        }
LABEL_18:
        a1 = (unsigned int)(a1 + 1);
      }
      while ( !(_BYTE)a3 );
      if ( (_BYTE)a3 )
      {
        Destination.Length = 0;
        if ( v7 )
          Length = v7->Length;
        else
          Length = 0;
        Destination.MaximumLength = Length + 80;
        Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(Length + 80), 0x74727044u);
        if ( !Destination.Buffer )
        {
          v21 = WdLogNewEntry5_WdLowResource(v20);
          LODWORD(v11) = -1073741801;
          *(_QWORD *)(v21 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v21);
          return (unsigned int)v11;
        }
        LODWORD(v11) = RtlStringCbPrintfW(Dest, 0x22uLL, L"%0*I64x");
        if ( (int)v11 >= 0 )
          LODWORD(v11) = RtlUnicodeStringPrintf(&Destination, L"%s%s", L"\\Device\\RESOURCE_HUB\\", Dest);
        if ( (int)v11 >= 0 )
        {
          if ( v7 )
          {
            if ( *v7->Buffer != 92 )
              RtlAppendUnicodeToString(&Destination, L"\\");
            RtlAppendUnicodeStringToString(&Destination, v7);
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &Destination;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v24 = ZwOpenFile(&FileHandle, a4, &ObjectAttributes, &IoStatusBlock, ShareAccess, OpenOptions);
          v11 = v24;
          if ( v24 >= 0 )
          {
            v26 = DpiCreateSpbResourceRecord(v13, FileHandle, &v31);
            v11 = v26;
            if ( v26 >= 0 )
            {
              *a7 = v31;
LABEL_38:
              if ( Destination.Buffer )
                ExFreePoolWithTag(Destination.Buffer, 0);
              return (unsigned int)v11;
            }
          }
          v23 = WdLogNewEntry5_WdError(v25);
          *(_QWORD *)(v23 + 24) = v11;
        }
        else
        {
          v23 = WdLogNewEntry5_WdError(v22);
          *(_QWORD *)(v23 + 24) = (int)v11;
        }
        WdLogEvent5_WdError(v23);
        goto LABEL_38;
      }
    }
    v27 = WdLogNewEntry5_WdWarning(a1, v14, a3);
    *(_QWORD *)(v27 + 24) = SHIDWORD(FileHandle);
    WdLogEvent5_WdWarning(v27);
    return 3221225712LL;
  }
  else
  {
    v28 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v28 + 24) = v9;
    WdLogEvent5_WdWarning(v28);
    return 3221225711LL;
  }
}
