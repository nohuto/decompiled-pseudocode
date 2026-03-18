/*
 * XREFs of ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C013ECBC
 * Callers:
 *     ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C01456B0 (-SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCIn.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C0145834 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C013ED1C (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 */

void __fastcall CTouchProcessor::InitializeQFrame(
        CTouchProcessor *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        CInputDest *a5,
        int a6)
{
  *(_DWORD *)a2 = a3;
  *(_QWORD *)(a2 + 8) = a4;
  CInputDest::operator=(a2 + 16, (__int64)a5);
  *(_DWORD *)(a2 + 200) = 0;
  *(_DWORD *)(a2 + 204) &= 0xFFFFFFE7;
  CTouchProcessor::InitializeQFrameCoalesceState(a1, (struct CPointerQFrame *)a2, a6);
  CInputDest::SetEmpty(a5);
}
