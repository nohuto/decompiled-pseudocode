/*
 * XREFs of ??0CDuckingManager@@AEAA@XZ @ 0x18000BF5C
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x180008D5C (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x180008164 (WPP_SF_.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180010974 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

CDuckingManager *__fastcall CDuckingManager::CDuckingManager(CDuckingManager *this)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CDuckingManager::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 2) = &CDuckingManager::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 3) = &CDuckingManager::`vftable'{for `IAudioDuckingManager'};
  ATL::CCriticalSection::CCriticalSection((CDuckingManager *)((char *)this + 32));
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  ATL::CCriticalSection::CCriticalSection((CDuckingManager *)((char *)this + 104));
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  ATL::CCriticalSection::CCriticalSection((CDuckingManager *)((char *)this + 208));
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 72) = 10;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *(_QWORD *)((char *)this + 308) = 2LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids);
  }
  return this;
}
