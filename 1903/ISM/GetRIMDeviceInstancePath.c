/*
 * XREFs of GetRIMDeviceInstancePath @ 0x1800A5F14
 * Callers:
 *     ?RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevice@@PEAX@Z @ 0x1800A61A4 (-RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevic.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002CED8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180059C10 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetRIMDeviceInstancePath(__int64 a1, __int64 a2, HSTRING *a3)
{
  int v6; // eax
  unsigned int v8; // edi
  size_t v9; // rax
  WCHAR *v10; // rax
  WCHAR *v11; // rbx
  unsigned int v12; // edi
  const struct std::nothrow_t *v13; // rdx
  int v14; // eax
  unsigned int String; // eax
  int v16; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-30h]
  WCHAR *v18; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a3 = 0LL;
  memset_0(&v16, 0, 0x28uLL);
  v16 = 4;
  v6 = RIMGetDeviceProperties(a1, a2, &v16);
  if ( v6 < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x28,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
             (const char *)(unsigned int)v6);
  v8 = v17;
  v9 = 2LL * v17;
  if ( !is_mul_ok(v17, 2uLL) )
    v9 = -1LL;
  v10 = (WCHAR *)operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    v18 = v10;
    v14 = RIMGetDeviceProperties(a1, a2, &v16);
    if ( v14 >= 0 )
      String = WindowsCreateString(v11, v8 - 1, a3);
    else
      String = wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)0x30,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
                 (const char *)(unsigned int)v14);
    v12 = String;
  }
  else
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v11 )
    operator delete(v11, v13);
  return v12;
}
