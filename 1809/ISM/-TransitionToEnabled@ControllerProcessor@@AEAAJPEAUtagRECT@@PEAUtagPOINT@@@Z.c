/*
 * XREFs of ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800346C0
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180034230 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x1800363C8 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x180037954 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800B8980 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800B9190 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::TransitionToEnabled(
        ControllerProcessor *this,
        struct tagRECT *a2,
        struct tagPOINT *a3)
{
  POINT v5; // rdx
  int v6; // eax
  HMONITOR v7; // rdx
  unsigned int v8; // esi
  bool v10; // zf
  float v11; // xmm0_4
  __m128i v12; // xmm1
  LONG v13; // eax
  __m128i v14; // xmm0
  unsigned int v15; // eax
  const char *v16; // r9
  __int64 v17; // rdx
  unsigned int v18; // eax
  LONG v19; // [rsp+20h] [rbp-20h] BYREF
  LONG v20; // [rsp+24h] [rbp-1Ch] BYREF
  struct tagRECT v21; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  if ( !a2 )
  {
    v17 = 1001LL;
    goto LABEL_21;
  }
  if ( a2->top >= a2->bottom || a2->left >= a2->right )
  {
    v17 = 957LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( a3 )
  {
    v5 = *a3;
    *(struct tagPOINT *)((char *)this + 1780) = *a3;
    if ( !PtInRect(a2, v5) )
      *(struct tagPOINT *)((char *)this + 1780) = ControllerProcessor::AdjustPointToBounds(
                                                    *(struct tagPOINT *)((char *)this + 1780),
                                                    a2);
  }
  if ( !*((_BYTE *)this + 2672) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, LONG *, LONG *))(**((_QWORD **)this + 219) + 32LL))(
           *((_QWORD *)this + 219),
           &v19,
           &v20);
    v8 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D1,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v6);
      return v8;
    }
    v21.left = 0;
    v21.top = 0;
    v10 = *((_DWORD *)this + 468) == 4;
    v21.right = v19;
    v21.bottom = v20;
    if ( !v10 )
    {
      ManipulationInjector::EndManipulation((ControllerProcessor *)((char *)this + 1872), 0);
      *((_DWORD *)this + 652) = 0;
      *((_DWORD *)this + 651) = 0;
      *((_DWORD *)this + 468) = 4;
    }
    if ( *((_DWORD *)this + 490) )
    {
      v18 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x54E,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        (const char *)v18);
      __debugbreak();
    }
    *((_DWORD *)this + 469) = 2;
    ManipulationInjector::Initialize((ControllerProcessor *)((char *)this + 1872), v7, &v21);
    *((_BYTE *)this + 2672) = 1;
    *((_QWORD *)this + 333) = ((unsigned __int64)this + 48) & -(__int64)(this != 0LL);
  }
  *((struct tagRECT *)this + 110) = *a2;
  v11 = (float)*((int *)this + 441);
  v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 442));
  v21.left = (int)(float)((float)*((int *)this + 440) + 8.0);
  v13 = (int)(float)(v11 + 8.0);
  v14 = _mm_cvtsi32_si128(*((_DWORD *)this + 443));
  v21.top = v13;
  v21.right = (int)(float)(_mm_cvtepi32_ps(v12).m128_f32[0] - 8.0);
  v21.bottom = (int)(float)(_mm_cvtepi32_ps(v14).m128_f32[0] - 8.0);
  *(struct tagRECT *)((char *)this + 1828) = v21;
  if ( *((_BYTE *)this + 6680) )
  {
    v16 = 0LL;
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 711) + 40LL))(
            *((_QWORD *)this + 711),
            (char *)this + 5696,
            0LL);
    v16 = (const char *)v15;
    *((_BYTE *)this + 6680) = (v15 & 0x80000000) == 0;
  }
  if ( (int)v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3E3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      v16);
    JUMPOUT(0x18003493CLL);
  }
  ControllerProcessor::UpdateManipulationInjectionRect(this);
  return 0LL;
}
