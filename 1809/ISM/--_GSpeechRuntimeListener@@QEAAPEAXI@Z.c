/*
 * XREFs of ??_GSpeechRuntimeListener@@QEAAPEAXI@Z @ 0x180057F5C
 * Callers:
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x18005746C (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x180057A80 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
SpeechRuntimeListener *__fastcall SpeechRuntimeListener::`scalar deleting destructor'(SpeechRuntimeListener *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rcx

  if ( *((_QWORD *)this + 3) )
  {
    (*(void (__fastcall **)(_QWORD, const wchar_t *, __int64))(**((_QWORD **)this + 1) + 48LL))(
      *((_QWORD *)this + 1),
      L"System\\SpeechRuntimeListener",
      1LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 144LL))(*(_QWORD *)this, *((_QWORD *)this + 3));
  }
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *(_QWORD **)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 1);
  if ( v7 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *(_QWORD **)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  }
  operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
