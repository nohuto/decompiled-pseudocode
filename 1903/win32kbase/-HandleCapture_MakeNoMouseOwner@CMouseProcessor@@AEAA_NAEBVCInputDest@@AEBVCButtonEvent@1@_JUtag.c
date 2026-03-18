/*
 * XREFs of ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00437E0
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0041208 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031210 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0039158 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0039370 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C003CF50 (PhysicalToLogicalDPIPoint.c)
 *     ApiSetEditionPostInputMessage @ 0x1C00423E0 (ApiSetEditionPostInputMessage.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C0043910 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C0043A14 (-GetInputDestFromForegroundCapture@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C0044EF8 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     IsWindowDesktopComposed @ 0x1C0064070 (IsWindowDesktopComposed.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00A1750 (_anonymous_namespace_--ValidateUIPI.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00A6720 (HMValidateSharedHandleNoRip.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::HandleCapture_MakeNoMouseOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4,
        struct tagPOINT a5,
        unsigned int a6)
{
  __int64 InputDestFromForegroundCapture; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  char v20; // di
  int v21; // eax
  bool v22; // zf
  int v24; // esi
  __int64 v25; // rcx
  __int64 v26; // rbx
  unsigned int DpiAwarenessContext; // eax
  unsigned __int16 v28; // dx
  int v29; // edx
  int v30; // eax
  int v31; // r8d
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  unsigned int v39; // ebx
  __int64 v40; // rdx
  __int64 PtiFromInputDest; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v46[7]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-20h]
  char v48[128]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v49[20]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v50; // [rsp+1C0h] [rbp+C0h]
  int v51; // [rsp+1CCh] [rbp+CCh]

  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) == 0 )
  {
    InputDestFromForegroundCapture = QHelper::GetInputDestFromForegroundCapture(v48);
    v11 = *(_OWORD *)(InputDestFromForegroundCapture + 16);
    v46[0] = *(_OWORD *)InputDestFromForegroundCapture;
    v12 = *(_OWORD *)(InputDestFromForegroundCapture + 32);
    v46[1] = v11;
    v13 = *(_OWORD *)(InputDestFromForegroundCapture + 48);
    v46[2] = v12;
    v14 = *(_OWORD *)(InputDestFromForegroundCapture + 64);
    v46[3] = v13;
    v15 = *(_OWORD *)(InputDestFromForegroundCapture + 80);
    v46[4] = v14;
    v16 = *(_OWORD *)(InputDestFromForegroundCapture + 96);
    v46[5] = v15;
    *(_QWORD *)&v15 = *(_QWORD *)(InputDestFromForegroundCapture + 112);
    v46[6] = v16;
    v47 = v15;
    CInputDest::CInputDest((CInputDest *)v49, (const struct tagINPUTDEST *)v46);
    v20 = 0;
    if ( !v49[0] || CInputDest::IsEqualByQ(a2, (const struct CInputDest *)v49) )
      goto LABEL_3;
    v24 = v51;
    v25 = 0LL;
    v26 = v50;
    if ( v51 == 2 )
      v25 = v50;
    if ( !v25 || (unsigned int)IsWindowDesktopComposed() )
    {
      CInputDest::GetDpiAwarenessContext(a2);
      DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v49);
      if ( (((unsigned __int16)(DpiAwarenessContext >> 8) ^ v28) & 0x1FF) != 0 )
        goto LABEL_23;
      if ( (CInputDest::GetDpiAwarenessContext(a2) & 0xF) == 2 )
        CInputDest::GetDpiAwarenessContext(a2);
      if ( (CInputDest::GetDpiAwarenessContext((CInputDest *)v49) & 0xF) != 2
        || (v30 = CInputDest::GetDpiAwarenessContext((CInputDest *)v49), v22 = (v30 & v31) == 0, v32 = 1, v22) )
      {
        v32 = 0;
      }
      if ( v29 != v32 )
      {
LABEL_23:
        v44 = 0LL;
        v33 = 0LL;
        if ( v24 == 2 )
          v33 = v26;
        if ( v33 )
          v34 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(v33 + 40) + 256LL));
        else
          v34 = 0LL;
        v45 = v34;
        v35 = CInputDest::GetDpiAwarenessContext((CInputDest *)v49);
        PhysicalToLogicalDPIPoint((__int64)&v44, (__int64)&a5, v35, &v45);
        v24 = v51;
        v26 = v50;
        a4 = (unsigned __int16)v44 | (WORD2(v44) << 16);
      }
    }
    v36 = *((_QWORD *)a3 + 1);
    if ( *(_DWORD *)(v36 + 100) != 1 )
    {
      if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v36 + 124), v49) )
        goto LABEL_37;
      v24 = v51;
      v26 = v50;
    }
    v38 = 0LL;
    if ( v24 == 2 )
      v38 = v26;
    v39 = a6;
    ApiSetEditionPostInputMessage(
      (__int64)v49,
      v38,
      a6,
      0LL,
      a4,
      0,
      0LL,
      0LL,
      0,
      (__int64 *)(*((_QWORD *)a3 + 1) + 96LL),
      0LL,
      0LL);
    v40 = 0LL;
    if ( v51 == 2 )
      v40 = v50;
    ApiSetEditionPostInputMessage(
      (__int64)v49,
      v40,
      v39 + 1,
      0LL,
      a4,
      0,
      0LL,
      0LL,
      0,
      (__int64 *)(*((_QWORD *)a3 + 1) + 96LL),
      0LL,
      0LL);
LABEL_37:
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)v49, 2LL, v37);
    if ( PtiFromInputDest )
    {
      if ( *(_QWORD *)(PtiFromInputDest + 664) )
      {
        v42 = anonymous_namespace_::GetPtiFromInputDest((__int64)v49, 2LL, v19);
        if ( !v42 || (v43 = *(_QWORD *)(v42 + 600)) == 0 || (*(_DWORD *)(v43 + 8) & 1) == 0 )
        {
LABEL_8:
          CInputDest::SetEmpty((CInputDest *)v49, v17, v19);
          return v20;
        }
      }
    }
LABEL_3:
    v21 = *((_DWORD *)a3 + 7);
    if ( !v21 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
      v21 = *((_DWORD *)a3 + 7);
    }
    v22 = (v21 | *((_DWORD *)this + 827)) == 0;
    *((_DWORD *)this + 827) |= v21;
    if ( v22 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3312), a2);
    v20 = 1;
    goto LABEL_8;
  }
  return 1;
}
