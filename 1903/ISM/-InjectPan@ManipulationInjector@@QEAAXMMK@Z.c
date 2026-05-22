/*
 * XREFs of ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800E8918
 * Callers:
 *     ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x18007533C (-ApplyPanDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008D724 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?OnGazeUpdate@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008E7EC (-OnGazeUpdate@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800E8918 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?fabs@@YAMM@Z @ 0x180079408 (-fabs@@YAMM@Z.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800E749C (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x1800E7798 (-CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ.c)
 *     ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x1800E77EC (-Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z.c)
 *     ?ComputeSafeDelta@ManipulationInjector@@AEAA?AUtagPOINT@@IU2@UtagRECT@@@Z @ 0x1800E7894 (-ComputeSafeDelta@ManipulationInjector@@AEAA-AUtagPOINT@@IU2@UtagRECT@@@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800E80EC (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800E8918 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800E8F24 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?RoundSubPixelToPixel@ManipulationInjector@@AEAAJM@Z @ 0x1800E8F70 (-RoundSubPixelToPixel@ManipulationInjector@@AEAAJM@Z.c)
 *     ?UpdatePanContact@ManipulationInjector@@AEAAXIUtagPOINT@@@Z @ 0x1800E94E0 (-UpdatePanContact@ManipulationInjector@@AEAAXIUtagPOINT@@@Z.c)
 *     ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x1800E9540 (-UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ.c)
 */

void __fastcall ManipulationInjector::InjectPan(ManipulationInjector *this, float a2, float a3, unsigned int a4)
{
  ManipulationInjector *v7; // rcx
  char v8; // r14
  float v9; // xmm3_4
  float v10; // xmm2_4
  int v11; // ecx
  float v12; // xmm0_4
  float v13; // xmm4_4
  int v14; // eax
  ManipulationInjector *v15; // rcx
  LONG v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  const char *v19; // r9
  bool v20; // zf
  struct tagRECT *v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  const char *v25; // r9
  int v26; // ecx
  int v27; // ecx
  struct tagRECT *v28; // r9
  struct tagPOINT v29; // rbx
  const char *v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  const char *v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  const char *v36; // r9
  struct tagRECT v37; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v38; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( ManipulationInjector::IsInContactForDeviceId(this, a4) )
  {
    v8 = 0;
    if ( *((_DWORD *)this + 22) != 1 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        531LL,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        (const char *)0x80070057LL);
      __debugbreak();
    }
    if ( !*((_BYTE *)this + 740) )
    {
      v7 = (ManipulationInjector *)*((unsigned int *)this + 184);
      if ( (int)v7 > 0 )
      {
        v9 = 0.0;
        *((_BYTE *)this + 740) = 1;
        v10 = fabs(a2);
        v12 = fabs(a3);
        v14 = -v11;
        if ( v10 <= v12 )
        {
          if ( a3 >= 0.0 )
            v14 = v11;
          v13 = (float)v14;
        }
        else
        {
          if ( a2 >= 0.0 )
            v14 = v11;
          v9 = (float)v14;
        }
        ManipulationInjector::InjectPan(this, v9, v13, a4);
      }
    }
    if ( *((_BYTE *)this + 13) )
      DbgPrint(
        "Pan Delta: (%d.%03d, %d.%03d)\n",
        (int)a2,
        (int)(float)(a2 * 1000.0) - 1000 * (int)a2,
        (int)a3,
        (int)(float)(a3 * 1000.0) - 1000 * (int)a3);
    v37.left = ManipulationInjector::RoundSubPixelToPixel(v7, a2);
    v16 = ManipulationInjector::RoundSubPixelToPixel(v15, a3);
    v20 = *((_DWORD *)this + 1) == 2;
    v37.top = v16;
    v21 = *(struct tagRECT **)&v37.left;
    if ( !v20 || (v22 = 2, !*((_DWORD *)this + 10)) )
    {
      if ( *((_DWORD *)this + 12) != 1 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          565LL,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v19);
        __debugbreak();
      }
      ManipulationInjector::UpdatePanContact(this, 0, *(struct tagPOINT *)&v37.left);
      v37 = (struct tagRECT)*((_OWORD *)this + 4);
      ManipulationInjector::Clip(this, (struct tagPOINT *)this + 18, &v37, 0);
      v8 = ManipulationInjector::CheckOverlapAndEvent(this, v23, v24, v25);
      v22 = *((_DWORD *)this + 1);
    }
    if ( v22 != 2 || !*((_BYTE *)this + 12) )
    {
      if ( v8 )
      {
        if ( v22 == 1 && *((_BYTE *)this + 12) )
        {
          ManipulationInjector::AddContact(
            (struct tagPOINT *)this,
            *(struct tagPOINT *)((char *)this + 80),
            0,
            (const char *)a4);
          ManipulationInjector::InjectAndScrub(this, v31, v32, v33);
          *((_DWORD *)this + 31) = 0x40000;
          *((_DWORD *)this + 69) = 131078;
        }
        else
        {
          ManipulationInjector::InjectAndScrub(this, v17, v18, v19);
          *((_DWORD *)this + 31) = 0x40000;
          ManipulationInjector::InjectAndScrub(this, v34, v35, v36);
          ManipulationInjector::AddContact(
            (struct tagPOINT *)this,
            *(struct tagPOINT *)((char *)this + 80),
            0,
            (const char *)a4);
        }
      }
      goto LABEL_42;
    }
    v26 = *((_DWORD *)this + 10);
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( !v27 )
      {
        if ( *((_DWORD *)this + 12) != 2 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            584LL,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v19);
          __debugbreak();
        }
        v38 = (struct tagRECT)*((_OWORD *)this + 4);
        v28 = **(struct tagRECT ***)&ManipulationInjector::ComputeSafeDelta(
                                       this,
                                       (struct tagRECT **)&v37,
                                       0LL,
                                       v21,
                                       &v38.left);
        v38 = (struct tagRECT)*((_OWORD *)this + 4);
        v29 = **(struct tagPOINT **)&ManipulationInjector::ComputeSafeDelta(
                                       this,
                                       (struct tagRECT **)&v37,
                                       (struct tagPOINT)1LL,
                                       v28,
                                       &v38.left);
        ManipulationInjector::UpdatePanContact(this, 0, v29);
        v38 = (struct tagRECT)*((_OWORD *)this + 4);
        if ( ManipulationInjector::Clip(this, (struct tagPOINT *)this + 18, &v38, 0) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            591LL,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v30);
          __debugbreak();
        }
        ManipulationInjector::UpdatePanContact(this, 1u, v29);
        v38 = (struct tagRECT)*((_OWORD *)this + 4);
        if ( ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v38, 0) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            595LL,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v19);
          __debugbreak();
        }
        *((_DWORD *)this + 10) = 2;
        goto LABEL_42;
      }
      if ( v27 != 1 )
        return;
      if ( *((_DWORD *)this + 12) != 2 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          604LL,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v19);
        __debugbreak();
      }
      *((_DWORD *)this + 31) = 0x40000;
      ManipulationInjector::UpdatePanContact(this, 1u, (struct tagPOINT)v21);
      v37 = (struct tagRECT)*((_OWORD *)this + 4);
      ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v37, 0);
    }
    ManipulationInjector::UpdatePanOverlapState(this);
LABEL_42:
    ManipulationInjector::InjectAndScrub(this, v17, v18, v19);
  }
}
