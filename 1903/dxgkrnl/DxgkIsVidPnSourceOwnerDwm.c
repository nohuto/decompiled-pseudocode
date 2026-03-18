/*
 * XREFs of DxgkIsVidPnSourceOwnerDwm @ 0x1C0246740
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000D838 (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

bool __fastcall DxgkIsVidPnSourceOwnerDwm(DXGADAPTER ***a1, unsigned int a2)
{
  __int64 v4; // r8
  bool IsVidPnSourceOwnerDwm; // bl
  _BYTE v7[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v8[64]; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v9[72]; // [rsp+68h] [rbp-60h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v7, (struct DXGADAPTER *const)a1, 0LL);
  IsVidPnSourceOwnerDwm = 0;
  if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v7, 0xFFFFFFFFLL, v4) >= 0 )
    IsVidPnSourceOwnerDwm = ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(a1[319], a2);
  COREACCESS::~COREACCESS((COREACCESS *)v9);
  COREACCESS::~COREACCESS((COREACCESS *)v8);
  return IsVidPnSourceOwnerDwm;
}
