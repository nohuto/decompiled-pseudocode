/*
 * XREFs of ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C02B5CE4
 * Callers:
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02B6544 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0003F38 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00199C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ @ 0x1C0054770 (-GetContainer@-$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E471C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall VIDPN_MGR::PinPathContentRotation(
        VIDPN_MGR *this,
        struct DMMVIDPNPRESENTPATH *const a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  _QWORD *v13; // rax
  __int64 Container; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  DXGK_ENUM_PIVOT v21; // [rsp+48h] [rbp+10h] BYREF

  v3 = a3;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !(_DWORD)v3 || (unsigned int)(v3 - 254) <= 1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = DMMVIDPNPRESENTPATH::PinContentRotation(a2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v3);
  v12 = v8;
  if ( v8 < 0 )
    goto LABEL_7;
  Container = ContainedBy<DMMVIDPNTOPOLOGY>::GetContainer((__int64)a2 + 40, v9);
  v17 = ContainedBy<DMMVIDPN>::GetContainer(Container + 160, v16);
  v18 = *((_QWORD *)a2 + 12);
  v21.VidPnSourceId = *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL);
  v21.VidPnTargetId = *(_DWORD *)(v18 + 24);
  v19 = VIDPN_MGR::FormalizeVidPnChange(
          (unsigned __int64)this,
          (struct D3DKMDT_HVIDPN__ *)(v17 & -(__int64)(v17 != -88)),
          9LL,
          1,
          &v21);
  v12 = v19;
  if ( v19 < 0 )
  {
    if ( v19 == -1071774970 )
    {
      v20 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v20 + 24) = v3;
      *(_QWORD *)(v20 + 32) = a2;
      WdLogEvent5_WdWarning(v20);
      return (unsigned int)v12;
    }
LABEL_7:
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
    v13[3] = v3;
    v13[4] = a2;
    v13[5] = v12;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v12;
  }
  return 0LL;
}
