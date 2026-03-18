/*
 * XREFs of ?AddLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C01333FC
 * Callers:
 *     ?GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C0139540 (-GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0138450 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

void __fastcall CTouchProcessor::AddLostCaptureTarget(CTouchProcessor *a1, unsigned __int16 a2, CInputDest *a3)
{
  struct CInputPointerNode *NodeById; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx

  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  if ( NodeById )
  {
    v5 = Win32AllocPoolZInit(0xC8uLL, 0x6E616D55u);
    v6 = v5;
    if ( v5 )
    {
      CInputDest::operator=((__int64)(v5 + 2), (__int64)a3);
      v7 = (_QWORD *)((char *)NodeById + 312);
      v8 = *((_QWORD *)NodeById + 39);
      if ( *(struct CInputPointerNode **)(v8 + 8) != (struct CInputPointerNode *)((char *)NodeById + 312) )
        __fastfail(3u);
      *v6 = v8;
      v6[1] = v7;
      *(_QWORD *)(v8 + 8) = v6;
      *v7 = v6;
    }
  }
  CInputDest::SetEmpty(a3);
}
