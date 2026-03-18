/*
 * XREFs of ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C015E5C4
 * Callers:
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C016693C (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C004EF64 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C01645CC (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

void __fastcall CTouchProcessor::AddRoutedAwayTarget(CTouchProcessor *a1, unsigned __int16 a2, CInputDest *a3)
{
  __int64 v4; // rdx
  struct CInputPointerNode *NodeById; // rsi
  __int64 v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  if ( NodeById )
  {
    v7 = Win32AllocPoolZInit(0x90uLL, 1851878741LL);
    v8 = v7;
    if ( v7 )
    {
      CInputDest::operator=((__int64)(v7 + 2), (__int64)a3, v6);
      v9 = (_QWORD *)((char *)NodeById + 272);
      v10 = *((_QWORD *)NodeById + 34);
      if ( *(struct CInputPointerNode **)(v10 + 8) != (struct CInputPointerNode *)((char *)NodeById + 272) )
        __fastfail(3u);
      *v8 = v10;
      v8[1] = v9;
      *(_QWORD *)(v10 + 8) = v8;
      *v9 = v8;
    }
  }
  CInputDest::SetEmpty(a3, v4, v6);
}
