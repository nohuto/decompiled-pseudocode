/*
 * XREFs of ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@IPEAPEAV1@@Z @ 0x1800E4C38
 * Callers:
 *     ?CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800E4B78 (-CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x1800E4CD4 (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ??0CChannel@@AEAA@PEAVCInternalMilCmdConnection@@I@Z @ 0x1800E4D34 (--0CChannel@@AEAA@PEAVCInternalMilCmdConnection@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::Create(struct CInternalMilCmdConnection *a1, unsigned int a2, struct CChannel **a3)
{
  CChannel *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  CChannel *v9; // rdi
  HANDLE EventW; // rax
  int v11; // ebx
  signed int LastError; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  CChannel *v17; // [rsp+58h] [rbp+20h] BYREF

  v6 = (CChannel *)DefaultHeap::AllocClear(0xD8uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v7);
  v17 = CChannel::CChannel(v6, a1, a2);
  v9 = v17;
  if ( v17 )
  {
    SetLastError(0);
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)v9 + 10) = EventW;
    if ( EventW )
    {
      v11 = 0;
      *a3 = v9;
      _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
    }
    else
    {
      LastError = GetLastError();
      v11 = LastError;
      if ( LastError > 0 )
        v11 = (unsigned __int16)LastError | 0x80070000;
      if ( v11 >= 0 )
        v11 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v11, 0x41u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v11, 0x189u, 0LL);
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x8007000E, 0x184u, 0LL);
  }
  ReleaseInterface<CChannel>(&v17);
  return (unsigned int)v11;
}
