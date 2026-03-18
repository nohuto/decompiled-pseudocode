/*
 * XREFs of ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C012F02C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C012DC88 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C028B9E8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000D078 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiInternal::GetCurrentTargetResolution(
        DpiInternal *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const struct _DXGDMM_VIDPN_INTERFACE *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4,
        struct _D3DKMDT_2DREGION *a5)
{
  __int64 (__fastcall *v5)(DpiInternal *, __int64, __int64 *, __int64 *); // rax
  __int64 v8; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v24[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v25; // [rsp+40h] [rbp-20h]
  void (__fastcall *v26)(__int64, __int64); // [rsp+48h] [rbp-18h]
  __int64 v27; // [rsp+50h] [rbp-10h]
  int v28; // [rsp+58h] [rbp-8h]
  __int64 v29; // [rsp+88h] [rbp+28h] BYREF
  __int64 v30; // [rsp+90h] [rbp+30h] BYREF

  v5 = (__int64 (__fastcall *)(DpiInternal *, __int64, __int64 *, __int64 *))*((_QWORD *)a2 + 3);
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0;
  v8 = *((unsigned int *)a3 + 1);
  v30 = 0LL;
  v29 = 0LL;
  v24[0] = 0;
  v10 = v5(this, v8, &v29, &v30);
  v14 = v10;
  if ( v10 < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v21 + 24) = v14;
    WdLogEvent5_WdError(v21);
  }
  else
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v24,
      v29,
      *((_QWORD *)a2 + 4),
      (__int64)this);
    v23 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v30 + 24))(v29, &v23);
    v14 = v15;
    if ( v15 < 0 )
    {
      v22 = WdLogNewEntry5_WdError(v17, v16, v18);
      *(_QWORD *)(v22 + 24) = v14;
      WdLogEvent5_WdError(v22);
    }
    else
    {
      v19 = v23;
      *(_QWORD *)&a4->VidPnSourceId = *(_QWORD *)(v23 + 20);
      LOBYTE(a5->cx) = (unsigned int)(((int)(*(_DWORD *)(v19 + 56) << 29) >> 29) - 2) <= 1;
      (*(void (__fastcall **)(__int64))(v30 + 32))(v29);
    }
    if ( v24[0] )
      v26(v27, v25);
  }
  return (unsigned int)v14;
}
