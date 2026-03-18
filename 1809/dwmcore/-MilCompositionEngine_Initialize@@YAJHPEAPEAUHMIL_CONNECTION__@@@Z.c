/*
 * XREFs of ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x18007A330
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?StartCompositionThread@CConnection@@AEAAJH@Z @ 0x18007A404 (-StartCompositionThread@CConnection@@AEAAJH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GCConnection@@EEAAPEAXI@Z @ 0x1801454A0 (--_GCConnection@@EEAAPEAXI@Z.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x180145698 (-Disconnect@CConnection@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall MilCompositionEngine_Initialize(unsigned int nPriority, struct HMIL_CONNECTION__ **a2)
{
  struct HMIL_CONNECTION__ *v2; // rbp
  char *v5; // rax
  char *v6; // rdi
  int started; // eax
  unsigned int v8; // ecx
  int v9; // ebx
  unsigned int v11; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  if ( a2 )
  {
    v5 = (char *)WPF::ProcessHeapImpl::AllocClear(0xB8uLL);
    v6 = v5;
    if ( !v5 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    *((_DWORD *)v5 + 2) = 0;
    *(_QWORD *)v5 = &CConnection::`vftable';
    *((_DWORD *)v5 + 7) = 0;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_QWORD *)v5 + 2) = &CChannelTable::`vftable';
    *((_DWORD *)v5 + 8) = 1;
    *((_DWORD *)v5 + 6) = 24;
    InitializeCriticalSection((LPCRITICAL_SECTION)(v5 + 56));
    *((_DWORD *)v6 + 12) = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(v6 + 112));
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
    started = CConnection::StartCompositionThread((CConnection *)v6, nPriority);
    v9 = started;
    if ( started < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, started, 0x5Fu);
    else
      _InterlockedIncrement(&dword_180308278);
    if ( v9 < 0 )
    {
      CConnection::Disconnect((CConnection *)v6);
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v9, 0x21u);
      CConnection::`scalar deleting destructor'((CConnection *)v6, 1u);
    }
    else
    {
      v2 = (struct HMIL_CONNECTION__ *)v6;
    }
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802914A8, 1u, v9, 0x2Du);
    else
      *a2 = v2;
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(nPriority, &dword_1802914A8, 1u, -2147024809, 0x2Au);
  }
  return (unsigned int)v9;
}
