/*
 * XREFs of ?Create@CKernelTransport@@SAJPEAPEAV1@@Z @ 0x180063A8C
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x180060FBC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GCKernelTransport@@QEAAPEAXI@Z @ 0x18014554C (--_GCKernelTransport@@QEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CKernelTransport::Create(struct CKernelTransport **a1)
{
  struct CKernelTransport *v2; // rdi
  int v3; // ebx
  HANDLE EventW; // rax
  int Connection; // eax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned int v9; // ecx
  signed int LastError; // eax
  unsigned int v11; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct CKernelTransport *)WPF::ProcessHeapImpl::AllocClear(0x10uLL);
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v3 = 0;
  SetLastError(0);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)v2 + 1) = EventW;
  if ( EventW )
  {
    Connection = NtDCompositionCreateConnection(EventW, v2);
    if ( Connection >= 0 )
    {
LABEL_4:
      *a1 = v2;
      goto LABEL_5;
    }
    v3 = Connection | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Connection | 0x10000000, 0x54u);
  }
  else
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    if ( v3 >= 0 )
      v3 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v3, 0x4Fu);
  }
  if ( v3 >= 0 )
    goto LABEL_4;
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v3, 0x3Cu);
LABEL_5:
  if ( v3 < 0 )
    CKernelTransport::`scalar deleting destructor'(v2, v6);
  return (unsigned int)v3;
}
