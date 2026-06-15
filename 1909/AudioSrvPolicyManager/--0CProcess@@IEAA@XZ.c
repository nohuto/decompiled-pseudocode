/*
 * XREFs of ??0CProcess@@IEAA@XZ @ 0x18001144C
 * Callers:
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHHH_NHHPEAPEAV1@@Z @ 0x18001123C (-CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHHH_NHHPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000D674 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEAAXXZ @ 0x18001666C (-UpdateRehashThresholds@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$.c)
 */

// Hidden C++ exception states: #wind=19
CProcess *__fastcall CProcess::CProcess(CProcess *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // rcx
  unsigned int v4; // eax
  _DWORD *v5; // rcx

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CProcess::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 2) = &CProcess::`vftable'{for `IAudioProcess'};
  *((_QWORD *)this + 3) = &CProcess::`vftable'{for `IAudioProcessInternal'};
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 10;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 144));
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 82) = 0;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 86) = 4;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 352));
  *((_QWORD *)this + 49) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)this + 10);
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 128) = 0;
  *(_QWORD *)((char *)this + 516) = 4LL;
  *((_DWORD *)this + 131) = 1;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *(GUID *)((char *)this + 552) = GUID_00000000_0000_0000_0000_000000000000;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 568));
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 624));
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_DWORD *)this + 170) = 17;
  *((_QWORD *)this + 87) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 88) = 0LL;
  *((_DWORD *)this + 178) = 0;
  *((_DWORD *)this + 179) = 10;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_DWORD *)this + 171) = 1061158912;
  *((_DWORD *)this + 172) = 1048576000;
  *((_DWORD *)this + 173) = 1074790400;
  ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::UpdateRehashThresholds((char *)this + 664);
  *((_QWORD *)this + 92) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 744), 0, 0);
  *((_DWORD *)this + 196) = 0;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 101) = 0LL;
  *((_WORD *)this + 408) = 0;
  *((_BYTE *)this + 818) = 0;
  v2 = 0;
  v3 = (_DWORD *)((char *)this + 248);
  do
  {
    *v3 = -2147023728;
    ++v2;
    ++v3;
  }
  while ( v2 < 2 );
  v4 = 0;
  v5 = (_DWORD *)((char *)this + 528);
  do
  {
    *v5 = 0;
    ++v4;
    ++v5;
  }
  while ( v4 < 2 );
  return this;
}
