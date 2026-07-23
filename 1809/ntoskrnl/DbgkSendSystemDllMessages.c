/*
 * XREFs of DbgkSendSystemDllMessages @ 0x14080F68C
 * Callers:
 *     DbgkCreateThread @ 0x1405F8028 (DbgkCreateThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x14080FFB8 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1400073A0 (RtlStringCbCopyW.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     PsWow64GetProcessNtdllType @ 0x1406795B4 (PsWow64GetProcessNtdllType.c)
 *     PsQuerySystemDllInfo @ 0x14068327C (PsQuerySystemDllInfo.c)
 *     DbgkpQueueMessage @ 0x140810604 (DbgkpQueueMessage.c)
 *     DbgkpSendApiMessage @ 0x140811DB4 (DbgkpSendApiMessage.c)
 */

void __fastcall DbgkSendSystemDllMessages(_QWORD *a1, struct _KEVENT *a2, __int64 a3)
{
  _DWORD *v3; // rbx
  _KPROCESS *Process; // r15
  HANDLE *v6; // rsi
  int i; // r14d
  __int64 SystemDllInfo; // rax
  __int64 v9; // r13
  void *v10; // r13
  PIMAGE_NT_HEADERS v11; // rax
  struct _KTHREAD *CurrentThread; // rcx
  char v13; // [rsp+30h] [rbp-108h]
  wchar_t *Teb; // [rsp+38h] [rbp-100h]
  __int64 v16; // [rsp+50h] [rbp-E8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-80h] BYREF
  _BYTE v20[48]; // [rsp+C8h] [rbp-70h] BYREF

  v3 = (_DWORD *)a3;
  if ( a1 )
    Process = (_KPROCESS *)a1[68];
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  v6 = (HANDLE *)(a3 + 48);
  for ( i = 0; i < 6; ++i )
  {
    SystemDllInfo = PsQuerySystemDllInfo(i);
    v9 = SystemDllInfo;
    v16 = SystemDllInfo;
    if ( SystemDllInfo
      && (i <= 0
       || *(_WORD *)(SystemDllInfo + 2)
       && Process[1].ActiveProcessors.Bitmap[7]
       && i == (unsigned int)PsWow64GetProcessNtdllType((__int64)Process)) )
    {
      memset(v6, 0, 0x20uLL);
      Teb = 0LL;
      v10 = *(void **)(v9 + 24);
      v6[1] = v10;
      if ( a1 && i )
      {
        v13 = 1;
        KiStackAttachProcess(Process, 0LL, (__int64)v20);
      }
      else
      {
        v13 = 0;
      }
      v11 = RtlImageNtHeader(v10);
      if ( v11 )
      {
        *((_DWORD *)v6 + 4) = v11->FileHeader.PointerToSymbolTable;
        *((_DWORD *)v6 + 5) = v11->FileHeader.NumberOfSymbols;
      }
      if ( !a1 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
          Teb = 0LL;
        else
          Teb = (wchar_t *)CurrentThread->Teb;
        if ( Teb )
        {
          RtlStringCbCopyW(Teb + 2356, 0x20AuLL, *(NTSTRSAFE_PCWSTR *)(v16 + 40));
          *((_QWORD *)Teb + 5) = Teb + 2356;
          v6[3] = Teb + 20;
          v3 = (_DWORD *)a3;
        }
      }
      if ( v13 )
        KiUnstackDetachProcess((__int64)v20, 0LL);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 1600;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v16 + 8);
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenFile(v6, 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) < 0 )
        *v6 = 0LL;
      *v3 = 5242920;
      v3[1] = 8;
      v3[10] = 5;
      if ( a1 )
      {
        if ( (int)DbgkpQueueMessage(Process, a1, a2) < 0 && *v6 )
          ObCloseHandle(*v6, 0);
      }
      else
      {
        DbgkpSendApiMessage(Process);
        if ( *v6 )
          ObCloseHandle(*v6, 0);
        if ( Teb )
          *((_QWORD *)Teb + 5) = 0LL;
      }
    }
  }
}
