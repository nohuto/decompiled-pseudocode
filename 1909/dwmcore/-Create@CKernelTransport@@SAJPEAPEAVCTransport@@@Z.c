/*
 * XREFs of ?Create@CKernelTransport@@SAJPEAPEAVCTransport@@@Z @ 0x1800E6F74
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DECFC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CKernelTransport::Create(struct CTransport **a1)
{
  __int64 v2; // rcx
  struct CTransport *v3; // rdi
  int v4; // ebx
  HANDLE EventW; // rax
  int Connection; // eax
  __int64 v7; // rcx
  signed int LastError; // eax
  __int64 v10; // rcx

  v3 = (struct CTransport *)DefaultHeap::AllocClear(0x18uLL);
  if ( v3 )
    *(_QWORD *)v3 = &CKernelTransport::`vftable';
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = 0;
    SetLastError(0);
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)v3 + 2) = EventW;
    if ( EventW )
    {
      Connection = NtDCompositionCreateConnection(EventW, (char *)v3 + 8);
      if ( Connection < 0 )
      {
        v4 = Connection | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Connection | 0x10000000, 0x58u, 0LL);
      }
    }
    else
    {
      LastError = GetLastError();
      v4 = LastError;
      if ( LastError > 0 )
        v4 = (unsigned __int16)LastError | 0x80070000;
      if ( v4 >= 0 )
        v4 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v4, 0x53u, 0LL);
    }
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v4, 0x40u, 0LL);
    else
      *a1 = v3;
    if ( v4 < 0 )
      (**(void (__fastcall ***)(struct CTransport *, __int64))v3)(v3, 1LL);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, 0x8007000E, 0x3Fu, 0LL);
  }
  return (unsigned int)v4;
}
