/*
 * XREFs of ?NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z @ 0x1800781A0
 * Callers:
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x180077360 (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyDeviceAttach(
        ConsumerControlNexusDevice *this,
        struct IRawInputProvider *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  struct IRawInputProvider *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = operator new(0x3D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x3D8uLL);
    v5[2] = 984;
  }
  else
  {
    v5 = 0LL;
  }
  *((_QWORD *)this + 16) = v5;
  if ( !v5 )
  {
    v6 = 392LL;
LABEL_6:
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x8007000ELL);
    return v7;
  }
  **((_DWORD **)this + 16) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 32LL))(*((_QWORD *)this + 14));
  *(_DWORD *)(*((_QWORD *)this + 16) + 4LL) = 4;
  *(_DWORD *)(*((_QWORD *)this + 16) + 8LL) = 984;
  v9 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    v9[2] = 0LL;
    *v9 = 0LL;
    v9[1] = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    v6 = 398LL;
    goto LABEL_6;
  }
  v10 = *v9;
  v11 = *((_QWORD *)this + 14);
  if ( *v9 != v11 )
  {
    if ( v11 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*((_QWORD *)this + 14));
      v10 = *v9;
    }
    *v9 = v11;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v12 = (struct IRawInputProvider *)v9[1];
  if ( v12 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IRawInputProvider *))(*(_QWORD *)a2 + 8LL))(a2);
      v12 = (struct IRawInputProvider *)v9[1];
    }
    v9[1] = (__int64)a2;
    if ( v12 )
      (*(void (__fastcall **)(struct IRawInputProvider *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v9[2] = *((_QWORD *)this + 16);
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), __int64 *, __int64))(**((_QWORD **)this + 15)
                                                                                              + 128LL))(
          *((_QWORD *)this + 15),
          ConsumerControlNexusDevice::NotifyDeviceAttachCallback,
          v9,
          4LL);
  v7 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x197,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v13);
    v14 = v9[1];
    if ( v14 )
    {
      v9[1] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = *v9;
    if ( *v9 )
    {
      *v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    operator delete(v9, (const struct std::nothrow_t *)0x18);
    return v7;
  }
  *((_BYTE *)this + 136) = 1;
  return 0LL;
}
