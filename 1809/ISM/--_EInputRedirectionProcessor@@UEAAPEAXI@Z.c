/*
 * XREFs of ??_EInputRedirectionProcessor@@UEAAPEAXI@Z @ 0x1800D0E4C
 * Callers:
 *     ??_EInputRedirectionProcessor@@WBI@EAAPEAXI@Z @ 0x1800D19E0 (--_EInputRedirectionProcessor@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

InputRedirectionProcessor *__fastcall InputRedirectionProcessor::`vector deleting destructor'(
        InputRedirectionProcessor *this,
        char a2)
{
  char *v4; // rcx
  const struct std::nothrow_t *v5; // rdx
  char *v6; // r8
  char *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  MPCClickerProcessor *v12; // rcx

  v4 = (char *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    v5 = (const struct std::nothrow_t *)((*((_QWORD *)this + 12) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v5 >= 0x1000 )
    {
      v5 = (const struct std::nothrow_t *)((char *)v5 + 39);
      v6 = (char *)*((_QWORD *)v4 - 1);
      v7 = (char *)(v4 - v6);
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v7, v5);
        goto LABEL_18;
      }
      v4 = v6;
    }
    operator delete(v4, v5);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  v8 = *((_QWORD *)this + 8);
  if ( v8 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 7);
  if ( v9 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 6);
  if ( v10 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 5);
  if ( v11 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v12 = this;
    if ( (a2 & 4) == 0 )
    {
      free(this);
      return this;
    }
LABEL_18:
    MPCClickerProcessor::Uninitialize3DComponents(v12);
  }
  return this;
}
