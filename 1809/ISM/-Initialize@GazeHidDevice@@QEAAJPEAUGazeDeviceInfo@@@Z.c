/*
 * XREFs of ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x180069F34
 * Callers:
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180067F50 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x18006A378 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 *     ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x18006A780 (-TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ.c)
 *     ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800C0870 (-Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x1800C0ACC (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18012C95C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GazeHidDevice::Initialize(GazeHidDevice *this, struct GazeDeviceInfo *a2)
{
  char *v4; // rbp
  int v5; // eax
  unsigned int v6; // esi
  NTSTATUS Caps; // eax
  int v9; // edx
  int v10; // r9d
  void **v11; // rdi
  const char *v12; // r9
  size_t v13; // rsi
  void *v14; // rax
  const struct std::nothrow_t *v15; // rdx
  void *v16; // rcx
  const struct std::nothrow_t *v17; // rdx
  void **v18; // rsi
  int updated; // eax
  int v20; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_QWORD *)this + 4) = a2;
  v4 = (char *)this + 128;
  v5 = GazeHidParser::Initialize((PHIDP_CAPS)this + 2, *((PHIDP_PREPARSED_DATA *)this + 6));
  v6 = v5;
  if ( v5 >= 0 )
  {
    Caps = HidP_GetCaps(*((PHIDP_PREPARSED_DATA *)this + 6), (PHIDP_CAPS)((char *)this + 60));
    if ( Caps >= 0 )
    {
      *((_DWORD *)a2 + 251) = 0;
      if ( (unsigned __int8)GazeHidParser::IsPropertySupported(v4, 6LL) )
        *((_DWORD *)a2 + 251) = v9 - 5;
      if ( (unsigned __int8)GazeHidParser::IsPropertySupported(v4, 10LL) )
        *((_DWORD *)a2 + 251) = v10 | 2;
      *((_DWORD *)a2 + 255) = *((_DWORD *)this + 14);
      memcpy_0((char *)a2 + 1024, *((const void **)this + 6), *((unsigned int *)this + 14));
      *((_DWORD *)this + 58) = *((unsigned __int16 *)this + 32) + 96;
      v11 = (void **)operator new(8uLL);
      v13 = *((unsigned int *)this + 58);
      *v11 = 0LL;
      if ( v13 < 0x60 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1B7,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\inc\\rawinput.h",
          v12);
        JUMPOUT(0x18006A122LL);
      }
      v14 = operator new[]((unsigned int)v13);
      v16 = *v11;
      *v11 = v14;
      if ( v16 )
        operator delete(v16, v15);
      memset_0(*v11, 0, v13);
      *((_DWORD *)*v11 + 6) = v13;
      v18 = (void **)*((_QWORD *)this + 28);
      *((_QWORD *)this + 28) = v11;
      if ( v18 )
      {
        if ( *v18 )
          operator delete(*v18, v17);
        operator delete(v18, (const struct std::nothrow_t *)8);
      }
      updated = GazeHidDevice::TryUpdateDisplayMapping(this);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x36,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
          (const char *)(unsigned int)updated);
      v20 = GazeHidDevice::TryUpdateCalibrationState(this);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x37,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
          (const char *)(unsigned int)v20);
      return 0LL;
    }
    else
    {
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x1C,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
               (const char *)(unsigned int)Caps);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
