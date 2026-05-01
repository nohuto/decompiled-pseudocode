/*
 * XREFs of ??_EAgileCallbackArray@AgileRegistrationList@@UEAAPEAXI@Z @ 0x18005C000
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18011B568 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

AgileRegistrationList::AgileCallbackArray *__fastcall AgileRegistrationList::AgileCallbackArray::`vector deleting destructor'(
        AgileRegistrationList::AgileCallbackArray *this,
        char a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  const struct std::nothrow_t *v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  void *v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 7);
    if ( v4 != v5 )
    {
      do
      {
        if ( *v4 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
        ++v4;
      }
      while ( v4 != v5 );
      v4 = (_QWORD *)*((_QWORD *)this + 6);
    }
    v6 = (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    v9 = (unsigned __int64)v6;
    v10 = v4;
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v10, &v9);
      v6 = (const struct std::nothrow_t *)v9;
      v4 = v10;
    }
    operator delete(v4, v6);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 11) = -1073741823;
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
