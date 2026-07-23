/*
 * XREFs of sub_18004B7B4 @ 0x18004B7B4
 * Callers:
 *     CsrClientConnectToServer @ 0x18004BB80 (CsrClientConnectToServer.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwOpenSection @ 0x18009CDC0 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 *     ZwConnectPort @ 0x18009DA90 (ZwConnectPort.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_18004B7B4(_WORD *Src, int a2, __int64 *a3, int a4, _DWORD *a5)
{
  __int64 v9; // rax
  size_t v10; // rsi
  SIZE_T v11; // r8
  WCHAR *Heap; // rax
  WCHAR *v13; // rbx
  WCHAR *v14; // rbx
  NTSTATUS v15; // edi
  NTSTATUS v16; // ebx
  HANDLE v17; // rcx
  struct _PEB *v18; // rcx
  HANDLE v20; // rcx
  HANDLE SectionHandle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ConnectionInformationLength; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-88h] BYREF
  ULONG MaxMessageLength; // [rsp+80h] [rbp-80h] BYREF
  _PORT_VIEW ClientView; // [rsp+88h] [rbp-78h] BYREF
  _REMOTE_PORT_VIEW ServerView; // [rsp+B8h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD ConnectionInformation[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  _QWORD Parameters[12]; // [rsp+130h] [rbp+30h] BYREF
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+190h] [rbp+90h] BYREF

  if ( !Src )
    return 3221225485LL;
  v9 = -1LL;
  do
    ++v9;
  while ( Src[v9] );
  v10 = v9;
  v11 = 2 * v9 + 28;
  if ( v11 > 0xFFFF )
    return 3221225734LL;
  PortName.MaximumLength = 2 * v9 + 28;
  Heap = (WCHAR *)RtlAllocateHeap(qword_180165B60, Flags, v11);
  PortName.Buffer = Heap;
  v13 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memmove(Heap, Src, v10 * 2);
  v13[v10] = 92;
  v14 = &v13[v10 + 1];
  *(_OWORD *)v14 = xmmword_18011CC88;
  *((_QWORD *)v14 + 2) = 0x6F006900740063LL;
  v14[12] = 110;
  ObjectAttributes.Length = 48;
  PortName.Length = (_WORD)v14 - LOWORD(PortName.Buffer) + 26;
  ObjectAttributes.ObjectName = &PortName;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v15 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
  if ( v15 < 0 )
  {
    RtlFreeHeap(qword_180165B60, 0, PortName.Buffer);
    return (unsigned int)v15;
  }
  *(_QWORD *)v14 = 0x50006900700041LL;
  *((_DWORD *)v14 + 2) = 7471215;
  v14[6] = 116;
  PortName.Length = (_WORD)v14 - LOWORD(PortName.Buffer) + 14;
  SecurityQos.ImpersonationLevel = SecurityImpersonation;
  *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
  MaximumSize.QuadPart = 0x10000LL;
  v16 = ZwCreateSection(&Handle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v16 < 0 )
    goto LABEL_23;
  ClientView.SectionHandle = Handle;
  ClientView.ViewSize = MaximumSize.LowPart;
  ClientView.Length = 48;
  ClientView.SectionOffset = 0;
  ServerView.Length = 24;
  ServerView.ViewSize = 0LL;
  ServerView.ViewBase = 0LL;
  ConnectionInformationLength = 48;
  *(_OWORD *)&ClientView.ViewBase = 0LL;
  if ( a4 != 8 )
    goto LABEL_19;
  if ( a2 == 1 )
  {
    v33 = *a3;
    v32 = 1LL;
  }
  else
  {
LABEL_19:
    HIDWORD(v32) = -1073741811;
  }
  v16 = ZwConnectPort(
          &PortHandle,
          &PortName,
          &SecurityQos,
          &ClientView,
          &ServerView,
          &MaxMessageLength,
          ConnectionInformation,
          &ConnectionInformationLength);
  ZwClose(Handle);
  if ( v16 < 0 )
  {
LABEL_23:
    v20 = SectionHandle;
  }
  else
  {
    v17 = SectionHandle;
    *a5 = HIDWORD(v32);
    BaseAddress = 0LL;
    ViewSize = 0LL;
    v16 = ZwMapViewOfSection(
            v17,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            0LL,
            0LL,
            &ViewSize,
            ViewUnmap,
            0x500000u,
            2u);
    ZwClose(SectionHandle);
    SectionHandle = 0LL;
    if ( v16 >= 0 )
    {
      v18 = NtCurrentPeb();
      v18->CsrServerReadOnlySharedMemoryBase = ConnectionInformation[0];
      v18->ReadOnlySharedMemoryBase = BaseAddress;
      v18->ReadOnlyStaticServerData = (PVOID *)((char *)BaseAddress + ConnectionInformation[1]
                                                                    - ConnectionInformation[0]);
      qword_180165B38 = ViewSize;
      qword_180165B30 = ConnectionInformation[2];
      qword_180165B40 = (char *)ClientView.ViewRemoteBase - (char *)ClientView.ViewBase;
      memset(Parameters, 0, sizeof(Parameters));
      Parameters[9] = WinSqmStartSqmOptinListener;
      LODWORD(Parameters[0]) = 96;
      Parameters[7] = 4096LL;
      Parameters[8] = ClientView.ViewSize;
      qword_180165B50 = RtlCreateHeap(0x8000u, ClientView.ViewBase, ClientView.ViewSize, 1uLL, 0LL, Parameters);
      if ( qword_180165B50 )
      {
        dword_180165B58 = 0;
        return 0LL;
      }
      v16 = -1073741801;
    }
    ZwClose(PortHandle);
    v20 = SectionHandle;
    PortHandle = 0LL;
    if ( !SectionHandle )
      goto LABEL_25;
  }
  ZwClose(v20);
LABEL_25:
  RtlFreeHeap(qword_180165B60, 0, PortName.Buffer);
  return (unsigned int)v16;
}
