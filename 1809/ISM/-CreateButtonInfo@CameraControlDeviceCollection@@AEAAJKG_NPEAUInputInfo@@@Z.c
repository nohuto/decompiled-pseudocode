/*
 * XREFs of ?CreateButtonInfo@CameraControlDeviceCollection@@AEAAJKG_NPEAUInputInfo@@@Z @ 0x180068B5C
 * Callers:
 *     ?OnInputReport@CameraControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800687F0 (-OnInputReport@CameraControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

__int64 __fastcall CameraControlDeviceCollection::CreateButtonInfo(
        CameraControlDeviceCollection *this,
        int a2,
        __int16 a3,
        char a4,
        struct InputInfo *a5)
{
  unsigned int v7; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v7 = a3 != 120 ? 0x80004001 : 0;
  if ( a3 == 120 )
  {
    memset_0(a5, 0, 0x640uLL);
    *((_DWORD *)a5 + 2) = 0;
    *((_QWORD *)a5 + 2) = 0LL;
    result = 0LL;
    *((_DWORD *)a5 + 1) = a2;
    *(_DWORD *)a5 = 128;
    *((_DWORD *)a5 + 6) = 1600;
    *((_DWORD *)a5 + 130) = 239;
    *((_BYTE *)a5 + 524) = a4;
    *((_BYTE *)a5 + 517) = 1;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\cameracontroldevicecollection.cpp",
      (const char *)v7);
    return v7;
  }
  return result;
}
