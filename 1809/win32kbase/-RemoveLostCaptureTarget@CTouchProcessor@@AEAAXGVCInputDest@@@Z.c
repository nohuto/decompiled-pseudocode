/*
 * XREFs of ?RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0142BC8
 * Callers:
 *     ?GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0139268 (-GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003243C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0138450 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeLostCaptureTarget@CTouchProcessor@@AEAAXPEAUtagCPointerCaptureLostTarget@@@Z @ 0x1C0138D8C (-FreeLostCaptureTarget@CTouchProcessor@@AEAAXPEAUtagCPointerCaptureLostTarget@@@Z.c)
 */

void __fastcall CTouchProcessor::RemoveLostCaptureTarget(struct _KTHREAD **a1, unsigned __int16 a2, CInputDest *a3)
{
  struct CInputPointerNode *NodeById; // rax
  __int64 v6; // r8
  struct tagCPointerCaptureLostTarget **v7; // rdi
  struct tagCPointerCaptureLostTarget **i; // rbx

  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  if ( NodeById )
  {
    v7 = (struct tagCPointerCaptureLostTarget **)((char *)NodeById + 312);
    for ( i = (struct tagCPointerCaptureLostTarget **)*((_QWORD *)NodeById + 39);
          i != v7;
          i = (struct tagCPointerCaptureLostTarget **)*i )
    {
      if ( CInputDest::operator==((unsigned int *)i + 4, (__int64)a3, v6) )
      {
        CTouchProcessor::FreeLostCaptureTarget(a1, (struct tagCPointerCaptureLostTarget ***)i, v6);
        break;
      }
    }
  }
  CInputDest::SetEmpty(a3);
}
