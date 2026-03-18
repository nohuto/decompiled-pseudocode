/*
 * XREFs of DbgkSendSystemDllMessages @ 0x1408473EC
 * Callers:
 *     DbgkCreateThread @ 0x1405E765C (DbgkCreateThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140847D84 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     RtlStringCbCopyW @ 0x1400EDC5C (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PsQuerySystemDllInfo @ 0x1405C9E2C (PsQuerySystemDllInfo.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     PsWow64GetProcessNtdllType @ 0x14067FF90 (PsWow64GetProcessNtdllType.c)
 *     DbgkpQueueMessage @ 0x1408483C8 (DbgkpQueueMessage.c)
 *     DbgkpSendApiMessage @ 0x140849CAC (DbgkpSendApiMessage.c)
 */

int __fastcall DbgkSendSystemDllMessages(_QWORD *a1, struct _KEVENT *a2, __int64 a3)
{
  _QWORD *v4; // r13
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r15
  HANDLE *v7; // rsi
  int i; // r14d
  struct _KTHREAD *v9; // rbx
  void *SListFaultAddress; // rbx
  PIMAGE_NT_HEADERS v11; // rax
  struct _KTHREAD *v12; // rcx
  char v14; // [rsp+30h] [rbp-108h]
  wchar_t *Teb; // [rsp+40h] [rbp-F8h]
  struct _KTHREAD *v17; // [rsp+50h] [rbp-E8h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-A0h] BYREF
  _BYTE v21[48]; // [rsp+C8h] [rbp-70h] BYREF

  v4 = a1;
  memset(v21, 0, sizeof(v21));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  LODWORD(CurrentThread) = (unsigned int)memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( v4 )
  {
    Process = (_KPROCESS *)v4[68];
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
  }
  v7 = (HANDLE *)(a3 + 48);
  for ( i = 0; i < 6; ++i )
  {
    CurrentThread = (struct _KTHREAD *)PsQuerySystemDllInfo(i);
    v9 = CurrentThread;
    v17 = CurrentThread;
    if ( CurrentThread )
    {
      if ( i <= 0
        || *(_WORD *)&CurrentThread->Header.Size
        && Process[1].ActiveProcessors.Bitmap[6]
        && (LODWORD(CurrentThread) = PsWow64GetProcessNtdllType((__int64)Process), i == (_DWORD)CurrentThread) )
      {
        memset((void *)(a3 + 48), 0, 0x20uLL);
        Teb = 0LL;
        SListFaultAddress = v9->SListFaultAddress;
        *(_QWORD *)(a3 + 56) = SListFaultAddress;
        if ( v4 && i )
        {
          v14 = 1;
          KiStackAttachProcess(Process, 0, (__int64)v21);
        }
        else
        {
          v14 = 0;
        }
        v11 = RtlImageNtHeader(SListFaultAddress);
        if ( v11 )
        {
          *(_DWORD *)(a3 + 64) = v11->FileHeader.PointerToSymbolTable;
          *(_DWORD *)(a3 + 68) = v11->FileHeader.NumberOfSymbols;
        }
        if ( !v4 )
        {
          v12 = KeGetCurrentThread();
          if ( (v12->MiscFlags & 0x400) != 0 || v12->ApcStateIndex == 1 )
            Teb = 0LL;
          else
            Teb = (wchar_t *)v12->Teb;
          if ( Teb )
          {
            RtlStringCbCopyW(Teb + 2356, 0x20AuLL, (NTSTRSAFE_PCWSTR)v17->InitialStack);
            *((_QWORD *)Teb + 5) = Teb + 2356;
            *(_QWORD *)(a3 + 72) = Teb + 20;
          }
          v4 = a1;
        }
        if ( v14 )
          KiUnstackDetachProcess((struct _KTHREAD *)v21, 0);
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 1600;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17->Header.WaitListHead;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenFile((PHANDLE)(a3 + 48), 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) < 0 )
          *v7 = 0LL;
        *(_DWORD *)a3 = 5242920;
        *(_DWORD *)(a3 + 4) = 8;
        *(_DWORD *)(a3 + 40) = 5;
        if ( v4 )
        {
          LODWORD(CurrentThread) = DbgkpQueueMessage(Process, v4, a2);
          if ( (int)CurrentThread < 0 && *v7 )
            LODWORD(CurrentThread) = ObCloseHandle(*v7, 0);
        }
        else
        {
          LODWORD(CurrentThread) = DbgkpSendApiMessage((ULONG_PTR)Process);
          if ( *v7 )
            LODWORD(CurrentThread) = ObCloseHandle(*v7, 0);
          if ( Teb )
            *((_QWORD *)Teb + 5) = 0LL;
          v4 = a1;
        }
      }
    }
  }
  return (int)CurrentThread;
}
