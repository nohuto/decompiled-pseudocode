/*
 * XREFs of ??1SipcEndpoint@@MEAA@XZ @ 0x1800A14BC
 * Callers:
 *     ??_GSipcEndpoint@@MEAAPEAXI@Z @ 0x1800A1480 (--_GSipcEndpoint@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SipcEndpoint::~SipcEndpoint(SipcEndpoint *this)
{
  *((_QWORD *)this + 2) = &SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `ISIPCEndpoint'};
  *((_QWORD *)this + 3) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
  *((_QWORD *)this + 4) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
  *((_QWORD *)this + 5) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
  *((_QWORD *)this + 6) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
  *((_QWORD *)this + 7) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
  *((_QWORD *)this + 8) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
  *((_QWORD *)this + 9) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
  *((_QWORD *)this + 10) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
  *((_QWORD *)this + 11) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
  *(_QWORD *)this = &SharedObjectBase::`vftable';
  if ( *((_QWORD *)this + 1) )
    __fastfail(0xEu);
}
