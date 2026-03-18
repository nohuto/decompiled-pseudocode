/*
 * XREFs of DpiPnpEnableVga @ 0x1C0145BA0
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0148060 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C02655B0 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00F6724 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 */

__int64 __fastcall DpiPnpEnableVga(unsigned __int8 a1, unsigned __int8 a2, int a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  _QWORD v15[4]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v16[8]; // [rsp+50h] [rbp-78h] BYREF

  v5 = a3;
  v6 = a1;
  memset(v15, 0, sizeof(v15));
  Global = DXGGLOBAL::GetGlobal(v8);
  QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 143), v10, v11, v12);
  v15[1] = 0LL;
  LODWORD(v15[0]) = 7;
  v15[2] = v6;
  if ( qword_1C008E9E0 )
    v15[1] = *(_QWORD *)(*(_QWORD *)(qword_1C008E9E0 + 64) + 152LL);
  memset(v16, 0, sizeof(v16));
  memset(&v16[1], 0, 36);
  HIDWORD(v16[6]) = (unsigned __int8)v6;
  v16[7] = a2;
  v16[0] = 0x4000000006LL;
  LODWORD(v16[6]) = 48;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v16);
  LOBYTE(v13) = a2;
  return SMgrGdiCallout(
           v15,
           0x100000000LL,
           v13,
           (unsigned __int64)&DpiFinishPnPTransitionCallback & -(__int64)((_DWORD)v5 != 0),
           v5,
           a4);
}
