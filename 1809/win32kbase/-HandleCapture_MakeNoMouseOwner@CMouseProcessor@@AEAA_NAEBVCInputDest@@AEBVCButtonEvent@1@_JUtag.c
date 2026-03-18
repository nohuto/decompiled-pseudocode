/*
 * XREFs of ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C007003C
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006EB98 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C002F0E8 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0031C68 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0039790 (PhysicalToLogicalDPIPoint.c)
 *     IsWindowDesktopComposed @ 0x1C00489C0 (IsWindowDesktopComposed.c)
 *     HMValidateSharedHandleNoRip @ 0x1C006A084 (HMValidateSharedHandleNoRip.c)
 *     ApiSetEditionPostInputMessage @ 0x1C006F57C (ApiSetEditionPostInputMessage.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C0070194 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     ?GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA?AW4ButtonNumber@@XZ @ 0x1C0070394 (-GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA-AW4ButtonNumber@@XZ.c)
 *     ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C0070488 (-GetInputDestFromForegroundCapture@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C0070760 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0089FDC (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::HandleCapture_MakeNoMouseOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4,
        struct tagPOINT a5,
        unsigned int a6)
{
  _OWORD *InputDestFromForegroundCapture; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  char v20; // di
  int HardwareButton; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  bool v25; // zf
  int v27; // esi
  __int64 v28; // rcx
  __int64 v29; // rbx
  unsigned int DpiAwarenessContext; // eax
  unsigned __int16 v31; // dx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // eax
  __int64 v35; // rdx
  unsigned int v36; // ebx
  __int64 v37; // rdx
  __int64 PtiFromInputDest; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  _WORD v41[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v43[11]; // [rsp+70h] [rbp-90h] BYREF
  char v44[176]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v45[18]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v46; // [rsp+218h] [rbp+118h]
  int v47; // [rsp+224h] [rbp+124h]

  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) == 0 )
  {
    InputDestFromForegroundCapture = (_OWORD *)QHelper::GetInputDestFromForegroundCapture(v44);
    v11 = InputDestFromForegroundCapture[1];
    v43[0] = *InputDestFromForegroundCapture;
    v12 = InputDestFromForegroundCapture[2];
    v43[1] = v11;
    v13 = InputDestFromForegroundCapture[3];
    v43[2] = v12;
    v14 = InputDestFromForegroundCapture[4];
    v43[3] = v13;
    v15 = InputDestFromForegroundCapture[5];
    v43[4] = v14;
    v16 = InputDestFromForegroundCapture[6];
    v43[5] = v15;
    v17 = InputDestFromForegroundCapture[8];
    v43[6] = v16;
    v43[7] = InputDestFromForegroundCapture[7];
    v18 = InputDestFromForegroundCapture[9];
    v43[8] = v17;
    v19 = InputDestFromForegroundCapture[10];
    v43[9] = v18;
    v43[10] = v19;
    CInputDest::CInputDest((CInputDest *)v45, (const struct tagINPUTDEST *)v43);
    v20 = 0;
    if ( !v45[0] || CInputDest::IsEqualByQ(a2, (const struct CInputDest *)v45) )
      goto LABEL_3;
    v27 = v47;
    v28 = 0LL;
    v29 = v46;
    if ( v47 == 2 )
      v28 = v46;
    if ( !v28 || (unsigned int)IsWindowDesktopComposed(v28) )
    {
      CInputDest::GetDpiAwarenessContext(a2);
      DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v45);
      if ( (((unsigned __int16)(DpiAwarenessContext >> 8) ^ v31) & 0x1FF) != 0 )
      {
        v32 = 0LL;
        if ( v27 == 2 )
          v32 = v29;
        if ( v32 )
          v33 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(v32 + 40) + 256LL));
        else
          v33 = 0LL;
        v42 = v33;
        v34 = CInputDest::GetDpiAwarenessContext((CInputDest *)v45);
        PhysicalToLogicalDPIPoint((__int64)v41, (__int64)&a5, v34, &v42);
        v27 = v47;
        v29 = v46;
        a4 = v41[0] | (v41[2] << 16);
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)a3 + 84LL) != 1 )
    {
      if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI(
                               *(_QWORD *)(*(_QWORD *)a3 + 108LL),
                               v45,
                               (char *)this + 8) )
        goto LABEL_29;
      v27 = v47;
      v29 = v46;
    }
    v35 = 0LL;
    if ( v27 == 2 )
      v35 = v29;
    v36 = a6;
    ApiSetEditionPostInputMessage(
      (__int64)v45,
      v35,
      a6,
      0LL,
      a4,
      0,
      0LL,
      0LL,
      0,
      (__int64 *)(*(_QWORD *)a3 + 80LL),
      0LL,
      0LL);
    v37 = 0LL;
    if ( v47 == 2 )
      v37 = v46;
    ApiSetEditionPostInputMessage(
      (__int64)v45,
      v37,
      v36 + 1,
      0LL,
      a4,
      0,
      0LL,
      0LL,
      0,
      (__int64 *)(*(_QWORD *)a3 + 80LL),
      0LL,
      0LL);
LABEL_29:
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)v45, 2);
    if ( PtiFromInputDest )
    {
      if ( *(_QWORD *)(PtiFromInputDest + 672) )
      {
        v39 = anonymous_namespace_::GetPtiFromInputDest((__int64)v45, 2);
        if ( !v39 || (v40 = *(_QWORD *)(v39 + 608)) == 0 || (*(_DWORD *)(v40 + 8) & 1) == 0 )
        {
LABEL_6:
          CInputDest::SetEmpty((CInputDest *)v45);
          return v20;
        }
      }
    }
LABEL_3:
    HardwareButton = CMouseProcessor::CButtonEvent::GetHardwareButton(a3);
    v25 = (HardwareButton | *((_DWORD *)this + 636)) == 0;
    *((_DWORD *)this + 636) |= HardwareButton;
    if ( v25 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 2552), a2);
    v20 = 1;
    goto LABEL_6;
  }
  return 1;
}
