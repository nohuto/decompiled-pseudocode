/*
 * XREFs of ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x140057D40
 * Callers:
 *     ??1?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x1400578B4 (--1-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ @ 0x140057950 (--1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x140057A48 (--1-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140057FC0 (--_G-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCSpatialCrossProcessServerEndpoint@@UEAAPEAXI@Z @ 0x1400581A0 (--_GCSpatialCrossProcessServerEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x14002A474 (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140040A60 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 */

void __fastcall CSpatialCrossProcessServerEndpoint::~CSpatialCrossProcessServerEndpoint(
        CSpatialCrossProcessServerEndpoint *this,
        int a2,
        int a3)
{
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  char *v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 115) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioCrossProcessServerEndpoint'};
  *((_QWORD *)this + 116) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessServerEndpoint'};
  if ( *((_QWORD *)this + 121) )
  {
    SetEvent(*((HANDLE *)this + 118));
    WaitForSingleObject(*((HANDLE *)this + 121), 0xFFFFFFFF);
    CloseHandle(*((HANDLE *)this + 121));
    *((_QWORD *)this + 121) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 131);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 131) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 15);
  if ( v5 )
  {
    AERTDestroyZoneHeap(v5, a2, a3);
    *((_QWORD *)this + 15) = 0LL;
  }
  *((_QWORD *)this + 124) = 0LL;
  v6 = *((_QWORD *)this + 123);
  *((_QWORD *)this + 123) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = (char *)*((_QWORD *)this + 125);
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v7);
    *((_QWORD *)this + 125) = 0LL;
  }
  v8 = *((_QWORD *)this + 123);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( *((_QWORD *)this + 119) )
    ATL::CHandle::Close((void **)this + 119);
  if ( *((_QWORD *)this + 118) )
    ATL::CHandle::Close((void **)this + 118);
  if ( *((_QWORD *)this + 117) )
    ATL::CHandle::Close((void **)this + 117);
  CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(this);
}
