/*
 * XREFs of ?ThreadHasPrimaryCapture@CTouchProcessor@@QEAAHQEAUtagTHREADINFO@@G@Z @ 0x1C0172DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0038234 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C01645CC (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::ThreadHasPrimaryCapture(
        CTouchProcessor *this,
        struct tagTHREADINFO *const a2,
        unsigned __int16 a3)
{
  unsigned int v4; // ebx
  struct CInputPointerNode *NodeById; // rax

  v4 = 1;
  NodeById = CTouchProcessor::FindNodeById(this, a3, 1, 0);
  if ( !NodeById
    || (*((_DWORD *)NodeById + 72) & 4) == 0
    || CInputDest::GetThreadInfo((struct CInputPointerNode *)((char *)NodeById + 64)) != a2 )
  {
    return 0;
  }
  return v4;
}
