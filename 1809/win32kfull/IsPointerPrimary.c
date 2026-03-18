/*
 * XREFs of IsPointerPrimary @ 0x1C01DD638
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 * Callees:
 *     <none>
 */

int __fastcall IsPointerPrimary(__int64 a1, unsigned __int16 a2)
{
  unsigned __int64 ThreadPointerData; // rax

  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        gpTouchProcessor,
                        (struct tagTHREADINPUTPOINTERLIST *)(a1 + 1080),
                        a2,
                        0LL,
                        0LL,
                        0LL);
  if ( ThreadPointerData )
    LODWORD(ThreadPointerData) = CTouchProcessor::IsPointerPrimary(gpTouchProcessor, ThreadPointerData);
  return ThreadPointerData;
}
