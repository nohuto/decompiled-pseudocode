/*
 * XREFs of ?NotifyRemovedAndStop@WGIController@@QEAAJXZ @ 0x18006DAD4
 * Callers:
 *     ?OnRawGameControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x18006B490 (-OnRawGameControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@I.c)
 *     ??1WGIController@@UEAA@XZ @ 0x18006CEDC (--1WGIController@@UEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@EdgyInputTarget@@UEAAKXZ @ 0x1800036E0 (-Release@EdgyInputTarget@@UEAAKXZ.c)
 *     ?NotifyDeviceRemoval@WGIController@@AEAAJXZ @ 0x18006EE8C (-NotifyDeviceRemoval@WGIController@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIController::NotifyRemovedAndStop(WGIController *this)
{
  int v2; // eax
  int v3; // eax
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rcx
  EdgyInputTarget *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 21) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, WGIController *))(**((_QWORD **)this + 8) + 176LL))(
           *((_QWORD *)this + 8),
           this);
    if ( v2 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x19E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v2);
      JUMPOUT(0x18006DC40LL);
    }
    v3 = WGIController::NotifyDeviceRemoval(this);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x19F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v3);
      __debugbreak();
    }
    *((_QWORD *)this + 21) = 0LL;
  }
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 9);
  if ( v4 )
  {
    v13 = 0LL;
    v5 = (**v4)(v4, &GUID_1baf6522_5f64_42c5_8267_b9fe2215bfbd, &v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 428LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v5);
      v8 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return v6;
    }
    if ( *((_QWORD *)this + 31) )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 88LL))(v13, *((_QWORD *)this + 31));
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 431LL;
        goto LABEL_11;
      }
      *((_QWORD *)this + 31) = 0LL;
    }
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v11 = (EdgyInputTarget *)*((_QWORD *)this + 14);
  if ( v11 )
  {
    *((_QWORD *)this + 14) = 0LL;
    EdgyInputTarget::Release(v11);
  }
  return 0LL;
}
