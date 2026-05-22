/*
 * XREFs of ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z @ 0x18006B700
 * Callers:
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x180047BA4 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 *     ??1WGIRawInputProvider@@UEAA@XZ @ 0x18006AAC0 (--1WGIRawInputProvider@@UEAA@XZ.c)
 *     ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18006ADD0 (-Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 *     ?OnTargetWithFocusChanged@WGIRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x18006B120 (-OnTargetWithFocusChanged@WGIRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?WGIRawInputProvider_SetInputFocusProcess_@ISMTracing@@QEAAXAEBK@Z @ 0x18006A90C (-WGIRawInputProvider_SetInputFocusProcess_@ISMTracing@@QEAAXAEBK@Z.c)
 */

__int64 __fastcall WGIRawInputProvider::SetInputFocusProcess(WGIRawInputProvider *this, unsigned int a2, int a3)
{
  _DWORD *v5; // rcx
  ISMTracing *v6; // rcx
  void *v7; // rcx
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  unsigned int InBuffer; // [rsp+58h] [rbp+10h] BYREF

  InBuffer = a2;
  if ( !*((_BYTE *)this + 392) )
    goto LABEL_12;
  v11 = a2;
  if ( !a3 )
  {
    RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v11, 4LL, 0LL);
    v5 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v5 && *v5 )
    {
      ISMTracing::Instance();
      ISMTracing::WGIRawInputProvider_SetInputFocusProcess_(v6, &v11);
    }
    if ( !*((_DWORD *)this + 100) )
      goto LABEL_9;
    v11 = 0;
  }
  RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_FOCUS_INFO, 0LL, &v11, 4LL, 0LL);
LABEL_9:
  v7 = (void *)*((_QWORD *)this + 7);
  if ( v7 != (void *)-1LL && !DeviceIoControl(v7, 0x40001C28u, &InBuffer, 4u, 0LL, 0, 0LL, 0LL) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x178,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      v8);
    JUMPOUT(0x18006B804LL);
  }
  a2 = InBuffer;
LABEL_12:
  *((_DWORD *)this + 99) = a2;
  result = 0LL;
  *((_DWORD *)this + 100) = a3;
  return result;
}
