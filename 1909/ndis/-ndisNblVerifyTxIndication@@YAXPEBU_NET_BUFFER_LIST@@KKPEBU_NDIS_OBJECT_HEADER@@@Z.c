/*
 * XREFs of ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C00AA1E0
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C000BFC0 (NdisSendNetBufferLists.c)
 *     NdisFSendNetBufferLists @ 0x1C000F5D0 (NdisFSendNetBufferLists.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C00A9D54 (datapathVerifierReportProblem.c)
 *     verifySingleTxNbl @ 0x1C00AA520 (verifySingleTxNbl.c)
 */

void __fastcall ndisNblVerifyTxIndication(
        ULONG_PTR BugCheckParameter4,
        unsigned int a2,
        unsigned int a3,
        ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v4; // rsi
  ULONG_PTR v7; // r14
  __int16 v8; // bp
  __int16 i; // bx
  __int16 v10; // ax

  v4 = a3;
  if ( a2 > 0x1000000 )
    datapathVerifierReportProblem(0x10uLL, BugCheckParameter3, a2);
  if ( (v4 & 1) != 0 && KeGetCurrentIrql() != 2 )
    datapathVerifierReportProblem(0x20uLL, BugCheckParameter3, KeGetCurrentIrql());
  if ( (v4 & 0xFFFFFFC8) != 0 )
    datapathVerifierReportProblem(1uLL, BugCheckParameter3, v4);
  v7 = BugCheckParameter4;
  v8 = 0;
  for ( i = 0; v7; i |= ~v10 )
  {
    verifySingleTxNbl(v7, BugCheckParameter3);
    v10 = *(_WORD *)(v7 + 258);
    v7 = *(_QWORD *)v7;
    v8 |= v10;
  }
  if ( (v4 & 4) != 0 && v8 != ~i )
    datapathVerifierReportProblem(0x23uLL, BugCheckParameter3, BugCheckParameter4);
}
