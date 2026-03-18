/*
 * XREFs of ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01DC30C
 * Callers:
 *     PrepareSentPointerMessageForClient @ 0x1C01DB1BC (PrepareSentPointerMessageForClient.c)
 *     TranslateSentPointerMessageForClient @ 0x1C01DB3C4 (TranslateSentPointerMessageForClient.c)
 * Callees:
 *     ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01DC3E4 (-MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAP.c)
 */

__int64 __fastcall MakePointerMessage(
        unsigned __int64 a1,
        unsigned int a2,
        void *a3,
        unsigned __int64 *a4,
        __int64 *a5,
        unsigned __int16 *a6,
        unsigned int *a7,
        int *a8,
        HWND *a9)
{
  const struct tagPOINTER_INFO *PointerMessage; // rax
  int v14; // [rsp+70h] [rbp-28h] BYREF
  int v15; // [rsp+74h] [rbp-24h] BYREF
  int v16; // [rsp+78h] [rbp-20h] BYREF
  struct tagPOINT v17; // [rsp+80h] [rbp-18h] BYREF

  PointerMessage = CTouchProcessor::PrepareMakePointerMessage(gpTouchProcessor, a1, &v17, &v16, &v15, &v14);
  return MakePointerMessageWorker(PointerMessage, v17, v16, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9);
}
