/*
 * XREFs of ?NotifyDeviceRemovalCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x1800B06A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyDeviceRemovalCallback(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rdi
  void *v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int64 *v8; // rbx
  void *v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // rbx
  void *v12; // rcx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]

  if ( !a1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !*a1 )
  {
    v2 = 388LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x80070057LL);
    v3 = a1;
    v4 = (void *)a1[1];
    if ( v4 )
    {
      operator delete(v4, (const struct std::nothrow_t *)0x620);
      a1[1] = 0LL;
      v3 = a1;
    }
    if ( v3 )
    {
      v5 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      operator delete(v3, (const struct std::nothrow_t *)0x10);
    }
    return 2147942487LL;
  }
  if ( !a1[1] )
  {
    v2 = 389LL;
    goto LABEL_7;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a1 + 56LL))(*a1);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v11 = a1;
    v12 = (void *)a1[1];
    if ( v12 )
    {
      operator delete(v12, (const struct std::nothrow_t *)0x620);
      a1[1] = 0LL;
      v11 = a1;
    }
    if ( v11 )
    {
      v13 = *v11;
      if ( *v11 )
      {
        *v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      operator delete(v11, (const struct std::nothrow_t *)0x10);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x187,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v6);
    v8 = a1;
    v9 = (void *)a1[1];
    if ( v9 )
    {
      operator delete(v9, (const struct std::nothrow_t *)0x620);
      a1[1] = 0LL;
      v8 = a1;
    }
    if ( v8 )
    {
      v10 = *v8;
      if ( *v8 )
      {
        *v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      operator delete(v8, (const struct std::nothrow_t *)0x10);
    }
    return v7;
  }
}
