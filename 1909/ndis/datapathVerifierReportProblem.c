/*
 * XREFs of datapathVerifierReportProblem @ 0x1C00A9D54
 * Callers:
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C00A9E1C (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C00A9EF8 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C00AA104 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C00AA1E0 (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     validateMemoryPages @ 0x1C00AA2D4 (validateMemoryPages.c)
 *     verifySingleMdl @ 0x1C00AA360 (verifySingleMdl.c)
 *     verifySingleNb @ 0x1C00AA3C0 (verifySingleNb.c)
 *     verifySingleRxNbl @ 0x1C00AA4DC (verifySingleRxNbl.c)
 *     verifySingleTxNbl @ 0x1C00AA520 (verifySingleTxNbl.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 */

__int64 __fastcall datapathVerifierReportProblem(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v4; // rsi
  ULONG VerifierFlags[6]; // [rsp+50h] [rbp-18h] BYREF
  ULONG v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = 0;
  v4 = (unsigned int)BugCheckParameter2;
  if ( MmIsVerifierEnabled(&v8) >= 0 && (v8 & 0x200000) != 0 )
  {
    VerifierFlags[0] = 0;
    if ( MmIsVerifierEnabled(VerifierFlags) < 0 || (VerifierFlags[0] & 0x400000) == 0 )
      ndisBugCheckEx(0x32uLL, v4, BugCheckParameter3, BugCheckParameter4);
  }
  return DbgkWerCaptureLiveKernelDump(L"NDIS", 350LL, 50LL, v4, BugCheckParameter3, BugCheckParameter4, 0LL, 0LL, 0);
}
