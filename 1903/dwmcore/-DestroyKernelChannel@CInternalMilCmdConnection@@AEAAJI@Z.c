/*
 * XREFs of ?DestroyKernelChannel@CInternalMilCmdConnection@@AEAAJI@Z @ 0x180157178
 * Callers:
 *     ?CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800E3CC8 (-CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 *     ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x1801570A8 (-DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::DestroyKernelChannel(CInternalMilCmdConnection *this, unsigned int a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx

  v2 = 0;
  v3 = NtDCompositionDestroyChannel(a2);
  if ( v3 < 0 )
  {
    v2 = v3 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3 | 0x10000000, 0xBFu, 0LL);
  }
  return v2;
}
