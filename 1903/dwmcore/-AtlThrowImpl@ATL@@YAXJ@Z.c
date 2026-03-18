/*
 * XREFs of ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180222060
 * Callers:
 *     ?RemoveAt@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHH@Z @ 0x1800DC364 (-RemoveAt@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBL.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800EC533 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::AtlThrowImpl(int a1)
{
  int pExceptionObject; // [rsp+30h] [rbp+8h] BYREF

  pExceptionObject = a1;
  throw (ATL::CAtlException *)&pExceptionObject;
}
