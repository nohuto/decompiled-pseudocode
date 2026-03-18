/*
 * XREFs of ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01B9548
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     GetPTPShellListener @ 0x1C01A14A4 (GetPTPShellListener.c)
 *     IsTouchpadPointerInputMessage @ 0x1C01ABD48 (IsTouchpadPointerInputMessage.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01B94B0 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

__int64 __fastcall IsPTPAllowedOnThread(struct tagTHREADINFO *a1, int a2, __int16 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rcx

  v6 = *((_WORD *)a1 + 601) & 1;
  if ( !v6
    && CTouchProcessor::IsPointerMessageTouchpad(gpTouchProcessor, a1, 0LL, a3)
    && IsTouchpadPointerInputMessage(a2) )
  {
    v6 = 0;
    if ( FindThreadPointerData((struct _LIST_ENTRY *)a1 + 67, a3) )
    {
      v8 = GetPTPShellListener() ? *(_QWORD *)GetPTPShellListener() : 0LL;
      if ( *(_QWORD *)(v7 + 40) == v8 )
        return 1;
    }
  }
  return v6;
}
