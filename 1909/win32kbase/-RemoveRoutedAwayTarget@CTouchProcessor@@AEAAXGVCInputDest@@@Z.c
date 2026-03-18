/*
 * XREFs of ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C016F8B0
 * Callers:
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0166D8C (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003003C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C01645CC (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x1C0165424 (-FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z.c)
 */

void __fastcall CTouchProcessor::RemoveRoutedAwayTarget(CTouchProcessor *a1, unsigned __int16 a2, CInputDest *a3)
{
  struct CInputPointerNode *NodeById; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  struct tagCPointerRoutedAwayTarget **v8; // rdi
  struct tagCPointerRoutedAwayTarget **i; // rbx

  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  if ( NodeById )
  {
    v8 = (struct tagCPointerRoutedAwayTarget **)((char *)NodeById + 272);
    for ( i = (struct tagCPointerRoutedAwayTarget **)*((_QWORD *)NodeById + 34);
          i != v8;
          i = (struct tagCPointerRoutedAwayTarget **)*i )
    {
      if ( CInputDest::operator==((unsigned int *)i + 4, (__int64)a3, v7) )
      {
        CTouchProcessor::FreeRoutedAwayTarget((struct _KTHREAD **)a1, (struct tagCPointerRoutedAwayTarget ***)i, v7);
        break;
      }
    }
  }
  CInputDest::SetEmpty(a3, v6, v7);
}
