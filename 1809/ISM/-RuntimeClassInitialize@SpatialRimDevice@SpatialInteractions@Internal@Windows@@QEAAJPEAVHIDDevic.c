/*
 * XREFs of ?RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevice@@PEAX@Z @ 0x1800699D4
 * Callers:
 *     ??$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEAPEAVHIDDevice@@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIHidDevice@SpatialInteractions@Internal@Windows@@AEAPEAVHIDDevice@@AEAPEAX@Z @ 0x180064404 (--$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800698B8 (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::RuntimeClassInitialize(
        Windows::Internal::SpatialInteractions::SpatialRimDevice *this,
        struct HIDDevice *a2,
        void *a3)
{
  struct _HIDP_CAPS *v4; // rax
  int HIDCapabilities; // ebx
  __int64 v8; // rdx
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // r12
  int v13; // eax
  int v14; // edi
  unsigned int v15; // r13d
  unsigned __int64 v16; // rax
  WCHAR *v17; // rax
  WCHAR *v18; // rbx
  int v19; // eax
  int String; // eax
  const struct std::nothrow_t *v21; // rdx
  HANDLE CurrentProcess; // rbx
  HANDLE v23; // rax
  const char *v24; // r9
  __int64 v25; // rdx
  void *v26; // rsi
  HANDLE v27; // rbx
  HANDLE v28; // rax
  int v29; // [rsp+48h] [rbp-19h] BYREF
  __int16 v30; // [rsp+50h] [rbp-11h]
  __int16 v31; // [rsp+52h] [rbp-Fh]
  __int16 v32; // [rsp+54h] [rbp-Dh]
  int v33; // [rsp+70h] [rbp+Fh] BYREF
  unsigned int v34; // [rsp+78h] [rbp+17h]
  WCHAR *v35; // [rsp+80h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  struct _HIDP_CAPS *v37; // [rsp+C8h] [rbp+67h] BYREF

  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 10);
  v4 = (struct _HIDP_CAPS *)((char *)a2 + 60);
  v37 = 0LL;
  if ( *((_WORD *)a2 + 30) )
  {
    HIDCapabilities = 0;
  }
  else
  {
    HIDCapabilities = HIDDevice::GetHIDCapabilities((PHIDP_PREPARSED_DATA *)a2, &v37);
    v4 = v37;
  }
  if ( HIDCapabilities < 0 )
  {
    v8 = 58LL;
    goto LABEL_6;
  }
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)&v4->Usage;
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)&v4->Reserved[3];
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)&v4->Reserved[11];
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)&v4->NumberInputValueCaps;
  *((_QWORD *)this + 17) = *((_QWORD *)a2 + 6);
  memset_0(&v29, 0, 0x28uLL);
  v10 = *((_QWORD *)a2 + 2);
  v29 = 3;
  v11 = RIMGetDeviceProperties(a3, v10, &v29);
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    HIDCapabilities = v11 | 0x10000000;
    if ( HIDCapabilities >= 0 )
      return (unsigned int)HIDCapabilities;
    v8 = 65LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
      (const char *)(unsigned int)HIDCapabilities);
    return (unsigned int)HIDCapabilities;
  }
  *((_WORD *)this + 26) = v30;
  *((_WORD *)this + 27) = v31;
  *((_WORD *)this + 28) = v32;
  WindowsDeleteString(*((HSTRING *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  v12 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 8) = 0LL;
  memset_0(&v33, 0, 0x28uLL);
  v33 = 4;
  v13 = RIMGetDeviceProperties(a3, v12, &v33);
  if ( v13 >= 0 )
  {
    v15 = v34;
    v16 = 2LL * v34;
    if ( !is_mul_ok(v34, 2uLL) )
      v16 = -1LL;
    v17 = (WCHAR *)operator new[](v16, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v17;
    if ( !v17 )
    {
      v14 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
        (const char *)0x8007000ELL);
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
        (const char *)(unsigned int)v14);
      return (unsigned int)v14;
    }
    v35 = v17;
    v19 = RIMGetDeviceProperties(a3, v12, &v33);
    if ( v19 >= 0 )
      String = WindowsCreateString(v18, v15 - 1, (HSTRING *)this + 8);
    else
      String = wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)0x30,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
                 (const char *)(unsigned int)v19);
    v14 = String;
    operator delete(v18, v21);
  }
  else
  {
    v14 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x28,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
            (const char *)(unsigned int)v13);
  }
  if ( v14 < 0 )
    goto LABEL_22;
  CurrentProcess = GetCurrentProcess();
  v23 = GetCurrentProcess();
  if ( !DuplicateHandle(v23, a3, CurrentProcess, (LPHANDLE)this + 19, 0, 0, 2u) )
  {
    v25 = 72LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v25,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
             v24);
  }
  v26 = (void *)*((_QWORD *)a2 + 2);
  v27 = GetCurrentProcess();
  v28 = GetCurrentProcess();
  if ( !DuplicateHandle(v28, v26, v27, (LPHANDLE)this + 21, 0, 0, 2u) )
  {
    v25 = 73LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v25,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
             v24);
  }
  return 0LL;
}
