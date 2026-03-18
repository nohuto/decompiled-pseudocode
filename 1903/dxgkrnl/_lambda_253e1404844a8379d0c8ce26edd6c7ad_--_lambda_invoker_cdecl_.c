/*
 * XREFs of _lambda_253e1404844a8379d0c8ce26edd6c7ad_::_lambda_invoker_cdecl_ @ 0x1C001B7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C0149D24 (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall lambda_253e1404844a8379d0c8ce26edd6c7ad_::_lambda_invoker_cdecl_(struct DXGADAPTER *a1)
{
  __int64 v2; // r8
  _BYTE v4[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v5[64]; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v6[72]; // [rsp+68h] [rbp-60h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v4, a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v4, 0xFFFFFFFFLL, v2) >= 0 )
    DmmClearDisplayManagerReferencesForAdapter(a1);
  COREACCESS::~COREACCESS((COREACCESS *)v6);
  COREACCESS::~COREACCESS((COREACCESS *)v5);
  return 0LL;
}
