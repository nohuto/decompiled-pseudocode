/*
 * XREFs of ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x18010314C
 * Callers:
 *     ?Create@EdgyProcessorTarget@@SAJPEAVEdgyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAXPEAPEAV1@@Z @ 0x18010300C (-Create@EdgyProcessorTarget@@SAJPEAVEdgyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x180103EA0 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 *     ?GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z @ 0x18010A3A4 (-GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z.c)
 *     ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x180141BC8 (--0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgyProcessorTarget::Initialize(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rbx
  int updated; // ebx
  __int64 v10; // rdx
  TouchInfoAdapter *v12; // rax
  TouchInfoAdapter *v13; // rbx
  TouchInfoAdapter *v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rax
  _DWORD *v17; // rbx
  __int64 v18; // rcx
  _DWORD *v19; // rax
  __int64 v20; // rcx
  _OWORD v21[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = a1 + 20;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(a1 + 20);
  updated = CoreUICreate(v8);
  if ( updated < 0 )
  {
    v10 = 28LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  v12 = (TouchInfoAdapter *)RefCountedObject::operator new(0x2C0uLL);
  if ( v12 )
    v13 = TouchInfoAdapter::TouchInfoAdapter(
            v12,
            (struct ITouchInfoAdapterClient *)((unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL)),
            (unsigned __int8)a1 + 8);
  else
    v13 = 0LL;
  v14 = (TouchInfoAdapter *)a1[18];
  if ( v14 != v13 )
  {
    v15 = a1[18];
    if ( v13 )
    {
      (*(void (__fastcall **)(TouchInfoAdapter *))(*(_QWORD *)v13 + 8LL))(v13);
      v15 = a1[18];
    }
    a1[18] = v13;
    v14 = v13;
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v14 = (TouchInfoAdapter *)a1[18];
    }
  }
  if ( !v14 )
  {
    updated = -2147024882;
    v10 = 34LL;
    goto LABEL_3;
  }
  v16 = RefCountedObject::operator new(0x70uLL);
  v17 = v16;
  if ( v16 )
  {
    v18 = a1[18];
    *(_QWORD *)v16 = &RefCountedObject::`vftable';
    v16[2] = 1;
    *(_QWORD *)v16 = &SessionBasedPointerDeviceArbitration::`vftable';
    *((_QWORD *)v16 + 2) = v18;
    v16[26] = 0;
    *((_WORD *)v16 + 54) = 0;
    memset_0(v16 + 6, 0, 0x50uLL);
  }
  else
  {
    v17 = 0LL;
  }
  v19 = (_DWORD *)a1[17];
  if ( v19 != v17 )
  {
    v20 = a1[17];
    if ( v17 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 8LL))(v17);
      v20 = a1[17];
    }
    a1[17] = v17;
    v19 = v17;
    if ( v20 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      v19 = (_DWORD *)a1[17];
    }
  }
  if ( !v19 )
  {
    updated = -2147024882;
    v10 = 41LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(a1 + 19);
  updated = GestureRecognizerCreate((struct IGestureRecognizer **)a1 + 19);
  if ( updated < 0 )
  {
    v10 = 44LL;
    goto LABEL_3;
  }
  v21[0] = *(_OWORD *)a3;
  v21[1] = *(_OWORD *)(a3 + 16);
  v22 = *(_QWORD *)(a3 + 32);
  updated = EdgyProcessorTarget::UpdateInputTarget(a1, v21, a4, a2);
  if ( updated < 0 )
  {
    v10 = 46LL;
    goto LABEL_3;
  }
  return 0LL;
}
