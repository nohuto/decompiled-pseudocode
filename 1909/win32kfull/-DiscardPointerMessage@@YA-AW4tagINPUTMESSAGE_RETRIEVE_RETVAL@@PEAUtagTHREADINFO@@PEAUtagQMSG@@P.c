/*
 * XREFs of ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01F1B84
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F23EC (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C0071248 (DelQEntry.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C01E2A74 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F1408 (xxxRetrievePointerInputMessage.c)
 */

__int64 __fastcall DiscardPointerMessage(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rsi
  unsigned int v8; // edi
  int v10; // [rsp+78h] [rbp-9h]
  int v11; // [rsp+88h] [rbp+7h] BYREF
  __int64 v12; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+98h] [rbp+17h] BYREF
  unsigned __int64 v14; // [rsp+A0h] [rbp+1Fh] BYREF
  struct tagQMSG *v15; // [rsp+A8h] [rbp+27h] BYREF
  int v16; // [rsp+F0h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+100h] [rbp+7Fh] BYREF

  v16 = 1;
  v7 = 0LL;
  v8 = xxxRetrievePointerInputMessage(
         a1,
         a3,
         *(unsigned int *)(a2 + 24),
         *(_DWORD *)(a2 + 24),
         0,
         1,
         &v16,
         (struct tagQMSG *)a2,
         &v12,
         (unsigned int *)&v17,
         (unsigned __int64 *)&v13,
         &v14,
         &v11,
         &v15,
         v10);
  InputTraceLogging::Pointer::RetrieveMessage();
  if ( a4 && v8 == 1 )
  {
    memset(a4, 0, 0x30uLL);
    if ( v12 )
      v7 = *(_QWORD *)v12;
    *((_DWORD *)a4 + 2) = v17;
    a4[2] = v13;
    a4[3] = v14;
    *a4 = v7;
    *((_DWORD *)a4 + 8) = *(_DWORD *)(a2 + 48);
    *(_QWORD *)((char *)a4 + 36) = *(_QWORD *)(a2 + 52);
  }
  if ( v8 != 2 )
    DelQEntry(*(_QWORD *)(a1 + 424) + 24LL, a2, 1);
  return v8;
}
