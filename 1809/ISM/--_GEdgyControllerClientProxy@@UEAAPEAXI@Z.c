/*
 * XREFs of ??_GEdgyControllerClientProxy@@UEAAPEAXI@Z @ 0x180027440
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

EdgyControllerClientProxy *__fastcall EdgyControllerClientProxy::`scalar deleting destructor'(
        EdgyControllerClientProxy *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  void (__fastcall ***v6)(_QWORD); // rcx

  v4 = *((_QWORD *)this + 15);
  if ( v4 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (**(void (__fastcall ***)(__int64))(v4 + 16))(v4 + 16);
  }
  v5 = *((_QWORD *)this + 14);
  if ( v5 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  std::wstring::~wstring((char *)this + 80);
  v6 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  if ( v6 )
    (**v6)(v6);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
