/*
 * XREFs of ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800AE600
 * Callers:
 *     ?CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800AE544 (-CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180052670 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x1800ACEAC (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Resize__lambda_c948d9edf99f5fb7aad0043553e8ab01___ @ 0x1800ADF44 (std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color___--_Resize__lambda_c948d9edf99.c)
 *     ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800B32C4 (-CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall LampArrayDevice::Initialize(LampArrayDevice *this, struct PnpDevice *a2)
{
  char *v3; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  const char *v7; // r9
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=((RefCountedObject **)this + 2, (volatile signed __int32 *)a2);
  v3 = (char *)this + 24;
  v4 = HidLampArrayDevice::CreateAndInitialize(*((struct PnpDevice **)this + 2), (struct HidLampArrayDevice **)this + 3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    try
    {
      std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Resize__lambda_c948d9edf99f5fb7aad0043553e8ab01___(
        (__int64)this + 160,
        *(int *)(*(_QWORD *)v3 + 544LL));
      if ( !QueryPerformanceFrequency((LARGE_INTEGER *)this + 23) )
        wil::details::in1diag3::FailFast_GetLastError(
          retaddr,
          (void *)0x69,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
          v7);
      *((_QWORD *)this + 25) = *((_QWORD *)this + 23) * (*(_DWORD *)(*(_QWORD *)v3 + 564LL) + 1000) / 1000000LL;
      QueryPerformanceCounter((LARGE_INTEGER *)this + 24);
      *((_QWORD *)this + 24) -= *((_QWORD *)this + 25);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x74,
                             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                             v8);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  return result;
}
