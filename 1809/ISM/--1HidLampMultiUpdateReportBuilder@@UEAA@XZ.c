/*
 * XREFs of ??1HidLampMultiUpdateReportBuilder@@UEAA@XZ @ 0x18007DD8C
 * Callers:
 *     ??_EHidLampMultiUpdateReportBuilder@@UEAAPEAXI@Z @ 0x18007DD40 (--_EHidLampMultiUpdateReportBuilder@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HidLampMultiUpdateReportBuilder::~HidLampMultiUpdateReportBuilder(
        HidLampMultiUpdateReportBuilder *this,
        const struct std::nothrow_t *a2)
{
  volatile signed __int32 *v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  *(_QWORD *)this = &HidLampMultiUpdateReportBuilder::`vftable';
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 9);
  if ( v3 )
  {
    *((_QWORD *)this + 9) = 0LL;
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      *((_DWORD *)v3 + 2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 32LL))(v3);
      *((_DWORD *)v3 + 2) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
    }
  }
  v4 = (void *)*((_QWORD *)this + 8);
  if ( v4 )
    operator delete(v4, a2);
  v5 = (void *)*((_QWORD *)this + 7);
  if ( v5 )
    operator delete(v5, a2);
  v6 = (void *)*((_QWORD *)this + 6);
  if ( v6 )
    operator delete(v6, a2);
  v7 = (void *)*((_QWORD *)this + 5);
  if ( v7 )
    operator delete(v7, a2);
  v8 = (void *)*((_QWORD *)this + 4);
  if ( v8 )
    operator delete(v8, a2);
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
