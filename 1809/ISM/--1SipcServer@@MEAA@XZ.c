/*
 * XREFs of ??1SipcServer@@MEAA@XZ @ 0x1800A1A1C
 * Callers:
 *     ??_ESipcServer@@MEAAPEAXI@Z @ 0x1800A19E0 (--_ESipcServer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1AggregateWaitHandle@@QEAA@XZ @ 0x18009F84C (--1AggregateWaitHandle@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall SipcServer::~SipcServer(SipcServer *this)
{
  char *v2; // rdi
  char *v3; // rax
  __int64 v4; // rcx

  *(_QWORD *)this = &SipcServer::`vftable'{for `SharedObjectBase'};
  v2 = (char *)this + 152;
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
  while ( 1 )
  {
    v3 = *(char **)v2;
    v4 = **(_QWORD **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || *(char **)(v4 + 8) != v3 )
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    if ( v3 == v2 )
      break;
    operator delete(v3, (const struct std::nothrow_t *)0x20);
    --*((_QWORD *)v2 + 2);
  }
  AggregateWaitHandle::~AggregateWaitHandle((HANDLE *)this + 13);
  *((_QWORD *)this + 2) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `ISIPCServer'};
  *((_QWORD *)this + 3) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 4) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 5) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 6) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 7) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 8) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 9) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 10) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 11) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)this = &SharedObjectBase::`vftable';
  if ( *((_QWORD *)this + 1) )
    __fastfail(0xEu);
}
