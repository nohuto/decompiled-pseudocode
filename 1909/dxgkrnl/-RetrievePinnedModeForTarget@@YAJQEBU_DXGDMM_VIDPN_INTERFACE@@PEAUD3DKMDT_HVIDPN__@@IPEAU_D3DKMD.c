/*
 * XREFs of ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0237768
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C0236C08 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000D078 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RetrievePinnedModeForTarget(
        const struct _DXGDMM_VIDPN_INTERFACE *const a1,
        struct D3DKMDT_HVIDPN__ *a2,
        unsigned int a3,
        struct _D3DKMDT_VIDPN_TARGET_MODE *a4)
{
  __int64 v5; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rax
  _OWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v25; // [rsp+30h] [rbp-40h] BYREF
  _OWORD *v26; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v27[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v28; // [rsp+48h] [rbp-28h]
  void (__fastcall *v29)(__int64, __int64); // [rsp+50h] [rbp-20h]
  __int64 v30; // [rsp+58h] [rbp-18h]
  int v31; // [rsp+60h] [rbp-10h]
  __int64 v32; // [rsp+90h] [rbp+20h] BYREF

  v5 = a3;
  v8 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))a1 + 3))(a2, a3, &v32, &v25);
  v12 = v8;
  if ( v8 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
    v13[3] = v5;
    v13[4] = a2;
    v13[5] = v12;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v12;
  }
  v14 = *((_QWORD *)a1 + 4);
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v27[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v27,
    v32,
    v14,
    (__int64)a2);
  v15 = (*(__int64 (__fastcall **)(__int64, _OWORD **))(v25 + 24))(v32, &v26);
  v19 = v28;
  v12 = v15;
  if ( v15 < 0 )
    goto LABEL_6;
  if ( v15 == 1075708679 )
  {
    v12 = -1071774970LL;
LABEL_6:
    v20 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v20 + 24) = v19;
    *(_QWORD *)(v20 + 32) = v12;
    WdLogEvent5_WdError(v20);
    goto LABEL_8;
  }
  v21 = v26;
  v22 = v25;
  v23 = v32;
  *(_OWORD *)&a4->Id = *v26;
  *(_OWORD *)&a4->VideoSignalInfo.TotalSize.cy = v21[1];
  *(_OWORD *)&a4->VideoSignalInfo.VSyncFreq.Denominator = v21[2];
  *(_OWORD *)&a4->VideoSignalInfo.PixelRate = v21[3];
  *(_QWORD *)&a4->WireFormatAndPreference.0 = *((_QWORD *)v21 + 8);
  (*(void (__fastcall **)(__int64))(v22 + 32))(v23);
LABEL_8:
  if ( v27[0] )
    v29(v30, v19);
  return (unsigned int)v12;
}
