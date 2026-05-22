/*
 * XREFs of ?OnSpatialNavigationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationUpdatedEventArgs@3456@@Z @ 0x180050A50
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialNavigationUpdated(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs *a3)
{
  int v4; // eax
  bool v5; // zf
  __int64 v6; // rax
  float v7; // xmm0_4
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  int v11; // [rsp+28h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  v10 = 0LL;
  v11 = 0;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs *, __int64 *))(*(_QWORD *)a3 + 56LL))(
         a3,
         &v10);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x91,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x180050B8FLL);
  }
  v5 = *((_DWORD *)this + 42) == 1;
  v6 = *((_QWORD *)this + 13);
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v10) & _xmm);
  *(float *)&v10 = *(float *)&v10 * v7;
  *((float *)&v10 + 1) = *((float *)&v10 + 1) * (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v10 + 1)) & _xmm);
  if ( v5 )
  {
    *(_DWORD *)(v6 + 1096) = 5;
    *(float *)(*((_QWORD *)this + 13) + 1100LL) = *(float *)&v10 * 25.0;
    *(float *)(*((_QWORD *)this + 13) + 1104LL) = *((float *)&v10 + 1) * -25.0;
  }
  else
  {
    *(_DWORD *)(v6 + 1096) = 6;
    *(float *)(*((_QWORD *)this + 13) + 1108LL) = (float)(*((float *)&v10 + 1) * 0.041999999) + 1.0;
  }
  v8 = v11;
  *((_QWORD *)this + 22) = v10;
  *((_DWORD *)this + 46) = v8;
  result = 0LL;
  *((_BYTE *)this + 172) = 1;
  return result;
}
