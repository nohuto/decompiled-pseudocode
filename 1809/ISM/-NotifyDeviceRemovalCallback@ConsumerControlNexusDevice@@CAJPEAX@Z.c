/*
 * XREFs of ?NotifyDeviceRemovalCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x180078670
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyDeviceRemovalCallback(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
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
      (void *)0x1CB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x80070057LL);
    goto LABEL_3;
  }
  if ( !*a1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x80070057LL);
    v1 = a1;
    v3 = (void *)a1[1];
    if ( !v3 )
    {
LABEL_4:
      if ( !v1 )
        return 2147942487LL;
      v2 = *v1;
      if ( !*v1 )
      {
LABEL_16:
        operator delete(v1, (const struct std::nothrow_t *)0x10);
        return 2147942487LL;
      }
LABEL_15:
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      goto LABEL_16;
    }
    operator delete(v3, (const struct std::nothrow_t *)0x3D8);
    a1[1] = 0LL;
LABEL_3:
    v1 = a1;
    goto LABEL_4;
  }
  if ( !a1[1] )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x80070057LL);
    v1 = a1;
    v4 = (void *)a1[1];
    if ( v4 )
    {
      operator delete(v4, (const struct std::nothrow_t *)0x3D8);
      a1[1] = 0LL;
      v1 = a1;
    }
    if ( !v1 )
      return 2147942487LL;
    v2 = *v1;
    if ( !*v1 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a1 + 56LL))(*a1);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v11 = a1;
    v12 = (void *)a1[1];
    if ( v12 )
    {
      operator delete(v12, (const struct std::nothrow_t *)0x3D8);
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
      (void *)0x1D8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v6);
    v8 = a1;
    v9 = (void *)a1[1];
    if ( v9 )
    {
      operator delete(v9, (const struct std::nothrow_t *)0x3D8);
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
