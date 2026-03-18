/*
 * XREFs of ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x180077FF8
 * Callers:
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x180077F38 (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x180078094 (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ??0CChannel@@AEAA@PEAVCConnection@@I@Z @ 0x1800780F4 (--0CChannel@@AEAA@PEAVCConnection@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::Create(struct CConnection *a1, unsigned int a2, struct CChannel **a3)
{
  CChannel *v6; // rax
  unsigned int v7; // ecx
  CChannel *v8; // rdi
  HANDLE EventW; // rax
  signed int v10; // ebx
  signed int LastError; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]
  CChannel *v16; // [rsp+58h] [rbp+20h] BYREF

  v6 = (CChannel *)WPF::ProcessHeapImpl::AllocClear(0xD8uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v16 = CChannel::CChannel(v6, a1, a2);
  v8 = v16;
  if ( v16 )
  {
    SetLastError(0);
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)v8 + 10) = EventW;
    if ( EventW )
    {
      v10 = 0;
      *a3 = v8;
      _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
    }
    else
    {
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
      if ( v10 >= 0 )
        v10 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v10, 0x41u);
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v10, 0x188u);
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x183u);
  }
  ReleaseInterface<CChannel>(&v16);
  return (unsigned int)v10;
}
