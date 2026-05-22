/*
 * XREFs of ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800740AC
 * Callers:
 *     ?CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x180073F24 (-CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x180073034 (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Resize__lambda_c948d9edf99f5fb7aad0043553e8ab01___ @ 0x180076404 (std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color___--_Resize__lambda_c948d9edf99.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x180079740 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LampArrayDevice::Initialize(LampArrayDevice *this, struct PnpDevice *a2)
{
  struct PnpDevice *v3; // rdi
  char *v4; // rax
  char *v5; // rbx
  const struct std::nothrow_t *v6; // rdx
  void *v7; // rcx
  int v8; // edi
  int v9; // eax
  const char *v10; // r9
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  Microsoft::WRL::ComPtr<PnpDevice>::operator=((volatile signed __int32 **)this + 2, (volatile signed __int32 *)a2);
  v3 = (struct PnpDevice *)*((_QWORD *)this + 2);
  v4 = (char *)malloc(0x280uLL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x280uLL);
    *(_QWORD *)v5 = &RefCountedObject::`vftable';
    *((_DWORD *)v5 + 2) = 1;
    *(_QWORD *)v5 = &HidLampArrayDevice::`vftable';
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 71) = 0LL;
    *((_QWORD *)v5 + 72) = 0LL;
    *((_QWORD *)v5 + 73) = 0LL;
    *((_QWORD *)v5 + 74) = 0LL;
    *((_QWORD *)v5 + 75) = 0LL;
    *((_QWORD *)v5 + 76) = 0LL;
    *((_QWORD *)v5 + 77) = 0LL;
    *((_QWORD *)v5 + 78) = 0LL;
    *((_WORD *)v5 + 318) = 0;
    *(_DWORD *)(v5 + 538) = 0;
    *((_WORD *)v5 + 271) = 0;
    *((_OWORD *)v5 + 34) = 0uLL;
    *((_QWORD *)v5 + 70) = 0LL;
    v7 = (void *)*((_QWORD *)v5 + 71);
    *((_QWORD *)v5 + 71) = 0LL;
    if ( v7 )
      operator delete(v7, v6);
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v9 = HidLampArrayDevice::Initialize((HidLampArrayDevice *)v5, v3);
  v8 = v9;
  if ( v9 >= 0 )
  {
    *((_QWORD *)this + 3) = v5;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v9);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
    {
      try
      {
        *((_DWORD *)v5 + 2) = 1;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 32LL))(v5);
        *((_DWORD *)v5 + 2) = 0;
        (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x41,
                               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lam"
                                        "parraydevice.cpp",
                               v10);
      }
    }
  }
  if ( v8 < 0 )
    goto LABEL_12;
  std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Resize__lambda_c948d9edf99f5fb7aad0043553e8ab01___(
    (char *)this + 160,
    *(int *)(*((_QWORD *)this + 3) + 544LL));
  if ( !QueryPerformanceFrequency((LARGE_INTEGER *)this + 23) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x37,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      v12);
    __debugbreak();
    JUMPOUT(0x180074331LL);
  }
  *((_QWORD *)this + 25) = *((_QWORD *)this + 23) * *(int *)(*((_QWORD *)this + 3) + 564LL) / 1000000LL;
  QueryPerformanceCounter((LARGE_INTEGER *)this + 24);
  *((_QWORD *)this + 24) -= *((_QWORD *)this + 25);
  return 0LL;
}
