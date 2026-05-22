/*
 * XREFs of ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1800CCFCC
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800CA970 (-OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialSt.c)
 *     ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x1800CCB48 (-Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18000C488 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18001D93C (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x18008F878 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EdgyProcessorTarget::UpdateInputTarget(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  _OWORD *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r14
  char v8; // bl
  int (__fastcall ***v9)(_QWORD, GUID *, int *); // rcx
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *InputSiteFromInputSinkHandle; // rax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // r15d
  __int64 v19; // rcx
  __int64 v20; // rdi
  const char *v21; // r9
  int v22[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v23; // [rsp+28h] [rbp-70h] BYREF
  __int64 v24; // [rsp+30h] [rbp-68h] BYREF
  __int64 v25; // [rsp+38h] [rbp-60h]
  __int64 v26; // [rsp+40h] [rbp-58h]
  __int64 v27; // [rsp+48h] [rbp-50h]
  wil::ResultException *v28; // [rsp+50h] [rbp-48h] BYREF
  __int64 v29; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v27 = -2LL;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v26 = a1;
  v29 = a2;
  v25 = a3;
  v8 = 0;
  v9 = *(int (__fastcall ****)(_QWORD, GUID *, int *))(a1 + 128);
  if ( v9 )
  {
    *(_QWORD *)v22 = 0LL;
    if ( (**v9)(v9, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, v22) >= 0 )
    {
      if ( !*(_QWORD *)v22 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x72,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
          (const char *)0x8000FFFFLL);
        v10 = *(_QWORD *)v22;
        if ( *(_QWORD *)v22 )
        {
          *(_QWORD *)v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        return 2147549183LL;
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)v22 + 24LL))(*(_QWORD *)v22, v6, v5);
      if ( v8 && v5 )
        NtCloseCompositionInputSink(v5);
    }
    v12 = *(_QWORD *)v22;
    if ( *(_QWORD *)v22 )
    {
      *(_QWORD *)v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v8 )
    {
LABEL_39:
      *(_DWORD *)(v7 + 32) = 0;
      *(_OWORD *)(v7 + 48) = *v4;
      *(_OWORD *)(v7 + 64) = v4[1];
      return 0LL;
    }
  }
  v24 = 0LL;
  v13 = 0LL;
  v23 = 0LL;
  if ( v5 )
  {
    try
    {
      InputSiteManager = ISMStatics::GetInputSiteManager();
      InputSiteFromInputSinkHandle = InputSiteManager::GetInputSiteFromInputSinkHandle(
                                       (__int64)InputSiteManager,
                                       (__int64 *)v22,
                                       v5);
      if ( &v23 != InputSiteFromInputSinkHandle )
      {
        v13 = *InputSiteFromInputSinkHandle;
        *InputSiteFromInputSinkHandle = 0LL;
      }
      v23 = v13;
      v16 = *(_QWORD *)v22;
      if ( *(_QWORD *)v22 )
      {
        *(_QWORD *)v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    catch ( wil::ResultException *v28 )
    {
      v21 = (const char *)*((unsigned int *)v28 + 7);
      v22[0] = (int)v21;
      if ( (int)v21 >= 0 )
      {
        v4 = a4;
        v13 = v23;
        v7 = v26;
        LODWORD(v6) = v29;
        v5 = v25;
        goto LABEL_22;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        v21);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      return (unsigned int)v22[0];
    }
  }
LABEL_22:
  *(_QWORD *)v22 = v13;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v17 = DWMInputTarget::Create(v6, (__int64 *)v22, (__int64)&v24);
  v18 = v17;
  if ( v17 >= 0 )
  {
    NtCloseCompositionInputSink(v5);
    v19 = *(_QWORD *)(v7 + 128);
    v20 = v24;
    if ( v19 != v24 )
    {
      if ( v24 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
        v19 = *(_QWORD *)(v7 + 128);
      }
      *(_QWORD *)(v7 + 128) = v20;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    goto LABEL_39;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA4,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
    (const char *)(unsigned int)v17);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  return v18;
}
