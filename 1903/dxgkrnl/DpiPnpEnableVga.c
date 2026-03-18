/*
 * XREFs of DpiPnpEnableVga @ 0x1C015A67C
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C015D260 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C02A0D00 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00CE98C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DpiPnpEnableVga(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int8 v5; // di
  __int64 v6; // rbx
  __int64 v7; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // r8
  __int64 v10; // r8
  _DWORD v12[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v13; // [rsp+38h] [rbp-90h]
  __int64 v14; // [rsp+40h] [rbp-88h]
  __int64 v15; // [rsp+48h] [rbp-80h]
  _DWORD v16[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v17; // [rsp+58h] [rbp-70h]
  __int128 v18; // [rsp+60h] [rbp-68h]
  __int64 v19; // [rsp+70h] [rbp-58h]
  int v20; // [rsp+78h] [rbp-50h]
  int v21; // [rsp+7Ch] [rbp-4Ch]
  int v22; // [rsp+80h] [rbp-48h]
  int v23; // [rsp+84h] [rbp-44h]
  int v24; // [rsp+88h] [rbp-40h]
  int v25; // [rsp+8Ch] [rbp-3Ch]

  v12[1] = 0;
  v15 = 0LL;
  v5 = a2;
  v6 = a3;
  v7 = (unsigned __int8)a1;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 139), 0LL);
  v13 = 0LL;
  v12[0] = 7;
  v14 = v7;
  if ( qword_1C00A29E0 )
    v13 = *(_QWORD *)(*(_QWORD *)(qword_1C00A29E0 + 64) + 152LL);
  v21 = 0;
  v20 = 0;
  v19 = 0LL;
  v25 = 0;
  v18 = 0uLL;
  v17 = 0LL;
  v23 = (unsigned __int8)v7;
  v24 = v5;
  v16[0] = 6;
  v16[1] = 64;
  v22 = 48;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v16, 0x100000000LL, v9);
  LOBYTE(v10) = v5;
  return SMgrGdiCallout(
           v12,
           0x100000000LL,
           v10,
           (unsigned __int64)&DpiFinishPnPTransitionCallback & -(__int64)((_DWORD)v6 != 0),
           v6,
           a4);
}
