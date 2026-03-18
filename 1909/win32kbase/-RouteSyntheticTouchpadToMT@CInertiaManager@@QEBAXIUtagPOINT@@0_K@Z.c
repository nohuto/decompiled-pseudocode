/*
 * XREFs of ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x1C017C124
 * Callers:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C017BC68 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0164A90 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 */

void __fastcall CInertiaManager::RouteSyntheticTouchpadToMT(
        CInertiaManager *this,
        int a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        unsigned __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD v12[20]; // [rsp+20h] [rbp-E0h] BYREF
  int v13; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v14; // [rsp+C4h] [rbp-3Ch]
  int v15; // [rsp+CCh] [rbp-34h]
  __int64 v16; // [rsp+D0h] [rbp-30h]
  _BYTE v17[120]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v18; // [rsp+150h] [rbp+50h]
  _QWORD v19[26]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v20[120]; // [rsp+228h] [rbp+128h] BYREF
  __int64 v21; // [rsp+2A0h] [rbp+1A0h]
  __int64 v22; // [rsp+2A8h] [rbp+1A8h]

  memset(v12, 0, 0x98uLL);
  v13 = 1024;
  v15 = 0;
  v16 = 0LL;
  v18 = 0LL;
  memset(v17, 0, sizeof(v17));
  memset(v19, 0, sizeof(v19));
  v21 = 0LL;
  memset(v20, 0, sizeof(v20));
  v14 = 384LL;
  v22 = 0LL;
  v12[16] = &v13;
  v12[0] = gpTouchProcessor;
  HIDWORD(v19[25]) = a5;
  LODWORD(v12[6]) = 1;
  LODWORD(v19[3]) = 5;
  HIDWORD(v19[4]) = 0x800000;
  v19[9] = a3;
  v19[7] = a3;
  v19[10] = a4;
  v19[8] = a4;
  LODWORD(v19[12]) = a2;
  CTouchProcessor::ForwardInputToManipulationThread(gpTouchProcessor, (const struct CPointerInputFrame *)v12);
  CInputDest::SetEmpty((CInputDest *)v20, v8, v9);
  CInputDest::SetEmpty((CInputDest *)v17, v10, v11);
}
