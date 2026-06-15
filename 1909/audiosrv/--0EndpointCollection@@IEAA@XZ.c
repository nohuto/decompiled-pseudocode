/*
 * XREFs of ??0EndpointCollection@@IEAA@XZ @ 0x1800577C4
 * Callers:
 *     ?CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z @ 0x1800576B8 (-CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z.c)
 * Callees:
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x180057AB0 (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
EndpointCollection *__fastcall EndpointCollection::EndpointCollection(EndpointCollection *this)
{
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &EndpointCollection::`vftable'{for `IEndpointCollection'};
  *((_QWORD *)this + 1) = &EndpointCollection::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 10;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((EndpointCollection *)((char *)this + 72));
  return this;
}
