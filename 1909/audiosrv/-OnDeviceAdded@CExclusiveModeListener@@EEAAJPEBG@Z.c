/*
 * XREFs of ?OnDeviceAdded@CExclusiveModeListener@@EEAAJPEBG@Z @ 0x180125BD0
 * Callers:
 *     ?OnDeviceStateChanged@CExclusiveModeListener@@EEAAJPEBGK@Z @ 0x180125D00 (-OnDeviceStateChanged@CExclusiveModeListener@@EEAAJPEBGK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1AA0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSelectionMode@@@Z @ 0x180126C4C (-SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSel.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CExclusiveModeListener::OnDeviceAdded(CExclusiveModeListener *this, const unsigned __int16 *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  int v10; // [rsp+40h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+28h] BYREF

  v3 = *((_QWORD *)this + 7);
  v12 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, a2, &v12);
  if ( v4 >= 0 )
  {
    v11 = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v11);
    v5 = (**v12)(v12, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v11);
    v6 = retaddr;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 24LL))(v11, &v10);
      v6 = retaddr;
      if ( v5 >= 0 )
      {
        if ( v10 )
          goto LABEL_11;
        v5 = CExclusiveModeListener::SetDeviceRendererSelectionMode(retaddr, v12, *((unsigned int *)this + 38));
        v6 = retaddr;
        if ( v5 >= 0 )
          goto LABEL_11;
        v7 = 554LL;
      }
      else
      {
        v7 = 552LL;
      }
    }
    else
    {
      v7 = 549LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v6,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)v5);
LABEL_11:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
    goto LABEL_12;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x222,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    (const char *)(unsigned int)v4);
LABEL_12:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
  return 0LL;
}
