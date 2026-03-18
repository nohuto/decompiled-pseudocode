/*
 * XREFs of ??1CRemoteSuperWetSharedSection@@UEAA@XZ @ 0x1801C64B4
 * Callers:
 *     ??_ECRemoteSuperWetSharedSection@@UEAAPEAXI@Z @ 0x1801C65E0 (--_ECRemoteSuperWetSharedSection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800C1180 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??RVmMappedSectionDeleter@@QEAAXPEAE@Z @ 0x1801758E0 (--RVmMappedSectionDeleter@@QEAAXPEAE@Z.c)
 */

void __fastcall CRemoteSuperWetSharedSection::~CRemoteSuperWetSharedSection(CRemoteSuperWetSharedSection *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  void *v4; // rdx
  void *v5; // rcx
  __int64 v6; // rdi
  void *v7; // rdx
  void *v8; // rcx

  std::vector<unsigned char>::_Tidy((__int64 *)this + 7);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    v4 = *(void **)(v3 + 24);
    if ( v4 )
      VmMappedSectionDeleter::operator()(v2, v4);
    if ( (unsigned __int64)(*(_QWORD *)v3 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(*(HANDLE *)v3);
    operator delete((void *)v3);
  }
  v5 = (void *)*((_QWORD *)this + 4);
  if ( v5 )
    operator delete(v5);
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    v7 = *(void **)(v6 + 24);
    if ( v7 )
      VmMappedSectionDeleter::operator()((__int64)v5, v7);
    if ( (unsigned __int64)(*(_QWORD *)v6 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(*(HANDLE *)v6);
    operator delete((void *)v6);
  }
  v8 = (void *)*((_QWORD *)this + 2);
  if ( v8 )
    operator delete(v8);
}
