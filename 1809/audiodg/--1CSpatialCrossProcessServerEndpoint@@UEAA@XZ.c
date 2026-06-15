/*
 * XREFs of ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x140059C78
 * Callers:
 *     ??1?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x140059810 (--1-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ @ 0x1400598AC (--1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x1400599A4 (--1-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140059F20 (--_G-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCSpatialCrossProcessServerEndpoint@@UEAAPEAXI@Z @ 0x14005A100 (--_GCSpatialCrossProcessServerEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140015C94 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x140031A24 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

void __fastcall CSpatialCrossProcessServerEndpoint::~CSpatialCrossProcessServerEndpoint(
        CSpatialCrossProcessServerEndpoint *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  char *v6; // rcx
  char *v7; // rcx

  *(_QWORD *)this = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 114) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioCrossProcessServerEndpoint'};
  *((_QWORD *)this + 115) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessServerEndpoint'};
  if ( *((_QWORD *)this + 121) )
  {
    SetEvent(*((HANDLE *)this + 118));
    WaitForSingleObject(*((HANDLE *)this + 121), 0xFFFFFFFF);
    CloseHandle(*((HANDLE *)this + 121));
    *((_QWORD *)this + 121) = 0LL;
  }
  v2 = (void *)*((_QWORD *)this + 135);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 135) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 129);
  if ( v3 )
  {
    LocalFree(v3);
    *((_QWORD *)this + 129) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 126);
  if ( v4 )
  {
    LocalFree(v4);
    *((_QWORD *)this + 126) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 12);
  if ( v5 )
  {
    AERTDestroyZoneHeap(v5);
    *((_QWORD *)this + 12) = 0LL;
  }
  v6 = (char *)*((_QWORD *)this + 122);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v6);
    *((_QWORD *)this + 122) = 0LL;
  }
  v7 = (char *)*((_QWORD *)this + 123);
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v7);
    *((_QWORD *)this + 123) = 0LL;
  }
  if ( *((_QWORD *)this + 119) )
    ATL::CHandle::Close((void **)this + 119);
  if ( *((_QWORD *)this + 118) )
    ATL::CHandle::Close((void **)this + 118);
  if ( *((_QWORD *)this + 117) )
    ATL::CHandle::Close((void **)this + 117);
  if ( *((_QWORD *)this + 116) )
    ATL::CHandle::Close((void **)this + 116);
  CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(this);
}
