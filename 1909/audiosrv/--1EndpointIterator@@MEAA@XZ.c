/*
 * XREFs of ??1EndpointIterator@@MEAA@XZ @ 0x180146438
 * Callers:
 *     ??_GEndpointIterator@@MEAAPEAXI@Z @ 0x1801464E0 (--_GEndpointIterator@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

void __fastcall EndpointIterator::~EndpointIterator(EndpointIterator *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &EndpointIterator::`vftable'{for `IEndpointIterator'};
  *((_QWORD *)this + 1) = &EndpointIterator::`vftable'{for `CUnknown'};
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 72));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 16LL))(*((_QWORD *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
