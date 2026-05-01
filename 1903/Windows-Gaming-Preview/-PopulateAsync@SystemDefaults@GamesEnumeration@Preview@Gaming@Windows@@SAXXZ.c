/*
 * XREFs of ?PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x18003BF48
 * Callers:
 *     ?RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18001A340 (-RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJ.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800115A0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$_Setp@VSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@?$shared_ptr@VSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@AEAAXPEAVSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@U?$integral_constant@_N$0A@@1@@Z @ 0x18003BCA4 (--$_Setp@VSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@-$shared_ptr@VSystemDefaults@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004317C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateAsync(void)
{
  _DWORD *v0; // rbx
  HANDLE EventW; // rdi
  HANDLE v2; // rcx
  volatile signed __int32 *v3; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  struct _TP_WORK *v5; // rbx
  signed int LastError; // eax
  unsigned __int64 v7; // rcx
  __int128 v8; // [rsp+28h] [rbp-20h] BYREF

  EnterCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock);
  if ( Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance )
  {
LABEL_15:
    if ( !Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_populateThread )
    {
      ThreadpoolWork = CreateThreadpoolWork(
                         Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateValuesThreadProc,
                         0LL,
                         0LL);
      v5 = ThreadpoolWork;
      if ( ThreadpoolWork )
      {
        SubmitThreadpoolWork(ThreadpoolWork);
        Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_populateThread = v5;
      }
    }
    goto LABEL_18;
  }
  v0 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v0 )
  {
    *(_QWORD *)v0 = &Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::`vftable';
    v0[2] = 0;
    *((_QWORD *)v0 + 2) = 0LL;
    v0[6] = 0;
    *((_BYTE *)v0 + 28) = 0;
    *((_QWORD *)v0 + 4) = 0LL;
    *((_QWORD *)v0 + 5) = 0LL;
  }
  else
  {
    v0 = 0LL;
  }
  if ( v0 )
  {
    EventW = CreateEventW(0LL, 1, 0, L"DefaultsReady");
    v2 = hEvent;
    if ( EventW != hEvent )
    {
      if ( hEvent && !CloseHandle(hEvent) )
      {
        LastError = GetLastError();
        v7 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v7 = (unsigned int)LastError;
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v7);
        JUMPOUT(0x18003C0F4LL);
      }
      v2 = EventW;
      hEvent = EventW;
    }
    if ( v2 )
    {
      v8 = 0LL;
      std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::SystemDefaults>::_Setp<Windows::Gaming::Preview::GamesEnumeration::SystemDefaults>(
        &v8,
        (void (__fastcall ***)(_QWORD, __int64))v0);
      v3 = (volatile signed __int32 *)*(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance + 1);
      *(_OWORD *)&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance = v8;
      if ( v3 )
      {
        if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
          if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
        }
      }
    }
    goto LABEL_15;
  }
LABEL_18:
  LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock);
}
