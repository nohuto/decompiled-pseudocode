/*
 * XREFs of ??0InputDeliveryServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180029EF4
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18001CF90 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000C2CC (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18001B270 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@Z@std@@@Z @ 0x18002A3C4 (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@QEAAXAEBV-$ComPtr@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
InputDeliveryServer *__fastcall InputDeliveryServer::InputDeliveryServer(
        InputDeliveryServer *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  _QWORD *v3; // rbx
  __int64 *v4; // rsi
  struct IViewHierarchy *ViewHierarchy; // rax
  struct IViewHierarchy *v6; // rbx
  struct IViewHierarchy *v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  _QWORD v12[9]; // [rsp+28h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  *(_QWORD *)this = &BamoInputDeliveryServerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &InputDeliveryServer::`vftable'{for `IInputDeliveryServerPrincipal'};
  v3 = (_QWORD *)((char *)this + 16);
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((InputDeliveryServer *)((char *)this + 16), a2);
  *v3 = &BamoImpl::BamoInputDeliveryServerPrincipalImpl::`vftable';
  *(_QWORD *)this = &InputDeliveryServer::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &InputDeliveryServer::`vftable'{for `IInputDeliveryServerPrincipal'};
  v4 = (__int64 *)((char *)this + 56);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  ViewHierarchy = ISMStatics::GetViewHierarchy();
  v6 = ViewHierarchy;
  v7 = (struct IViewHierarchy *)*((_QWORD *)this + 11);
  if ( v7 != ViewHierarchy )
  {
    if ( ViewHierarchy )
    {
      (*(void (__fastcall **)(struct IViewHierarchy *))(*(_QWORD *)ViewHierarchy + 8LL))(ViewHierarchy);
      v7 = (struct IViewHierarchy *)*((_QWORD *)this + 11);
    }
    *((_QWORD *)this + 11) = v6;
    if ( v7 )
      (*(void (__fastcall **)(struct IViewHierarchy *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  v8 = *v4;
  if ( *v4 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = CoreUICreate((char *)this + 56);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v9);
    JUMPOUT(0x18002A067LL);
  }
  v12[0] = off_18013A5A8;
  v12[1] = this;
  v12[7] = v12;
  ((void (__fastcall *)(char *, char *, __int64, _QWORD *, __int64))KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>::Initialize)(
    (char *)this + 104,
    (char *)this + 56,
    v10,
    v12,
    -2LL);
  return this;
}
