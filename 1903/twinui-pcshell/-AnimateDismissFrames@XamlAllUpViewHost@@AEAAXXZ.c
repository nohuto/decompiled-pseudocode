/*
 * XREFs of ?AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ @ 0x1802C688C
 * Callers:
 *     ?DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ @ 0x1802C8CD0 (-DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___ @ 0x1802C11E4 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_M.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1802C8AE0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CB058 (-InternalRelease@-$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlAllUpViewHost::AnimateDismissFrames(XamlAllUpViewHost *this)
{
  XamlAllUpViewHost *v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  XamlAllUpViewHost *v4; // [rsp+50h] [rbp+18h] BYREF

  if ( *((_QWORD *)this + 44) < (unsigned __int64)((__int64)(*((_QWORD *)this + 42) - *((_QWORD *)this + 41)) >> 3) )
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(this);
  if ( *((_DWORD *)this + 176) == 1 )
  {
    v4 = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 39);
    v2 = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 39);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___(
      &v3,
      *((__int64 **)this + 41),
      *((__int64 **)this + 42),
      &v2);
    Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(&v3);
    *((_DWORD *)this + 176) = 2;
    Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(&v4);
  }
}
