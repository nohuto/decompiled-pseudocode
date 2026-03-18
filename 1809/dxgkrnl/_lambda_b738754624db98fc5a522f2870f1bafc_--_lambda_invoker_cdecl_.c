/*
 * XREFs of _lambda_b738754624db98fc5a522f2870f1bafc_::_lambda_invoker_cdecl_ @ 0x1C001A6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C013908C (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall lambda_b738754624db98fc5a522f2870f1bafc_::_lambda_invoker_cdecl_(struct DXGADAPTER *a1)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v4[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v5[48]; // [rsp+48h] [rbp-30h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v3, a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v3) >= 0 )
    DmmClearDisplayManagerReferencesForAdapter(a1);
  COREACCESS::~COREACCESS((COREACCESS *)v5);
  COREACCESS::~COREACCESS((COREACCESS *)v4);
  return 0LL;
}
