/*
 * XREFs of ??0MPCRawInputProvider@@QEAA@XZ @ 0x1800583A8
 * Callers:
 *     ?Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800576E0 (-Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

MPCRawInputProvider *__fastcall MPCRawInputProvider::MPCRawInputProvider(MPCRawInputProvider *this)
{
  MPCRawInputProvider *result; // rax

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &MPCRawInputProvider::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  memset_0((char *)this + 24, 0, 0x3D8uLL);
  *((_DWORD *)this + 8) = 984;
  memset_0((char *)this + 1008, 0, 0x3D8uLL);
  *((_DWORD *)this + 254) = 984;
  *((_QWORD *)this + 249) = 0LL;
  *((_QWORD *)this + 250) = 0LL;
  *((_QWORD *)this + 251) = 0LL;
  *((_QWORD *)this + 252) = 0LL;
  *((_QWORD *)this + 253) = 0LL;
  *((_WORD *)this + 1016) = 0;
  *((_QWORD *)this + 255) = 0LL;
  *((_QWORD *)this + 256) = 0LL;
  *((_QWORD *)this + 257) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 2064), 0, 0);
  result = this;
  *((_DWORD *)this + 526) = 0;
  return result;
}
