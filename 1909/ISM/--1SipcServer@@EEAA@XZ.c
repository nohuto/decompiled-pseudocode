/*
 * XREFs of ??1SipcServer@@EEAA@XZ @ 0x1800D41AC
 * Callers:
 *     ??_ESipcServer@@EEAAPEAXI@Z @ 0x1800D44C0 (--_ESipcServer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1AggregateWaitHandle@@QEAA@XZ @ 0x1800D3FC0 (--1AggregateWaitHandle@@QEAA@XZ.c)
 *     ?Clear@?$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ @ 0x1800D4B50 (-Clear@-$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ.c)
 */

void __fastcall SipcServer::~SipcServer(SipcServer *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &SipcServer::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)this + 2) = &SipcServer::`vftable'{for `ISIPCServer'};
  *((_QWORD *)this + 3) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 4) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 5) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 6) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 7) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 8) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 9) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 10) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 11) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 12) = &SipcServer::`vftable';
  NtList<SipcServer::EndpointListEntry>::Clear((char *)this + 192);
  AggregateWaitHandle::~AggregateWaitHandle((HANDLE *)this + 18);
  *((_QWORD *)this + 12) = &SipcEndpointOwner::`vftable';
  v2 = (void *)*((_QWORD *)this + 13);
  if ( v2 )
    LocalFree(v2);
  SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::~SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>(this);
}
