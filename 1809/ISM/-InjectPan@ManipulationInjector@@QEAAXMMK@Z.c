/*
 * XREFs of ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800B9370
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x1800351D4 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004D520 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?OnGazeUpdate@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004DB84 (-OnGazeUpdate@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800B9370 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?fabs@@YAMM@Z @ 0x1800383F0 (-fabs@@YAMM@Z.c)
 *     ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x1800B931C (-CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800B9370 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x1800B9ABC (-UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800B9D2C (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x1800BA3EC (-Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800BA494 (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800BA61C (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?UpdatePanContact@ManipulationInjector@@AEAAXIUtagPOINT@@@Z @ 0x1800BA888 (-UpdatePanContact@ManipulationInjector@@AEAAXIUtagPOINT@@@Z.c)
 *     ?ComputeSafeDelta@ManipulationInjector@@AEAA?AUtagPOINT@@IU2@UtagRECT@@@Z @ 0x1800BA8E8 (-ComputeSafeDelta@ManipulationInjector@@AEAA-AUtagPOINT@@IU2@UtagRECT@@@Z.c)
 */

void __fastcall ManipulationInjector::InjectPan(ManipulationInjector *this, float a2, float a3, unsigned int a4)
{
  const char *v8; // r9
  bool v9; // r15
  float v10; // xmm3_4
  float v11; // xmm2_4
  int v12; // eax
  int v13; // ecx
  float v14; // xmm4_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  LONG v17; // eax
  LONG v18; // eax
  bool v19; // zf
  struct tagRECT *v20; // rbx
  int v21; // eax
  struct tagPOINT *v22; // r14
  int v23; // ecx
  int v24; // ecx
  struct tagRECT *v25; // r9
  struct tagPOINT v26; // rbx
  const char *v27; // r9
  const char *v28; // r9
  unsigned int v29; // eax
  struct tagRECT v30; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v31; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( ManipulationInjector::IsInContactForDeviceId(this, a4) )
  {
    v9 = 0;
    if ( *((_DWORD *)this + 22) != 1 )
    {
      v29 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x20E,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        (const char *)v29);
      __debugbreak();
    }
    if ( !*((_BYTE *)this + 740) && *((int *)this + 184) > 0 )
    {
      *((_BYTE *)this + 740) = 1;
      v10 = 0.0;
      v11 = fabs(a2);
      if ( v11 <= fabs(a3) )
      {
        if ( a3 < 0.0 )
          v12 = v13;
        v14 = (float)v12;
      }
      else
      {
        if ( a2 < 0.0 )
          v12 = v13;
        v10 = (float)v12;
      }
      ManipulationInjector::InjectPan(this, v10, v14, a4);
    }
    if ( *((_BYTE *)this + 13) )
      DbgPrint(
        "Pan Delta: (%d.%03d, %d.%03d)\n",
        (int)a2,
        (int)(float)(a2 * 1000.0) - 1000 * (int)a2,
        (int)a3,
        (int)(float)(a3 * 1000.0) - 1000 * (int)a3);
    v15 = FLOAT_N0_5;
    if ( a2 >= 0.0 )
      v16 = FLOAT_0_5;
    else
      v16 = FLOAT_N0_5;
    v17 = (int)(float)(v16 + a2);
    if ( a2 != 0.0 && !v17 )
    {
      v17 = 1;
      if ( a2 < 0.0 )
        v17 = -1;
    }
    v30.left = v17;
    if ( a3 >= 0.0 )
      v15 = FLOAT_0_5;
    v18 = (int)(float)(v15 + a3);
    if ( a3 != 0.0 && !v18 )
    {
      v18 = 1;
      if ( a3 < 0.0 )
        v18 = -1;
    }
    v19 = *((_DWORD *)this + 1) == 2;
    v30.top = v18;
    v20 = *(struct tagRECT **)&v30.left;
    if ( v19 && (v21 = 2, *((_DWORD *)this + 10)) )
    {
      v22 = (struct tagPOINT *)((char *)this + 144);
    }
    else
    {
      if ( *((_DWORD *)this + 12) != 1 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x230,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v8);
        __debugbreak();
      }
      ManipulationInjector::UpdatePanContact(this, 0, *(struct tagPOINT *)&v30.left);
      v22 = (struct tagPOINT *)((char *)this + 144);
      v30 = (struct tagRECT)*((_OWORD *)this + 4);
      ManipulationInjector::Clip(this, (struct tagPOINT *)this + 18, &v30, 0);
      v9 = ManipulationInjector::CheckOverlapAndEvent(this);
      v21 = *((_DWORD *)this + 1);
    }
    if ( v21 != 2 || !*((_BYTE *)this + 12) )
    {
      if ( v9 )
      {
        if ( v21 == 1 && *((_BYTE *)this + 12) )
        {
          ManipulationInjector::AddContact(this, *(struct tagPOINT *)((char *)this + 80), 0, a4);
          ManipulationInjector::InjectAndScrub(this);
          *((_DWORD *)this + 31) = 0x40000;
          *((_DWORD *)this + 69) = 131078;
        }
        else
        {
          ManipulationInjector::InjectAndScrub(this);
          *((_DWORD *)this + 31) = 0x40000;
          ManipulationInjector::InjectAndScrub(this);
          ManipulationInjector::AddContact(this, *(struct tagPOINT *)((char *)this + 80), 0, a4);
        }
      }
      goto LABEL_50;
    }
    v23 = *((_DWORD *)this + 10);
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( !v24 )
      {
        if ( *((_DWORD *)this + 12) != 2 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x243,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v8);
          __debugbreak();
        }
        v31 = (struct tagRECT)*((_OWORD *)this + 4);
        v25 = **(struct tagRECT ***)&ManipulationInjector::ComputeSafeDelta(this, (unsigned int)&v30, 0LL, v20);
        v31 = (struct tagRECT)*((_OWORD *)this + 4);
        v26 = **(struct tagPOINT **)&ManipulationInjector::ComputeSafeDelta(
                                       this,
                                       (unsigned int)&v30,
                                       (struct tagPOINT)1LL,
                                       v25);
        ManipulationInjector::UpdatePanContact(this, 0, v26);
        v31 = (struct tagRECT)*((_OWORD *)this + 4);
        if ( ManipulationInjector::Clip(this, v22, &v31, 0) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x24A,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v27);
          __debugbreak();
        }
        ManipulationInjector::UpdatePanContact(this, 1u, v26);
        v31 = (struct tagRECT)*((_OWORD *)this + 4);
        if ( ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v31, 0) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x24E,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v28);
          JUMPOUT(0x1800B97CCLL);
        }
        *((_DWORD *)this + 10) = 2;
        goto LABEL_50;
      }
      if ( v24 != 1 )
        return;
      if ( *((_DWORD *)this + 12) != 2 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x257,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v8);
        __debugbreak();
      }
      *((_DWORD *)this + 31) = 0x40000;
      ManipulationInjector::UpdatePanContact(this, 1u, (struct tagPOINT)v20);
      v30 = (struct tagRECT)*((_OWORD *)this + 4);
      ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v30, 0);
    }
    ManipulationInjector::UpdatePanOverlapState(this);
LABEL_50:
    ManipulationInjector::InjectAndScrub(this);
  }
}
