/*
 * XREFs of ?Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z @ 0x18007DE60
 * Callers:
 *     ?CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@@@Z @ 0x18007C160 (-CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HidLampMultiUpdateReportBuilder::Initialize(
        HidLampMultiUpdateReportBuilder *this,
        struct HidLampArrayDevice *a2,
        int a3)
{
  unsigned __int64 v3; // rsi
  volatile signed __int32 *v5; // rdi
  unsigned __int64 v6; // rax
  void *v7; // rax
  const struct std::nothrow_t *v8; // rdx
  void *v9; // rcx
  __int64 v10; // rdx
  void *v12; // rax
  const struct std::nothrow_t *v13; // rdx
  void *v14; // rcx
  void *v15; // rax
  const struct std::nothrow_t *v16; // rdx
  void *v17; // rcx
  void *v18; // rax
  const struct std::nothrow_t *v19; // rdx
  void *v20; // rcx
  void *v21; // rax
  const struct std::nothrow_t *v22; // rdx
  void *v23; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a3;
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 9);
  if ( v5 != (volatile signed __int32 *)a2 )
  {
    if ( a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
      v5 = (volatile signed __int32 *)*((_QWORD *)this + 9);
    }
    *((_QWORD *)this + 9) = a2;
    if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      *((_DWORD *)v5 + 2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 32LL))(v5);
      *((_DWORD *)v5 + 2) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    }
  }
  *((_DWORD *)this + 4) = v3;
  v6 = 4 * v3;
  if ( !is_mul_ok(v3, 4uLL) )
    v6 = -1LL;
  v7 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  v9 = (void *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v7;
  if ( v9 )
  {
    operator delete(v9, v8);
    v7 = (void *)*((_QWORD *)this + 4);
  }
  if ( !v7 )
  {
    v10 = 44LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportbuilder.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v12 = operator new[](*((int *)this + 4), (const struct std::nothrow_t *)&std::nothrow);
  v14 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = v12;
  if ( v14 )
  {
    operator delete(v14, v13);
    v12 = (void *)*((_QWORD *)this + 5);
  }
  if ( !v12 )
  {
    v10 = 47LL;
    goto LABEL_13;
  }
  v15 = operator new[](*((int *)this + 4), (const struct std::nothrow_t *)&std::nothrow);
  v17 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v15;
  if ( v17 )
  {
    operator delete(v17, v16);
    v15 = (void *)*((_QWORD *)this + 6);
  }
  if ( !v15 )
  {
    v10 = 50LL;
    goto LABEL_13;
  }
  v18 = operator new[](*((int *)this + 4), (const struct std::nothrow_t *)&std::nothrow);
  v20 = (void *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v18;
  if ( v20 )
  {
    operator delete(v20, v19);
    v18 = (void *)*((_QWORD *)this + 7);
  }
  if ( !v18 )
  {
    v10 = 53LL;
    goto LABEL_13;
  }
  v21 = operator new[](*((int *)this + 4), (const struct std::nothrow_t *)&std::nothrow);
  v23 = (void *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = v21;
  if ( v23 )
  {
    operator delete(v23, v22);
    v21 = (void *)*((_QWORD *)this + 8);
  }
  if ( !v21 )
  {
    v10 = 56LL;
    goto LABEL_13;
  }
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  memset_0(*((void **)this + 4), 0, 4LL * *((int *)this + 4));
  memset_0(*((void **)this + 5), 0, *((int *)this + 4));
  memset_0(*((void **)this + 6), 0, *((int *)this + 4));
  memset_0(*((void **)this + 7), 0, *((int *)this + 4));
  memset_0(*((void **)this + 8), 0, *((int *)this + 4));
  return 0LL;
}
