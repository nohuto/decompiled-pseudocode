/*
 * XREFs of ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01DC054
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01DC95C (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C0038198 (DelQEntry.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C01CE634 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01DB884 (xxxRetrievePointerInputMessage.c)
 */

__int64 __fastcall DiscardPointerMessage(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v7; // esi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  int v11; // [rsp+78h] [rbp+17h] BYREF
  _QWORD *v12; // [rsp+80h] [rbp+1Fh] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp+27h] BYREF
  unsigned __int64 v14; // [rsp+90h] [rbp+2Fh] BYREF
  struct tagQMSG *v15; // [rsp+98h] [rbp+37h] BYREF
  int v16; // [rsp+D0h] [rbp+6Fh] BYREF
  unsigned int v17; // [rsp+E0h] [rbp+7Fh] BYREF

  v16 = 1;
  v7 = xxxRetrievePointerInputMessage(
         a1,
         a3,
         *(_DWORD *)(a2 + 24),
         *(_DWORD *)(a2 + 24),
         0,
         1,
         &v16,
         (struct tagQMSG *)a2,
         (__int64 *)&v12,
         &v17,
         &v13,
         &v14,
         &v11,
         &v15);
  InputTraceLogging::Pointer::RetrieveMessage();
  if ( a4 && v7 == 1 )
  {
    memset(a4, 0, 0x30uLL);
    v8 = v12;
    if ( v12 )
      v8 = (_QWORD *)*v12;
    *a4 = v8;
    *((_DWORD *)a4 + 2) = v17;
    a4[2] = v13;
    a4[3] = v14;
    *((_DWORD *)a4 + 8) = *(_DWORD *)(a2 + 48);
    *(_QWORD *)((char *)a4 + 36) = *(_QWORD *)(a2 + 52);
  }
  if ( v7 != 2 )
  {
    v9 = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v9 + 80) == a2 )
    {
      *(_QWORD *)(v9 + 80) = 0LL;
      v9 = *(_QWORD *)(a1 + 432);
    }
    DelQEntry(v9 + 24, a2, 1);
  }
  return v7;
}
