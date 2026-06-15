/*
 * XREFs of ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1801077D0
 * Callers:
 *     ??_ECEndpointCharacteristics@@MEAAPEAXI@Z @ 0x180108830 (--_ECEndpointCharacteristics@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x18004D3D0 (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004FC98 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180060770 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x18010878C (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 *     ??1CSpatialProperties@@QEAA@XZ @ 0x180120ED4 (--1CSpatialProperties@@QEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::~CEndpointCharacteristics(CEndpointCharacteristics *this)
{
  int i; // edi
  __int64 v3; // rcx
  unsigned int v4; // edx
  CConnectorProcessingModeCharacteristics *v5; // rcx
  int j; // edi
  __int64 v7; // rcx
  unsigned int v8; // edx
  CConnectorProcessingModeCharacteristics *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  void *v14; // rcx
  __int64 v15; // rcx

  *(_QWORD *)this = &CEndpointCharacteristics::`vftable';
  if ( *((_QWORD *)this + 24) )
  {
    for ( i = 0; ; ++i )
    {
      v3 = *((_QWORD *)this + 24);
      if ( i >= *(_DWORD *)(v3 + 8) )
        break;
      v5 = *(CConnectorProcessingModeCharacteristics **)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                                                          v3,
                                                          i);
      if ( v5 )
        CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v5, v4);
    }
  }
  if ( *((_QWORD *)this + 25) )
  {
    for ( j = 0; ; ++j )
    {
      v7 = *((_QWORD *)this + 25);
      if ( j >= *(_DWORD *)(v7 + 8) )
        break;
      v9 = *(CConnectorProcessingModeCharacteristics **)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                                                          v7,
                                                          j);
      if ( v9 )
        CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v9, v8);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 8544));
  CSpatialProperties::~CSpatialProperties((CEndpointCharacteristics *)((char *)this + 1624));
  `eh vector destructor iterator'(
    (char *)this + 1560,
    16LL,
    4LL,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  `eh vector destructor iterator'(
    (char *)this + 1496,
    16LL,
    4LL,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  `eh vector destructor iterator'(
    (char *)this + 1400,
    24LL,
    4LL,
    (void (*)(void *))CAudioSignalProcessingModeMap::~CAudioSignalProcessingModeMap);
  `eh vector destructor iterator'(
    (char *)this + 1000,
    96LL,
    4LL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
  `eh vector destructor iterator'(
    (char *)this + 616,
    96LL,
    4LL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
  `eh vector destructor iterator'(
    (char *)this + 232,
    96LL,
    4LL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
  v10 = *((_QWORD *)this + 25);
  if ( v10 )
  {
    if ( *(_QWORD *)v10 )
    {
      free(*(void **)v10);
      *(_QWORD *)v10 = 0LL;
    }
    *(_DWORD *)(v10 + 8) = 0;
    *(_DWORD *)(v10 + 12) = 0;
    operator delete((void *)v10, (const struct std::nothrow_t *)0x10);
  }
  *((_QWORD *)this + 25) = 0LL;
  v11 = *((_QWORD *)this + 24);
  if ( v11 )
  {
    if ( *(_QWORD *)v11 )
    {
      free(*(void **)v11);
      *(_QWORD *)v11 = 0LL;
    }
    *(_DWORD *)(v11 + 8) = 0;
    *(_DWORD *)(v11 + 12) = 0;
    operator delete((void *)v11, (const struct std::nothrow_t *)0x10);
  }
  *((_QWORD *)this + 24) = 0LL;
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)this + 136);
  `eh vector destructor iterator'(
    (char *)this + 72,
    16LL,
    4LL,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  v12 = *((_QWORD *)this + 8);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *((_QWORD *)this + 5);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = (void *)*((_QWORD *)this + 3);
  if ( v14 )
    CoTaskMemFree(v14);
  v15 = *((_QWORD *)this + 2);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  *((_DWORD *)this + 3) = -1073741823;
}
