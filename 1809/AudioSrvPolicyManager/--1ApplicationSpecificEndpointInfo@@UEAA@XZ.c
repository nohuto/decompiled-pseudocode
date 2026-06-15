/*
 * XREFs of ??1ApplicationSpecificEndpointInfo@@UEAA@XZ @ 0x18001AA5C
 * Callers:
 *     ??_GApplicationSpecificEndpointInfo@@UEAAPEAXI@Z @ 0x18001AA20 (--_GApplicationSpecificEndpointInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180036BB0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ApplicationSpecificEndpointInfo::~ApplicationSpecificEndpointInfo(
        ApplicationSpecificEndpointInfo *this)
{
  void *v2; // rcx
  void *v3; // rcx
  char *v4; // rcx
  const struct std::nothrow_t *v5; // rdx
  char *v6; // r8
  char *v7; // rcx

  *(_QWORD *)this = &ApplicationSpecificEndpointInfo::`vftable';
  `eh vector destructor iterator'(
    (char *)this + 160,
    8uLL,
    8uLL,
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>);
  `eh vector destructor iterator'(
    (char *)this + 96,
    8uLL,
    8uLL,
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>);
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
    CoTaskMemFree(v2);
  v3 = (void *)*((_QWORD *)this + 10);
  if ( v3 )
    CoTaskMemFree(v3);
  v4 = (char *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    v5 = (const struct std::nothrow_t *)((*((_QWORD *)this + 9) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v5 >= 0x1000 )
    {
      v5 = (const struct std::nothrow_t *)((char *)v5 + 39);
      v6 = (char *)*((_QWORD *)v4 - 1);
      v7 = (char *)(v4 - v6);
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v7, v5);
        JUMPOUT(0x18001AB3ELL);
      }
      v4 = v6;
    }
    operator delete(v4, v5);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
