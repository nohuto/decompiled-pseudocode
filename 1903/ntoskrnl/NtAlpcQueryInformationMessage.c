/*
 * XREFs of NtAlpcQueryInformationMessage @ 0x14063FC20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     AlpcpLookupMessage @ 0x1405E3660 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     AlpcpCaptureIdMessage @ 0x14063FDFC (AlpcpCaptureIdMessage.c)
 *     AlpcpQueryHandleInformationMessage @ 0x14063FE7C (AlpcpQueryHandleInformationMessage.c)
 *     AlpcpQuerySidMessage @ 0x140640214 (AlpcpQuerySidMessage.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x140885344 (AlpcpQueryTokenModifiedIdMessage.c)
 */

NTSTATUS __cdecl NtAlpcQueryInformationMessage(
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ALPC_MESSAGE_INFORMATION_CLASS MessageInformationClass,
        PVOID MessageInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // bl
  PULONG v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // r14d
  NTSTATUS v14; // ebx
  __int64 v15; // r9
  PVOID v16; // r15
  ULONG_PTR v17; // r14
  __int32 v18; // edi
  __int32 v19; // edi
  NTSTATUS TokenModifiedIdMessage; // eax
  unsigned int v22; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+34h] [rbp-34h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AlpcpCaptureIdMessage(PortMessage, &v22, &v23);
  if ( PreviousMode )
  {
    ProbeForWrite(MessageInformation, Length, 4u);
    v11 = ReturnLength;
    if ( ReturnLength )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v12 = (__int64)ReturnLength;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  else
  {
    v11 = ReturnLength;
  }
  v13 = v22;
  if ( !v22 )
  {
    v14 = -1073741811;
    goto LABEL_19;
  }
  v14 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v16 = Object;
    v14 = AlpcpLookupMessage((__int64)Object, v13, v23, v15, BugCheckParameter2);
    if ( v14 < 0 )
    {
LABEL_18:
      ObfDereferenceObject(v16);
      goto LABEL_19;
    }
    v17 = BugCheckParameter2[0];
    if ( !*(_QWORD *)(BugCheckParameter2[0] + 24) )
    {
      v14 = -1073740029;
      goto LABEL_17;
    }
    if ( MessageInformationClass )
    {
      v18 = MessageInformationClass - 1;
      if ( !v18 )
      {
        TokenModifiedIdMessage = AlpcpQueryTokenModifiedIdMessage(
                                   (_DWORD)v16,
                                   BugCheckParameter2[0],
                                   (_DWORD)MessageInformation,
                                   Length,
                                   (__int64)v11);
        goto LABEL_16;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          TokenModifiedIdMessage = AlpcpQueryHandleInformationMessage(
                                     (_DWORD)v16,
                                     BugCheckParameter2[0],
                                     (_DWORD)MessageInformation,
                                     Length,
                                     (__int64)v11);
LABEL_16:
          v14 = TokenModifiedIdMessage;
LABEL_17:
          AlpcpUnlockMessage(v17);
          goto LABEL_18;
        }
      }
      else if ( !MessageInformation && !Length && !v11 )
      {
        v14 = (*(_DWORD *)(BugCheckParameter2[0] + 40) & 7) != 4 ? 0x103 : 0;
        goto LABEL_17;
      }
      v14 = -1073741811;
      goto LABEL_17;
    }
    TokenModifiedIdMessage = AlpcpQuerySidMessage(
                               (_DWORD)v16,
                               BugCheckParameter2[0],
                               (_DWORD)MessageInformation,
                               Length,
                               (__int64)v11);
    goto LABEL_16;
  }
LABEL_19:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v14;
}
