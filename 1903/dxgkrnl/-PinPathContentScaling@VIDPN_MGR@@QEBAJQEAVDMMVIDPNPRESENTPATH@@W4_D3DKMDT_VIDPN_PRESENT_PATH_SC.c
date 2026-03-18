/*
 * XREFs of ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C02B5A28
 * Callers:
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02B6134 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00057AC (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ @ 0x1C0054730 (-GetContainer@-$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E351C (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C00E420C (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinPathContentScaling(
        ADAPTER_DISPLAY **this,
        struct DMMVIDPNPRESENTPATH *const a2,
        __int64 a3,
        unsigned __int8 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 Container; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  D3DKMDT_HVIDPN v21; // r14
  __int64 v22; // rax
  int IsSupportedVidPn; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // r15
  ADAPTER_DISPLAY *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  ADAPTER_DISPLAY *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  int v40; // eax
  _QWORD *v41; // r15
  ADAPTER_DISPLAY *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  DXGK_ENUM_PIVOT v45; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int8 v46; // [rsp+68h] [rbp+20h] BYREF

  v46 = a4;
  v4 = (int)a3;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !(_DWORD)v4 || (unsigned int)(v4 - 254) <= 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = DMMVIDPNPRESENTPATH::PinContentScaling(a2, (unsigned int)v4, a3);
  v13 = v9;
  if ( v9 < 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
    v14[5] = v13;
LABEL_8:
    v14[4] = a2;
    v14[3] = v4;
    WdLogEvent5_WdError(v14);
    return (unsigned int)v13;
  }
  Container = ContainedBy<DMMVIDPNTOPOLOGY>::GetContainer((__int64)a2 + 40, v10);
  v18 = ContainedBy<DMMVIDPN>::GetContainer(Container + 160, v17);
  v19 = *((_QWORD *)a2 + 12);
  v45.VidPnSourceId = *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL);
  v20 = *(unsigned int *)(v19 + 24);
  v45.VidPnTargetId = *(_DWORD *)(v19 + 24);
  v21 = (D3DKMDT_HVIDPN)(v18 & -(__int64)(v18 != -88));
  if ( !v21 )
  {
    v22 = WdLogNewEntry5_WdAssertion(-(v18 + 88), v20);
    WdLogEvent5_WdAssertion(v22);
  }
  v46 = 0;
  IsSupportedVidPn = VIDPN_MGR::_IsSupportedVidPn(this, v21, &v46);
  v13 = IsSupportedVidPn;
  if ( IsSupportedVidPn >= 0 )
  {
    if ( !v46 )
    {
      v13 = WdLogNewEntry5_WdDmmEvent(v25, v24);
      *(_QWORD *)(v13 + 24) = v21;
      v37 = this[1];
      if ( !v37 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v36, v35);
        WdLogEvent5_WdAssertion(v38);
        v37 = this[1];
      }
      *(_QWORD *)(v13 + 32) = *((_QWORD *)v37 + 2);
      WdLogEvent5_WdDmmEvent(v13);
      LODWORD(v13) = -1071774970;
      v39 = v4;
      goto LABEL_27;
    }
    v40 = VIDPN_MGR::_EnumVidPnCofuncModality((__int64)this, (__int64)v21, 7, &v45);
    v13 = v40;
    if ( v40 >= 0 )
    {
      LODWORD(v13) = 0;
    }
    else
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdTrace(v33, v32);
      v41[3] = v21;
      v41[4] = 7LL;
      v41[5] = &v45;
      v42 = this[1];
      if ( !v42 )
      {
        v43 = WdLogNewEntry5_WdAssertion(v33, v32);
        WdLogEvent5_WdAssertion(v43);
        v42 = this[1];
      }
      v41[6] = *((_QWORD *)v42 + 2);
      v41[7] = v13;
    }
  }
  else
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24, v26);
    v29[3] = v21;
    v30 = this[1];
    if ( !v30 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v28, v27);
      WdLogEvent5_WdAssertion(v31);
      v30 = this[1];
    }
    v29[4] = *((_QWORD *)v30 + 2);
    v29[5] = v13;
    WdLogEvent5_WdError(v29);
  }
  if ( (int)v13 < 0 )
  {
    v39 = v4;
    if ( (_DWORD)v13 != -1071774970 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32, v34);
      v14[5] = (int)v13;
      goto LABEL_8;
    }
LABEL_27:
    v44 = WdLogNewEntry5_WdWarning(v33, v32, v34);
    *(_QWORD *)(v44 + 24) = v39;
    *(_QWORD *)(v44 + 32) = a2;
    WdLogEvent5_WdWarning(v44);
    return (unsigned int)v13;
  }
  return 0LL;
}
