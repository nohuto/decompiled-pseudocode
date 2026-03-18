/*
 * XREFs of ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0003F38
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000ED50 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0131300 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C0147660 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C02B5CE4 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003D9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0003DB8 (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003DE0 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::PinContentRotation(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a2)
{
  __int64 v2; // rdi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _QWORD *v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  _QWORD *v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // eax

  v2 = a2;
  if ( !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(a2) )
  {
    v13 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdError)();
    v13[3] = v2;
    v13[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v13[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    WdLogEvent5_WdError(v13);
  }
  v4 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v2);
  v7 = 251LL;
  v8 = v4 - 1;
  if ( !v8 )
  {
    LOBYTE(v9) = *((_BYTE *)this + 124);
    goto LABEL_5;
  }
  v14 = v8 - 1;
  if ( !v14 )
  {
    v9 = *((_DWORD *)this + 31) >> 1;
LABEL_5:
    if ( (v9 & 1) == 0 )
      goto LABEL_15;
    goto LABEL_6;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v9 = *((_DWORD *)this + 31) >> 2;
    goto LABEL_5;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v9 = *((_DWORD *)this + 31) >> 3;
    goto LABEL_5;
  }
  if ( v16 != 251 )
  {
LABEL_14:
    v17 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v17 + 24) = v2;
    WdLogEvent5_WdError(v17);
    goto LABEL_15;
  }
LABEL_6:
  v10 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(v2) - 1;
  if ( !v10 )
  {
    v11 = *((_DWORD *)this + 31) >> 4;
    goto LABEL_8;
  }
  v19 = v10 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 == (_DWORD)v7 )
          goto LABEL_9;
        goto LABEL_14;
      }
      v11 = *((_DWORD *)this + 31) >> 7;
    }
    else
    {
      v11 = *((_DWORD *)this + 31) >> 6;
    }
  }
  else
  {
    v11 = *((_DWORD *)this + 31) >> 5;
  }
LABEL_8:
  if ( (v11 & 1) != 0 )
  {
LABEL_9:
    *((_DWORD *)this + 29) = v2;
    return 0LL;
  }
LABEL_15:
  v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, v5, v7);
  v18[3] = v2;
  v18[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
  v18[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
  WdLogEvent5_WdWarning(v18);
  return 3223192326LL;
}
