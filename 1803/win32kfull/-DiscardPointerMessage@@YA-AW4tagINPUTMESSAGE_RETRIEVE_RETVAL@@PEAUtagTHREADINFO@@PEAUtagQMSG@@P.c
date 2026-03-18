/*
 * XREFs of ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01B9398
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01B9C38 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01B8C08 (xxxRetrievePointerInputMessage.c)
 */

__int64 __fastcall DiscardPointerMessage(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // edi
  int v11; // [rsp+78h] [rbp+7h] BYREF
  __int64 v12; // [rsp+80h] [rbp+Fh] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp+17h] BYREF
  unsigned __int64 v14; // [rsp+90h] [rbp+1Fh] BYREF
  struct tagQMSG *v15; // [rsp+98h] [rbp+27h] BYREF
  int v16; // [rsp+E0h] [rbp+6Fh] BYREF
  unsigned int v17; // [rsp+F0h] [rbp+7Fh] BYREF

  v16 = 1;
  v7 = 0LL;
  v8 = xxxRetrievePointerInputMessage(
         a1,
         a3,
         *(_DWORD *)(a2 + 24),
         *(_DWORD *)(a2 + 24),
         0,
         1,
         &v16,
         (struct tagQMSG *)a2,
         &v12,
         &v17,
         &v13,
         &v14,
         &v11,
         &v15);
  v9 = v8;
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
  if ( v9 != 2 )
    DelQEntry((_QWORD *)(*(_QWORD *)(a1 + 424) + 24LL), (_QWORD *)a2);
  return v9;
}
