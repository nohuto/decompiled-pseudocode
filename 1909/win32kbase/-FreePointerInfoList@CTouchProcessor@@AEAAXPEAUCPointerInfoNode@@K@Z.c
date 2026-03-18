/*
 * XREFs of ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C0165190
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0161A70 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0162218 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0164B8C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

void __fastcall CTouchProcessor::FreePointerInfoList(CTouchProcessor *this, struct CPointerInfoNode *a2, __int64 a3)
{
  char *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8

  if ( (_DWORD)a3 )
  {
    v4 = (char *)a2 + 24;
    v5 = (unsigned int)a3;
    do
    {
      CInputDest::SetEmpty((CInputDest *)(v4 + 336), (__int64)a2, a3);
      CInputDest::SetEmpty((CInputDest *)v4, v6, v7);
      v4 += 496;
      --v5;
    }
    while ( v5 );
  }
  Win32FreePool((__int64)a2);
}
