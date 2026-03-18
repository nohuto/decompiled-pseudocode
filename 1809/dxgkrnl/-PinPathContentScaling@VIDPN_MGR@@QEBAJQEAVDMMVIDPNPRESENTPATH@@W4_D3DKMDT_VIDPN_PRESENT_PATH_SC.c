/*
 * XREFs of ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C027D9E0
 * Callers:
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C027E0F0 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000A71C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ @ 0x1C004D4F0 (-GetContainer@-$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ.c)
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C00E4824 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E5038 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 */

__int64 __fastcall VIDPN_MGR::PinPathContentScaling(
        ADAPTER_DISPLAY **this,
        struct DMMVIDPNPRESENTPATH *const a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a3,
        unsigned __int8 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 Container; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  D3DKMDT_HVIDPN v17; // r14
  __int64 v18; // rax
  int IsSupportedVidPn; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  _QWORD *v25; // r15
  ADAPTER_DISPLAY *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  ADAPTER_DISPLAY *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  int v35; // eax
  __int64 v36; // r9
  _QWORD *v37; // r15
  ADAPTER_DISPLAY *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  DXGK_ENUM_PIVOT v41; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int8 v42; // [rsp+68h] [rbp+20h] BYREF

  v42 = a4;
  v4 = a3;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !(_DWORD)v4 || (unsigned int)(v4 - 254) <= 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = DMMVIDPNPRESENTPATH::PinContentScaling(a2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v4);
  v11 = v9;
  if ( v9 < 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v12[5] = v11;
LABEL_8:
    v12[4] = a2;
    v12[3] = v4;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v11;
  }
  Container = ContainedBy<DMMVIDPNTOPOLOGY>::GetContainer((__int64)a2 + 40);
  v15 = ContainedBy<DMMVIDPN>::GetContainer(Container + 160);
  v16 = *((_QWORD *)a2 + 12);
  v41.VidPnSourceId = *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL);
  v41.VidPnTargetId = *(_DWORD *)(v16 + 24);
  v17 = (D3DKMDT_HVIDPN)(v15 & -(__int64)(v15 != -88));
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdAssertion(-(v15 + 88));
    WdLogEvent5_WdAssertion(v18);
  }
  v42 = 0;
  IsSupportedVidPn = VIDPN_MGR::_IsSupportedVidPn(this, v17, &v42);
  v11 = IsSupportedVidPn;
  if ( IsSupportedVidPn >= 0 )
  {
    if ( !v42 )
    {
      v11 = WdLogNewEntry5_WdDmmEvent(v21, v20, v22, v23);
      *(_QWORD *)(v11 + 24) = v17;
      v32 = this[1];
      if ( !v32 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v31);
        WdLogEvent5_WdAssertion(v33);
        v32 = this[1];
      }
      *(_QWORD *)(v11 + 32) = *((_QWORD *)v32 + 2);
      WdLogEvent5_WdDmmEvent(v11);
      LODWORD(v11) = -1071774970;
      v34 = v4;
      goto LABEL_27;
    }
    v35 = VIDPN_MGR::_EnumVidPnCofuncModality((__int64)this, (__int64)v17, 7, &v41);
    v11 = v35;
    if ( v35 >= 0 )
    {
      LODWORD(v11) = 0;
    }
    else
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28, v30, v36);
      v37[3] = v17;
      v37[4] = 7LL;
      v37[5] = &v41;
      v38 = this[1];
      if ( !v38 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v29);
        WdLogEvent5_WdAssertion(v39);
        v38 = this[1];
      }
      v37[6] = *((_QWORD *)v38 + 2);
      v37[7] = v11;
    }
  }
  else
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v25[3] = v17;
    v26 = this[1];
    if ( !v26 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v27);
      v26 = this[1];
    }
    v25[4] = *((_QWORD *)v26 + 2);
    v25[5] = v11;
    WdLogEvent5_WdError(v25);
  }
  if ( (int)v11 < 0 )
  {
    v34 = v4;
    if ( (_DWORD)v11 != -1071774970 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v29);
      v12[5] = (int)v11;
      goto LABEL_8;
    }
LABEL_27:
    v40 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v40 + 24) = v34;
    *(_QWORD *)(v40 + 32) = a2;
    WdLogEvent5_WdWarning(v40);
    return (unsigned int)v11;
  }
  return 0LL;
}
