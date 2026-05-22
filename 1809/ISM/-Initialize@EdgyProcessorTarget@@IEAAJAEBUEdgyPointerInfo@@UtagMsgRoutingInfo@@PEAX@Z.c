/*
 * XREFs of ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x1800CCB48
 * Callers:
 *     ?Create@EdgyProcessorTarget@@SAJPEAVEdgyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAXPEAPEAV1@@Z @ 0x1800CCE08 (-Create@EdgyProcessorTarget@@SAJPEAVEdgyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1800CCFCC (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 *     ??0GestureSession@@AEAA@XZ @ 0x1800D53D4 (--0GestureSession@@AEAA@XZ.c)
 *     ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x180104394 (--0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EdgyProcessorTarget::Initialize(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  int updated; // ebx
  __int64 v11; // rdx
  TouchInfoAdapter *v12; // rax
  bool v13; // r8
  TouchInfoAdapter *v14; // rbx
  TouchInfoAdapter *v15; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rax
  _DWORD *v18; // rbx
  __int64 v19; // rcx
  _DWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  GestureSession *v23; // rax
  GestureSession *v24; // rbx
  GestureSession *v25; // rax
  _OWORD v27[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v28; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = a1 + 20;
  v9 = a1[20];
  if ( v9 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  updated = CoreUICreate(v8);
  if ( updated < 0 )
  {
    v11 = 26LL;
    goto LABEL_40;
  }
  v12 = (TouchInfoAdapter *)malloc(0x2C0uLL);
  v14 = v12;
  if ( v12 )
    memset_0(v12, 0, 0x2C0uLL);
  if ( v14 )
    v14 = TouchInfoAdapter::TouchInfoAdapter(
            v14,
            (struct ITouchInfoAdapterClient *)((unsigned __int64)(a1 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64)),
            v13);
  v15 = (TouchInfoAdapter *)a1[18];
  if ( v15 != v14 )
  {
    v16 = a1[18];
    if ( v14 )
    {
      (*(void (__fastcall **)(TouchInfoAdapter *))(*(_QWORD *)v14 + 8LL))(v14);
      v16 = a1[18];
    }
    a1[18] = v14;
    v15 = v14;
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v15 = (TouchInfoAdapter *)a1[18];
    }
  }
  if ( !v15 )
  {
    v11 = 32LL;
LABEL_39:
    updated = -2147024882;
    goto LABEL_40;
  }
  v17 = malloc(0x70uLL);
  v18 = v17;
  if ( v17 )
    memset_0(v17, 0, 0x70uLL);
  if ( v18 )
  {
    v19 = a1[18];
    *(_QWORD *)v18 = &RefCountedObject::`vftable';
    v18[2] = 1;
    *(_QWORD *)v18 = &SessionBasedPointerDeviceArbitration::`vftable';
    *((_QWORD *)v18 + 2) = v19;
    v18[26] = 0;
    *((_WORD *)v18 + 54) = 0;
    memset_0(v18 + 6, 0, 0x50uLL);
  }
  v20 = (_DWORD *)a1[17];
  if ( v20 != v18 )
  {
    v21 = a1[17];
    if ( v18 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 8LL))(v18);
      v21 = a1[17];
    }
    a1[17] = v18;
    v20 = v18;
    if ( v21 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      v20 = (_DWORD *)a1[17];
    }
  }
  if ( !v20 )
  {
    v11 = 39LL;
    goto LABEL_39;
  }
  v22 = a1[19];
  if ( v22 )
  {
    a1[19] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  a1[19] = 0LL;
  v23 = (GestureSession *)malloc(0x4B0uLL);
  v24 = v23;
  if ( v23 )
    memset_0(v23, 0, 0x4B0uLL);
  if ( v24 )
    v25 = GestureSession::GestureSession(v24);
  else
    v25 = 0LL;
  if ( !v25 )
  {
    v11 = 42LL;
    goto LABEL_39;
  }
  a1[19] = v25;
  v27[0] = *(_OWORD *)a3;
  v27[1] = *(_OWORD *)(a3 + 16);
  v28 = *(_QWORD *)(a3 + 32);
  updated = EdgyProcessorTarget::UpdateInputTarget(a1, v27, a4, a2);
  if ( updated >= 0 )
    return 0LL;
  v11 = 44LL;
LABEL_40:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
