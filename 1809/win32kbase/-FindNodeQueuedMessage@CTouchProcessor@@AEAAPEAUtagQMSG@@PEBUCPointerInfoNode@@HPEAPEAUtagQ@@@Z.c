/*
 * XREFs of ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C01386A0
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01355A4 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C002F1D4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionFindNodeQueuedMessage @ 0x1C01619F4 (ApiSetEditionFindNodeQueuedMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagQMSG *__fastcall CTouchProcessor::FindNodeQueuedMessage(
        struct _KTHREAD **this,
        const struct CPointerInfoNode *a2,
        __int64 a3,
        struct tagQ **a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct tagQMSG *result; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  _OWORD v21[11]; // [rsp+20h] [rbp-B8h] BYREF

  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  result = (struct tagQMSG *)CInputDest::GetQueue((const struct CPointerInfoNode *)((char *)a2 + 392), 2);
  if ( result )
  {
    v11 = *((_QWORD *)a2 + 2);
    v12 = *(_OWORD *)((char *)a2 + 408);
    v21[0] = *(_OWORD *)((char *)a2 + 392);
    v13 = *(_OWORD *)((char *)a2 + 424);
    v21[1] = v12;
    v14 = *(_OWORD *)((char *)a2 + 440);
    v21[2] = v13;
    v15 = *(_OWORD *)((char *)a2 + 456);
    v21[3] = v14;
    v16 = *(_OWORD *)((char *)a2 + 472);
    v21[4] = v15;
    v17 = *(_OWORD *)((char *)a2 + 488);
    v21[5] = v16;
    v18 = *(_OWORD *)((char *)a2 + 520);
    v21[6] = v17;
    v21[7] = *(_OWORD *)((char *)a2 + 504);
    v19 = *(_OWORD *)((char *)a2 + 536);
    v21[8] = v18;
    v20 = *(_OWORD *)((char *)a2 + 552);
    v21[9] = v19;
    v21[10] = v20;
    return (struct tagQMSG *)((__int64 (__fastcall *)(_OWORD *, __int64, __int64, struct tagQ **))ApiSetEditionFindNodeQueuedMessage)(
                               v21,
                               v11,
                               v10,
                               a4);
  }
  return result;
}
