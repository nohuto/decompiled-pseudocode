/*
 * XREFs of ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C012F134
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C012DC88 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C028B9E8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000D078 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiInternal::GetCurrentSourceResolution(
        DpiInternal *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const struct _DXGDMM_VIDPN_INTERFACE *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4)
{
  __int64 (__fastcall *v4)(DpiInternal *, __int64, __int64 *, __int64 *); // rax
  __int64 v7; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v25[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v26; // [rsp+40h] [rbp-20h]
  void (__fastcall *v27)(__int64, __int64); // [rsp+48h] [rbp-18h]
  __int64 v28; // [rsp+50h] [rbp-10h]
  int v29; // [rsp+58h] [rbp-8h]
  __int64 v30; // [rsp+88h] [rbp+28h] BYREF
  __int64 v31; // [rsp+90h] [rbp+30h] BYREF

  v4 = (__int64 (__fastcall *)(DpiInternal *, __int64, __int64 *, __int64 *))*((_QWORD *)a2 + 1);
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v7 = *(unsigned int *)a3;
  v24 = 0LL;
  v31 = 0LL;
  v25[0] = 0;
  v9 = v4(this, v7, &v31, &v24);
  v13 = v9;
  if ( v9 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v20 + 24) = v13;
    WdLogEvent5_WdError(v20);
    return (unsigned int)v13;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v25,
    v31,
    *((_QWORD *)a2 + 2),
    (__int64)this);
  v30 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v24 + 24))(v31, &v30);
  v13 = v14;
  if ( v14 >= 0 )
  {
    v18 = *(_DWORD *)(v30 + 4);
    if ( v18 == 1 || v18 > 2 && v18 <= 4 )
    {
      if ( *(_DWORD *)(v30 + 8) && *(_DWORD *)(v30 + 12) )
      {
        *(_QWORD *)&a4->VidPnSourceId = *(_QWORD *)(v30 + 8);
LABEL_7:
        (*(void (__fastcall **)(__int64))(v24 + 32))(v31);
        goto LABEL_8;
      }
      v23 = WdLogNewEntry5_WdAssertion(v16, v30);
      *(_QWORD *)(v23 + 24) = v30;
      WdLogEvent5_WdAssertion(v23);
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v16, v30, v17);
      *(_QWORD *)(v22 + 24) = *(int *)(v30 + 4);
      WdLogEvent5_WdError(v22);
    }
    LODWORD(v13) = -1073741823;
    goto LABEL_7;
  }
  v21 = WdLogNewEntry5_WdError(v16, v15, v17);
  *(_QWORD *)(v21 + 24) = v13;
  WdLogEvent5_WdError(v21);
LABEL_8:
  if ( v25[0] )
    v27(v28, v26);
  return (unsigned int)v13;
}
