/*
 * XREFs of ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180078088
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180078AFC (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180075004 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?Attach@InjectionDevice@@QEAAJXZ @ 0x180075574 (-Attach@InjectionDevice@@QEAAJXZ.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x1800788F8 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     ?ValidateBounds@ControllerProcessor@@CA_NPEAUtagRECT@@@Z @ 0x180078F58 (-ValidateBounds@ControllerProcessor@@CA_NPEAUtagRECT@@@Z.c)
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800E7C10 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 *     ?SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z @ 0x1800E8FB4 (-SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z.c)
 *     ?SetPanOverlapType@ManipulationInjector@@QEAAXW4OVERLAP_TYPE@@@Z @ 0x1800E902C (-SetPanOverlapType@ManipulationInjector@@QEAAXW4OVERLAP_TYPE@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::TransitionToEnabled(
        ControllerProcessor *this,
        struct tagRECT *a2,
        struct tagPOINT *a3)
{
  const RECT *v5; // rcx
  POINT *v6; // r8
  __int64 v7; // rdx
  POINT v8; // rdx
  int v9; // ebx
  HMONITOR v10; // rdx
  float v11; // xmm0_4
  __m128i v12; // xmm1
  LONG v13; // eax
  __m128i v14; // xmm0
  int v15; // eax
  LONG v17; // [rsp+20h] [rbp-20h] BYREF
  LONG v18; // [rsp+24h] [rbp-1Ch] BYREF
  struct tagRECT v19; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  if ( !a2 )
  {
    v7 = 1023LL;
    goto LABEL_15;
  }
  if ( !ControllerProcessor::ValidateBounds(a2) )
  {
    v7 = 979LL;
LABEL_15:
    v9 = -2147024809;
    goto LABEL_16;
  }
  if ( v6 )
  {
    v8 = *v6;
    *(POINT *)((char *)this + 2236) = *v6;
    if ( !PtInRect(v5, v8) )
      *(struct tagPOINT *)((char *)this + 2236) = ControllerProcessor::AdjustPointToBounds(
                                                    *(struct tagPOINT *)((char *)this + 2236),
                                                    a2);
  }
  if ( !*((_BYTE *)this + 3136) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, LONG *, LONG *))(**((_QWORD **)this + 276) + 32LL))(
           *((_QWORD *)this + 276),
           &v17,
           &v18);
    if ( v9 < 0 )
    {
      v7 = 999LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
    v19.left = 0;
    v19.top = 0;
    v19.right = v17;
    v19.bottom = v18;
    ManipulationInjector::SetInjectionMechanism((char *)this + 2328);
    ManipulationInjector::SetPanOverlapType((char *)this + 2328, 2LL);
    ManipulationInjector::Initialize((ControllerProcessor *)((char *)this + 2328), v10, &v19);
    *((_QWORD *)this + 390) = ((unsigned __int64)this + 72) & -(__int64)(this != 0LL);
    *((_BYTE *)this + 3136) = 1;
  }
  *(struct tagRECT *)((char *)this + 2216) = *a2;
  v11 = (float)*((int *)this + 555);
  v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 556));
  v19.left = (int)(float)((float)*((int *)this + 554) + 8.0);
  v13 = (int)(float)(v11 + 8.0);
  v14 = _mm_cvtsi32_si128(*((_DWORD *)this + 557));
  v19.top = v13;
  v19.right = (int)(float)(_mm_cvtepi32_ps(v12).m128_f32[0] - 8.0);
  v19.bottom = (int)(float)(_mm_cvtepi32_ps(v14).m128_f32[0] - 8.0);
  *(struct tagRECT *)((char *)this + 2284) = v19;
  v15 = InjectionDevice::Attach((ControllerProcessor *)((char *)this + 7904));
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1017LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  ControllerProcessor::UpdateManipulationInjectionRect(this);
  return 0LL;
}
