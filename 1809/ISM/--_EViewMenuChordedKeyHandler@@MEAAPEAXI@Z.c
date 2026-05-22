/*
 * XREFs of ??_EViewMenuChordedKeyHandler@@MEAAPEAXI@Z @ 0x180038750
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
ViewMenuChordedKeyHandler *__fastcall ViewMenuChordedKeyHandler::`vector deleting destructor'(
        ViewMenuChordedKeyHandler *this,
        char a2)
{
  __int64 v4; // rcx
  char *v5; // rcx
  const struct std::nothrow_t *v6; // rdx
  char *v7; // r8
  char *v8; // rcx
  char *v9; // rcx
  char *v10; // r8
  __int64 v11; // rcx
  MPCClickerProcessor *v12; // rcx

  *(_QWORD *)this = &ViewMenuChordedKeyHandler::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 4) = 0LL;
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4);
  v5 = (char *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    v6 = (const struct std::nothrow_t *)((*((_QWORD *)this + 12) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      v6 = (const struct std::nothrow_t *)((char *)v6 + 39);
      v7 = (char *)*((_QWORD *)v5 - 1);
      v8 = (char *)(v5 - v7);
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
        goto LABEL_18;
      v5 = v7;
    }
    operator delete(v5, v6);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  v9 = (char *)*((_QWORD *)this + 6);
  if ( !v9 )
    goto LABEL_13;
  v6 = (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (unsigned __int64)v6 >= 0x1000 )
  {
    v6 = (const struct std::nothrow_t *)((char *)v6 + 39);
    v10 = (char *)*((_QWORD *)v9 - 1);
    v8 = (char *)(v9 - v10);
    if ( (unsigned __int64)(v8 - 8) <= 0x1F )
    {
      v9 = v10;
      goto LABEL_12;
    }
LABEL_18:
    _o__invalid_parameter_noinfo_noreturn(v8, v6);
    goto LABEL_19;
  }
LABEL_12:
  operator delete(v9, v6);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
LABEL_13:
  v11 = *((_QWORD *)this + 3);
  if ( v11 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v12 = this;
    if ( (a2 & 4) == 0 )
    {
      free(this);
      return this;
    }
LABEL_19:
    MPCClickerProcessor::Uninitialize3DComponents(v12);
  }
  return this;
}
