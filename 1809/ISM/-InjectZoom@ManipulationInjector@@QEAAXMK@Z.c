/*
 * XREFs of ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800B97D4
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x1800351D4 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 *     ?OnGazeUpdate@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004DB84 (-OnGazeUpdate@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x1800B931C (-CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800B9D2C (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x1800BA3EC (-Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800BA61C (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?AddZoomContacts@ManipulationInjector@@AEAAXK@Z @ 0x1800BA668 (-AddZoomContacts@ManipulationInjector@@AEAAXK@Z.c)
 *     ?UpdateZoomContacts@ManipulationInjector@@AEAAXIM@Z @ 0x1800BA798 (-UpdateZoomContacts@ManipulationInjector@@AEAAXIM@Z.c)
 *     ?UpdateZoomContactsForThreshold@ManipulationInjector@@AEAAXI@Z @ 0x1800BA824 (-UpdateZoomContactsForThreshold@ManipulationInjector@@AEAAXI@Z.c)
 */

void __fastcall ManipulationInjector::InjectZoom(ManipulationInjector *this, float a2, unsigned int a3)
{
  const char *v5; // r9
  int v6; // eax
  int v7; // edi
  const char *v8; // rdx
  unsigned int v9; // edx
  unsigned int v10; // eax
  struct tagRECT v11; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !ManipulationInjector::IsInContactForDeviceId(this, a3) )
    return;
  if ( *((_BYTE *)this + 13) )
    DbgPrint("Zoom Delta: %d.%03d\n", (int)a2, (int)(float)(a2 * 1000.0) - 1000 * (int)a2);
  v6 = *((_DWORD *)this + 22);
  if ( v6 != 32 )
  {
    if ( v6 != 16 )
    {
      v10 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29D,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        (const char *)v10);
      __debugbreak();
    }
    if ( a2 >= 1.0 )
      goto LABEL_16;
    goto LABEL_9;
  }
  if ( a2 > 1.0 )
  {
LABEL_9:
    v7 = 16;
    if ( v6 == 16 )
      v7 = 32;
    if ( *((_BYTE *)this + 13) )
    {
      v8 = "Decreasing";
      if ( v6 != 16 )
        v8 = "Increasing";
      DbgPrint("Transitioning Zoom Type to %s\n", v8);
    }
    *((_DWORD *)this + 22) = v7;
  }
LABEL_16:
  if ( *((_DWORD *)this + 12) != 2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2A6,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      v5);
    JUMPOUT(0x1800B9A16LL);
  }
  ManipulationInjector::UpdateZoomContacts(this, 0, a2);
  v11 = (struct tagRECT)*((_OWORD *)this + 4);
  ManipulationInjector::Clip(this, (struct tagPOINT *)this + 18, &v11, 0);
  v11 = (struct tagRECT)*((_OWORD *)this + 4);
  ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v11, 0);
  if ( *(_DWORD *)this == 2 )
  {
    v11 = *(struct tagRECT *)((char *)this + 756);
    ManipulationInjector::Clip(this, (struct tagPOINT *)this + 19, &v11, 0);
    v11 = *(struct tagRECT *)((char *)this + 756);
    ManipulationInjector::Clip(this, (struct tagPOINT *)this + 38, &v11, 0);
  }
  if ( ManipulationInjector::CheckOverlapAndEvent(this) )
  {
    if ( *((_DWORD *)this + 2) == 1 && *((_BYTE *)this + 12) )
    {
      ManipulationInjector::AddZoomContacts(this, a3);
      ManipulationInjector::InjectAndScrub(this);
      *((_DWORD *)this + 31) = 0x40000;
      *((_DWORD *)this + 69) = 0x40000;
      ManipulationInjector::UpdateZoomContacts(this, 2u, 0.0);
    }
    else
    {
      ManipulationInjector::InjectAndScrub(this);
      *((_DWORD *)this + 31) = 0x40000;
      *((_DWORD *)this + 69) = 0x40000;
      ManipulationInjector::InjectAndScrub(this);
      ManipulationInjector::AddZoomContacts(this, a3);
      ManipulationInjector::InjectAndScrub(this);
      ManipulationInjector::UpdateZoomContactsForThreshold(this, v9);
    }
  }
  ManipulationInjector::InjectAndScrub(this);
}
