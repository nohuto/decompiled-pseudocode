/*
 * XREFs of ??_GCComposeTop@@QEAAPEAXI@Z @ 0x1801595D4
 * Callers:
 *     ??$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z @ 0x180077844 (--$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

CComposeTop *__fastcall CComposeTop::`scalar deleting destructor'(CComposeTop *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 1);
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 19);
  if ( v3 )
    (**v3)(v3, 1LL);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
